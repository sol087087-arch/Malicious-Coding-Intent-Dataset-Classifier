#!/usr/bin/env bash
set -euo pipefail
cd "$(dirname "$0")/.."
LOG=data/dedup_16lang.log
echo "=== dedup start $(date -Iseconds) ===" | tee "$LOG"
echo "Raw files are never modified; duplicates go to processed/duplicate_rows.jsonl" | tee -a "$LOG"
.venv/Scripts/python scripts/dedup_lexicon.py \
  --languages-file config/translation_languages_20.yaml \
  --include-en \
  2>&1 | tee -a "$LOG"
echo "=== dedup done $(date -Iseconds) ===" | tee -a "$LOG"
