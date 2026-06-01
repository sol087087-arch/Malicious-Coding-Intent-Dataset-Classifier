# yatin-superintelligence/White-Hat-Security-Agent-Prompts-600K

| | |
|---|---|
| **Slug** | `yatin-superintelligence__white-hat-security-agent-prompts-600k` |
| **HF repo** | [yatin-superintelligence/White-Hat-Security-Agent-Prompts-600K](https://huggingface.co/datasets/yatin-superintelligence/White-Hat-Security-Agent-Prompts-600K) |
| **Role** | **negative** |
| **Category** | — |
| **Text field** | `user_prompt` |
| **Imported rows** | 19960 kept (19960 raw) |
| **In v2 train** | negatives in train (`--hf-in-train neg-only`) |

## Description

Defensive / benign security-agent prompts. **Threshold calibration** + v2 **train negatives** (`--hf-in-train neg-only`).

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
