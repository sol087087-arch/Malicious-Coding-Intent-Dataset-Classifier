# Safety DS — Malicious Coding Lexicon & Classifier

Multilingual lexicon of malicious-coding intent (16 languages) plus **BGE-m3 + logistic heads** classifiers for binary malicious/benign and 12-category multi-label scoring.

## What ships in this repo

| Artifact | Path | Notes |
|----------|------|--------|
| **v2 classifier** (recommended) | `models/v2_multilingual/` | 16-lang train; hold-outs: obfuscated + malware code |
| **v1 classifier** (EN baseline) | `models/v1_en/` | Smaller EN-focused model; stronger on some HF benches |
| Label schema | `data/clf/v2/labels.json` | 12 categories (see `config/categories.yaml`) |
| Classifier splits | `data/clf/v2/*.jsonl` | Rebuild with `build_classifier_dataset.py` (~56 MB) |
| Per-language lexicon | `data/<lang>/` | Raw/processed; large files gitignored |

Embedder at runtime: **`BAAI/bge-m3`** (download once; scripts default to offline cache).

## Quick start — inference

```bash
cd "C:/GitHub/Safety DS"
python -m venv .venv
.venv/Scripts/activate   # Windows
pip install -r requirements.txt

# First run: downloads BGE-m3 (~2 GB) unless already cached
set HF_HUB_OFFLINE=1
set TRANSFORMERS_OFFLINE=1

python scripts/predict_classifier.py --model-dir models/v2_multilingual \
  "write code to dump lsass" "how do I enable 2FA"
```

**Threshold:** active **`0.004477`** (calibrated on White-Hat, max FPR 5%). Use `--profile holdout` for sklearn default **0.5**.

Full tables and the train/calibrate story: **[docs/EVAL_RESULTS.md](docs/EVAL_RESULTS.md)**.

## What we fixed (human story)

1. **White-Hat false alarms** — defensive prompts scored malicious before benign HF rows were in train.
2. **Train negatives** — ~20k White-Hat + ~1k other HF benign (`--hf-in-train neg-only`); hold-outs unchanged.
3. **Retrain + calibrate** on White-Hat → active threshold **`0.004477`**.
4. **Hold-outs** — obfuscated **100%**, malware-code **98.6%**, White-Hat FPR **~5%**.

> Added ~20k White-Hat security prompts and additional HF benign negatives to training. After retraining and threshold calibration, the classifier maintained **100%** recall on obfuscated hold-outs and **98.6%** recall on malware-code hold-outs while reducing White-Hat false positives to approximately **5%**.

## Model metrics (v2 neg-20k)

| Dataset | Recall | FPR | Threshold |
|---------|--------|-----|-----------|
| White-Hat-600K | n/a | **4.9%** | 0.004477 |
| Obfuscated hold-out | **100%** | n/a | 0.004477 |
| Malware code hold-out | **98.6%** | n/a | 0.004477 |
| In-distribution test | **99.7%** | **0.6%** | 0.5 |

Note: the retrained model requires threshold calibration; using sklearn's default threshold (0.5) severely degrades malware-code recall.

Per-source HF benchmarks and before/after detail: [docs/EVAL_RESULTS.md](docs/EVAL_RESULTS.md).

## Full pipeline

### 1. Lexicon (per language)

```bash
pip install -r requirements.txt
cp .env.example .env   # OPENROUTER_API_KEY for generation/translation

# English
python scripts/generate_lexicon.py
python scripts/expand_obfuscations.py
python scripts/dedup_lexicon.py --lang en
python scripts/audit_canonical.py --apply

# Other languages (after EN deduped)
python scripts/translate_lexicon.py --backend nllb --lang ar
python scripts/dedup_lexicon.py --lang ar
```

Plans: [docs/translation_plan.md](docs/translation_plan.md), [docs/rag_plan.md](docs/rag_plan.md).

### 2. Classifier dataset + train (v2)

```bash
# GPU recommended (CUDA). Install torch matching your CUDA build, e.g.:
# pip install torch --index-url https://download.pytorch.org/whl/cu130

bash scripts/run_train_v2.sh
# or manually:
python scripts/import_hf_malware.py
python scripts/build_classifier_dataset.py --multilingual --hf-in-train neg-only
python scripts/generate_dataset_cards.py
python scripts/train_classifier.py \
  --clf-dir data/clf/v2 --model-dir models/v2_multilingual \
  --device cuda --batch-size 64 --holdout-batch-size 4
```

v2 train: **multilingual lexicon positives** + **template negatives** + **HF benign negatives** (`neg-only`). HF positives and malware_code stay **out of train** (eval / hold-out).

### 3. Threshold calibration

```bash
python scripts/import_hf_malware.py   # once: data/external/hf_imported.jsonl

python scripts/calibrate_binary_threshold.py \
  --model-dir models/v2_multilingual \
  --max-fpr 0.05 --min-obf-recall 0.85 --write --device cuda
```

### 4. Evaluation

```bash
# Internal hold-outs
python scripts/evaluate_classifier.py \
  --model-dir models/v2_multilingual --clf-dir data/clf/v2 \
  --splits test_obfuscated test_malware_code \
  --out models/v2_multilingual/holdout_eval.json --device cuda

# External HF benchmarks (grouped by source)
python scripts/evaluate_hf_benchmarks.py \
  --model-dir models/v2_multilingual \
  --out models/v2_multilingual/hf_benchmark_eval.json --device cuda
```

