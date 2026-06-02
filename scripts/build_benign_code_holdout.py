#!/usr/bin/env python3
"""Build a benign-code hard-negative hold-out.

Samples local OSS/app/math/dev code and Python stdlib files as non-malicious
code chunks. This is meant to test whether the binary head learned
"code == malicious".
"""

from __future__ import annotations

import argparse
import ast
import hashlib
import json
import string
import sysconfig
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
DEFAULT_OUT = ROOT / "data" / "clf" / "benign_code_holdout.jsonl"
SKIP_DIRS = {
    ".git",
    ".venv",
    "venv",
    "env",
    "node_modules",
    "__pycache__",
    "unsloth_compiled_cache",
    ".pytest_cache",
    ".mypy_cache",
    ".ruff_cache",
    ".next",
    "checkpoints",
    "data",
    "models",
    "results",
    "eval_results",
    "eval_sets",
    "eval_sets_v4",
    "dist",
    "build",
    "artifacts_llm_redaction",
    "vesuvius-challenge-surface-detection",
}
CODE_EXTS = {
    ".py",
    ".js",
    ".jsx",
    ".ts",
    ".tsx",
    ".go",
    ".rs",
    ".c",
    ".cc",
    ".cpp",
    ".h",
    ".hpp",
    ".java",
    ".ps1",
}
DEFAULT_EXTRA_ROOTS = [
    Path("C:/GitHub/HS"),
    Path("C:/GitHub/ISRE"),
    Path("C:/GitHub/Job Application Pipeline"),
    Path("C:/GitHub/Olympiad_Math"),
    Path("C:/GitHub/Vesuvius"),
]


def norm_hash(text: str) -> str:
    return hashlib.sha256(" ".join(text.lower().split()).encode("utf-8")).hexdigest()


def clean_text(text: str) -> str:
    return text.replace("\x00", " ").strip()


def is_quality_code_block(text: str, min_chars: int, max_chars: int) -> bool:
    text = clean_text(text)
    if not (min_chars <= len(text) <= max_chars):
        return False
    printable = sum(ch in string.printable or ch.isspace() for ch in text)
    if printable / max(1, len(text)) < 0.96:
        return False
    lines = [ln for ln in text.splitlines() if ln.strip()]
    if not lines:
        return False
    if max(len(ln) for ln in lines) > 700:
        return False
    if len(lines) == 1 and len(text) > 500:
        return False
    alpha = sum(ch.isalpha() for ch in text)
    if alpha / max(1, len(text)) < 0.18:
        return False
    punct_digit = sum(ch.isdigit() or ch in "{}[](),;:+-*/\\x" for ch in text)
    if punct_digit / max(1, len(text)) > 0.72:
        return False
    lowered = text.lower()
    blob_markers = [
        "resource fork",
        "com.apple.quarantine",
        "intentionally left blank",
        "data:image/",
        "base64,",
    ]
    return not any(marker in lowered for marker in blob_markers)


def iter_code_files(root: Path, limit: int, exts: set[str] | None = None) -> list[Path]:
    out: list[Path] = []
    exts = exts or CODE_EXTS
    if not root.exists():
        return out
    for path in root.rglob("*"):
        if not path.is_file():
            continue
        if path.suffix.lower() not in exts:
            continue
        rel_parts = path.relative_to(root).parts
        parts = set(rel_parts)
        if parts & SKIP_DIRS:
            continue
        if any(part.startswith(".venv") or part.endswith("_env") for part in rel_parts):
            continue
        try:
            if path.stat().st_size > 500_000:
                continue
        except OSError:
            continue
        out.append(path)
        if len(out) >= limit:
            break
    return out


def ast_blocks(text: str, max_chars: int) -> list[str]:
    try:
        tree = ast.parse(text)
    except SyntaxError:
        return []
    lines = text.splitlines()
    blocks: list[str] = []
    for node in ast.walk(tree):
        if not isinstance(node, (ast.FunctionDef, ast.AsyncFunctionDef, ast.ClassDef)):
            continue
        if not hasattr(node, "lineno") or not hasattr(node, "end_lineno"):
            continue
        part = "\n".join(lines[node.lineno - 1 : node.end_lineno])
        if 160 <= len(part) <= max_chars:
            blocks.append(part)
    return blocks


