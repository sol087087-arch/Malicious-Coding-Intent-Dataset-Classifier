# NecroMOnk/Tersa-DPO

| | |
|---|---|
| **Slug** | `necromonk__tersa-dpo` |
| **HF repo** | [NecroMOnk/Tersa-DPO](https://huggingface.co/datasets/NecroMOnk/Tersa-DPO) |
| **Role** | **negative** |
| **Category** | — |
| **Text field** | `question` |
| **Imported rows** | 511 kept (526 raw) |
| **In v2 train** | negatives in train (`--hf-in-train neg-only`) |

## Description

Benign SFT/DPO-style prompts. Hard negatives for train (v2) and eval.

## Obtain

```bash
python scripts/import_hf_malware.py
# → data/external/hf_imported.jsonl (gitignored)
```

Config: `config/hf_malware_datasets.yaml`, `config/necromonk_datasets.yaml`.

## Eval

```bash
python scripts/evaluate_hf_benchmarks.py --model-dir models/v2_multilingual
```
