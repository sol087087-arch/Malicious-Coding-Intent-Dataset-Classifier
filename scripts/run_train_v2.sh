#!/usr/bin/env bash
set -euo pipefail
cd "$(dirname "$0")/.."
LOG=data/train_v2_neg20k.log
mkdir -p models/v1_en models/v2_multilingual

# Preserve v1 (idempotent copy)
for f in clf_binary.joblib clf_multilabel.joblib labels.json metrics.json; do
  if [[ -f "models/$f" && ! -f "models/v1_en/$f" ]]; then
    cp "models/$f" "models/v1_en/$f"
  fi
done

if [[ ! -f data/external/hf_imported.jsonl ]]; then
  echo "=== import HF benchmarks $(date -Iseconds) ===" | tee -a "$LOG"
  .venv/Scripts/python scripts/import_hf_malware.py 2>&1 | tee -a "$LOG"
fi

echo "=== build v2 dataset $(date -Iseconds) ===" | tee -a "$LOG"
.venv/Scripts/python scripts/build_classifier_dataset.py --multilingual --hf-in-train neg-only 2>&1 | tee -a "$LOG"

echo "=== dataset cards $(date -Iseconds) ===" | tee -a "$LOG"
.venv/Scripts/python scripts/generate_dataset_cards.py 2>&1 | tee -a "$LOG"

echo "=== train v2 $(date -Iseconds) ===" | tee -a "$LOG"
.venv/Scripts/python scripts/train_classifier.py \
  --clf-dir data/clf/v2 \
  --model-dir models/v2_multilingual \
  --device cuda \
  --batch-size 64 \
  --holdout-batch-size 4 \
  2>&1 | tee -a "$LOG"

echo "=== calibrate threshold (white-hat) $(date -Iseconds) ===" | tee -a "$LOG"
.venv/Scripts/python scripts/calibrate_binary_threshold.py \
  --model-dir models/v2_multilingual \
  --max-fpr 0.05 --min-obf-recall 0.85 --write --device cuda \
  2>&1 | tee -a "$LOG"

echo "=== done $(date -Iseconds) ===" | tee -a "$LOG"
