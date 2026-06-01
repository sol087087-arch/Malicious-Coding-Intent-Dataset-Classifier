#!/usr/bin/env python3
"""Phase 2: build obfuscated variants from canonical or translated terms (no API)."""

from __future__ import annotations

import argparse
import json
import random
import re
import sys
from datetime import datetime, timezone
from pathlib import Path

import yaml

ROOT = Path(__file__).resolve().parents[1]
if str(ROOT / "scripts") not in sys.path:
    sys.path.insert(0, str(ROOT / "scripts"))
from paths import SOURCE_LANG, canonical_raw, obfuscated_raw, translated_raw

LEET_MAP = str.maketrans(
    {
        "a": "4",
        "A": "4",
        "e": "3",
        "E": "3",
        "i": "1",
        "I": "1",
        "o": "0",
        "O": "0",
        "s": "5",
        "S": "5",
        "t": "7",
        "T": "7",
        "l": "1",
        "L": "1",
    }
)
VOWELS = set("aeiouAEIOU")


def load_config() -> dict:
    return yaml.safe_load((ROOT / "config" / "models.yaml").read_text(encoding="utf-8"))


def load_translation_config() -> dict:
    path = ROOT / "config" / "translation.yaml"
    return yaml.safe_load(path.read_text(encoding="utf-8")) if path.exists() else {}


def load_language_codes(path: Path) -> list[str]:
    data = yaml.safe_load(path.read_text(encoding="utf-8"))
    return list(data.get("languages", []))


def load_en_category_map() -> dict[str, str]:
    path = canonical_raw(SOURCE_LANG)
    out: dict[str, str] = {}
    if not path.exists():
        return out
    with path.open(encoding="utf-8") as f:
        for line in f:
            if not line.strip():
                continue
            row = json.loads(line)
            en = row.get("term")
            cat = row.get("category")
            if isinstance(en, str) and isinstance(cat, str):
                out[en] = cat
    return out


def load_source_rows(lang: str, en_categories: dict[str, str]) -> list[dict]:
    if lang == SOURCE_LANG:
        path = canonical_raw(lang)
        if not path.exists():
            raise SystemExit(f"Missing {path}. Run generate_lexicon.py first.")
        by_term: dict[str, dict] = {}
        with path.open(encoding="utf-8") as f:
            for line in f:
                if not line.strip():
                    continue
                row = json.loads(line)
                term = row.get("term")
                if isinstance(term, str):
                    by_term[term] = row
        return list(by_term.values())

    path = translated_raw(lang)
    if not path.exists():
        raise SystemExit(f"Missing {path}. Run translate_lexicon.py first.")
    by_term: dict[str, dict] = {}
    with path.open(encoding="utf-8") as f:
        for line in f:
            if not line.strip():
                continue
            row = json.loads(line)
            term = row.get("term")
            if not isinstance(term, str):
                continue
            en = row.get("en", "")
            by_term[term] = {
                "term": term,
                "source_term": term,
                "en": en,
                "category": en_categories.get(en) if isinstance(en, str) else None,
                "lang": lang,
                "phase": "translated",
            }
    return list(by_term.values())


def load_existing_obfuscated(out_path: Path) -> set[str]:
    seen: set[str] = set()
    if not out_path.exists():
        return seen
    with out_path.open(encoding="utf-8") as f:
        for line in f:
            if not line.strip():
                continue
            row = json.loads(line)
            term = row.get("term")
            if isinstance(term, str):
                seen.add(term)
    return seen


def variant_leetspeak(term: str) -> str | None:
    if len(term) < 3:
        return None
    out = term.translate(LEET_MAP)
    return out if out != term else None


def variant_drop_vowels(term: str) -> str | None:
    chars = [c for c in term if c not in VOWELS or c == " "]
    out = "".join(chars)
    out = re.sub(r" +", " ", out).strip()
    if len(out) < 3 or out.lower() == term.lower():
        return None
    return out


def variant_truncate(term: str) -> str | None:
    if len(term) <= 5:
        return None
    n = random.choice([1, 2, 2, 3])
    out = term[:-n].rstrip("- ")
    return out if len(out) >= 3 and out != term else None


def variant_dotted(term: str) -> str | None:
    if " " in term or len(term) < 4:
        return None
    step = 2 if len(term) < 8 else 3
    parts = [term[i : i + step] for i in range(0, len(term), step)]
    out = ".".join(parts)
    return out if out != term else None


def variant_spaced(term: str) -> str | None:
    if " " in term or len(term) < 5:
        return None
    step = random.choice([2, 3])
    parts = [term[i : i + step] for i in range(0, len(term), step)]
    out = " ".join(parts)
    return out if out != term else None


