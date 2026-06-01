#!/usr/bin/env python3
"""Train BGE-m3 + light heads: binary (malicious) + multi-label (12 categories).

Embeddings: BAAI/bge-m3 (multilingual, loaded offline from HF cache).
Heads     : LogisticRegression (binary) + OneVsRest LogisticRegression (multi-label).
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
try:
    import certifi

    os.environ.setdefault("SSL_CERT_FILE", certifi.where())
except ImportError:
    pass

ROOT = Path(__file__).resolve().parents[1]
DEFAULT_CLF_DIR = ROOT / "data" / "clf"
DEFAULT_MODEL_DIR = ROOT / "models"
EMBED_MODEL = "BAAI/bge-m3"


def load_split(clf_dir: Path, name: str) -> list[dict]:
    path = clf_dir / f"{name}.jsonl"
    if not path.exists():
        return []
    return [json.loads(l) for l in path.read_text(encoding="utf-8").splitlines() if l.strip()]


def embed_texts(model, texts: list[str], batch_size: int) -> np.ndarray:
    return np.asarray(
        model.encode(
            texts,
            batch_size=batch_size,
            show_progress_bar=True,
            normalize_embeddings=True,
            convert_to_numpy=True,
        )
    )


def multilabel_matrix(rows: list[dict], categories: list[str]) -> np.ndarray:
    idx = {c: i for i, c in enumerate(categories)}
    Y = np.zeros((len(rows), len(categories)), dtype=int)
    for r, row in enumerate(rows):
        for c in row.get("categories", []):
            if c in idx:
                Y[r, idx[c]] = 1
    return Y


def resolve_device(name: str) -> str:
    import torch

    if name == "auto":
        return "cuda" if torch.cuda.is_available() else "cpu"
    if name == "cuda" and not torch.cuda.is_available():
        raise SystemExit("CUDA requested but torch.cuda.is_available() is False")
    return name


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--clf-dir", type=Path, default=DEFAULT_CLF_DIR)
    ap.add_argument("--model-dir", type=Path, default=DEFAULT_MODEL_DIR)
    ap.add_argument("--batch-size", type=int, default=128)
    ap.add_argument(
        "--holdout-batch-size",
        type=int,
        default=4,
        help="batch size for long hold-outs (obfuscated / malware_code); avoids CUDA OOM",
    )
    ap.add_argument("--device", choices=["auto", "cuda", "cpu"], default="auto")
    ap.add_argument("--max-train", type=int, default=0, help="cap train rows (0=all) for quick runs")
    args = ap.parse_args()

    from sentence_transformers import SentenceTransformer
    from sklearn.linear_model import LogisticRegression
    from sklearn.metrics import f1_score, precision_recall_fscore_support, roc_auc_score
    from sklearn.multiclass import OneVsRestClassifier
    import joblib

    clf_dir = args.clf_dir
    model_dir = args.model_dir
    device = resolve_device(args.device)

    categories = json.loads((clf_dir / "labels.json").read_text(encoding="utf-8"))["categories"]

    train = load_split(clf_dir, "train")
    test = load_split(clf_dir, "test")
    obf = load_split(clf_dir, "test_obfuscated")
    malware_code = load_split(clf_dir, "test_malware_code")
    if args.max_train and len(train) > args.max_train:
        train = train[: args.max_train]
    if not train or not test:
        raise SystemExit(f"Missing train/test in {clf_dir}. Run build_classifier_dataset.py first.")

    print(
        f"clf_dir={clf_dir} model_dir={model_dir} device={device}\n"
        f"train={len(train)} test={len(test)} "
        f"obf_test={len(obf)} malware_code_test={len(malware_code)}"
    )
    print(f"Loading embedder {EMBED_MODEL} (offline)…")
    model = SentenceTransformer(EMBED_MODEL, device=device)

    def texts(rows):
        return [r["text"] for r in rows]

    Xtr = embed_texts(model, texts(train), args.batch_size)
    Xte = embed_texts(model, texts(test), args.batch_size)
    hb = args.holdout_batch_size
    if obf:
        print(f"Embedding obfuscated hold-out (batch_size={hb})…")
        Xobf = embed_texts(model, texts(obf), hb)
    else:
        Xobf = None
    if malware_code:
        print(f"Embedding malware_code hold-out (batch_size={hb})…")
        Xmc = embed_texts(model, texts(malware_code), hb)
    else:
        Xmc = None

    ytr = np.array([r["malicious"] for r in train])
    yte = np.array([r["malicious"] for r in test])

    print("Training binary head…")
    clf_bin = LogisticRegression(max_iter=2000, C=4.0, class_weight="balanced")
    clf_bin.fit(Xtr, ytr)
    pte = clf_bin.predict(Xte)
    proba = clf_bin.predict_proba(Xte)[:, 1]
    p, r, f1, _ = precision_recall_fscore_support(yte, pte, average="binary", zero_division=0)
    binary_metrics = {
        "precision": round(float(p), 4),
        "recall": round(float(r), 4),
        "f1": round(float(f1), 4),
        "roc_auc": round(float(roc_auc_score(yte, proba)), 4),
        "false_positive_rate": round(
            float(((pte == 1) & (yte == 0)).sum() / max(1, (yte == 0).sum())), 4
        ),
    }
    if Xobf is not None and len(obf):
        pobf = clf_bin.predict(Xobf)
        binary_metrics["obfuscated_recall"] = round(float((pobf == 1).mean()), 4)
        binary_metrics["obfuscated_count"] = len(obf)
    if Xmc is not None and len(malware_code):
        pmc = clf_bin.predict(Xmc)
        binary_metrics["malware_code_recall"] = round(float((pmc == 1).mean()), 4)
        binary_metrics["malware_code_count"] = len(malware_code)

    print("Training multi-label head…")
    Ytr = multilabel_matrix(train, categories)
    Yte = multilabel_matrix(test, categories)
    clf_ml = OneVsRestClassifier(LogisticRegression(max_iter=2000, C=4.0))
    clf_ml.fit(Xtr, Ytr)
    Yp = clf_ml.predict(Xte)
    multilabel_metrics = {
        "micro_f1": round(float(f1_score(Yte, Yp, average="micro", zero_division=0)), 4),
        "macro_f1": round(float(f1_score(Yte, Yp, average="macro", zero_division=0)), 4),
    }
    pos_mask = Yte.sum(axis=1) > 0
    if pos_mask.any():
        multilabel_metrics["macro_f1_positives_only"] = round(
            float(f1_score(Yte[pos_mask], Yp[pos_mask], average="macro", zero_division=0)), 4
        )
    if Xobf is not None and len(obf):
        Yobf = multilabel_matrix(obf, categories)
        Yobf_p = clf_ml.predict(Xobf)
        multilabel_metrics["obfuscated_macro_f1"] = round(
            float(f1_score(Yobf, Yobf_p, average="macro", zero_division=0)), 4
        )
    if Xmc is not None and len(malware_code):
        Ymc = multilabel_matrix(malware_code, categories)
        Ymc_p = clf_ml.predict(Xmc)
        multilabel_metrics["malware_code_macro_f1"] = round(
            float(f1_score(Ymc, Ymc_p, average="macro", zero_division=0)), 4
        )

    model_dir.mkdir(parents=True, exist_ok=True)
    joblib.dump(clf_bin, model_dir / "clf_binary.joblib")
    joblib.dump(clf_ml, model_dir / "clf_multilabel.joblib")
    (model_dir / "labels.json").write_text(
        json.dumps({"categories": categories}, indent=2), encoding="utf-8"
    )

    metrics = {
        "embedder": EMBED_MODEL,
        "device": device,
        "embedding_dim": int(Xtr.shape[1]),
        "clf_dir": str(clf_dir),
        "counts": {
            "train": len(train),
            "test": len(test),
            "obfuscated_test": len(obf),
            "malware_code_test": len(malware_code),
        },
        "binary": binary_metrics,
        "multilabel": multilabel_metrics,
    }
    (model_dir / "metrics.json").write_text(json.dumps(metrics, indent=2), encoding="utf-8")
    print(json.dumps(metrics, indent=2))


if __name__ == "__main__":
    main()