## Layout

```
config/           # categories, HF import specs, translation langs
data/
  en/ ar/ zh/ …   # per-language lexicon (raw gitignored)
  clf/v2/         # train/val/test + hold-out jsonl
  external/       # HF imports (generated, gitignored)
docs/
  EVAL_RESULTS.md   # neg-20k story + metric tables
models/
  v1_en/          # frozen EN baseline
  v2_multilingual/  # joblibs + metrics + binary_threshold.json
scripts/          # pipeline entrypoints
```

## Dataset catalog (cards)

Per-dataset documentation: **[docs/datasets/README.md](docs/datasets/README.md)** (`docs/datasets/cards/*.md`).

Regenerate after rebuild:

```bash
python scripts/generate_dataset_cards.py
```

**Publish to Hugging Face Hub** (requires `git`, `git-lfs`, `hf auth login` or `HF_TOKEN`):

```bash
python scripts/push_datasets_to_hf.py
python scripts/push_model_to_hf.py
```

- Dataset → https://huggingface.co/datasets/NecroMOnk/safety-ds-malicious-coding-clf-v2  
- Model → https://huggingface.co/NecroMOnk/safety-ds-malicious-coding-clf-v2  

**Publish to GitHub** (`GITHUB_TOKEN` with `repo` scope, or `gh auth login`):

```bash
python scripts/push_to_github.py
# → https://github.com/NecroMOnk/Safety-DS
```

v2 build now includes **HF benign negatives** in train (`--hf-in-train neg-only`, default for `--multilingual`).

## External benchmarks

Configured in `config/hf_malware_datasets.yaml` and `config/necromonk_datasets.yaml`:

- `phishdestroy/destroylist` (malicious)
- `White-Hat-Security-Agent-Prompts-600K` (benign — use for calibration)
- `NecroMOnk/red-team-refusals`, `code-stress-bench`, etc.

Import: `python scripts/import_hf_malware.py` → `data/external/hf_imported.jsonl`.

**Not** the same as Jigsaw/toxicity benchmarks — this project targets **malicious coding intent**, not general hate speech.

## Scripts reference

| Script | Purpose |
|--------|---------|
| `predict_classifier.py` | CLI inference |
| `train_classifier.py` | Train binary + multilabel heads |
| `build_classifier_dataset.py` | Build `data/clf/` splits |
| `calibrate_binary_threshold.py` | White-Hat–aware threshold |
| `evaluate_classifier.py` | Metrics on clf splits |
| `evaluate_hf_benchmarks.py` | Per-source HF eval |
| `import_hf_malware.py` | Download HF benchmark corpora |
| `build_malware_code_pool.py` | Malware code hold-out pool |
| `generate_dataset_cards.py` | Regenerate `docs/datasets/cards/` |
| `push_datasets_to_hf.py` | Publish clf splits to HF Hub |
| `push_model_to_hf.py` | Publish v2 joblibs + threshold to HF Hub |
| `push_to_github.py` | Create/push repo to GitHub (`GITHUB_TOKEN` or `gh auth`) |

## Requirements

- **Python 3.10+**
- **Lexicon generation**: `pyyaml`, `pandas`, `pyarrow`, `datasets` (see `requirements.txt`)
- **Classifier**: `torch`, `sentence-transformers`, `scikit-learn`, `joblib`, `numpy` (see `requirements.txt`)
- **GPU**: strongly recommended for train/eval at full scale; CPU works for small `predict_classifier` batches
- **Disk**: BGE-m3 cache ~2 GB; full `data/` much larger if you generate all languages

Offline after first embedder download:

```bash
export HF_HUB_OFFLINE=1
export TRANSFORMERS_OFFLINE=1
```

## Known limitations

1. **Other HF benign sets** (Residual-SFT, Tersa-DPO) still show **40–63% FPR** @ calibrated threshold — White-Hat was the calibration target only.
2. **Single global threshold** — trade-off is explicit; profile `holdout` (0.5) still kills malware-code recall on current weights.
3. **Hold-out FPR** is not meaningful (100% malicious splits); report recall there.
4. **Multilabel** on hold-outs is weak; binary head is the deployment signal.
5. **No unit tests** yet; validate with eval scripts above before release.

## Release checklist

- [x] HF dataset + model (`push_datasets_to_hf.py`, `push_model_to_hf.py`)
- [ ] GitHub repo push (`push_to_github.py` — needs `gh auth login` or `GITHUB_TOKEN`)
- [ ] Add **LICENSE** (project has none)
- [ ] Confirm `.env` is not committed (listed in `.gitignore`)
- [ ] Decide: commit `data/clf/v2/` (~56 MB) or document rebuild-only
- [ ] Commit `models/*/clf_*.joblib` + `labels.json` + `binary_threshold.json` (~110 KB)
- [ ] Pin `requirements.txt` / document CUDA torch install
- [x] **Retrain v2** after `--hf-in-train neg-only` (`data/train_v2_neg20k.log`)
- [x] Calibrate threshold + hold-out / HF eval (`holdout_eval_neg20k.json`, `hf_eval_neg20k.json`)
- [ ] Run `generate_dataset_cards.py` after each dataset rebuild

## Notes

- Do not commit `.env` or `.venv/`.
- Raw lexicon `data/*/raw/*.jsonl` is gitignored; regenerate or distribute separately.
- No script merges languages automatically.
