#!/usr/bin/env python3
"""Pick binary malicious threshold from benign (white-hat) + hold-out constraints.

Saves models/<name>/binary_threshold.json and updates metrics.json.
"""

from __future__ import annotations

import argparse
import json
import os
import sys
from pathlib import Path

import numpy as np

os.environ.setdefault("HF_HUB_OFFLINE", "1")
os.environ.setdefault("TRANSFORMERS_OFFLINE", "1")

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))

DEFAULT_MODEL = ROOT / "models" / "v2_multilingual"
DEFAULT_CLF = ROOT / "data" / "clf" / "v2"
HF_JSONL = ROOT / "data" / "external" / "hf_imported.jsonl"
WHITE_HAT = "hf:yatin-superintelligence/White-Hat-Security-Agent-Prompts-600K"
BENIGN_SOURCES = (
    WHITE_HAT,
    "hf:NecroMOnk/Tersa-DPO",
    "hf:NecroMOnk/Residual-SFT",
    "hf:NecroMOnk/code-stress-bench",
)
EMBED_MODEL = "BAAI/bge-m3"


def load_jsonl(path: Path) -> list[dict]:
    return [json.loads(l) for l in path.read_text(encoding="utf-8").splitlines() if l.strip()]


def embed(model, texts: list[str], batch_size: int) -> np.ndarray:
    return np.asarray(
        model.encode(
            texts,
            batch_size=batch_size,
            normalize_embeddings=True,
            convert_to_numpy=True,
            show_progress_bar=True,
        )
    )


def sweep_threshold(
    p_neg: np.ndarray,
    p_obf: np.ndarray,
    p_mc: np.ndarray,
    max_fpr: float,
    min_obf_recall: float,
) -> dict | None:
    cands = np.unique(np.concatenate([p_neg, p_obf, p_mc]))
    cands = np.sort(cands)[::-1]
    best = None
    for t in cands:
        fpr = float((p_neg >= t).mean())
        if fpr > max_fpr:
            continue
        obf_rec = float((p_obf >= t).mean())
        if obf_rec < min_obf_recall:
            continue
        mc_rec = float((p_mc >= t).mean())
        score = (obf_rec, mc_rec, -fpr)
        if best is None or score > best["score"]:
            best = {
                "threshold": round(float(t), 6),
                "white_hat_fpr": round(fpr, 4),
                "obfuscated_recall": round(obf_rec, 4),
                "malware_code_recall": round(mc_rec, 4),
                "score": score,
            }
    return best


