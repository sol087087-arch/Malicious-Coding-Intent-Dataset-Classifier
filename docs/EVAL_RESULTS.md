# Evaluation results (v2 neg-20k retrain)

Model: `models/v2_multilingual/` · Embedder: `BAAI/bge-m3` · Artifacts: `metrics.json`, `holdout_eval_neg20k.json`, `hf_eval_neg20k.json`, `binary_threshold.json`.

## Story (what we actually did)

1. **Noticed a White-Hat problem** — defensive security prompts (White-Hat-600K) scored as malicious at default threshold (~96% FPR @ 0.5 before negatives in train).
2. **Pulled benign negatives into training** — imported HF corpora, added **~20k White-Hat** + **~1k other HF benign** rows to v2 train (`--hf-in-train neg-only`). Malware-code pool and obfuscated lexicon stayed **hold-out only**.
3. **Retrained v2** on GPU (~181k train rows).
4. **Recalibrated** binary threshold on White-Hat (max FPR 5%, min obfuscated recall 85%) → active **`0.004477`** (was living at ~0.9994 pre-retrain when tuning only by threshold).
5. **Re-checked hold-outs** — malware-code recall came back (**98.6%**), obfuscated stayed **100%**, White-Hat FPR **~5%**.

That is a concrete fix narrative, not “we got F1 0.99 on test.”

## Operating points

| Mode | Threshold | When to use |
|------|-----------|-------------|
| **Production (calibrated)** | `0.004477` | Default in `binary_threshold.json`; balances White-Hat FPR vs hold-out recall |
| **Hold-out / legacy** | `0.5` | Compare to papers; obfuscated strong but **malware_code recall collapses** (~0.4%) on current weights |

```bash
# Calibrated (recommended)
python scripts/predict_classifier.py --model-dir models/v2_multilingual "your text"

# Explicit sklearn default
python scripts/predict_classifier.py --profile holdout --model-dir models/v2_multilingual "your text"
```

## Results @ calibrated threshold `0.004477`

| Dataset | n | Recall | FPR | Notes |
|---------|---|--------|-----|--------|
| **test** (in-distribution) | 22,984 | see § below | see § below | Mixed lexicon + template + HF benign |
| **White-Hat-600K** | 19,960 | n/a | **4.9%** | Calibration target; all benign |
| **Obfuscated hold-out** | 4,000 | **100%** | n/a | 100% malicious — FPR not meaningful |
| **Malware code hold-out** | 4,000 | **98.6%** | n/a | Real code snippets; 55 misses |
| **all_external HF** | 24,127 | 79.7% | 7.4% | Mixed benchmark import |

### Per-source HF benchmarks (@ `0.004477`)

| Source | n | FPR | Recall | Role |
|--------|---|-----|--------|------|
| White-Hat-600K | 19,960 | **4.9%** | — | benign |
| phishdestroy/destroylist | 3,000 | 0% | 100% | malicious |
| NecroMOnk/red-team-refusals | 159 | 0% | 86.0% | malicious |
| NecroMOnk/Residual-SFT | 447 | 50.6% | — | benign (still hard) |
| NecroMOnk/Tersa-DPO | 511 | 62.6% | — | benign (still hard) |
| NecroMOnk/code-stress-bench | 50 | 40% | — | benign |

**Takeaway:** calibration optimizes **White-Hat**; other HF benign sets can still look “malicious” in embedding space.

## Results @ default threshold `0.5` (post-retrain, no calibration)

From `models/v2_multilingual/metrics.json` (train script eval):

| Split | Recall | FPR |
|-------|--------|-----|
| test | 99.65% | 0.61% |
| test_obfuscated | 99.42% | — |
| test_malware_code | **0.43%** | — |

Shows why a single global 0.5 is not enough: obfuscated OK, **real malware snippets die**.

## Before vs after (high level)

| Stage | White-Hat FPR @ chosen thr | Obfuscated recall | Malware-code recall |
|-------|---------------------------|-------------------|---------------------|
| Pre neg-20k, thr ~0.9994 | ~5% | ~86% | **~3%** |
| Post retrain @ 0.5 | (not primary) | 99.4% | **0.4%** |
| **Post retrain + cal @ 0.004477** | **~5%** | **100%** | **98.6%** |

## Engineering notes

- **Hold-out ROC-AUC is `null`** — both hold-out splits are 100% malicious; sklearn ROC-AUC undefined. Evaluator writes `null` instead of crashing JSON (`allow_nan=False`).
- **Calibration leakage** — threshold tuned on White-Hat (by design). Hold-outs were not used for threshold pick.
- **Split hygiene** — `malware_code` and obfuscated lexicon never in train (`dataset_report.json`).

## Reproduce

```bash
python scripts/evaluate_classifier.py \
  --model-dir models/v2_multilingual --clf-dir data/clf/v2 \
  --splits test test_obfuscated test_malware_code \
  --out models/v2_multilingual/holdout_eval_neg20k.json --device cuda

python scripts/evaluate_hf_benchmarks.py \
  --model-dir models/v2_multilingual \
  --out models/v2_multilingual/hf_eval_neg20k.json --device cuda
```

Optional: add `test` row @ `0.004477` by running `evaluate_classifier.py --splits test` (same threshold via `load_binary_threshold`).
