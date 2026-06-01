#!/usr/bin/env python3
"""Audit and clean EN canonical lexicon (remove noise / false positives)."""

from __future__ import annotations

import argparse
import json
import re
import sys
from collections import Counter
from pathlib import Path

import yaml

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))
from paths import SOURCE_LANG, canonical_deduped_txt, canonical_raw, processed_dir

AUDIT_CFG = ROOT / "config" / "canonical_audit.yaml"


def load_rules() -> dict:
    return yaml.safe_load(AUDIT_CFG.read_text(encoding="utf-8"))


def load_terms(path: Path) -> list[str]:
    return [ln.strip() for ln in path.read_text(encoding="utf-8").splitlines() if ln.strip()]


def classify(term: str, rules: dict) -> tuple[bool, str | None]:
    if len(term) < int(rules.get("min_length", 2)):
        return False, "too_short"
    if len(term) > int(rules.get("max_length", 80)):
        return False, "too_long"
    if len(term.split()) > int(rules.get("max_words", 5)):
        return False, "too_many_words"

    low = term.lower()
    exact = {x.lower() for x in rules.get("block_exact", [])}
    if low in exact:
        return False, "block_exact"

    for pat in rules.get("block_regex", []):
        if re.search(pat, term, re.IGNORECASE):
            return False, f"block_regex:{pat[:40]}"

    signals = [s.lower() for s in rules.get("attack_signals", [])]

    def has_signal(s: str) -> bool:
        ls = s.lower()
        return any(sig in ls for sig in signals)

    for prefix in rules.get("prefix_requires_attack_signal") or []:
        if low.startswith(prefix.lower()) and not has_signal(term):
            return False, "security_without_attack_signal"

    return True, None


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--input",
        type=Path,
        default=canonical_deduped_txt(SOURCE_LANG),
        help="Canonical term list (one per line)",
    )
    parser.add_argument(
        "--apply",
        action="store_true",
        help="Write canonical_cleaned.txt and update canonical_deduped.txt",
    )
    args = parser.parse_args()

    rules = load_rules()
    terms = load_terms(args.input)
    kept: list[str] = []
    removed: list[dict] = []
    reasons: Counter[str] = Counter()

    for term in terms:
        ok, reason = classify(term, rules)
        if ok:
            kept.append(term)
        else:
            reasons[reason or "unknown"] += 1
            removed.append({"term": term, "reason": reason})

    out_dir = processed_dir(SOURCE_LANG)
    out_dir.mkdir(parents=True, exist_ok=True)
    report = {
        "input": str(args.input),
        "input_count": len(terms),
        "kept_count": len(kept),
        "removed_count": len(removed),
        "removed_by_reason": dict(reasons),
        "samples_removed": removed[:30],
        "samples_kept_random_hint": kept[:5],
    }
    report_path = out_dir / "canonical_audit_report.json"
    report_path.write_text(json.dumps(report, indent=2, ensure_ascii=False), encoding="utf-8")

    removed_path = out_dir / "canonical_removed.txt"
    removed_path.write_text(
        "\n".join(f"{r['term']}\t{r['reason']}" for r in removed) + ("\n" if removed else ""),
        encoding="utf-8",
    )

    cleaned_path = out_dir / "canonical_cleaned.txt"
    cleaned_path.write_text("\n".join(kept) + "\n", encoding="utf-8")

    print(json.dumps(
        {
            "input_count": len(terms),
            "kept": len(kept),
            "removed": len(removed),
            "removed_by_reason": dict(reasons),
            "report": str(report_path),
            "cleaned": str(cleaned_path),
            "removed_file": str(removed_path),
        },
        indent=2,
    ))

    if args.apply:
        canonical_deduped_txt(SOURCE_LANG).write_text(
            "\n".join(kept) + "\n", encoding="utf-8"
        )
        print(f"Applied: {canonical_deduped_txt(SOURCE_LANG)}")
    else:
        print("Dry-run. Pass --apply to replace canonical_deduped.txt")


if __name__ == "__main__":
    main()
