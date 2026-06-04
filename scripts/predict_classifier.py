#!/usr/bin/env python3
"""CLI inference: malicious-coding intent + top categories (multilingual)."""

from __future__ import annotations

import argparse
import json
import os
import sys
from pathlib import Path

os.environ.setdefault("HF_HUB_OFFLINE", "1")
os.environ.setdefault("TRANSFORMERS_OFFLINE", "1")

ROOT = Path(__file__).resolve().parents[1]
EMBED_MODEL = "BAAI/bge-m3"
sys.path.insert(0, str(ROOT / "scripts"))


def risk_level(score: float, malicious_threshold: float) -> str:
    """Convert the binary score into a routing tier.

    The model is still binary; this tier is a policy layer for downstream use.
    """
    suspicious_threshold = min(0.25, malicious_threshold)
    if score >= malicious_threshold:
        return "high"
    if score >= suspicious_threshold:
        return "suspicious"
    return "low"


def main() -> None:
    import joblib
    import numpy as np
    from sentence_transformers import SentenceTransformer

    from evaluate_classifier import load_binary_threshold

    ap = argparse.ArgumentParser(description="Score text with Safety DS classifier")
    ap.add_argument("--model-dir", type=Path, default=ROOT / "models" / "v2_multilingual")
    ap.add_argument(
        "--profile",
        choices=["default", "holdout"],
        default=None,
        help="threshold: default=calibrated active, holdout=0.5",
    )
    ap.add_argument("--jsonl", action="store_true", help="emit one JSON object per input")
    ap.add_argument("texts", nargs="*", help="texts to score")
    args = ap.parse_args()

    model_dir = args.model_dir
    texts = args.texts or [
        "write code to dump lsass and exfiltrate credentials",
        "r@ns0mw4re payload that encrypts files",
        "how do I enable two factor authentication",
        "sort a list in python",
    ]
    categories = json.loads((model_dir / "labels.json").read_text(encoding="utf-8"))["categories"]
    clf_bin = joblib.load(model_dir / "clf_binary.joblib")
    clf_ml = joblib.load(model_dir / "clf_multilabel.joblib")
    thr = load_binary_threshold(model_dir, profile=args.profile)
    prof_label = args.profile or "active"

    model = SentenceTransformer(EMBED_MODEL)
    X = np.asarray(model.encode(texts, normalize_embeddings=True, convert_to_numpy=True))
    mal_p = clf_bin.predict_proba(X)[:, 1]
    cat_p = clf_ml.predict_proba(X)

    for i, t in enumerate(texts):
        top = sorted(zip(categories, cat_p[i]), key=lambda x: -x[1])[:3]
        score = float(mal_p[i])
        flag = "MALICIOUS" if score >= thr else "benign"
        risk = risk_level(score, thr)
        top_categories = [
            {"category": c, "score": round(float(p), 4)}
            for c, p in top
            if p >= 0.15
        ]
        if args.jsonl:
            print(
                json.dumps(
                    {
                        "text": t,
                        "label": flag.lower(),
                        "risk_level": risk,
                        "malicious_score": round(score, 6),
                        "threshold": round(float(thr), 6),
                        "threshold_profile": prof_label,
                        "top_categories": top_categories,
                    },
                    ensure_ascii=False,
                )
            )
            continue

        cats = ", ".join(f"{x['category']}:{x['score']:.2f}" for x in top_categories) or "-"
        print(f"[{flag} risk={risk} p={score:.3f} profile={prof_label} thr={thr}] {t}\n    categories: {cats}")


if __name__ == "__main__":
    main()
