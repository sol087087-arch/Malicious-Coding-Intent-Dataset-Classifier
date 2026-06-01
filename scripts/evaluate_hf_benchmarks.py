#!/usr/bin/env python3
"""Evaluate v1/v2 classifier on external HF benchmarks (grouped by source).

Data: data/external/hf_imported.jsonl (from import_hf_malware.py + config/*.yaml).
Configs also list gated/large sets — run import_hf_malware.py to refresh.
"""

from __future__ import annotations

import argparse
import json
import os
import sys
from collections import defaultdict
from pathlib import Path

os.environ.setdefault("HF_HUB_OFFLINE", "1")
os.environ.setdefault("TRANSFORMERS_OFFLINE", "1")

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))
from evaluate_classifier import EMBED_MODEL, eval_split, load_binary_threshold  # noqa: E402

DEFAULT_JSONL = ROOT / "data" / "external" / "hf_imported.jsonl"
LONG_TEXT_SOURCES = ("hf:yatin-superintelligence/White-Hat-Security-Agent-Prompts-600K",)


def load_jsonl(path: Path) -> list[dict]:
    return [json.loads(l) for l in path.read_text(encoding="utf-8").splitlines() if l.strip()]


def group_by_source(rows: list[dict]) -> dict[str, list[dict]]:
    out: dict[str, list[dict]] = defaultdict(list)
    for r in rows:
        out[r.get("source", "unknown")].append(r)
    return dict(out)


def short_name(source: str) -> str:
    return source.removeprefix("hf:").replace("/", "__")


def batch_for_source(source: str, default_bs: int, long_bs: int) -> int:
    return long_bs if source in LONG_TEXT_SOURCES else default_bs


def _json_safe(obj):
    import math

    if isinstance(obj, float) and (math.isnan(obj) or math.isinf(obj)):
        return None
    if isinstance(obj, dict):
        return {k: _json_safe(v) for k, v in obj.items()}
    if isinstance(obj, list):
        return [_json_safe(v) for v in obj]
    return obj


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--jsonl", type=Path, default=DEFAULT_JSONL)
    ap.add_argument("--model-dir", type=Path, required=True)
    ap.add_argument("--labels", type=Path, default=ROOT / "data" / "clf" / "v2" / "labels.json")
    ap.add_argument("--batch-size", type=int, default=64)
    ap.add_argument("--long-batch-size", type=int, default=16)
    ap.add_argument("--holdout-batch-size", type=int, default=4)
    ap.add_argument("--device", choices=["auto", "cuda", "cpu"], default="cuda")
    ap.add_argument("--out", type=Path, default=None)
    ap.add_argument(
        "--profile",
        choices=["default", "strict_white_hat", "balanced", "holdout"],
        default=None,
    )
    args = ap.parse_args()

    import joblib
    import torch
    from sentence_transformers import SentenceTransformer

    if not args.jsonl.exists():
        raise SystemExit(f"Missing {args.jsonl}. Run: python scripts/import_hf_malware.py")

    device = "cuda" if args.device == "auto" and torch.cuda.is_available() else args.device
    if args.device == "cuda" and not torch.cuda.is_available():
        raise SystemExit("CUDA requested but unavailable")

    rows = load_jsonl(args.jsonl)
    categories = json.loads(args.labels.read_text(encoding="utf-8"))["categories"]
    clf_bin = joblib.load(args.model_dir / "clf_binary.joblib")
    clf_ml = joblib.load(args.model_dir / "clf_multilabel.joblib")
    model = SentenceTransformer(EMBED_MODEL, device=device)
    bin_thr = load_binary_threshold(args.model_dir, profile=args.profile)

    shards = group_by_source(rows)
    report = {
        "model_dir": str(args.model_dir),
        "jsonl": str(args.jsonl),
        "device": device,
        "binary_threshold": bin_thr,
        "total_n": len(rows),
        "benchmarks": {},
    }

    print(f"\n=== all_external (n={len(rows)}, threshold={bin_thr}) ===")
    m_all = eval_split(
        "all_external",
        rows,
        clf_bin,
        clf_ml,
        model,
        categories,
        args.batch_size,
        args.holdout_batch_size,
        embed_batch_size=args.batch_size,
        binary_threshold=bin_thr,
    )
    if m_all:
        report["benchmarks"]["all_external"] = m_all
        print(json.dumps(m_all, indent=2))

    for source in sorted(shards):
        shard = shards[source]
        name = short_name(source)
        bs = batch_for_source(source, args.batch_size, args.long_batch_size)
        print(f"\n=== {name} (n={len(shard)}, bs={bs}) ===")
        m = eval_split(
            name,
            shard,
            clf_bin,
            clf_ml,
            model,
            categories,
            args.batch_size,
            args.holdout_batch_size,
            embed_batch_size=bs,
            binary_threshold=bin_thr,
        )
        if m:
            m["source"] = source
            report["benchmarks"][name] = m
            print(json.dumps(m, indent=2))

    if args.out:
        args.out.parent.mkdir(parents=True, exist_ok=True)
        args.out.write_text(
            json.dumps(_json_safe(report), indent=2, allow_nan=False),
            encoding="utf-8",
        )
        print(f"\nWrote {args.out}")


if __name__ == "__main__":
    main()
