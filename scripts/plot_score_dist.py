#!/usr/bin/env python3
"""Score distribution + threshold-free metrics (ROC-AUC, PR-AUC) for README / interviews.

Writes:
  - models/v2_multilingual/score_distribution.json
  - docs/score_distribution_v2.png (benign vs malicious histograms)

Requires: matplotlib. CUDA is recommended for large splits.
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

from evaluate_classifier import load_binary_threshold, load_split  # noqa: E402

EMBED_MODEL = "BAAI/bge-m3"
WHITE_HAT = "hf:yatin-superintelligence/White-Hat-Security-Agent-Prompts-600K"
DEFAULT_SPLITS = ("test", "test_obfuscated", "test_malware_code")


def load_white_hat(hf_jsonl: Path, max_n: int | None) -> list[dict]:
    rows = []
    for line in hf_jsonl.read_text(encoding="utf-8").splitlines():
        if not line.strip():
            continue
        r = json.loads(line)
        if r.get("source") != WHITE_HAT:
            continue
        rows.append({"text": r["text"], "malicious": 0, "source": WHITE_HAT})
        if max_n and len(rows) >= max_n:
            break
    return rows


def score_rows(rows: list[dict], clf_bin, model, batch_size: int) -> tuple[np.ndarray, np.ndarray]:
    texts = [r["text"] for r in rows]
    y = np.array([int(r["malicious"]) for r in rows], dtype=int)
    x = np.asarray(
        model.encode(
            texts,
            batch_size=batch_size,
            normalize_embeddings=True,
            convert_to_numpy=True,
            show_progress_bar=len(texts) > 500,
        )
    )
    p = clf_bin.predict_proba(x)[:, 1]
    return y, p


class TransformersClsEncoder:
    """SentenceTransformer-compatible fallback for BGE-m3 CLS + Normalize."""

    def __init__(self, model_name: str, device: str, max_length: int) -> None:
        import torch
        from transformers import AutoModel, AutoTokenizer

        self.torch = torch
        self.device = device
        self.max_length = max_length
        self.tokenizer = AutoTokenizer.from_pretrained(model_name)
        self.model = AutoModel.from_pretrained(model_name).to(device)
        self.model.eval()

    def encode(
        self,
        texts: list[str],
        batch_size: int,
        normalize_embeddings: bool = True,
        convert_to_numpy: bool = True,
        show_progress_bar: bool = False,
    ):
        from tqdm.auto import tqdm

        chunks = range(0, len(texts), batch_size)
        if show_progress_bar:
            chunks = tqdm(chunks, total=(len(texts) + batch_size - 1) // batch_size)

        vectors = []
        with self.torch.no_grad():
            for start in chunks:
                batch = texts[start : start + batch_size]
                encoded = self.tokenizer(
                    batch,
                    padding=True,
                    truncation=True,
                    max_length=self.max_length,
                    return_tensors="pt",
                ).to(self.device)
                out = self.model(**encoded)
                emb = out.last_hidden_state[:, 0]
                if normalize_embeddings:
                    emb = self.torch.nn.functional.normalize(emb, p=2, dim=1)
                vectors.append(emb.cpu())
        arr = self.torch.cat(vectors, dim=0)
        return arr.numpy() if convert_to_numpy else arr


def load_encoder(model_name: str, device: str, max_length: int):
    if os.environ.get("SAFETY_DS_USE_SENTENCE_TRANSFORMERS") == "1":
        from sentence_transformers import SentenceTransformer

        return SentenceTransformer(model_name, device=device)
    print(
        "Using transformers CLS fallback "
        f"(BGE-m3 sentence-transformers config: CLS pooling + normalize, max_length={max_length})"
    )
    return TransformersClsEncoder(model_name, device, max_length)


def limit_rows(rows: list[dict], max_rows: int | None) -> list[dict]:
    if max_rows is None or max_rows <= 0 or len(rows) <= max_rows:
        return rows
    return rows[:max_rows]


def threshold_metrics(y: np.ndarray, p: np.ndarray, thr: float) -> dict:
    pred = (p >= thr).astype(int)
    tp = int(((pred == 1) & (y == 1)).sum())
    fp = int(((pred == 1) & (y == 0)).sum())
    fn = int(((pred == 0) & (y == 1)).sum())
    tn = int(((pred == 0) & (y == 0)).sum())
    prec = tp / max(1, tp + fp)
    rec = tp / max(1, tp + fn)
    fpr = fp / max(1, fp + tn)
    return {
        "precision": round(prec, 4),
        "recall": round(rec, 4),
        "f1": round(2 * prec * rec / max(1e-9, prec + rec), 4),
        "false_positive_rate": round(fpr, 4),
    }


def auc_metrics(y: np.ndarray, p: np.ndarray) -> dict:
    from sklearn.metrics import average_precision_score, roc_auc_score

    out: dict = {"roc_auc": None, "pr_auc": None}
    if len(np.unique(y)) < 2:
        return out
    out["roc_auc"] = round(float(roc_auc_score(y, p)), 4)
    out["pr_auc"] = round(float(average_precision_score(y, p)), 4)
    return out


def score_summary(p: np.ndarray) -> dict:
    return {
        "mean": round(float(p.mean()), 6),
        "median": round(float(np.median(p)), 6),
        "p95": round(float(np.percentile(p, 95)), 6),
        "p99": round(float(np.percentile(p, 99)), 6),
        "max": round(float(p.max()), 6),
    }


def plot_histograms(
    series: dict[str, tuple[np.ndarray, np.ndarray]],
    active_thr: float,
    out_png: Path,
) -> None:
    import matplotlib

    matplotlib.use("Agg")
    import matplotlib.pyplot as plt

    fig, axes = plt.subplots(1, 2, figsize=(12, 4.5))

    # Panel A: mixed test (both classes)
    if "test" in series:
        y, p = series["test"]
        axes[0].hist(p[y == 0], bins=80, alpha=0.6, density=True, label="benign", color="#2ecc71")
        axes[0].hist(p[y == 1], bins=80, alpha=0.6, density=True, label="malicious", color="#e74c3c")
        axes[0].axvline(active_thr, color="black", ls="--", lw=1.2, label=f"op. point {active_thr:.4g}")
        axes[0].set_title("In-distribution test (mixed)")
        axes[0].set_xlabel("P(malicious)")
        axes[0].legend(fontsize=8)

    # Panel B: hold-outs (malicious) vs White-Hat (benign)
    if "white_hat" in series:
        _, p_ben = series["white_hat"]
        axes[1].hist(p_ben, bins=80, alpha=0.65, density=True, label="White-Hat (benign)", color="#3498db")
    for name, color in (("test_obfuscated", "#9b59b6"), ("test_malware_code", "#e67e22")):
        if name in series:
            _, p_m = series[name]
            axes[1].hist(p_m, bins=80, alpha=0.5, density=True, label=name.replace("test_", ""), color=color)
    axes[1].axvline(active_thr, color="black", ls="--", lw=1.2, label=f"op. point {active_thr:.4g}")
    axes[1].set_title("Calibration target vs hold-outs")
    axes[1].set_xlabel("P(malicious)")
    axes[1].legend(fontsize=7)

    fig.suptitle("Safety DS v2 — binary score separation (BGE-m3 + logistic head)", fontsize=11)
    fig.tight_layout()
    out_png.parent.mkdir(parents=True, exist_ok=True)
    fig.savefig(out_png, dpi=150, bbox_inches="tight")
    plt.close(fig)
    print(f"Wrote {out_png}")


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--model-dir", type=Path, default=ROOT / "models" / "v2_multilingual")
    ap.add_argument("--clf-dir", type=Path, default=ROOT / "data" / "clf" / "v2")
    ap.add_argument("--hf-jsonl", type=Path, default=ROOT / "data" / "external" / "hf_imported.jsonl")
    ap.add_argument("--device", choices=["auto", "cuda", "cpu"], default="auto")
    ap.add_argument("--batch-size", type=int, default=64)
    ap.add_argument("--max-length", type=int, default=512, help="token truncation length for transformers fallback")
    ap.add_argument("--max-rows-per-split", type=int, default=0, help="cap each clf split for fast diagnostic plots")
    ap.add_argument("--white-hat-max", type=int, default=8000, help="cap White-Hat rows for speed")
    ap.add_argument("--out-json", type=Path, default=None)
    ap.add_argument("--out-png", type=Path, default=ROOT / "docs" / "score_distribution_v2.png")
    ap.add_argument("--no-plot", action="store_true")
    args = ap.parse_args()

    import joblib
    import torch

    device = "cuda" if args.device == "auto" and torch.cuda.is_available() else args.device
    if args.device == "cuda" and not torch.cuda.is_available():
        raise SystemExit("CUDA requested but unavailable")

    clf_bin = joblib.load(args.model_dir / "clf_binary.joblib")
    model = load_encoder(EMBED_MODEL, device, args.max_length)
    active_thr = load_binary_threshold(args.model_dir)
    default_thr = load_binary_threshold(args.model_dir, profile="holdout")

    series: dict[str, tuple[np.ndarray, np.ndarray]] = {}
    report: dict = {
        "model_dir": str(args.model_dir),
        "active_threshold": active_thr,
        "default_threshold": default_thr,
        "diagnostic": {
            "max_length": args.max_length,
            "max_rows_per_split": args.max_rows_per_split or None,
            "white_hat_max": args.white_hat_max,
        },
        "splits": {},
    }

    splits = list(DEFAULT_SPLITS)
    for split in splits:
        rows = limit_rows(load_split(args.clf_dir, split), args.max_rows_per_split)
        if not rows:
            print(f"skip {split}: missing")
            continue
        print(f"Scoring {split} n={len(rows)} …")
        y, p = score_rows(rows, clf_bin, model, args.batch_size)
        series[split] = (y, p)
        entry = {
            "n": len(rows),
            "malicious_rate": round(float(y.mean()), 4),
            "scores": score_summary(p),
            **auc_metrics(y, p),
            "at_active_threshold": threshold_metrics(y, p, active_thr),
            "at_default_threshold": threshold_metrics(y, p, default_thr),
        }
        report["splits"][split] = entry
        print(json.dumps({k: entry[k] for k in ("n", "roc_auc", "pr_auc", "at_active_threshold")}, indent=2))

    if args.hf_jsonl.exists():
        wh_rows = load_white_hat(args.hf_jsonl, args.white_hat_max)
        print(f"Scoring white_hat n={len(wh_rows)} …")
        y, p = score_rows(wh_rows, clf_bin, model, args.batch_size)
        series["white_hat"] = (y, p)
        entry = {
            "n": len(wh_rows),
            "malicious_rate": 0.0,
            "scores": score_summary(p),
            **auc_metrics(y, p),
            "at_active_threshold": threshold_metrics(y, p, active_thr),
        }
        report["splits"]["white_hat"] = entry

    if "white_hat" in series:
        for bench_name, pos_names in {
            "white_hat_vs_obfuscated": ("test_obfuscated",),
            "white_hat_vs_malware_code": ("test_malware_code",),
            "white_hat_vs_all_holdout_positive": ("test_obfuscated", "test_malware_code"),
        }.items():
            present = [name for name in pos_names if name in series]
            if not present:
                continue
            y_mix = np.concatenate([series["white_hat"][0], *[series[name][0] for name in present]])
            p_mix = np.concatenate([series["white_hat"][1], *[series[name][1] for name in present]])
            report.setdefault("mixed_benchmarks", {})[bench_name] = {
                "n": int(len(y_mix)),
                "positive_sources": present,
                **auc_metrics(y_mix, p_mix),
                "at_active_threshold": threshold_metrics(y_mix, p_mix, active_thr),
                "at_default_threshold": threshold_metrics(y_mix, p_mix, default_thr),
            }

    out_json = args.out_json or args.model_dir / "score_distribution.json"
    out_json.write_text(json.dumps(report, indent=2), encoding="utf-8")
    print(f"Wrote {out_json}")

    if not args.no_plot:
        try:
            plot_histograms(series, active_thr, args.out_png)
        except ImportError as e:
            raise SystemExit("matplotlib required: pip install matplotlib") from e


if __name__ == "__main__":
    main()
