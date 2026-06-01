# NecroMOnk/red-team-refusals

| | |
|---|---|
| **Slug** | `necromonk__red-team-refusals` |
| **HF repo** | [NecroMOnk/red-team-refusals](https://huggingface.co/datasets/NecroMOnk/red-team-refusals) |
| **Role** | **positive** |
| **Category** | malware_types |
| **Text field** | `prompt` |
| **Imported rows** | 159 kept (160 raw) |
| **In v2 train** | eval / benchmark only (not v2 train positives) |

## Description

Red-team refusal prompts. Small **positive** external eval set.

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
