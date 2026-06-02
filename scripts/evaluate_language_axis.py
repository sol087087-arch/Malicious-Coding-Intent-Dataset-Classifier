#!/usr/bin/env python3
"""Evaluate multilingual recall/FPR slices for saved binary heads.

The current historical classifier splits lost `lang` for obfuscated rows, so
this script evaluates language slices directly from `data/<lang>/...` sources.
It can also consume an optional multilingual benign JSONL when such a hold-out
exists.
"""

from __future__ import annotations

import argparse
import csv
import json
import os
import sys
from collections import defaultdict
from pathlib import Path

import numpy as np
import yaml

os.environ.setdefault("HF_HUB_OFFLINE", "1")
os.environ.setdefault("TRANSFORMERS_OFFLINE", "1")

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))

from evaluate_classifier import load_binary_threshold  # noqa: E402
from paths import SOURCE_LANG, canonical_raw, obfuscated_raw, processed_dir  # noqa: E402
from plot_score_dist import load_encoder  # noqa: E402

EMBED_MODEL = "BAAI/bge-m3"


def load_language_codes(path: Path) -> list[str]:
    data = yaml.safe_load(path.read_text(encoding="utf-8"))
    return [SOURCE_LANG] + [c for c in data.get("languages", []) if c != SOURCE_LANG]


def load_jsonl(path: Path) -> list[dict]:
    if not path.exists():
        return []
    return [json.loads(line) for line in path.read_text(encoding="utf-8").splitlines() if line.strip()]


def load_positive_terms(lang: str, split: str, limit: int, seed: int) -> list[dict]:
    if split == "canonical":
        path = canonical_raw(lang) if lang == SOURCE_LANG else processed_dir(lang) / "lexicon_deduped.jsonl"
        rows = load_jsonl(path)
        texts = []
        for row in rows:
            term = row.get("term")
            if not isinstance(term, str) or not term.strip():
                continue
            if row.get("phase") == "obfuscated":
                continue
            texts.append({"text": term.strip(), "lang": lang, "malicious": 1})
    elif split == "obfuscated":
        rows = load_jsonl(obfuscated_raw(lang))
        texts = [
            {"text": row["term"].strip(), "lang": lang, "malicious": 1}
            for row in rows
            if isinstance(row.get("term"), str) and row["term"].strip()
        ]
    else:
        raise ValueError(f"unknown positive split: {split}")

    rng = np.random.default_rng(seed + abs(hash((lang, split))) % 1_000_000)
    if limit > 0 and len(texts) > limit:
        idx = rng.choice(len(texts), size=limit, replace=False)
        texts = [texts[int(i)] for i in idx]
    return texts


def load_multilingual_benign(path: Path, limit_per_lang: int, seed: int) -> dict[str, list[dict]]:
    by_lang: dict[str, list[dict]] = defaultdict(list)
    for row in load_jsonl(path):
        if int(row.get("malicious", 0)) != 0:
            continue
        text = row.get("text")
        if not isinstance(text, str) or not text.strip():
            continue
        lang = row.get("lang") or row.get("language")
        if not isinstance(lang, str) or not lang.strip():
            lang = "unknown"
        by_lang[lang].append({"text": text.strip(), "lang": lang, "malicious": 0})

    out = {}
    for lang, rows in by_lang.items():
        rng = np.random.default_rng(seed + abs(hash(("benign", lang))) % 1_000_000)
        if limit_per_lang > 0 and len(rows) > limit_per_lang:
            idx = rng.choice(len(rows), size=limit_per_lang, replace=False)
            rows = [rows[int(i)] for i in idx]
        out[lang] = rows
    return out


def score_texts(model, clf_bin, texts: list[str], batch_size: int) -> np.ndarray:
    if not texts:
        return np.asarray([], dtype=float)
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


def summarize_positive(scores: np.ndarray, threshold: float) -> dict:
    hit = scores >= threshold
    return {
        "n": int(scores.size),
        "threshold": round(float(threshold), 6),
        "recall": round(float(hit.mean()), 4) if scores.size else None,
        "missed": int((~hit).sum()) if scores.size else 0,
        "score_p50": round(float(np.quantile(scores, 0.50)), 6) if scores.size else None,
        "score_p10": round(float(np.quantile(scores, 0.10)), 6) if scores.size else None,
    }


def summarize_negative(scores: np.ndarray, threshold: float) -> dict:
    flagged = scores >= threshold
    return {
        "n": int(scores.size),
        "threshold": round(float(threshold), 6),
        "false_positive_rate": round(float(flagged.mean()), 4) if scores.size else None,
        "flagged": int(flagged.sum()) if scores.size else 0,
        "score_p95": round(float(np.quantile(scores, 0.95)), 6) if scores.size else None,
    }


