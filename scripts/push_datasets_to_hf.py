#!/usr/bin/env python3
"""Prepare/push classifier splits to a Hugging Face dataset repo.

The default target is the v6 code-aware dataset used by the public GitHub
README. The script accepts --clf-dir/--repo-id so v8 or future ablations can be
published without editing the file.
"""

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
DEFAULT_CLF_DIR = ROOT / "data" / "clf" / "v6_code_aware_50k_oss_clean_benign_code"
DEFAULT_REPO = "NecroMOnk/malicious-coding-intent-v6-data"
DEFAULT_GITHUB = "https://github.com/sol087087-arch/Malicious-Coding-Intent-Dataset-Classifier"
PRETTY_NAME = "Malicious Coding Intent Classifier Data"
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


def ensure_repo(repo_id: str, token: str, private: bool) -> None:
    try:
        curl_api("GET", f"https://huggingface.co/api/datasets/{repo_id}", token)
        print(f"Repo exists: {repo_id}")
    except subprocess.CalledProcessError:
        print(f"Creating dataset repo {repo_id} ...")
        owner, name = repo_id.split("/", 1)
        payload = {"name": name, "type": "dataset", "private": private}
        if owner != hf_username(token):
            payload["organization"] = owner
        curl_api(
            "POST",
            "https://huggingface.co/api/repos/create",
            token,
            payload,
        )
        curl_api("GET", f"https://huggingface.co/api/datasets/{repo_id}", token)


def split_names(clf_dir: Path) -> list[str]:
    preferred = ["train", "val", "test", "test_obfuscated", "test_malware_code", "test_benign_code"]
    existing = {p.stem for p in clf_dir.glob("*.jsonl")}
    return [name for name in preferred if name in existing] + sorted(existing - set(preferred))


def _normalize_categories(value) -> list[str]:
    if isinstance(value, list):
        return [str(x) for x in value]
    if isinstance(value, str) and value.strip():
        try:
            parsed = json.loads(value)
        except json.JSONDecodeError:
            return []
        return [str(x) for x in parsed] if isinstance(parsed, list) else []
    return []


def jsonl_to_parquet(src: Path, dst: Path) -> tuple[int, int]:
    import pandas as pd
    import pyarrow as pa
    import pyarrow.parquet as pq

    rows = [json.loads(line) for line in src.read_text(encoding="utf-8").splitlines() if line.strip()]
    df = pd.DataFrame(rows)
    if "categories" not in df.columns:
        df["categories"] = [[] for _ in range(len(df))]
    df["categories"] = df["categories"].apply(_normalize_categories)
    for col in ("source", "lang"):
        if col not in df.columns:
            df[col] = ""
        df[col] = df[col].fillna("").astype(str)
    df = df[["text", "malicious", "categories", "source", "lang"]]
    df["text"] = df["text"].astype(str)
    df["malicious"] = df["malicious"].astype("int64")

    dst.parent.mkdir(parents=True, exist_ok=True)
    table = pa.Table.from_pandas(df, preserve_index=False)
    table = table.cast(
        pa.schema(
            [
                pa.field("text", pa.string()),
                pa.field("malicious", pa.int64()),
                pa.field("categories", pa.list_(pa.string())),
                pa.field("source", pa.string()),
                pa.field("lang", pa.string()),
            ]
        )
    )
    pq.write_table(
        table,
        dst,
        compression="zstd",
        write_statistics=True,
        write_page_index=True,
        row_group_size=2048,
    )
    print(f"  {src.name} -> {dst.name} ({len(df)} rows, {dst.stat().st_size // 1024} KB)")
    return len(df), dst.stat().st_size


def _split_role(name: str) -> str:
    return {
        "train": "train",
        "val": "validation",
        "test": "in-distribution test",
        "test_obfuscated": "positive hold-out: obfuscated malicious terms",
        "test_malware_code": "positive hold-out: malware/decompiled-code snippets",
        "test_benign_code": "negative hold-out: benign code hard negatives",
    }.get(name, name)