def sliding_blocks(text: str, min_chars: int, max_chars: int, step_chars: int) -> list[str]:
    text = clean_text(text)
    if len(text) < min_chars:
        return []
    if len(text) <= max_chars:
        return [text]
    blocks: list[str] = []
    for start in range(0, len(text), step_chars):
        part = text[start : start + max_chars].strip()
        if len(part) >= min_chars:
            blocks.append(part)
    return blocks


def add_record(records: list[dict], seen: set[str], text: str, source: str, path: Path) -> None:
    text = clean_text(text)
    if not is_quality_code_block(text, 160, 4000):
        return
    h = norm_hash(text)
    if h in seen:
        return
    seen.add(h)
    records.append(
        {
            "text": text,
            "malicious": 0,
            "categories": [],
            "source": source,
            "language": "code",
            "path": str(path),
        }
    )


def collect_from_files(
    files: list[Path],
    source: str,
    target: int,
    records: list[dict],
    seen: set[str],
    min_chars: int,
    max_chars: int,
    step_chars: int,
) -> None:
    for path in files:
        if len(records) >= target:
            return
        try:
            text = path.read_text(encoding="utf-8", errors="ignore")
        except OSError:
            continue
        blocks = ast_blocks(text, max_chars)
        if not blocks:
            blocks = sliding_blocks(text, min_chars, max_chars, step_chars)
        for block in blocks:
            add_record(records, seen, block, source, path)
            if len(records) >= target:
                return


def source_name(root: Path) -> str:
    name = root.name.lower()
    safe = "".join(ch if ch.isalnum() else "_" for ch in name).strip("_")
    return f"local_repo_{safe or 'code'}"


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--out", type=Path, default=DEFAULT_OUT)
    ap.add_argument("--target", type=int, default=5000)
    ap.add_argument("--project-root", type=Path, default=ROOT)
    ap.add_argument(
        "--code-root",
        type=Path,
        action="append",
        default=[],
        help="Additional benign code root; can be passed multiple times",
    )
    ap.add_argument("--no-default-extra-roots", action="store_true")
    ap.add_argument("--project-file-limit", type=int, default=800)
    ap.add_argument("--extra-file-limit", type=int, default=1200)
    ap.add_argument("--stdlib-file-limit", type=int, default=2500)
    ap.add_argument("--min-chars", type=int, default=160)
    ap.add_argument("--max-chars", type=int, default=4000)
    ap.add_argument("--step-chars", type=int, default=1800)
    args = ap.parse_args()

    records: list[dict] = []
    seen: set[str] = set()

    project_files = iter_code_files(args.project_root, args.project_file_limit)
    stdlib = Path(sysconfig.get_paths()["stdlib"])
    stdlib_files = iter_code_files(stdlib, args.stdlib_file_limit, exts={".py"})
    extra_roots = list(args.code_root)
    if not args.no_default_extra_roots:
        extra_roots.extend(DEFAULT_EXTRA_ROOTS)

    project_target = min(args.target // 5, args.target)
    collect_from_files(
        project_files,
        "local_project_code",
        project_target,
        records,
        seen,
        args.min_chars,
        args.max_chars,
        args.step_chars,
    )
    if extra_roots:
        per_root = max(1, args.target // (len(extra_roots) + 2))
        for root in extra_roots:
            files = iter_code_files(root, args.extra_file_limit)
            collect_from_files(
                files,
                source_name(root),
                min(args.target, len(records) + per_root),
                records,
                seen,
                args.min_chars,
                args.max_chars,
                args.step_chars,
            )
    collect_from_files(
        stdlib_files,
        "python_stdlib",
        args.target,
        records,
        seen,
        args.min_chars,
        args.max_chars,
        args.step_chars,
    )

    args.out.parent.mkdir(parents=True, exist_ok=True)
    with args.out.open("w", encoding="utf-8") as f:
        for row in records:
            f.write(json.dumps(row, ensure_ascii=False) + "\n")

    by_source: dict[str, int] = {}
    for row in records:
        by_source[row["source"]] = by_source.get(row["source"], 0) + 1
    print(json.dumps({"out": str(args.out), "n": len(records), "sources": by_source}, indent=2))


if __name__ == "__main__":
    main()