def write_csv(path: Path, report: dict) -> None:
    rows = []
    for model_name, model_report in report["models"].items():
        for split_name, split_report in model_report["positive_splits"].items():
            for lang, metrics in split_report.items():
                rows.append(
                    {
                        "model": model_name,
                        "split": split_name,
                        "lang": lang,
                        "n": metrics["n"],
                        "recall": metrics["recall"],
                        "missed": metrics["missed"],
                        "fpr": "",
                        "flagged": "",
                    }
                )
        for lang, metrics in model_report.get("benign_by_lang", {}).items():
            rows.append(
                {
                    "model": model_name,
                    "split": "benign",
                    "lang": lang,
                    "n": metrics["n"],
                    "recall": "",
                    "missed": "",
                    "fpr": metrics["false_positive_rate"],
                    "flagged": metrics["flagged"],
                }
            )
    with path.open("w", encoding="utf-8", newline="") as f:
        writer = csv.DictWriter(f, fieldnames=["model", "split", "lang", "n", "recall", "missed", "fpr", "flagged"])
        writer.writeheader()
        writer.writerows(rows)


def write_chart(path: Path, report: dict, split: str) -> None:
    import matplotlib

    matplotlib.use("Agg")
    import matplotlib.pyplot as plt

    langs = report["languages"]
    model_names = list(report["models"].keys())
    x = np.arange(len(langs))
    width = 0.8 / max(1, len(model_names))

    fig, ax = plt.subplots(figsize=(max(10, len(langs) * 0.55), 4.8))
    for i, model_name in enumerate(model_names):
        vals = [
            report["models"][model_name]["positive_splits"].get(split, {}).get(lang, {}).get("recall")
            for lang in langs
        ]
        vals = [np.nan if v is None else v * 100 for v in vals]
        ax.bar(x + (i - (len(model_names) - 1) / 2) * width, vals, width, label=model_name)

    ax.set_ylabel("Recall (%)")
    ax.set_title(f"Per-language {split} recall")
    ax.set_ylim(0, 101)
    ax.set_xticks(x)
    ax.set_xticklabels(langs, rotation=45, ha="right")
    ax.grid(axis="y", alpha=0.25)
    ax.legend(fontsize=8)
    fig.tight_layout()
    path.parent.mkdir(parents=True, exist_ok=True)
    fig.savefig(path, dpi=180)
    plt.close(fig)


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--model-dir", type=Path, action="append", required=True)
    ap.add_argument("--languages-file", type=Path, default=ROOT / "config" / "translation_languages_20.yaml")
    ap.add_argument("--out", type=Path, default=ROOT / "docs" / "language_axis_eval.json")
    ap.add_argument("--csv-out", type=Path, default=ROOT / "docs" / "language_axis_eval.csv")
    ap.add_argument("--chart-out", type=Path, default=ROOT / "docs" / "language_axis_obfuscated_recall.png")
    ap.add_argument("--benign-jsonl", type=Path, default=None)
    ap.add_argument("--limit-per-lang", type=int, default=500)
    ap.add_argument("--benign-limit-per-lang", type=int, default=500)
    ap.add_argument("--batch-size", type=int, default=32)
    ap.add_argument("--max-length", type=int, default=128)
    ap.add_argument("--device", choices=["auto", "cuda", "cpu"], default="auto")
    ap.add_argument("--profile", default=None)
    ap.add_argument("--seed", type=int, default=13)
    args = ap.parse_args()

    import joblib

    langs = load_language_codes(args.languages_file)
    positives = {
        split: {lang: load_positive_terms(lang, split, args.limit_per_lang, args.seed) for lang in langs}
        for split in ("canonical", "obfuscated")
    }
    benign = load_multilingual_benign(args.benign_jsonl, args.benign_limit_per_lang, args.seed) if args.benign_jsonl else {}

    model = load_encoder(EMBED_MODEL, args.device, args.max_length)
    report = {
        "languages": langs,
        "limit_per_lang": args.limit_per_lang,
        "benign_jsonl": str(args.benign_jsonl) if args.benign_jsonl else None,
        "note": (
            "Positive per-language recall is evaluated from data/<lang>/ sources. "
            "Per-language FPR is only reported when --benign-jsonl is supplied."
        ),
        "models": {},
    }

    for model_dir in args.model_dir:
        clf_bin = joblib.load(model_dir / "clf_binary.joblib")
        threshold = load_binary_threshold(model_dir, profile=args.profile)
        model_name = model_dir.name
        model_report = {"model_dir": str(model_dir), "threshold": threshold, "positive_splits": {}}

        for split, by_lang in positives.items():
            model_report["positive_splits"][split] = {}
            for lang, rows in by_lang.items():
                scores = score_texts(model, clf_bin, [r["text"] for r in rows], args.batch_size)
                model_report["positive_splits"][split][lang] = summarize_positive(scores, threshold)

        if benign:
            model_report["benign_by_lang"] = {}
            for lang, rows in sorted(benign.items()):
                scores = score_texts(model, clf_bin, [r["text"] for r in rows], args.batch_size)
                model_report["benign_by_lang"][lang] = summarize_negative(scores, threshold)

        report["models"][model_name] = model_report

    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(report, indent=2, ensure_ascii=False), encoding="utf-8")
    write_csv(args.csv_out, report)
    write_chart(args.chart_out, report, "obfuscated")
    print(json.dumps(report, indent=2, ensure_ascii=False))
    print(f"Wrote {args.out}")
    print(f"Wrote {args.csv_out}")
    print(f"Wrote {args.chart_out}")


if __name__ == "__main__":
    main()
