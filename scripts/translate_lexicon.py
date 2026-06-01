#!/usr/bin/env python3
"""Phase 3: translate clean EN canonical core to other languages (separate folders)."""

from __future__ import annotations

import argparse
import hashlib
import json
import os
import re
import sys
import time
from pathlib import Path

import yaml

ROOT = Path(__file__).resolve().parents[1]
if str(ROOT / "scripts") not in sys.path:
    sys.path.insert(0, str(ROOT / "scripts"))

from openrouter_client import ChatMessage, OpenRouterClient, OpenRouterConfig, extract_json_array
from paths import SOURCE_LANG, canonical_deduped_txt, raw_dir, translated_raw

TRANSLATION_CFG = ROOT / "config" / "translation.yaml"
LANGUAGES_CFG = ROOT / "config" / "languages.yaml"
PROMPT_TMPL = ROOT / "config" / "prompts" / "translate_batch.md"
MODELS_CFG = ROOT / "config" / "models.yaml"


def term_id(en: str) -> str:
    return hashlib.sha256(en.encode("utf-8")).hexdigest()[:16]


def load_terms() -> list[str]:
    src = canonical_deduped_txt(SOURCE_LANG)
    if not src.exists():
        raise SystemExit(f"Missing clean core: {src}. Run rebuild_en_canonical_deduped.py")
    return [ln.strip() for ln in src.read_text(encoding="utf-8").splitlines() if ln.strip()]


def should_keep_english(term: str, patterns: list[str]) -> bool:
    for pat in patterns:
        if re.search(pat, term, re.IGNORECASE):
            return True
    return False


def load_all_language_defs() -> dict[str, dict]:
    data = yaml.safe_load(LANGUAGES_CFG.read_text(encoding="utf-8"))
    return {lang["code"]: lang for lang in data["languages"] if not lang.get("source")}


def filter_languages(all_langs: dict[str, dict], codes: list[str] | None) -> list[dict]:
    if not codes:
        return list(all_langs.values())
    missing = [c for c in codes if c not in all_langs]
    if missing:
        raise SystemExit(f"Unknown language codes: {missing}")
    return [all_langs[c] for c in codes]


def load_language_codes_from_file(path: Path) -> list[str]:
    data = yaml.safe_load(path.read_text(encoding="utf-8"))
    return list(data.get("languages", []))


def load_openrouter_key() -> str:
    env_path = ROOT / ".env"
    if env_path.exists():
        for line in env_path.read_text(encoding="utf-8").splitlines():
            if line.strip().startswith("OPENROUTER_API_KEY="):
                return line.split("=", 1)[1].strip().strip('"').strip("'")
    return os.environ.get("OPENROUTER_API_KEY", "").strip()


def resolve_openrouter_models() -> list[str]:
    cfg = yaml.safe_load(MODELS_CFG.read_text(encoding="utf-8"))
    return list(cfg["profiles"][cfg.get("profile", "smart-cheap")]["models"])


def translation_state_path(lang_code: str) -> Path:
    return raw_dir(lang_code) / "translation_state.json"


def load_done_en(lang_code: str) -> set[str]:
    p = translation_state_path(lang_code)
    if not p.exists():
        return set()
    return set(json.loads(p.read_text(encoding="utf-8")).get("done_en", []))


def save_done_en(lang_code: str, done: set[str]) -> None:
    translation_state_path(lang_code).write_text(
        json.dumps({"done_en": sorted(done)}, ensure_ascii=False),
        encoding="utf-8",
    )


def _align_translations(batch: list[str], raw: list[str], patterns: list[str]) -> list[str]:
    if len(raw) >= len(batch):
        raw = raw[: len(batch)]
    else:
        raw = raw + batch[len(raw) :]  # pad missing with EN fallback
    out: list[str] = []
    for en, tr in zip(batch, raw):
        if should_keep_english(en, patterns):
            out.append(en)
        else:
            tr = str(tr).strip()
            out.append(tr if tr else en)
    return out