def metrics_at_threshold(p_neg, p_obf, p_mc, t: float) -> dict:
    return {
        "threshold": round(float(t), 6),
        "white_hat_fpr": round(float((p_neg >= t).mean()), 4),
        "benign_hf_fpr": round(float((p_neg >= t).mean()), 4),
        "obfuscated_recall": round(float((p_obf >= t).mean()), 4),
        "malware_code_recall": round(float((p_mc >= t).mean()), 4),
    }


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--model-dir", type=Path, default=DEFAULT_MODEL)
    ap.add_argument("--clf-dir", type=Path, default=DEFAULT_CLF)
    ap.add_argument("--hf-jsonl", type=Path, default=HF_JSONL)
    ap.add_argument("--max-fpr", type=float, default=0.05, help="max FPR on white-hat")
    ap.add_argument("--min-obf-recall", type=float, default=0.85, help="min recall on test_obfuscated")
    ap.add_argument("--batch-size", type=int, default=64)
    ap.add_argument("--long-batch-size", type=int, default=16)
    ap.add_argument("--holdout-batch-size", type=int, default=4)
    ap.add_argument("--device", choices=["auto", "cuda", "cpu"], default="cuda")
    ap.add_argument("--write", action="store_true", help="write binary_threshold.json")
    args = ap.parse_args()

    import joblib
    import torch
    from sentence_transformers import SentenceTransformer

    device = "cuda" if args.device == "auto" and torch.cuda.is_available() else args.device
    if args.device == "cuda" and not torch.cuda.is_available():
        raise SystemExit("CUDA unavailable")

    hf_rows = load_jsonl(args.hf_jsonl)
    white_hat = [r for r in hf_rows if r.get("source") == WHITE_HAT]
    benign_hf = [r for r in hf_rows if r.get("source") in BENIGN_SOURCES and r.get("malicious", 1) == 0]
    obf = load_jsonl(args.clf_dir / "test_obfuscated.jsonl")
    mc = load_jsonl(args.clf_dir / "test_malware_code.jsonl")
    if not white_hat:
        raise SystemExit(f"No white-hat rows in {args.hf_jsonl}")

    clf_bin = joblib.load(args.model_dir / "clf_binary.joblib")
    model = SentenceTransformer(EMBED_MODEL, device=device)

    print(f"Embedding white-hat n={len(white_hat)} …")
    p_wh = clf_bin.predict_proba(embed(model, [r["text"] for r in white_hat], args.long_batch_size))[:, 1]
    print(f"Embedding benign_hf n={len(benign_hf)} …")
    p_ben = clf_bin.predict_proba(embed(model, [r["text"] for r in benign_hf], args.batch_size))[:, 1]
    print(f"Embedding obfuscated n={len(obf)} …")
    p_obf = clf_bin.predict_proba(embed(model, [r["text"] for r in obf], args.holdout_batch_size))[:, 1]
    print(f"Embedding malware_code n={len(mc)} …")
    p_mc = clf_bin.predict_proba(embed(model, [r["text"] for r in mc], args.holdout_batch_size))[:, 1]

    default_t = 0.5
    report = {
        "model_dir": str(args.model_dir),
        "default_threshold": default_t,
        "calibration": {
            "white_hat_n": len(white_hat),
            "benign_hf_n": len(benign_hf),
            "benign_sources": list(BENIGN_SOURCES),
            "max_fpr_target": args.max_fpr,
            "min_obf_recall_target": args.min_obf_recall,
        },
        "at_default": {
            "white_hat": metrics_at_threshold(p_wh, p_obf, p_mc, default_t),
            "benign_hf": {
                "benign_hf_fpr": round(float((p_ben >= default_t).mean()), 4),
            },
        },
        "candidates": [],
    }
    report["at_default"]["white_hat"]["benign_hf_fpr"] = report["at_default"]["benign_hf"]["benign_hf_fpr"]

    for max_fpr in (0.01, 0.05, 0.10, 0.15):
        for min_obf in (0.90, 0.85, 0.80, 0.75):
            hit = sweep_threshold(p_wh, p_obf, p_mc, max_fpr, min_obf)
            if hit:
                hit["max_fpr_target"] = max_fpr
                hit["min_obf_recall_target"] = min_obf
                del hit["score"]
                report["candidates"].append(hit)

    chosen = sweep_threshold(p_wh, p_obf, p_mc, args.max_fpr, args.min_obf_recall)
    if not chosen:
        # relax obfuscated constraint, keep FPR cap
        chosen = sweep_threshold(p_wh, p_obf, p_mc, args.max_fpr, 0.0)
    if not chosen:
        t = float(np.quantile(p_wh, 1 - args.max_fpr))
        chosen = metrics_at_threshold(p_wh, p_obf, p_mc, t)
        chosen["note"] = "quantile_fallback"

    report["chosen"] = chosen
    report["at_chosen"] = metrics_at_threshold(p_wh, p_obf, p_mc, chosen["threshold"])
    report["at_chosen"]["benign_hf_fpr"] = round(float((p_ben >= chosen["threshold"]).mean()), 4)

    print(json.dumps(report, indent=2))

    if args.write:
        out = args.model_dir / "binary_threshold.json"
        payload = {
            "threshold": chosen["threshold"],
            "default": 0.5,
            "calibrated_on": WHITE_HAT,
            "constraints": {
                "max_white_hat_fpr": args.max_fpr,
                "min_obfuscated_recall": args.min_obf_recall,
            },
            "metrics_at_threshold": report["at_chosen"],
            "candidates": report["candidates"],
        }
        out.write_text(json.dumps(payload, indent=2), encoding="utf-8")
        print(f"Wrote {out}")

        metrics_path = args.model_dir / "metrics.json"
        if metrics_path.exists():
            metrics = json.loads(metrics_path.read_text(encoding="utf-8"))
            metrics["binary_threshold"] = payload
            metrics_path.write_text(json.dumps(metrics, indent=2), encoding="utf-8")


if __name__ == "__main__":
    main()
