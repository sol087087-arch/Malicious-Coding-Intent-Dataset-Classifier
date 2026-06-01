#!/usr/bin/env python3
"""Build malicious-intent classifier dataset (binary + 12-way multi-label).

Positives  : EN canonical lexicon terms (malicious=1, one of 12 categories).
Negatives  : benign short phrases (coding / defensive-security / general),
             malicious=0, empty category set.
Robustness : obfuscated positives held out as a separate test (generalization).

No API calls here — runs offline, does not touch the running translation job.
"""

from __future__ import annotations

import argparse
import hashlib
import itertools
import json
import random
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))
from clf_dedup import CrossSourceDeduper
from paths import (
    SOURCE_LANG,
    canonical_deduped_txt,
    canonical_raw,
    obfuscated_raw,
    processed_dir,
)

CLF_DIR = ROOT / "data" / "clf"
V2_CLF_DIR = ROOT / "data" / "clf" / "v2"
LANGS_CFG = ROOT / "config" / "translation_languages_20.yaml"
DEFAULT_MALWARE_CODE = ROOT / "data" / "external" / "malware_code_merged.json"
DEFAULT_MALWARE_CODE_FALLBACK = ROOT / "data" / "external" / "malware_code_big_clean.json"
DEFAULT_HF_IMPORT = ROOT / "data" / "external" / "hf_imported.jsonl"
MAX_CODE_CHARS = 12_000  # BGE-m3 handles long inputs; cap outliers
MAX_HF_TEXT_CHARS = 12_000

CATEGORIES = [
    "malware_types",
    "exploit_development",
    "obfuscation_evasion",
    "command_control",
    "injection_lateral",
    "credential_exfil",
    "ransomware_crypto",
    "reverse_engineering_offense",
    "phishing_social_engineering_code",
    "botnet_spam_ddos",
    "rootkit_kernel",
    "packers_loaders",
]

# ---- benign negative building blocks (short, mirror positive form) ----

BENIGN_CODE_VERBS = [
    "sort", "reverse", "parse", "merge", "filter", "render", "validate",
    "serialize", "compress", "cache", "paginate", "format", "deduplicate",
    "shuffle", "iterate", "map", "reduce", "join", "split", "encode",
    "decode", "round", "normalize", "resize", "rotate", "crop", "plot",
    "summarize", "translate", "highlight",
]
BENIGN_CODE_OBJECTS = [
    "a list", "an array", "json data", "a string", "user input",
    "a csv file", "the response", "a dictionary", "dates", "the table",
    "an image", "a form", "the dataframe", "a config file", "the logs",
    "a queue", "the cache", "a tree", "the matrix", "a graph",
]
BENIGN_LANG_PREFIX = ["", "in python", "in javascript", "in rust", "in go", "in java"]

BENIGN_WEB_DATA = [
    "react component", "css grid layout", "sql select query", "pandas dataframe",
    "rest api endpoint", "unit test", "docker container", "git rebase",
    "linux cron job", "responsive navbar", "flexbox alignment", "graphql schema",
    "websocket connection", "database migration", "ci pipeline", "makefile target",
    "regex for emails", "jwt authentication", "oauth login flow", "redis cache",
    "kubernetes deployment", "nginx reverse proxy", "pytest fixture", "type hints",
    "async await", "list comprehension", "binary search", "merge sort",
    "hash map usage", "dependency injection",
]

# hard negatives: benign / defensive security (same vocabulary, lawful intent)
BENIGN_SECURITY = [
    "enable two factor authentication", "rotate api keys", "configure firewall rules",
    "review access logs", "patch management policy", "password manager setup",
    "tls certificate renewal", "principle of least privilege", "security awareness training",
    "incident response plan", "backup and recovery strategy", "vulnerability disclosure policy",
    "secure coding guidelines", "threat model review", "log monitoring dashboard",
    "encrypt data at rest", "harden ssh configuration", "role based access control",
    "security audit checklist", "phishing awareness email", "zero trust architecture",
    "siem alert tuning", "data loss prevention", "secure password hashing",
    "code review best practices", "dependency vulnerability scan", "penetration test report",
    "bug bounty program", "secrets management vault", "network segmentation plan",
]

