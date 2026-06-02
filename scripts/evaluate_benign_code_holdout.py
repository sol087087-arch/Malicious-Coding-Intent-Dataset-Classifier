#!/usr/bin/env python3
"""Evaluate FPR on benign-code hard negatives."""

from __future__ import annotations

import argparse
import json
import os
import sys
from collections import defaultdict
from pathlib import Path

import numpy as np

os.environ.setdefault("HF_HUB_OFFLINE", "1")
os.environ.setdefault("TRANSFORMERS_OFFLINE", "1")

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))

from evaluate_classifier import load_binary_threshold  # noqa: E402
from plot_score_dist import load_encoder  # noqa: E402


def load_jsonl(path: Path) -> list[dict]:
    return [json.loads(line) for line in path.read_text(encoding="utf-8").splitlines() if line.strip()]


def score_texts(texts: list[str], clf_bin, model, batch_size: int) -> np.ndarray:
    x = np.asarray(
        model.encode(
            texts,
            batch_size=batch_size,
            normalize_embeddings=True,
            convert_to_numpy=True,
            show_progress_bar=True,
        )
    )
    return clf_bin.predict_proba(x)[:, 1]


def summarize(scores: np.ndarray, threshold: float) -> dict:
    pred = scores >= threshold
    return {
        "n": int(scores.size),
        "threshold": round(float(threshold), 6),
        "false_positive_rate": round(float(pred.mean()), 4),
        "flagged": int(pred.sum()),
        "score_mean": round(float(scores.mean()), 6),
        "score_p50": round(float(np.quantile(scores, 0.50)), 6),
        "score_p90": round(float(np.quantile(scores, 0.90)), 6),
        "score_p95": round(float(np.quantile(scores, 0.95)), 6),
        "score_p99": round(float(np.quantile(scores, 0.99)), 6),
        "score_max": round(float(scores.max()), 6),
    }


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--model-dir", type=Path, default=ROOT / "models" / "v3_code_aware_50k")
    ap.add_argument("--holdout", type=Path, default=ROOT / "data" / "clf" / "benign_code_holdout.jsonl")
    ap.add_argument("--out", type=Path, default=None)
    ap.add_argument("--device", choices=["auto", "cuda", "cpu"], default="auto")
    ap.add_argument("--batch-size", type=int, default=32)
    ap.add_argument("--max-length", type=int, default=128)
    ap.add_argument("--profile", default=None)
    args = ap.parse_args()

    import joblib

    rows = load_jsonl(args.holdout)
    texts = [row["text"] for row in rows]
    clf_bin = joblib.load(args.model_dir / "clf_binary.joblib")
    model = load_encoder("BAAI/bge-m3", args.device, args.max_length)
    threshold = load_binary_threshold(args.model_dir, profile=args.profile)
    scores = score_texts(texts, clf_bin, model, args.batch_size)

    by_source: dict[str, list[float]] = defaultdict(list)
    flagged_examples = []
    for row, score in zip(rows, scores):
        by_source[row.get("source", "unknown")].append(float(score))
        if score >= threshold and len(flagged_examples) < 20:
            flagged_examples.append(
                {
                    "score": round(float(score), 6),
                    "source": row.get("source"),
                    "path": row.get("path"),
                    "preview": " ".join(row["text"].split())[:240],
                }
            )

    report = {
        "model_dir": str(args.model_dir),
        "holdout": str(args.holdout),
        "overall": summarize(scores, threshold),
        "by_source": {
            source: summarize(np.asarray(vals, dtype=float), threshold)
            for source, vals in sorted(by_source.items())
        },
        "flagged_examples": flagged_examples,
    }

    print(json.dumps(report, indent=2, ensure_ascii=False))
    out = args.out or args.model_dir / "benign_code_eval.json"
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(json.dumps(report, indent=2, ensure_ascii=False), encoding="utf-8")
    print(f"Wrote {out}")


if __name__ == "__main__":
    main()
