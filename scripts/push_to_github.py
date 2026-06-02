#!/usr/bin/env python3
"""Create/push Safety DS to GitHub (full repo, not model-only).

Requires: git, GitHub token with `repo` scope.
  - GITHUB_TOKEN or GH_TOKEN env, or
  - ~/.config/gh/hosts.yml after `gh auth login`

Example:
  export GITHUB_TOKEN=ghp_...
  python scripts/push_to_github.py --repo sol087087-arch/Malicious-Coding-Intent-Dataset-Classifier
"""

from __future__ import annotations

import argparse
import json
import os
import re
import stat
import subprocess
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
DEFAULT_REPO = "sol087087-arch/Malicious-Coding-Intent-Dataset-Classifier"


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


def git_push_with_token(repo: str, branch: str, token: str) -> None:
    """Push without writing the token into .git/config."""
    with tempfile.TemporaryDirectory() as td:
        askpass = Path(td) / ("git-askpass.bat" if os.name == "nt" else "git-askpass.sh")
        if os.name == "nt":
            askpass.write_text(
                "@echo off\r\n"
                "if /I \"%~1\"==\"Username for 'https://github.com':\" echo x-access-token\r\n"
                "if /I \"%~1\"==\"Password for 'https://x-access-token@github.com':\" echo %GITHUB_TOKEN%\r\n",
                encoding="utf-8",
            )
        else:
            askpass.write_text(
                "#!/usr/bin/env sh\n"
                "case \"$1\" in\n"
                "*Username*) printf '%s\\n' 'x-access-token' ;;\n"
                "*Password*) printf '%s\\n' \"$GITHUB_TOKEN\" ;;\n"
                "esac\n",
                encoding="utf-8",
            )
            askpass.chmod(askpass.stat().st_mode | stat.S_IXUSR)
        env = {
            **os.environ,
            "GIT_ASKPASS": str(askpass),
            "GIT_TERMINAL_PROMPT": "0",
            "GITHUB_TOKEN": token,
        }
        print("+ git push -u origin", branch)
        subprocess.run(["git", "push", "-u", "origin", branch], cwd=ROOT, check=True, text=True, env=env)


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
        _, name = repo.split("/", 1)
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

    remote = f"https://github.com/{args.repo}.git"
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

    git_push_with_token(args.repo, args.branch, token)
    print(f"\nPublished: https://github.com/{args.repo}")


if __name__ == "__main__":
    main()