def hf_readme(
    *,
    repo_id: str,
    clf_dir: Path,
    report: dict,
    split_stats: dict[str, dict[str, int]],
    github_url: str,
) -> str:
    langs = report.get("languages") or ["en"]
    lang_yaml = "\n".join(f"  - {code}" for code in langs)
    total_rows = sum(item["num_examples"] for item in split_stats.values())
    total_bytes = sum(item["num_bytes"] for item in split_stats.values())
    variant = report.get("variant", clf_dir.name)

    data_files = "\n".join(
        f"      - split: {name}\n        path: data/{name}.parquet" for name in split_stats
    )
    splits_yaml = "\n".join(
        f"      - name: {name}\n        num_bytes: {stats['num_bytes']}\n        num_examples: {stats['num_examples']}"
        for name, stats in split_stats.items()
    )
    table_rows = "\n".join(
        f"| `data/{name}.parquet` | {stats['num_examples']:,} | {_split_role(name)} |"
        for name, stats in split_stats.items()
    )

    return f"""---
license: mit
pretty_name: {PRETTY_NAME}
language:
{lang_yaml}
multilinguality:
  - multilingual
annotations_creators:
  - machine-generated
language_creators:
  - machine-generated
source_datasets:
  - original
task_categories:
  - text-classification
tags:
  - safety
  - malware
  - code
  - multilingual
  - red-team
configs:
  - config_name: default
    data_files:
{data_files}
dataset_info:
  - config_name: default
    description: >
      Classifier splits for multilingual malicious-coding-intent detection.
      Includes lexicon/template/HF-derived prompt rows, malware/decompiled-code
      positive hold-outs, and benign-code hard negatives. Total rows: {total_rows}.
    features:
      - name: text
        dtype: string
      - name: malicious
        dtype: int64
      - name: categories
        sequence: string
      - name: source
        dtype: string
      - name: lang
        dtype: string
    splits:
{splits_yaml}
    download_size: {total_bytes}
    dataset_size: {total_bytes}
---

# {PRETTY_NAME}

Dataset artifact for [{github_url}]({github_url}).

Variant: `{variant}`

## Splits

| File | Rows | Role |
|------|-----:|------|
{table_rows}

## Schema

- `text` - prompt/code snippet.
- `malicious` - `1` malicious intent/code, `0` benign.
- `categories` - multilabel category ids; empty for benign rows.
- `source` - provenance string.
- `lang` - language code when available; empty for legacy rows.

See `labels.json` and `dataset_report.json` for label names and build counts.

## Evaluation Context

This dataset supports the v6/v8 red-team evaluation:

- obfuscation recall,
- language-pivot recall,
- benign-code false-positive checks,
- code-vs-intent hard-negative ablations.

The malware-code and obfuscated splits are positive-only stress checks, so they
measure recall, not precision. Use matched negative hold-outs for FPR/precision.

GitHub: [{github_url}]({github_url})
HF dataset repo id: `{repo_id}`
"""


def build_staging(clf_dir: Path, staging: Path, repo_id: str, github_url: str) -> None:
    if staging.exists():
        shutil.rmtree(staging)
    data_dir = staging / "data"
    data_dir.mkdir(parents=True)

    names = split_names(clf_dir)
    if not names:
        raise SystemExit(f"No JSONL splits found in {clf_dir}")

    split_stats: dict[str, dict[str, int]] = {}
    for name in names:
        rows, size = jsonl_to_parquet(clf_dir / f"{name}.jsonl", data_dir / f"{name}.parquet")
        split_stats[name] = {"num_examples": rows, "num_bytes": size}

    for meta in ("labels.json", "dataset_report.json"):
        src = clf_dir / meta
        if src.exists():
            shutil.copy2(src, staging / meta)

    report_path = clf_dir / "dataset_report.json"
    report = json.loads(report_path.read_text(encoding="utf-8")) if report_path.exists() else {}
    (staging / "README.md").write_text(
        hf_readme(
            repo_id=repo_id,
            clf_dir=clf_dir,
            report=report,
            split_stats=split_stats,
            github_url=github_url,
        ),
        encoding="utf-8",
    )
    (staging / ".gitattributes").write_text(
        "data/*.parquet filter=lfs diff=lfs merge=lfs -text\n",
        encoding="utf-8",
    )


def git_push(staging: Path, repo_id: str, token: str, message: str) -> None:
    url = f"https://huggingface.co/datasets/{repo_id}"
    work = staging.parent / "_hf_git_work"
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
                if dest.is_dir():
                    shutil.rmtree(dest)
                else:
                    dest.unlink()
            if item.is_dir():
                shutil.copytree(item, dest)
            else:
                shutil.copy2(item, dest)

        run(["git", "add", "-A"], cwd=work)
        commit = run(["git", "commit", "-m", message], cwd=work, check=False)
        if commit.returncode != 0:
            print("No dataset changes to commit.")
        else:
            subprocess.run(["git", "push"], cwd=work, check=True, text=True, env=env)
    shutil.rmtree(work, ignore_errors=True)
    print(f"\nPublished: https://huggingface.co/datasets/{repo_id}")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--clf-dir", type=Path, default=DEFAULT_CLF_DIR)
    parser.add_argument("--repo-id", default=DEFAULT_REPO)
    parser.add_argument("--github-url", default=DEFAULT_GITHUB)
    parser.add_argument("--private", action="store_true")
    parser.add_argument("--staging", type=Path, default=ROOT / "data" / "hf_push_staging")
    parser.add_argument("--message", default="Publish v6 classifier splits")
    parser.add_argument("--prepare-only", action="store_true")
    args = parser.parse_args()

    if not args.clf_dir.exists():
        raise SystemExit(f"Missing {args.clf_dir}; run build_classifier_dataset.py first")

    build_staging(args.clf_dir, args.staging, args.repo_id, args.github_url)
    if args.prepare_only:
        print(f"Staging ready: {args.staging}")
        return

    token = load_token()
    ensure_repo(args.repo_id, token, args.private)
    git_push(args.staging, args.repo_id, token, args.message)


if __name__ == "__main__":
    main()
