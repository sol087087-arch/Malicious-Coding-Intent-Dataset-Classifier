#!/usr/bin/env python3
"""One-time move data/raw -> data/en/raw (separate datasets per folder)."""

from __future__ import annotations

import shutil
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
OLD_RAW = ROOT / "data" / "raw"
OLD_PROC = ROOT / "data" / "processed"
NEW_RAW = ROOT / "data" / "en" / "raw"
NEW_PROC = ROOT / "data" / "en" / "processed"


def main() -> None:
    if OLD_RAW.exists():
        NEW_RAW.mkdir(parents=True, exist_ok=True)
        for p in OLD_RAW.iterdir():
            dest = NEW_RAW / p.name
            if dest.exists():
                print(f"skip (exists): {dest}")
                continue
            shutil.move(str(p), str(dest))
            print(f"moved: {p.name} -> data/en/raw/")
        if not any(OLD_RAW.iterdir()):
            OLD_RAW.rmdir()
            print("removed empty data/raw")

    if OLD_PROC.exists():
        NEW_PROC.mkdir(parents=True, exist_ok=True)
        for p in OLD_PROC.iterdir():
            dest = NEW_PROC / p.name
            if dest.exists():
                print(f"skip (exists): {dest}")
                continue
            shutil.move(str(p), str(dest))
            print(f"moved: {p.name} -> data/en/processed/")
        if not any(OLD_PROC.iterdir()):
            OLD_PROC.rmdir()
            print("removed empty data/processed")

    print("Done. English dataset: data/en/{raw,processed}/")
    print("Other langs later: data/<lang>/{raw,processed}/")


if __name__ == "__main__":
    main()
