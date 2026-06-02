#!/usr/bin/env python3
"""Append mined benign-code false positives into a deduplicated curated pool."""

from __future__ import annotations

import argparse
import json
import shutil
from collections import Counter
from datetime import datetime, timezone
from pathlib import Path

from build_benign_code_holdout import norm_hash


ROOT = Path(__file__).resolve().parents[1]
DEFAULT_POOL = ROOT / "data" / "clf" / "benign_code_fp_curated_pool.jsonl"


def load_jsonl(path: Path) -> list[dict]:
    if not path.exists():
        return []
    return [json.loads(line) for line in path.read_text(encoding="utf-8").splitlines() if line.strip()]


def write_jsonl(path: Path, rows: list[dict]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", encoding="utf-8") as f:
        for row in rows:
            f.write(json.dumps(row, ensure_ascii=False) + "\n")


def source_key(row: dict) -> str:
    return str(row.get("mined_from") or row.get("source") or "unknown")


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--pool", type=Path, default=DEFAULT_POOL)
    ap.add_argument("--input", type=Path, action="append", required=True)
    ap.add_argument("--report", type=Path, default=None)
    ap.add_argument("--backup", action="store_true")
    args = ap.parse_args()

    existing = load_jsonl(args.pool)
    seen: set[str] = set()
    pool: list[dict] = []
    existing_dupes = 0
    for row in existing:
        h = norm_hash(row["text"])
        if h in seen:
            existing_dupes += 1
            continue
        seen.add(h)
        pool.append(row)

    if args.backup and args.pool.exists():
        stamp = datetime.now(timezone.utc).strftime("%Y%m%dT%H%M%SZ")
        shutil.copy2(args.pool, args.pool.with_suffix(f".{stamp}.bak.jsonl"))

    added = 0
    input_dupes = 0
    added_by_source: Counter[str] = Counter()
    input_counts: Counter[str] = Counter()
    for input_path in args.input:
        rows = load_jsonl(input_path)
        input_counts[str(input_path)] += len(rows)
        for row in rows:
            if not row.get("text"):
                continue
            h = norm_hash(row["text"])
            if h in seen:
                input_dupes += 1
                continue
            seen.add(h)
            out_row = dict(row)
            out_row["malicious"] = 0
            out_row["categories"] = []
            out_row.setdefault("language", "code")
            out_row.setdefault("pool_added_from", str(input_path))
            pool.append(out_row)
            added += 1
            added_by_source[source_key(out_row)] += 1

    write_jsonl(args.pool, pool)

    total_by_source = Counter(source_key(row) for row in pool)
    report = {
        "pool": str(args.pool),
        "existing_before": len(existing),
        "existing_dupes_removed": existing_dupes,
        "inputs": dict(input_counts),
        "added": added,
        "input_dupes_skipped": input_dupes,
        "pool_total": len(pool),
        "added_by_source": dict(sorted(added_by_source.items())),
        "pool_by_source": dict(sorted(total_by_source.items())),
    }
    report_path = args.report or args.pool.with_suffix(".report.json")
    report_path.write_text(json.dumps(report, indent=2, ensure_ascii=False), encoding="utf-8")
    print(json.dumps(report, indent=2, ensure_ascii=False))


if __name__ == "__main__":
    main()
