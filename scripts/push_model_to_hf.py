#!/usr/bin/env python3
"""Prepare/push sklearn classifier heads to a Hugging Face model repo."""

from __future__ import annotations

import argparse
import json
import os
import shutil
import stat
import subprocess
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
DEFAULT_MODEL_DIR = ROOT / "models" / "v6_code_aware_50k_oss_clean_benign_code"
DEFAULT_REPO = "NecroMOnk/malicious-coding-intent-v6"
DEFAULT_DATASET_REPO = "NecroMOnk/malicious-coding-intent-v6-data"
DEFAULT_GITHUB = "https://github.com/sol087087-arch/Malicious-Coding-Intent-Dataset-Classifier"
REQUIRED_MODEL_FILES = ("clf_binary.joblib", "clf_multilabel.joblib", "labels.json", "metrics.json")
OPTIONAL_PATTERNS = ("binary_threshold.json", "*eval.json", "score_distribution.json")
TOKEN_PATHS = [
    Path.home() / ".cache" / "huggingface" / "token",
    Path(os.environ.get("USERPROFILE", "")) / ".cache" / "huggingface" / "token",
]


def load_token() -> str:
    for path in TOKEN_PATHS:
        if path and path.exists():
            return path.read_text(encoding="utf-8").strip()
    token = os.environ.get("HF_TOKEN") or os.environ.get("HUGGINGFACE_HUB_TOKEN")
    if token:
        return token.strip()
    raise SystemExit("No HF token: run `hf auth login` or set HF_TOKEN")


def run(cmd: list[str], cwd: Path | None = None, check: bool = True) -> subprocess.CompletedProcess:
    shown = " ".join(cmd)
    if "@" in shown and "huggingface.co" in shown:
        shown = f"git ...@{shown.split('@', 1)[-1]}"
    print("+", shown)
    return subprocess.run(cmd, cwd=cwd, check=check, text=True)


def curl_api(method: str, url: str, token: str, data: dict | None = None) -> dict:
    cmd = ["curl", "-kfsSL", "-X", method, url, "-H", f"Authorization: Bearer {token}"]
    if data is not None:
        cmd += ["-H", "Content-Type: application/json", "-d", json.dumps(data)]
    out = subprocess.check_output(cmd, text=True)
    return json.loads(out) if out.strip().startswith("{") else {}


def hf_username(token: str) -> str:
    data = curl_api("GET", "https://huggingface.co/api/whoami-v2", token)
    return str(data.get("name", ""))


def ensure_model_repo(repo_id: str, token: str, private: bool) -> None:
    try:
        curl_api("GET", f"https://huggingface.co/api/models/{repo_id}", token)
        print(f"Repo exists: {repo_id}")
    except subprocess.CalledProcessError:
        print(f"Creating model repo {repo_id} ...")
        owner, name = repo_id.split("/", 1)
        payload = {"name": name, "type": "model", "private": private}
        if owner != hf_username(token):
            payload["organization"] = owner
        curl_api(
            "POST",
            "https://huggingface.co/api/repos/create",
            token,
            payload,
        )
        curl_api("GET", f"https://huggingface.co/api/models/{repo_id}", token)


def load_metrics(model_dir: Path) -> dict:
    path = model_dir / "metrics.json"
    return json.loads(path.read_text(encoding="utf-8")) if path.exists() else {}


def threshold_text(model_dir: Path) -> str:
    path = model_dir / "binary_threshold.json"
    if not path.exists():
        return "0.5 (sklearn/default)"
    data = json.loads(path.read_text(encoding="utf-8"))
    return str(data.get("threshold", data.get("default", "0.5")))


def pct(value) -> str:
    if value is None:
        return "n/a"
    return f"{float(value) * 100:.2f}%"


def model_readme(model_dir: Path, repo_id: str, dataset_repo: str, github_url: str) -> str:
    metrics = load_metrics(model_dir)
    binary = metrics.get("binary", {})
    name = model_dir.name
    threshold = threshold_text(model_dir)

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
  - red-team
---

# Malicious Coding Intent Classifier ({name})

