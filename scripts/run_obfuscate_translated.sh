#!/usr/bin/env bash
# Obfuscate all translated languages (EN skipped — already in data/en/raw/obfuscated.jsonl).
set -euo pipefail
cd "$(dirname "$0")/.."
LOG=data/obfuscate_16lang.log
echo "=== obfuscation start $(date -Iseconds) ===" | tee -a "$LOG"
PYTHONUNBUFFERED=1 .venv/Scripts/python scripts/expand_obfuscations.py \
  --languages-file config/translation_languages_20.yaml \
  --skip-en \
  2>&1 | tee -a "$LOG"
echo "=== obfuscation done $(date -Iseconds) ===" | tee -a "$LOG"
