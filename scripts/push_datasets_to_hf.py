#!/usr/bin/env python3
"""Push Safety DS clf v2 splits to Hugging Face Hub (dataset repo).

Uses git + git-lfs (works when Python httpx SSL fails). Requires:
  - git, git-lfs
  - token in ~/.cache/huggingface/token or HF_TOKEN env
"""

from __future__ import annotations

import argparse
import json
import os
import shutil
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLF_DIR = ROOT / "data" / "clf" / "v2"
DEFAULT_REPO = "NecroMOnk/safety-ds-malicious-coding-clf-v2"
PRETTY_NAME = "Multilingual Malicious Coding Intent Dataset"
SPLITS = ("train", "val", "test", "test_obfuscated", "test_malware_code")
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
        shown = shown.split("@", 1)[-1]
        shown = f"git ...@{shown}"
    print("+", shown)
    return subprocess.run(cmd, cwd=cwd, check=check, text=True)


def curl_api(method: str, url: str, token: str, data: dict | None = None) -> dict:
    cmd = ["curl", "-kfsSL", "-X", method, url, "-H", f"Authorization: Bearer {token}"]
    if data is not None:
        cmd += ["-H", "Content-Type: application/json", "-d", json.dumps(data)]
    out = subprocess.check_output(cmd, text=True)
    return json.loads(out) if out.strip().startswith("{") else {}


def ensure_repo(repo_id: str, token: str, private: bool) -> None:
    try:
        curl_api("GET", f"https://huggingface.co/api/datasets/{repo_id}", token)
        print(f"Repo exists: {repo_id}")
    except subprocess.CalledProcessError:
        print(f"Creating dataset repo {repo_id} …")
        curl_api(
            "POST",
            "https://huggingface.co/api/repos/create",
            token,
            {"name": repo_id.split("/")[-1], "type": "dataset", "private": private},
        )


def _normalize_categories(val) -> list[str]:
    if isinstance(val, list):
        return [str(x) for x in val]
    if isinstance(val, str) and val.strip():
        try:
            parsed = json.loads(val)
            return [str(x) for x in parsed] if isinstance(parsed, list) else []
        except json.JSONDecodeError:
            return []
    return []


def jsonl_to_parquet(src: Path, dst: Path) -> None:
    import pandas as pd
    import pyarrow as pa
    import pyarrow.parquet as pq

    rows = [json.loads(l) for l in src.read_text(encoding="utf-8").splitlines() if l.strip()]
    df = pd.DataFrame(rows)
    df["categories"] = df["categories"].apply(_normalize_categories)
    if "source" not in df.columns:
        df["source"] = ""
    df["source"] = df["source"].fillna("").astype(str)
    df = df[["text", "malicious", "categories", "source"]]
    df["text"] = df["text"].astype(str)
    df["malicious"] = df["malicious"].astype("int64")

    dst.parent.mkdir(parents=True, exist_ok=True)
    table = pa.Table.from_pandas(df, preserve_index=False)
    schema = pa.schema(
        [
            pa.field("text", pa.string()),
            pa.field("malicious", pa.int64()),
            pa.field("categories", pa.list_(pa.string())),
            pa.field("source", pa.string()),
        ]
    )
    table = table.cast(schema)
    pq.write_table(
        table,
        dst,
        compression="zstd",
        write_statistics=True,
        write_page_index=True,
        row_group_size=2048,
    )
    print(f"  {src.name} -> {dst.name} ({len(df)} rows, {dst.stat().st_size // 1024} KB)")


def _split_stats(staging_data: Path) -> dict[str, dict[str, int]]:
    """Row counts and on-disk bytes per parquet shard (for coherent dataset card)."""
    out: dict[str, dict[str, int]] = {}
    for name in SPLITS:
        p = staging_data / f"{name}.parquet"
        if p.exists():
            import pandas as pd

            out[name] = {
                "num_examples": len(pd.read_parquet(p, columns=["malicious"])),
                "num_bytes": p.stat().st_size,
            }
    return out