def _translate_batch(
    client: OpenRouterClient,
    *,
    model: str,
    prompt_base: str,
    batch: list[str],
    patterns: list[str],
) -> list[str]:
    if not batch:
        return []
    if all(should_keep_english(t, patterns) for t in batch):
        return list(batch)
    if len(batch) == 1:
        user = json.dumps(batch, ensure_ascii=False)
        content, _ = client.chat(
            model=model,
            messages=[
                ChatMessage(role="system", content=prompt_base),
                ChatMessage(role="user", content=user),
            ],
            temperature=0.1,
            max_tokens=512,
        )
        try:
            raw = extract_json_array(content)
            return _align_translations(batch, raw, patterns)
        except (ValueError, json.JSONDecodeError):
            return list(batch)

    user = json.dumps(batch, ensure_ascii=False)
    content, _ = client.chat(
        model=model,
        messages=[
            ChatMessage(role="system", content=prompt_base),
            ChatMessage(role="user", content=user),
        ],
        temperature=0.1,
        max_tokens=4096,
    )
    try:
        raw = extract_json_array(content)
    except (ValueError, json.JSONDecodeError):
        mid = len(batch) // 2
        left = _translate_batch(
            client, model=model, prompt_base=prompt_base, batch=batch[:mid], patterns=patterns
        )
        right = _translate_batch(
            client, model=model, prompt_base=prompt_base, batch=batch[mid:], patterns=patterns
        )
        return left + right

    if len(raw) == len(batch):
        return _align_translations(batch, raw, patterns)

    # Wrong count: split and recurse (handles 34 vs 35, 70 vs 35, etc.)
    mid = max(1, len(batch) // 2)
    left = _translate_batch(
        client, model=model, prompt_base=prompt_base, batch=batch[:mid], patterns=patterns
    )
    right = _translate_batch(
        client, model=model, prompt_base=prompt_base, batch=batch[mid:], patterns=patterns
    )
    return left + right


def translate_openrouter_lang(
    *,
    lang_code: str,
    lang_name: str,
    terms: list[str],
    out_path: Path,
    batch_size: int,
    patterns: list[str],
    model: str,
) -> None:
    api_key = load_openrouter_key()
    if not api_key:
        raise SystemExit("OPENROUTER_API_KEY required for openrouter backend")

    client = OpenRouterClient(OpenRouterConfig(api_key=api_key))
    prompt_base = PROMPT_TMPL.read_text(encoding="utf-8").replace(
        "{{TARGET_LANGUAGE}}", f"{lang_name} ({lang_code})"
    )
    done = load_done_en(lang_code)
    out_path.parent.mkdir(parents=True, exist_ok=True)
    pending = [t for t in terms if t not in done]
    print(f"{lang_code}: {len(pending)} terms (openrouter, {model})")

    tcfg = yaml.safe_load(TRANSLATION_CFG.read_text(encoding="utf-8"))
    delay = float(tcfg.get("openrouter", {}).get("request_delay_seconds", 1.5))

    with out_path.open("a", encoding="utf-8") as out:
        for i in range(0, len(pending), batch_size):
            batch = pending[i : i + batch_size]
            translated = _translate_batch(
                client,
                model=model,
                prompt_base=prompt_base,
                batch=batch,
                patterns=patterns,
            )
            for en, tr in zip(batch, translated):
                out.write(
                    json.dumps(
                        {
                            "term_id": term_id(en),
                            "en": en,
                            "term": tr,
                            "lang": lang_code,
                            "source": "openrouter",
                            "model": model,
                            "phase": "translated",
                        },
                        ensure_ascii=False,
                    )
                    + "\n"
                )
                done.add(en)
            save_done_en(lang_code, done)
            print(f"  {lang_code}: {min(i + batch_size, len(pending))}/{len(pending)}")
            time.sleep(delay)


def run_nllb(langs: list[dict], terms: list[str], patterns: list[str], model_name: str, batch_size: int) -> None:
    try:
        import certifi

        os.environ.setdefault("SSL_CERT_FILE", certifi.where())
        os.environ.setdefault("REQUESTS_CA_BUNDLE", certifi.where())
    except ImportError:
        pass
    try:
        import torch
        from transformers import AutoModelForSeq2SeqLM, AutoTokenizer
    except ImportError as exc:
        raise SystemExit(
            "NLLB backend needs: pip install torch transformers sentencepiece"
        ) from exc

    print(f"Loading {model_name} (once for {len(langs)} languages)…")
    tokenizer = AutoTokenizer.from_pretrained(model_name)
    model = AutoModelForSeq2SeqLM.from_pretrained(model_name)
    device = "cuda" if torch.cuda.is_available() else "cpu"
    model = model.to(device)
    print(f"Device: {device}")

    tokenizer.src_lang = "eng_Latn"

    for lang in langs:
        code = lang["code"]
        nllb_code = lang.get("nllb_code")
        if not nllb_code:
            print(f"skip {code}: no nllb_code")
            continue

        out_path = translated_raw(code)
        done = load_done_en(code)
        pending = [t for t in terms if t not in done]
        if not pending:
            print(f"{code}: already complete ({len(terms)} terms)")
            continue

        forced_bos = tokenizer.convert_tokens_to_ids(nllb_code)
        out_path.parent.mkdir(parents=True, exist_ok=True)
        print(f"{code}: {len(pending)} terms -> {out_path}")

        with out_path.open("a", encoding="utf-8") as out:
            for i in range(0, len(pending), batch_size):
                batch = pending[i : i + batch_size]
                encoded = tokenizer(
                    batch, return_tensors="pt", padding=True, truncation=True, max_length=128
                ).to(device)
                with torch.no_grad():
                    gen = model.generate(
                        **encoded,
                        forced_bos_token_id=forced_bos,
                        max_length=128,
                    )
                for en, ids in zip(batch, gen):
                    tr = tokenizer.decode(ids, skip_special_tokens=True).strip()
                    if should_keep_english(en, patterns):
                        tr = en
                    out.write(
                        json.dumps(
                            {
                                "term_id": term_id(en),
                                "en": en,
                                "term": tr,
                                "lang": code,
                                "source": "nllb",
                                "model": model_name,
                                "phase": "translated",
                            },
                            ensure_ascii=False,
                        )
                        + "\n"
                    )
                    done.add(en)
                save_done_en(code, done)
                if (i // batch_size) % 20 == 0 or i + batch_size >= len(pending):
                    print(f"  {code}: {min(i + batch_size, len(pending))}/{len(pending)}")


def main() -> None:
    parser = argparse.ArgumentParser(description="Translate clean EN canonical core")
    tcfg_preview = yaml.safe_load(TRANSLATION_CFG.read_text(encoding="utf-8"))
    default_backend = tcfg_preview.get("default_backend", "openrouter")
    parser.add_argument("--backend", choices=["nllb", "openrouter"], default=default_backend)
    parser.add_argument("--lang", help="Single ISO code")
    parser.add_argument(
        "--languages-file",
        type=Path,
        help="YAML list of language codes (e.g. config/translation_languages_20.yaml)",
    )
    parser.add_argument("--model", help="OpenRouter model id")
    args = parser.parse_args()

    tcfg = yaml.safe_load(TRANSLATION_CFG.read_text(encoding="utf-8"))
    terms = load_terms()
    patterns = tcfg.get("keep_english_patterns", [])
    all_defs = load_all_language_defs()

    codes: list[str] | None = None
    if args.languages_file:
        codes = load_language_codes_from_file(args.languages_file)
    elif args.lang:
        codes = [args.lang]

    langs = filter_languages(all_defs, codes)
    print(f"EN core: {len(terms)} terms | Target langs: {len(langs)}")

    if args.backend == "nllb":
        run_nllb(
            langs,
            terms,
            patterns,
            tcfg["nllb"]["model"],
            int(tcfg["nllb"]["batch_size"]),
        )
    else:
        models = [args.model] if args.model else resolve_openrouter_models()
        bs = int(tcfg["openrouter"]["batch_size"])
        for lang in langs:
            model_idx = 0
            completed = False
            for attempt in range(len(models) * 3):
                m = models[model_idx % len(models)]
                try:
                    translate_openrouter_lang(
                        lang_code=lang["code"],
                        lang_name=lang["name"],
                        terms=terms,
                        out_path=translated_raw(lang["code"]),
                        batch_size=bs,
                        patterns=patterns,
                        model=m,
                    )
                    completed = True
                    break
                except Exception as exc:
                    print(f"  {lang['code']} failed ({m}): {exc}")
                    model_idx += 1
                    time.sleep(5)
            if not completed:
                raise RuntimeError(f"All models failed for {lang['code']}")

    print(f"Done. {len(langs)} language(s) under data/<lang>/raw/translated.jsonl")


if __name__ == "__main__":
    main()
