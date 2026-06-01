# phishdestroy/destroylist

| | |
|---|---|
| **Slug** | `phishdestroy__destroylist` |
| **HF repo** | [phishdestroy/destroylist](https://huggingface.co/datasets/phishdestroy/destroylist) |
| **Role** | **positive** |
| **Category** | phishing_social_engineering_code |
| **Text field** | `phishing scam domain {value}` |
| **Imported rows** | 3000 kept (155368 raw) |
| **In v2 train** | eval / benchmark only (not v2 train positives) |

## Description

Phishing domains as short malicious phrases. External **positive** benchmark; not in v2 train.

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