BENIGN_DEVOPS = [
    "write unit tests for api handler", "add health check endpoint",
    "configure github actions workflow", "set up pre-commit hooks",
    "document rest api with openapi", "refactor duplicate utility functions",
    "add structured logging to service", "implement retry with backoff",
    "parse environment variables safely", "validate json schema input",
    "migrate database with alembic", "add connection pooling settings",
    "profile slow database queries", "cache expensive computation results",
    "sanitize user supplied html", "rotate secrets in vault",
    "enable cors for frontend origin", "add rate limiting middleware",
    "write integration test for queue", "fix flaky test in ci pipeline",
    "upgrade dependencies security patch", "add type checking to module",
    "split monolith into modules", "implement graceful shutdown",
    "monitor memory usage in worker", "add metrics export endpoint",
    "configure reverse proxy headers", "write readme setup instructions",
    "debug race condition in async code", "improve error messages for api",
    "add pagination to list endpoint", "normalize unicode in search",
    "compress static assets for web", "lint python code with ruff",
]

BENIGN_EVERYDAY = [
    "book a flight", "recipe for pancakes", "weather forecast tomorrow",
    "summarize this article", "plan a road trip", "budget spreadsheet template",
    "morning workout routine", "study schedule for exams", "grocery shopping list",
    "translate good morning", "best movies of the year", "how to brew coffee",
    "learn to play guitar", "meditation for beginners", "houseplant care tips",
    "write a cover letter", "interview preparation tips", "resume formatting advice",
    "team meeting agenda", "project status update",
]


def stable_split(text: str) -> str:
    h = int(hashlib.sha256(text.encode("utf-8")).hexdigest()[:8], 16) % 100
    if h < 80:
        return "train"
    if h < 90:
        return "val"
    return "test"


def load_language_codes(path: Path) -> list[str]:
    import yaml

    data = yaml.safe_load(path.read_text(encoding="utf-8"))
    return list(data.get("languages", []))


def load_en_category_map() -> dict[str, str]:
    """EN canonical term -> category."""
    out: dict[str, str] = {}
    with canonical_raw(SOURCE_LANG).open(encoding="utf-8") as f:
        for line in f:
            if not line.strip():
                continue
            row = json.loads(line)
            term = row.get("term")
            cat = row.get("category")
            if isinstance(term, str) and cat in CATEGORIES:
                out[term] = cat
    return out


def load_positive_terms() -> dict[str, str]:
    """term -> category, from canonical.jsonl, filtered to cleaned deduped list."""
    cat_by_term: dict[str, str] = {}
    with canonical_raw(SOURCE_LANG).open(encoding="utf-8") as f:
        for line in f:
            if not line.strip():
                continue
            row = json.loads(line)
            term = row.get("term")
            cat = row.get("category")
            if isinstance(term, str) and cat in CATEGORIES:
                cat_by_term[term] = cat

    cleaned = canonical_deduped_txt(SOURCE_LANG)
    keep = {ln.strip() for ln in cleaned.read_text(encoding="utf-8").splitlines() if ln.strip()}
    return {t: c for t, c in cat_by_term.items() if t in keep}


def build_negatives(n_target: int, seed: int) -> list[str]:
    rng = random.Random(seed)
    negs: set[str] = set()

    for pre, verb, obj in itertools.product(BENIGN_LANG_PREFIX, BENIGN_CODE_VERBS, BENIGN_CODE_OBJECTS):
        phrase = f"{verb} {obj}".strip()
        if pre:
            phrase = f"{phrase} {pre}"
        negs.add(phrase)

    negs.update(BENIGN_WEB_DATA)
    negs.update(BENIGN_SECURITY)
    negs.update(BENIGN_DEVOPS)
    negs.update(BENIGN_EVERYDAY)

    # extra combinatorics to pass 4000 unique template negatives
    extras = [
        "how to", "best way to", "steps to", "guide for", "tips on",
        "explain", "show me", "help me", "walk through",
    ]
    topics = [
        "debug memory leak", "optimize sql query", "review pull request",
        "deploy to staging", "write changelog entry", "fix lint warnings",
        "add feature flag", "test edge cases", "document class methods",
        "parse csv file", "handle api timeout", "structure react component",
        "write bash script", "configure nginx proxy", "migrate legacy code",
        "profile cpu hotspot", "reduce bundle size", "add input validation",
        "secure http headers", "schedule background job", "mock external api",
        "clean git history", "translate error codes", "format json output",
    ]
    for pre, topic in itertools.product(extras, topics):
        negs.add(f"{pre} {topic}")
    for verb, obj in itertools.product(["fix", "improve", "test", "review"], BENIGN_WEB_DATA[:20]):
        negs.add(f"{verb} {obj}")

    negs_list = sorted(negs)
    rng.shuffle(negs_list)
    if len(negs_list) > n_target:
        negs_list = negs_list[:n_target]
    return negs_list