def _hf_readme(report: dict, langs: list[str], train_n: int, split_stats: dict[str, dict[str, int]]) -> str:
    lang_yaml = "\n".join(f"  - {c}" for c in langs) or "  - en"
    sc = report.get("split_counts", {})
    n_train = split_stats.get("train", {}).get("num_examples", sc.get("train", train_n))
    n_val = split_stats.get("val", {}).get("num_examples", sc.get("val", 0))
    n_test = split_stats.get("test", {}).get("num_examples", sc.get("test", 0))
    n_obf = split_stats.get("test_obfuscated", {}).get("num_examples", report.get("obfuscated_test", 0))
    n_mal = split_stats.get("test_malware_code", {}).get("num_examples", report.get("malware_code_test", 0))
    total_rows = n_train + n_val + n_test + n_obf + n_mal
    total_bytes = sum(s.get("num_bytes", 0) for s in split_stats.values())
    hf_mode = report.get("hf_in_train", "neg-only")
    variant = report.get("variant", "v2_multilingual")

    def split_yaml(key: str, split_name: str, n_rows: int) -> str:
        nbytes = split_stats.get(key, {}).get("num_bytes", 0)
        return f"""      - name: {split_name}
        num_bytes: {nbytes}
        num_examples: {n_rows}"""

    front = f"""---
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
size_categories:
  - 100K<n<1M
task_categories:
  - text-classification
tags:
  - safety
  - malware
  - code
  - multilingual
  - text
configs:
  - config_name: default
    data_files:
      - split: train
        path: data/train.parquet
      - split: validation
        path: data/val.parquet
      - split: test
        path: data/test.parquet
      - split: obfuscated
        path: data/test_obfuscated.parquet
      - split: malware_code
        path: data/test_malware_code.parquet
dataset_info:
  - config_name: default
    description: >
      Multilingual malicious-coding-intent dataset (lexicon positives, template + HF benign
      negatives). Hold-out splits for obfuscated lexicon and real malware code. Targets
      code/prompt safety classifiers (e.g. BGE-m3 + logistic heads). Total rows: {total_rows}.
    features:
      - name: text
        dtype: string
      - name: malicious
        dtype: int64
      - name: categories
        sequence: string
      - name: source
        dtype: string
    splits:
{split_yaml("train", "train", n_train)}
{split_yaml("val", "validation", n_val)}
{split_yaml("test", "test", n_test)}
{split_yaml("test_obfuscated", "obfuscated", n_obf)}
{split_yaml("test_malware_code", "malware_code", n_mal)}
    download_size: {total_bytes}
    dataset_size: {total_bytes}
---

"""
    body = f"""# {PRETTY_NAME}

Multilingual **malicious coding intent** dataset (Safety DS v2) for training/evaluating binary + multilabel classifiers.

## Splits (parquet)

| File | Rows | Role |
|------|------|------|
| `data/train.parquet` | {n_train} | train |
| `data/val.parquet` | {n_val} | validation |
| `data/test.parquet` | {n_test} | in-distribution test |
| `data/test_obfuscated.parquet` | {n_obf} | hold-out (obfuscated lexicon) |
| `data/test_malware_code.parquet` | {n_mal} | hold-out (malware code pool) |

## Schema

- `text` — code or prompt snippet
- `malicious` — `0` benign, `1` malicious
- `categories` — list of harm category ids (multilabel; empty list if benign)
- `source` — provenance (e.g. `lexicon_multilingual`, `template_negative`, `hf:…`)

See `labels.json` and `dataset_report.json`.

## Build

- Variant: `{variant}`
- `hf_in_train`: `{hf_mode}` — HF benign negatives in train; HF positives for benchmark only.

## Dataset Viewer

The Hub shows a **paginated preview** (not a full in-browser scan of all {total_rows:,} rows). Use `load_dataset` for full access. Hold-out `malware_code` rows can be large (~12k chars); statistics may be partial on heavy splits.
"""
    return front + body


def build_staging(staging: Path) -> None:
    if staging.exists():
        shutil.rmtree(staging)
    data_dir = staging / "data"
    data_dir.mkdir(parents=True)

    for name in SPLITS:
        src = CLF_DIR / f"{name}.jsonl"
        if not src.exists():
            raise SystemExit(f"Missing {src}")
        jsonl_to_parquet(src, data_dir / f"{name}.parquet")

    for meta in ("labels.json", "dataset_report.json"):
        src = CLF_DIR / meta
        if src.exists():
            shutil.copy2(src, staging / meta)

    report = {}
    rp = CLF_DIR / "dataset_report.json"
    if rp.exists():
        report = json.loads(rp.read_text(encoding="utf-8"))
    langs = report.get("languages", [])
    train_n = report.get("split_counts", {}).get("train", 0)
    split_stats = _split_stats(data_dir)
    readme = staging / "README.md"
    readme.write_text(
        _hf_readme(report, langs, train_n, split_stats),
        encoding="utf-8",
    )

    (staging / ".gitattributes").write_text(
        "data/*.parquet filter=lfs diff=lfs merge=lfs -text\n",
        encoding="utf-8",
    )


def git_push(staging: Path, repo_id: str, token: str, message: str) -> None:
    user = repo_id.split("/")[0]
    url = f"https://{user}:{token}@huggingface.co/datasets/{repo_id}"
    work = staging.parent / "_hf_git_work"
    if work.exists():
        shutil.rmtree(work, ignore_errors=True)

    run(["git", "clone", url, str(work)])
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
    run(["git", "commit", "-m", message], cwd=work)
    run(["git", "push"], cwd=work)
    shutil.rmtree(work, ignore_errors=True)
    # Windows may lock .git briefly after push
    print(f"\nPublished: https://huggingface.co/datasets/{repo_id}")


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--repo-id", default=DEFAULT_REPO)
    ap.add_argument("--private", action="store_true")
    ap.add_argument("--staging", type=Path, default=ROOT / "data" / "hf_push_staging")
    ap.add_argument("--message", default="Safety DS clf v2 (neg-20k white-hat train)")
    ap.add_argument("--prepare-only", action="store_true")
    args = ap.parse_args()

    if not CLF_DIR.exists():
        raise SystemExit(f"Missing {CLF_DIR}; run build_classifier_dataset.py first")

    token = load_token()
    build_staging(args.staging)
    if args.prepare_only:
        print(f"Staging ready: {args.staging}")
        return

    ensure_repo(args.repo_id, token, args.private)
    git_push(args.staging, args.repo_id, token, args.message)


if __name__ == "__main__":
    main()