def variant_hyphen_chunks(term: str) -> str | None:
    if " " in term or len(term) < 6:
        return None
    mid = len(term) // 2
    out = term[:mid] + "-" + term[mid:]
    return out if out != term else None


def variant_missing_letters(term: str) -> str | None:
    if len(term) < 6:
        return None
    indices = [i for i, c in enumerate(term) if c.isalpha()]
    if len(indices) < 4:
        return None
    drop = random.sample(indices, k=min(2, len(indices) // 3))
    chars = list(term)
    for i in sorted(drop, reverse=True):
        chars.pop(i)
    out = "".join(chars)
    return out if len(out) >= 3 and out != term else None


GENERATORS_LATIN = [
    ("leetspeak", variant_leetspeak),
    ("drop_vowels", variant_drop_vowels),
    ("truncate", variant_truncate),
    ("dotted", variant_dotted),
    ("spaced", variant_spaced),
    ("hyphen_chunks", variant_hyphen_chunks),
    ("missing_letters", variant_missing_letters),
]

GENERATORS_UNICODE = [
    ("truncate", variant_truncate),
    ("dotted", variant_dotted),
    ("spaced", variant_spaced),
    ("hyphen_chunks", variant_hyphen_chunks),
    ("missing_letters", variant_missing_letters),
]


def generators_for(term: str) -> list[tuple[str, object]]:
    if term.isascii():
        return GENERATORS_LATIN
    return GENERATORS_UNICODE


def generate_variants(canonical: str, count: int, seen: set[str]) -> list[tuple[str, str]]:
    gens = generators_for(canonical)
    random.shuffle(gens)
    found: list[tuple[str, str]] = []
    for vtype, fn in gens:
        if len(found) >= count:
            break
        for _ in range(2):
            variant = fn(canonical)
            if not variant or variant in seen or variant == canonical:
                continue
            seen.add(variant)
            found.append((vtype, variant))
            if len(found) >= count:
                break
    return found


def run_lang(
    lang: str,
    *,
    variants_per: int,
    seed: int,
    en_categories: dict[str, str],
) -> dict:
    random.seed(seed + hash(lang) % 10000)
    cfg = load_config()["generation"]
    tcfg = load_translation_config()
    variants_per = variants_per or int(
        tcfg.get("variants_per_term") or cfg.get("variants_per_canonical", 3)
    )

    out_path = obfuscated_raw(lang)
    canonical_rows = load_source_rows(lang, en_categories)
    seen = load_existing_obfuscated(out_path)
    for row in canonical_rows:
        seen.add(row["term"])

    ts = datetime.now(timezone.utc).isoformat()
    out_path.parent.mkdir(parents=True, exist_ok=True)
    added = 0
    with out_path.open("a", encoding="utf-8") as out:
        for row in canonical_rows:
            base = row["term"]
            pairs = generate_variants(base, variants_per, seen)
            for vtype, variant in pairs:
                record = {
                    "term": variant,
                    "variant_type": vtype,
                    "source_term": base,
                    "category": row.get("category"),
                    "lang": lang,
                    "phase": "obfuscated",
                    "created_at": ts,
                }
                if row.get("en"):
                    record["en"] = row["en"]
                out.write(json.dumps(record, ensure_ascii=False) + "\n")
                added += 1

    obfuscated_n = len(load_existing_obfuscated(out_path))
    summary = {
        "lang": lang,
        "canonical_terms": len(canonical_rows),
        "variants_added_this_run": added,
        "obfuscated_total": obfuscated_n,
    }
    print(json.dumps(summary, indent=2))
    return summary


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--lang", help="Single language code (default: en)")
    parser.add_argument(
        "--languages-file",
        type=Path,
        help="YAML list of langs (e.g. config/translation_languages_20.yaml)",
    )
    parser.add_argument("--skip-en", action="store_true", help="Skip English (already obfuscated)")
    parser.add_argument("--variants-per", type=int, default=0)
    parser.add_argument("--seed", type=int, default=42)
    args = parser.parse_args()

    langs: list[str] = []
    if args.languages_file:
        langs = load_language_codes(args.languages_file)
    elif args.lang:
        langs = [args.lang]
    else:
        langs = [SOURCE_LANG]

    if args.skip_en:
        langs = [c for c in langs if c != SOURCE_LANG]

    en_categories = load_en_category_map()
    for code in langs:
        run_lang(
            code,
            variants_per=args.variants_per,
            seed=args.seed,
            en_categories=en_categories,
        )


if __name__ == "__main__":
    main()
