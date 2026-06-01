#!/usr/bin/env python3
"""Create/push Safety DS to GitHub (full repo, not model-only).

Requires: git, GitHub token with `repo` scope.
  - GITHUB_TOKEN or GH_TOKEN env, or
  - ~/.config/gh/hosts.yml after `gh auth login`

Example:
  export GITHUB_TOKEN=ghp_...
  python scripts/push_to_github.py --repo NecroMOnk/Safety-DS
"""

from __future__ import annotations

import argparse
import json
import os
import re
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
DEFAULT_REPO = "NecroMOnk/Safety-DS"


def load_token() -> str:
    tok = os.environ.get("GITHUB_TOKEN") or os.environ.get("GH_TOKEN")
    if tok:
        return tok.strip()
    hosts = Path.home() / ".config" / "gh" / "hosts.yml"
    if hosts.exists():
        text = hosts.read_text(encoding="utf-8")
        m = re.search(r"oauth_token:\s*(\S+)", text)
        if m:
            return m.group(1).strip()
    raise SystemExit(
        "No GitHub token: set GITHUB_TOKEN, or run `gh auth login` (GitHub CLI)."
    )


def run(cmd: list[str], cwd: Path | None = None, check: bool = True) -> subprocess.CompletedProcess:
    shown = " ".join(cmd)
    if "@" in shown and "github.com" in shown:
        shown = re.sub(r":[^@]+@", ":***@", shown)
    print("+", shown)
    return subprocess.run(cmd, cwd=cwd, check=check, text=True)


def curl_api(method: str, url: str, token: str, data: dict | None = None) -> str:
    cmd = ["curl", "-kfsSL", "-X", method, url, "-H", f"Authorization: Bearer {token}"]
    if data is not None:
        cmd += ["-H", "Content-Type: application/json", "-d", json.dumps(data)]
    return subprocess.check_output(cmd, text=True)


def ensure_repo(repo: str, token: str, private: bool) -> None:
    try:
        curl_api("GET", f"https://api.github.com/repos/{repo}", token)
        print(f"Repo exists: https://github.com/{repo}")
    except subprocess.CalledProcessError:
        owner, name = repo.split("/", 1)
        print(f"Creating https://github.com/{repo} …")
        curl_api(
            "POST",
            f"https://api.github.com/user/repos",
            token,
            {
                "name": name,
                "private": private,
                "description": "Multilingual malicious-coding intent classifier (BGE-m3 + sklearn heads)",
            },
        )


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--repo", default=DEFAULT_REPO, help="owner/name")
    ap.add_argument("--private", action="store_true")
    ap.add_argument("--branch", default="main")
    args = ap.parse_args()

    token = load_token()
    ensure_repo(args.repo, token, args.private)

    remote = f"https://{args.repo.split('/')[0]}:{token}@github.com/{args.repo}.git"
    r = subprocess.run(
        ["git", "remote", "get-url", "origin"],
        cwd=ROOT,
        capture_output=True,
        text=True,
    )
    if r.returncode != 0:
        run(["git", "remote", "add", "origin", remote], cwd=ROOT)
    else:
        run(["git", "remote", "set-url", "origin", remote], cwd=ROOT)

    run(["git", "push", "-u", "origin", args.branch], cwd=ROOT)
    print(f"\nPublished: https://github.com/{args.repo}")


if __name__ == "__main__":
    main()
