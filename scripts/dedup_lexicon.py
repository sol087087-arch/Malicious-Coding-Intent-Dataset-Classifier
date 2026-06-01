#!/usr/bin/env python3
"""Dedupe one language dataset only (no cross-lang merge).

Raw files under data/<lang>/raw/ are never modified.
Duplicate rows are archived to processed/duplicate_rows.jsonl (not discarded).
"""

from __future__ import annotations

import argparse
import json
from collections import Counter
from pathlib import Path

import yaml

ROOT = Path(__file__).resolve().parents[1]
import sys

sys.path.insert(0, str(ROOT / "scripts"))
from paths import (
    SOURCE_LANG,
    canonical_deduped_txt,
    dataset_dir,
    lexicon_deduped_txt,
    processed_dir,
    raw_dir,
)


def sources_for_lang(lang: str) -> list[Path]:
    r = raw_dir(lang)
    return [
        r / "canonical.jsonl",
        r / "obfuscated.jsonl",
        r / "translated.jsonl",
    ]


def load_language_codes(path: Path) -> list[str]:
    data = yaml.safe_load(path.read_text(encoding="utf-8"))
    return list(data.get("languages", []))


def dedup_lang(lang: str) -> dict:
    by_term: dict[str, dict] = {}
    canonical_only: set[str] = set()
    dup_counter: Counter[str] = Counter()
    duplicate_rows: list[dict] = []
    files_read: list[str] = []

    for path in sources_for_lang(lang):
        if not path.exists():
            continue
        files_read.append(str(path))
        with path.open(encoding="utf-8") as f:
            for line_no, line in enumerate(f, start=1):
                line = line.strip()
                if not line:
                    continue
                row = json.loads(line)
                term = row.get("term")
                if not isinstance(term, str):
                    continue
                dup_counter[term] += 1
                phase = row.get("phase") or row.get("variant_type", "canonical")
                if phase in ("canonical", "translated") or row.get("variant_type") == "canonical":
                    canonical_only.add(term)
                if term not in by_term:
                    by_term[term] = row
                else:
                    duplicate_rows.append(
                        {
                            "term": term,
                            "source_file": str(path.relative_to(ROOT)),
                            "line": line_no,
                            "kept_phase": by_term[term].get("phase"),
                            "row": row,
                        }
                    )

    if not by_term:
        raise SystemExit(f"No terms found for lang={lang} in {dataset_dir(lang)}")

    out_dir = processed_dir(lang)
    out_dir.mkdir(parents=True, exist_ok=True)
    out_txt = lexicon_deduped_txt(lang)
    out_jsonl = out_dir / "lexicon_deduped.jsonl"
    out_canonical = canonical_deduped_txt(lang)
    out_obfuscated = out_dir / "obfuscated_deduped.txt"
    out_meta = out_dir / "dedup_report.json"
    out_dupes = out_dir / "duplicate_rows.jsonl"

    terms = sorted(by_term.keys(), key=lambda t: (t.lower(), t))
    obfuscated_only = {
        t for t in terms if by_term[t].get("phase") == "obfuscated"
    }

    with out_txt.open("w", encoding="utf-8") as tf:
        for t in terms:
            tf.write(t + "\n")

    with out_canonical.open("w", encoding="utf-8") as cf:
        for t in sorted(canonical_only, key=lambda x: (x.lower(), x)):
            cf.write(t + "\n")

    with out_obfuscated.open("w", encoding="utf-8") as of:
        for t in sorted(obfuscated_only, key=lambda x: (x.lower(), x)):
            of.write(t + "\n")

    with out_jsonl.open("w", encoding="utf-8") as jf:
        for t in terms:
            jf.write(json.dumps(by_term[t], ensure_ascii=False) + "\n")

    with out_dupes.open("w", encoding="utf-8") as df:
        for entry in duplicate_rows:
            df.write(json.dumps(entry, ensure_ascii=False) + "\n")

    raw_lines = sum(dup_counter.values())
    report = {
        "lang": lang,
        "dataset_dir": str(dataset_dir(lang)),
        "sources": files_read,
        "raw_preserved": True,
        "raw_lines": raw_lines,
        "unique_terms": len(terms),
        "canonical_unique": len(canonical_only),
        "obfuscated_unique": len(obfuscated_only),
        "duplicate_rows_archived": len(duplicate_rows),
        "output_txt": str(out_txt),
        "output_jsonl": str(out_jsonl),
        "output_canonical_txt": str(out_canonical),
        "output_obfuscated_txt": str(out_obfuscated),
        "output_duplicate_archive": str(out_dupes),
    }
    out_meta.write_text(json.dumps(report, indent=2), encoding="utf-8")
    print(json.dumps(report, indent=2))
    return report


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--lang",
        help="Single language code (default: en if no --languages-file)",
    )
    parser.add_argument(
        "--languages-file",
        type=Path,
        help="YAML list of langs; use with --include-en for full 16-lang pass",
    )
    parser.add_argument(
        "--include-en",
        action="store_true",
        help="Also dedupe en when using --languages-file",
    )
    args = parser.parse_args()

    langs: list[str] = []
    if args.languages_file:
        langs = load_language_codes(args.languages_file)
        if args.include_en:
            langs = [SOURCE_LANG] + langs
    elif args.lang:
        langs = [args.lang]
    else:
        langs = [SOURCE_LANG]

    for code in langs:
        dedup_lang(code)


if __name__ == "__main__":
    main()
