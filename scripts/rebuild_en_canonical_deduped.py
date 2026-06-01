#!/usr/bin/env python3
"""Rebuild clean EN canonical_deduped from data/en/raw/canonical.jsonl only."""

from __future__ import annotations

import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))
from paths import SOURCE_LANG, canonical_deduped_txt, canonical_raw, processed_dir

def main() -> None:
    by_term: dict[str, dict] = {}
    with canonical_raw(SOURCE_LANG).open(encoding="utf-8") as f:
        for line in f:
            if not line.strip():
                continue
            row = json.loads(line)
            term = row.get("term")
            if isinstance(term, str):
                by_term[term] = row

    processed_dir(SOURCE_LANG).mkdir(parents=True, exist_ok=True)
    out = canonical_deduped_txt(SOURCE_LANG)
    terms = sorted(by_term.keys(), key=lambda t: (t.lower(), t))
    out.write_text("\n".join(terms) + "\n", encoding="utf-8")
    print(f"Wrote {len(terms)} canonical terms -> {out}")


if __name__ == "__main__":
    main()