def _collect_obfuscated_rows(lang: str, en_cat: dict[str, str]) -> list[dict]:
    path = obfuscated_raw(lang)
    if not path.exists():
        return []
    rows: list[dict] = []
    with path.open(encoding="utf-8") as f:
        for line in f:
            if not line.strip():
                continue
            row = json.loads(line)
            term = row.get("term")
            if not isinstance(term, str):
                continue
            cat = row.get("category")
            if cat not in CATEGORIES and isinstance(row.get("en"), str):
                cat = en_cat.get(row["en"])
            if cat in CATEGORIES:
                rows.append({"term": term, "category": cat, "lang": lang})
    return rows


def load_obfuscated(limit: int, seed: int, langs: list[str] | None = None) -> list[dict]:
    en_cat = load_en_category_map()
    target_langs = langs if langs is not None else [SOURCE_LANG]
    rows: list[dict] = []
    for lang in [SOURCE_LANG] + [c for c in target_langs if c != SOURCE_LANG]:
        rows.extend(_collect_obfuscated_rows(lang, en_cat))
    rng = random.Random(seed)
    rng.shuffle(rows)
    return rows[:limit]


def load_multilingual_positive_terms(langs: list[str]) -> dict[str, str]:
    """Surface form -> category for EN + translated canonical (no obfuscated in train)."""
    en_cat = load_en_category_map()
    out: dict[str, str] = {}

    # EN canonical (cleaned list)
    out.update(load_positive_terms())

    for lang in langs:
        if lang == SOURCE_LANG:
            continue
        path = processed_dir(lang) / "lexicon_deduped.jsonl"
        if not path.exists():
            continue
        with path.open(encoding="utf-8") as f:
            for line in f:
                if not line.strip():
                    continue
                row = json.loads(line)
                if row.get("phase") == "obfuscated":
                    continue
                term = row.get("term")
                if not isinstance(term, str):
                    continue
                cat = row.get("category")
                if cat not in CATEGORIES and isinstance(row.get("en"), str):
                    cat = en_cat.get(row["en"])
                if cat in CATEGORIES:
                    out[term] = cat
    return out


def to_record(text: str, malicious: int, category: str | None, source: str | None = None) -> dict:
    cats = [category] if (malicious and category) else []
    rec: dict = {"text": text, "malicious": malicious, "categories": cats}
    if source:
        rec["source"] = source
    return rec


def categorize_malware_code(code: str) -> str:
    """Heuristic primary category for full malware code samples."""
    c = code.lower()
    if re.search(r"ransom|\.locked|\.bndr|encrypt_file|encrypt_files|fernet|pbkdf", c):
        return "ransomware_crypto"
    if re.search(r"beacon|c2_|c2_server|socket\.connect|reverse.shell", c):
        return "command_control"
    if re.search(r"persist|winreg|crontab|startup|launchctl|launchagent", c):
        return "packers_loaders"
    if re.search(r"keylog|credential|password.steal|exfil", c):
        return "credential_exfil"
    if re.search(r"inject|sqlmap|xss|shellcode", c):
        return "injection_lateral"
    return "ransomware_crypto"


def load_malware_code_samples(path: Path) -> list[dict]:
    """Load real malicious code blocks (e.g. BIG_CLEAN_.json from red-team evals)."""
    if not path.exists():
        return []
    raw = json.loads(path.read_text(encoding="utf-8"))
    rows = raw.get("data", raw) if isinstance(raw, dict) else raw
    if not isinstance(rows, list):
        return []
    out: list[dict] = []
    seen: set[str] = set()
    for row in rows:
        if not isinstance(row, dict):
            continue
        code = row.get("code")
        if not isinstance(code, str) or len(code.strip()) < 80:
            continue
        code = code.strip()
        if len(code) > MAX_CODE_CHARS:
            code = code[:MAX_CODE_CHARS]
        key = hashlib.sha256(code.encode("utf-8")).hexdigest()
        if key in seen:
            continue
        seen.add(key)
        src = row.get("source", "malware_code")
        out.append(
            {
                "text": code,
                "category": row.get("category") or categorize_malware_code(code),
                "source": src,
                "model": row.get("model"),
            }
        )
    return out


