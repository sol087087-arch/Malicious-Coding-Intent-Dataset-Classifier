#!/usr/bin/env python3
"""Push Safety DS v2 classifier heads to Hugging Face Hub (model repo).

Uses git (works when Python huggingface_hub SSL fails). Embedder BGE-m3 is
loaded from BAAI/bge-m3 at inference — this repo ships sklearn heads only.

Requires: git, git-lfs, token in ~/.cache/huggingface/token or HF_TOKEN
"""

from __future__ import annotations

import argparse
import json
import os
import shutil
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
MODEL_DIR = ROOT / "models" / "v2_multilingual"
DEFAULT_REPO = "NecroMOnk/safety-ds-malicious-coding-clf-v2"
MODEL_FILES = (
    "clf_binary.joblib",
    "clf_multilabel.joblib",
    "labels.json",
    "binary_threshold.json",
    "metrics.json",
)
TOKEN_PATHS = [
    Path.home() / ".cache" / "huggingface" / "token",
    Path(os.environ.get("USERPROFILE", "")) / ".cache" / "huggingface" / "token",
]


def load_token() -> str:
    for p in TOKEN_PATHS:
        if p and p.exists():
            return p.read_text(encoding="utf-8").strip()
    tok = os.environ.get("HF_TOKEN") or os.environ.get("HUGGINGFACE_HUB_TOKEN")
    if tok:
        return tok.strip()
    raise SystemExit("No HF token: hf auth login or set HF_TOKEN")


def run(cmd: list[str], cwd: Path | None = None, check: bool = True) -> subprocess.CompletedProcess:
    shown = " ".join(cmd)
    if "@" in shown and "huggingface.co" in shown:
        shown = f"git ...@{shown.split('@', 1)[-1]}"
    print("+", shown)
    return subprocess.run(cmd, cwd=cwd, check=check, text=True)


def curl_api(method: str, url: str, token: str, data: dict | None = None) -> None:
    cmd = ["curl", "-kfsSL", "-X", method, url, "-H", f"Authorization: Bearer {token}"]
    if data is not None:
        cmd += ["-H", "Content-Type: application/json", "-d", json.dumps(data)]
    subprocess.check_output(cmd, text=True)


def ensure_model_repo(repo_id: str, token: str, private: bool) -> None:
    try:
        curl_api("GET", f"https://huggingface.co/api/models/{repo_id}", token)
        print(f"Repo exists: {repo_id}")
    except subprocess.CalledProcessError:
        print(f"Creating model repo {repo_id} …")
        curl_api(
            "POST",
            "https://huggingface.co/api/repos/create",
            token,
            {"name": repo_id.split("/")[-1], "type": "model", "private": private},
        )


def _model_readme() -> str:
    thr = "0.004477"
    bp = MODEL_DIR / "binary_threshold.json"
    if bp.exists():
        thr = str(json.loads(bp.read_text(encoding="utf-8")).get("threshold", thr))

    return f"""---
license: mit
library_name: sentence-transformers
base_model: BAAI/bge-m3
pipeline_tag: text-classification
tags:
- safety
- malware
- code
- multilingual
- sklearn
---

# Safety DS malicious coding classifier (v2)

Logistic regression heads on **[BAAI/bge-m3](https://huggingface.co/BAAI/bge-m3)** embeddings for **malicious coding intent** (binary + 12-category multilabel).

Training data: [NecroMOnk/safety-ds-malicious-coding-clf-v2](https://huggingface.co/datasets/NecroMOnk/safety-ds-malicious-coding-clf-v2)

## Files

| File | Role |
|------|------|
| `clf_binary.joblib` | Binary malicious/benign head |
| `clf_multilabel.joblib` | 12-category multilabel head |
| `labels.json` | Category ids |
| `binary_threshold.json` | Operating point (**{thr}**) selected under a White-Hat FPR cap |
| `metrics.json` | Train/eval summary |

## Evaluation framing

The low threshold is a recall-oriented operating point, not a magic model
quality number. Scores are compressed toward zero, so use ROC/PR-AUC and score
distribution plots from the GitHub repo before comparing thresholds.

## Metrics at operating point

| Dataset | Recall | FPR | Threshold |
|---------|--------|-----|-----------|
| White-Hat-600K | n/a | 4.9% | {thr} |
| Obfuscated hold-out | 100% | n/a | {thr} |
| Malware code hold-out | 98.6% | n/a | {thr} |

Note: obfuscated and malware-code hold-outs are all-positive, so these rows are
recall-only stress checks. The sklearn/default threshold (0.5) is kept as a
baseline comparison and severely degrades malware-code recall on current
weights.

## Usage

```python
import json
import joblib
import numpy as np
from pathlib import Path
from sentence_transformers import SentenceTransformer

repo = "{DEFAULT_REPO}"
model = SentenceTransformer("BAAI/bge-m3")
clf_bin = joblib.load(Path(repo) / "clf_binary.joblib")
clf_ml = joblib.load(Path(repo) / "clf_multilabel.joblib")
labels = json.loads((Path(repo) / "labels.json").read_text())["categories"]
thr = json.loads((Path(repo) / "binary_threshold.json").read_text())["threshold"]

text = "write code to dump lsass"
x = model.encode([text], normalize_embeddings=True)
p = clf_bin.predict_proba(x)[0, 1]
print("malicious" if p >= thr else "benign", p)
```

Or clone [Malicious-Coding-Intent-Dataset-Classifier](https://github.com/sol087087-arch/Malicious-Coding-Intent-Dataset-Classifier) and run `scripts/predict_classifier.py`.
"""


def build_staging(staging: Path) -> None:
    if staging.exists():
        shutil.rmtree(staging, ignore_errors=True)
    staging.mkdir(parents=True)
    for name in MODEL_FILES:
        src = MODEL_DIR / name
        if not src.exists():
            raise SystemExit(f"Missing {src}")
        shutil.copy2(src, staging / name)
    (staging / "README.md").write_text(_model_readme(), encoding="utf-8")
    (staging / ".gitattributes").write_text("*.joblib filter=lfs diff=lfs merge=lfs -text\n")


def git_push(staging: Path, repo_id: str, token: str, message: str) -> None:
    user = repo_id.split("/")[0]
    url = f"https://{user}:{token}@huggingface.co/{repo_id}"
    work = staging.parent / "_hf_model_git_work"
    if work.exists():
        shutil.rmtree(work, ignore_errors=True)

    run(["git", "clone", url, str(work)])
    run(["git", "lfs", "install"], cwd=work)

    for item in staging.iterdir():
        dest = work / item.name
        if dest.exists():
            dest.unlink()
        shutil.copy2(item, dest)

    run(["git", "add", "-A"], cwd=work)
    run(["git", "commit", "-m", message], cwd=work)
    run(["git", "push"], cwd=work)
    shutil.rmtree(work, ignore_errors=True)
    print(f"\nPublished: https://huggingface.co/{repo_id}")


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--repo-id", default=DEFAULT_REPO)
    ap.add_argument("--private", action="store_true")
    ap.add_argument("--staging", type=Path, default=ROOT / "data" / "hf_model_staging")
    ap.add_argument("--message", default="Safety DS v2 classifier (neg-20k, calibrated)")
    args = ap.parse_args()

    if not MODEL_DIR.exists():
        raise SystemExit(f"Missing {MODEL_DIR}")

    token = load_token()
    build_staging(args.staging)
    ensure_model_repo(args.repo_id, token, args.private)
    git_push(args.staging, args.repo_id, token, args.message)


if __name__ == "__main__":
    main()