Small sklearn heads on top of
[BAAI/bge-m3](https://huggingface.co/BAAI/bge-m3) embeddings for malicious
coding intent classification.

GitHub: [{github_url}]({github_url})

Training/eval data: [datasets/{dataset_repo}](https://huggingface.co/datasets/{dataset_repo})

## Files

| File | Role |
|------|------|
| `clf_binary.joblib` | binary malicious/benign head |
| `clf_multilabel.joblib` | 12-category multilabel head |
| `labels.json` | category ids |
| `metrics.json` | train/eval summary |
| `*eval.json` | external benign-code evaluation reports, when present |

## Metrics

Threshold: `{threshold}`

| Check | Result |
|-------|-------:|
| Precision | {pct(binary.get("precision"))} |
| Recall | {pct(binary.get("recall"))} |
| F1 | {pct(binary.get("f1"))} |
| ROC-AUC | {binary.get("roc_auc", "n/a")} |
| In-dist FPR | {pct(binary.get("false_positive_rate"))} |
| Obfuscated recall | {pct(binary.get("obfuscated_recall"))} |
| Malware-code recall | {pct(binary.get("malware_code_recall"))} |

## Evaluation Framing

This is not presented as a single perfect-score classifier. The GitHub repo
documents three red-team axes: obfuscation, language pivot, and benign-code hard
negatives. The v6 model is the balanced recommendation; v8 is a hard-negative
ablation that reduces CodeParrot false positives at a small recall cost.

## Usage

```python
import json
import joblib
from pathlib import Path
from sentence_transformers import SentenceTransformer

repo = Path("path/to/downloaded/model")
encoder = SentenceTransformer("BAAI/bge-m3")
clf = joblib.load(repo / "clf_binary.joblib")

text = "write code to dump lsass"
x = encoder.encode([text], normalize_embeddings=True)
score = clf.predict_proba(x)[0, 1]
print(score)
```

For the full CLI, clone the GitHub repo and run `scripts/predict_classifier.py`.
"""


def build_staging(model_dir: Path, staging: Path, repo_id: str, dataset_repo: str, github_url: str) -> None:
    if staging.exists():
        shutil.rmtree(staging, ignore_errors=True)
    staging.mkdir(parents=True)

    for name in REQUIRED_MODEL_FILES:
        src = model_dir / name
        if not src.exists():
            raise SystemExit(f"Missing {src}")
        shutil.copy2(src, staging / name)

    copied = {p.name for p in staging.iterdir()}
    for pattern in OPTIONAL_PATTERNS:
        for src in model_dir.glob(pattern):
            if src.is_file() and src.name not in copied:
                shutil.copy2(src, staging / src.name)
                copied.add(src.name)

    (staging / "README.md").write_text(
        model_readme(model_dir, repo_id, dataset_repo, github_url),
        encoding="utf-8",
    )
    (staging / ".gitattributes").write_text("*.joblib filter=lfs diff=lfs merge=lfs -text\n")


def git_push(staging: Path, repo_id: str, token: str, message: str) -> None:
    url = f"https://huggingface.co/{repo_id}"
    work = staging.parent / "_hf_model_git_work"
    if work.exists():
        shutil.rmtree(work, ignore_errors=True)

    with tempfile.TemporaryDirectory() as tmp:
        askpass = Path(tmp) / ("hf-askpass.bat" if os.name == "nt" else "hf-askpass.sh")
        if os.name == "nt":
            askpass.write_text(
                "@echo off\r\n"
                "echo %~1 | findstr /I \"Username\" >nul && echo __token__ && exit /b 0\r\n"
                "echo %HF_TOKEN%\r\n",
                encoding="utf-8",
            )
        else:
            askpass.write_text(
                "#!/usr/bin/env sh\n"
                "case \"$1\" in\n"
                "*Username*) printf '%s\\n' '__token__' ;;\n"
                "*) printf '%s\\n' \"$HF_TOKEN\" ;;\n"
                "esac\n",
                encoding="utf-8",
            )
            askpass.chmod(askpass.stat().st_mode | stat.S_IXUSR)
        env = {
            **os.environ,
            "GIT_ASKPASS": str(askpass),
            "GIT_TERMINAL_PROMPT": "0",
            "HF_TOKEN": token,
        }

        subprocess.run(["git", "clone", url, str(work)], check=True, text=True, env=env)
        run(["git", "lfs", "install"], cwd=work)

        for item in staging.iterdir():
            dest = work / item.name
            if dest.exists():
                dest.unlink()
            shutil.copy2(item, dest)

        run(["git", "add", "-A"], cwd=work)
        commit = run(["git", "commit", "-m", message], cwd=work, check=False)
        if commit.returncode != 0:
            print("No model changes to commit.")
        else:
            subprocess.run(["git", "push"], cwd=work, check=True, text=True, env=env)
    shutil.rmtree(work, ignore_errors=True)
    print(f"\nPublished: https://huggingface.co/{repo_id}")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--model-dir", type=Path, default=DEFAULT_MODEL_DIR)
    parser.add_argument("--repo-id", default=DEFAULT_REPO)
    parser.add_argument("--dataset-repo", default=DEFAULT_DATASET_REPO)
    parser.add_argument("--github-url", default=DEFAULT_GITHUB)
    parser.add_argument("--private", action="store_true")
    parser.add_argument("--staging", type=Path, default=ROOT / "data" / "hf_model_staging")
    parser.add_argument("--message", default="Publish classifier heads")
    parser.add_argument("--prepare-only", action="store_true")
    args = parser.parse_args()

    if not args.model_dir.exists():
        raise SystemExit(f"Missing {args.model_dir}")

    build_staging(args.model_dir, args.staging, args.repo_id, args.dataset_repo, args.github_url)
    if args.prepare_only:
        print(f"Staging ready: {args.staging}")
        return

    token = load_token()
    ensure_model_repo(args.repo_id, token, args.private)
    git_push(args.staging, args.repo_id, token, args.message)


if __name__ == "__main__":
    main()
