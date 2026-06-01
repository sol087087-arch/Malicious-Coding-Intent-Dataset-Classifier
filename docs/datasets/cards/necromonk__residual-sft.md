# NecroMOnk/Residual-SFT

| | |
|---|---|
| **Slug** | `necromonk__residual-sft` |
| **HF repo** | [NecroMOnk/Residual-SFT](https://huggingface.co/datasets/NecroMOnk/Residual-SFT) |
| **Role** | **negative** |
| **Category** | — |
| **Text field** | `messages_user` |
| **Imported rows** | 447 kept (453 raw) |
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
