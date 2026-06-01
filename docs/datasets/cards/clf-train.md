# Classifier split: `train`

| | |
|---|---|
| **Slug** | `clf-train` |
| **File** | `data/clf/v2/train.jsonl` |
| **Rows** | 181436 |
| **Variant** | v2_multilingual |
| **HF in train mode** | neg-only |

## Description

Stable hash split of deduped train pool. train/val/test split

## Record schema

```json
{"text": "...", "malicious": 0|1, "categories": ["..."], "source": "..."}
```
