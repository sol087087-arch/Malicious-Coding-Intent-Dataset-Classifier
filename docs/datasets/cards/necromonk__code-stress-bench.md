# NecroMOnk/code-stress-bench

| | |
|---|---|
| **Slug** | `necromonk__code-stress-bench` |
| **HF repo** | [NecroMOnk/code-stress-bench](https://huggingface.co/datasets/NecroMOnk/code-stress-bench) |
| **Role** | **negative** |
| **Category** | — |
| **Text field** | `prompt` |
| **Imported rows** | 50 kept (50 raw) |
| **In v2 train** | negatives in train (`--hf-in-train neg-only`) |

## Description

Benign code-stress prompts. External eval (negative).

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
