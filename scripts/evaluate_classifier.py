#!/usr/bin/env python3
"""Evaluate saved classifier on clf splits (incl. hold-outs)."""

from __future__ import annotations

import argparse
import json
import os
from pathlib import Path

import numpy as np

os.environ.setdefault("HF_HUB_OFFLINE", "1")
os.environ.setdefault("TRANSFORMERS_OFFLINE", "1")

ROOT = Path(__file__).resolve().parents[1]
EMBED_MODEL = "BAAI/bge-m3"
DEFAULT_BINARY_THRESHOLD = 0.5


def _json_safe(obj):
    import math

    if isinstance(obj, float) and (math.isnan(obj) or math.isinf(obj)):
        return None
    if isinstance(obj, dict):
        return {k: _json_safe(v) for k, v in obj.items()}
    if isinstance(obj, list):
        return [_json_safe(v) for v in obj]
    return obj


def load_binary_threshold(model_dir: Path, profile: str | None = None) -> float:
    path = model_dir / "binary_threshold.json"
    if not path.exists():
        return DEFAULT_BINARY_THRESHOLD
    data = json.loads(path.read_text(encoding="utf-8"))
    if profile:
        if profile in ("default", "sklearn", "holdout"):
            return float(data.get("default", DEFAULT_BINARY_THRESHOLD))
        prof = data.get("profiles", {}).get(profile)
        if prof and "threshold" in prof:
            return float(prof["threshold"])
        raise SystemExit(f"Unknown threshold profile {profile!r}; see binary_threshold.json profiles")
    return float(data.get("threshold", data.get("default", DEFAULT_BINARY_THRESHOLD)))


def load_split(clf_dir: Path, name: str) -> list[dict]:
    path = clf_dir / f"{name}.jsonl"
    if not path.exists():
        return []
    return [json.loads(l) for l in path.read_text(encoding="utf-8").splitlines() if l.strip()]


def multilabel_matrix(rows: list[dict], categories: list[str]) -> np.ndarray:
    idx = {c: i for i, c in enumerate(categories)}
    y = np.zeros((len(rows), len(categories)), dtype=int)
    for r, row in enumerate(rows):
        for c in row.get("categories", []):
            if c in idx:
                y[r, idx[c]] = 1
    return y


def eval_split(
    name: str,
    rows: list[dict],
    clf_bin,
    clf_ml,
    model,
    categories,
    batch_size: int,
    holdout_bs: int,
    embed_batch_size: int | None = None,
    binary_threshold: float = DEFAULT_BINARY_THRESHOLD,
):
    from sklearn.metrics import (
        average_precision_score,
        f1_score,
        precision_recall_fscore_support,
        roc_auc_score,
    )

    if not rows:
        return None
    texts = [r["text"] for r in rows]
    if embed_batch_size is not None:
        bs = embed_batch_size
    else:
        bs = holdout_bs if name in ("test_obfuscated", "test_malware_code") else batch_size
    x = np.asarray(
        model.encode(
            texts,
            batch_size=bs,
            normalize_embeddings=True,
            convert_to_numpy=True,
            show_progress_bar=True,
        )
    )
    y = np.array([r["malicious"] for r in rows])
    proba = clf_bin.predict_proba(x)[:, 1]
    pred = (proba >= binary_threshold).astype(int)
    p, r, rec, _ = precision_recall_fscore_support(y, pred, average="binary", zero_division=0)
    try:
        auc = round(float(roc_auc_score(y, proba)), 4)
        pr_auc = round(float(average_precision_score(y, proba)), 4)
    except ValueError:
        auc = None  # single-class split (all positive or all negative)
        pr_auc = None

    out = {
        "n": len(rows),
        "malicious_rate": round(float(y.mean()), 4),
        "binary_threshold": binary_threshold,
        "binary": {
            "precision": round(float(p), 4),
            "recall": round(float(rec), 4),
            "f1": round(float(f1_score(y, pred, average="binary", zero_division=0)), 4),
            "roc_auc": auc,
            "pr_auc": pr_auc,
            "false_positive_rate": round(float(((pred == 1) & (y == 0)).sum() / max(1, (y == 0).sum())), 4),
        },
    }
    y_ml = multilabel_matrix(rows, categories)
    pred_ml = clf_ml.predict(x)
    out["multilabel"] = {
        "micro_f1": round(float(f1_score(y_ml, pred_ml, average="micro", zero_division=0)), 4),
        "macro_f1": round(float(f1_score(y_ml, pred_ml, average="macro", zero_division=0)), 4),
    }
    pos = y_ml.sum(axis=1) > 0
    if pos.any():
        out["multilabel"]["macro_f1_positives_only"] = round(
            float(f1_score(y_ml[pos], pred_ml[pos], average="macro", zero_division=0)), 4
        )
    return out


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--clf-dir", type=Path, default=ROOT / "data" / "clf" / "v2")
    ap.add_argument("--model-dir", type=Path, default=ROOT / "models" / "v2_multilingual")
    ap.add_argument("--batch-size", type=int, default=64)
    ap.add_argument("--holdout-batch-size", type=int, default=4)
    ap.add_argument("--device", choices=["auto", "cuda", "cpu"], default="cuda")
    ap.add_argument("--out", type=Path, default=None, help="write JSON report here")
    ap.add_argument(
        "--profile",
        choices=["default", "strict_white_hat", "balanced", "holdout"],
        default=None,
        help="binary threshold profile (default: active threshold in binary_threshold.json)",
    )
    ap.add_argument(
        "--splits",
        nargs="+",
        default=["test", "val", "test_obfuscated", "test_malware_code"],
        help="which splits to evaluate",
    )
    args = ap.parse_args()

    import joblib
    import torch
    from sentence_transformers import SentenceTransformer

    device = "cuda" if args.device == "auto" and torch.cuda.is_available() else args.device
    if args.device == "cuda" and not torch.cuda.is_available():
        raise SystemExit("CUDA requested but unavailable")

    categories = json.loads((args.clf_dir / "labels.json").read_text(encoding="utf-8"))["categories"]
    clf_bin = joblib.load(args.model_dir / "clf_binary.joblib")
    clf_ml = joblib.load(args.model_dir / "clf_multilabel.joblib")
    model = SentenceTransformer(EMBED_MODEL, device=device)
    bin_thr = load_binary_threshold(args.model_dir, profile=args.profile)

    splits = args.splits
    report = {
        "model_dir": str(args.model_dir),
        "clf_dir": str(args.clf_dir),
        "device": device,
        "binary_threshold": bin_thr,
        "splits": {},
    }
    for split in splits:
        rows = load_split(args.clf_dir, split)
        print(f"\n=== {split} (n={len(rows)}) ===")
        m = eval_split(
            split,
            rows,
            clf_bin,
            clf_ml,
            model,
            categories,
            args.batch_size,
            args.holdout_batch_size,
            binary_threshold=bin_thr,
        )
        if m:
            report["splits"][split] = m
            print(json.dumps(_json_safe(m), indent=2))
        else:
            print("(missing)")

    if args.out:
        args.out.parent.mkdir(parents=True, exist_ok=True)
        args.out.write_text(
            json.dumps(_json_safe(report), indent=2, allow_nan=False),
            encoding="utf-8",
        )
        print(f"\nWrote {args.out}")


if __name__ == "__main__":
    main()