def load_hf_imported(path: Path) -> tuple[list[dict], list[dict]]:
    """HF malware-tagged imports: (positives, negatives). See import_hf_malware.py."""
    if not path.exists():
        return [], []
    pos: list[dict] = []
    neg: list[dict] = []
    seen: set[str] = set()
    with path.open(encoding="utf-8") as f:
        for line in f:
            if not line.strip():
                continue
            row = json.loads(line)
            text = row.get("text")
            if not isinstance(text, str):
                continue
            text = text.strip()
            if len(text) < 8:
                continue
            if len(text) > MAX_HF_TEXT_CHARS:
                text = text[:MAX_HF_TEXT_CHARS]
            key = hashlib.sha256(text.encode("utf-8")).hexdigest()
            if key in seen:
                continue
            seen.add(key)
            malicious = int(row.get("malicious", 0))
            cats = row.get("categories") or []
            cats = [c for c in cats if c in CATEGORIES]
            source = row.get("source", "hf_import")
            item = {"text": text, "source": source, "categories": cats}
            if malicious:
                item["category"] = cats[0] if cats else "malware_types"
                pos.append(item)
            else:
                neg.append(item)
    return pos, neg


def write_splits(
    out_dir: Path,
    splits: dict[str, list[dict]],
    obf: list[dict],
    code_samples: list[dict],
    report: dict,
    seed: int,
) -> None:
    out_dir.mkdir(parents=True, exist_ok=True)
    rng = random.Random(seed)
    for name in splits:
        rng.shuffle(splits[name])
        with (out_dir / f"{name}.jsonl").open("w", encoding="utf-8") as f:
            for rec in splits[name]:
                f.write(json.dumps(rec, ensure_ascii=False) + "\n")

    with (out_dir / "test_obfuscated.jsonl").open("w", encoding="utf-8") as f:
        for row in obf:
            f.write(
                json.dumps(to_record(row["term"], 1, row["category"]), ensure_ascii=False) + "\n"
            )

    with (out_dir / "test_malware_code.jsonl").open("w", encoding="utf-8") as f:
        for sample in code_samples:
            f.write(
                json.dumps(
                    to_record(sample["text"], 1, sample["category"], sample["source"]),
                    ensure_ascii=False,
                )
                + "\n"
            )

    (out_dir / "labels.json").write_text(
        json.dumps({"categories": CATEGORIES}, indent=2), encoding="utf-8"
    )
    (out_dir / "dataset_report.json").write_text(json.dumps(report, indent=2), encoding="utf-8")
    print(json.dumps(report, indent=2))


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--seed", type=int, default=42)
    ap.add_argument("--neg-ratio", type=float, default=1.0, help="negatives per positive")
    ap.add_argument("--min-negatives", type=int, default=4000, help="minimum benign template count")
    ap.add_argument("--obfuscated-test", type=int, default=4000)
    ap.add_argument(
        "--out-dir",
        type=Path,
        default=None,
        help="Output dir (default: data/clf or data/clf/v2 with --multilingual)",
    )
    ap.add_argument(
        "--multilingual",
        action="store_true",
        help="v2: 16-lang lexicon train; obf+malware_code hold-out only",
    )
    ap.add_argument(
        "--languages-file",
        type=Path,
        default=LANGS_CFG,
        help="Translated language codes (with --multilingual)",
    )
    ap.add_argument(
        "--malware-code",
        type=Path,
        default=DEFAULT_MALWARE_CODE,
        help="JSON with {data:[{code:...}]} malicious code blocks (0=skip)",
    )
    ap.add_argument(
        "--hf-import",
        type=Path,
        default=DEFAULT_HF_IMPORT,
        help="JSONL from import_hf_malware.py (0=skip)",
    )
    ap.add_argument(
        "--hf-in-train",
        choices=["none", "neg-only", "all"],
        default=None,
        help="v2: neg-only adds HF benign to train (default neg-only if --multilingual)",
    )
    args = ap.parse_args()

    out_dir = args.out_dir or (V2_CLF_DIR if args.multilingual else CLF_DIR)
    out_dir.mkdir(parents=True, exist_ok=True)
    rng = random.Random(args.seed)

    translated_langs: list[str] = []
    if args.multilingual:
        translated_langs = load_language_codes(args.languages_file)
        pos = load_multilingual_positive_terms(translated_langs)
    else:
        pos = load_positive_terms()

    n_pos = len(pos)
    neg_target = max(args.min_negatives, int(n_pos * args.neg_ratio))
    negatives = build_negatives(neg_target, args.seed)

    malware_path = args.malware_code
    if str(malware_path) == "0":
        malware_path = Path("/nonexistent")
    elif malware_path == DEFAULT_MALWARE_CODE and not malware_path.exists():
        malware_path = DEFAULT_MALWARE_CODE_FALLBACK
    code_samples = load_malware_code_samples(malware_path)

    hf_path = args.hf_import
    if str(hf_path) == "0":
        hf_path = Path("/nonexistent")
    hf_in_train = args.hf_in_train
    if hf_in_train is None:
        hf_in_train = "neg-only" if args.multilingual else "all"
    if hf_in_train == "none":
        hf_path = Path("/nonexistent")
    hf_pos, hf_neg = load_hf_imported(hf_path)
    hf_pos_train = hf_pos if hf_in_train == "all" else []
    hf_neg_train = hf_neg if hf_in_train in ("neg-only", "all") else []

    deduper = CrossSourceDeduper()
    splits: dict[str, list[dict]] = {"train": [], "val": [], "test": []}

    def add_record(text: str, malicious: int, category: str | None, source: str) -> None:
        if not deduper.try_add(text, source):
            return
        rec = to_record(text, malicious, category, source)
        splits[stable_split(text)].append(rec)

    for term, cat in pos.items():
        src = "lexicon_multilingual" if args.multilingual else "lexicon"
        add_record(term, 1, cat, src)

    if not args.multilingual:
        for sample in code_samples:
            add_record(sample["text"], 1, sample["category"], sample["source"])
    for sample in hf_pos_train:
        add_record(sample["text"], 1, sample["category"], sample["source"])

    for neg in negatives:
        add_record(neg, 0, None, "template_negative")
    for sample in hf_neg_train:
        add_record(sample["text"], 0, None, sample["source"])

    obf_langs = translated_langs if args.multilingual else None
    obf = load_obfuscated(args.obfuscated_test, args.seed, langs=obf_langs)

    code_cats: dict[str, int] = {}
    for s in code_samples:
        code_cats[s["category"]] = code_cats.get(s["category"], 0) + 1

    dedup_report = deduper.report()
    all_recs = [r for part in splits.values() for r in part]
    n_mal = sum(1 for r in all_recs if r["malicious"])

    report = {
        "variant": "v2_multilingual" if args.multilingual else "v1_en",
        "out_dir": str(out_dir),
        "languages": [SOURCE_LANG] + translated_langs if args.multilingual else [SOURCE_LANG],
        "hf_in_train": hf_in_train,
        "sources_raw": {
            "lexicon": n_pos,
            "malware_code_in_train": 0 if args.multilingual else len(code_samples),
            "hf_pos_imported": len(hf_pos),
            "hf_pos_in_train": len(hf_pos_train),
            "template_neg": len(negatives),
            "hf_neg_imported": len(hf_neg),
            "hf_neg_in_train": len(hf_neg_train),
        },
        "dedup": dedup_report,
        "records_malicious": n_mal,
        "records_total": len(all_recs),
        "split_counts": {k: len(v) for k, v in splits.items()},
        "obfuscated_test": len(obf),
        "malware_code_test": len(code_samples),
        "malware_code_categories": code_cats,
        "malware_code_path": str(malware_path) if code_samples else None,
        "hf_import_path": str(hf_path) if hf_path.exists() else None,
        "categories": len(CATEGORIES),
        "holdout_notes": (
            "obfuscated + malware_code never in train; HF positives stay eval-only when hf-in-train=neg-only"
            if args.multilingual
            else "standard v1 mix"
        ),
        "notes": "Cross-source dedup (normalize+hash).",
    }
    write_splits(out_dir, splits, obf, code_samples, report, args.seed)


if __name__ == "__main__":
    main()
