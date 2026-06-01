# Multilingual lexicon (16 languages)

| | |
|---|---|
| **Slug** | `lexicon-multilingual` |
| **Languages** | en, zh, hi, es, ar, bn, pt, ru, ja, de, fr, tr, ko, vi, it, id, pl |
| **Raw terms** | 207356 |
| **In clf (deduped)** | 202196 malicious |
| **Label** | 12 categories (`config/categories.yaml`) |
| **Obfuscation in train** | No (obfuscated → hold-out only) |

## Description

Canonical EN terms + translated terms per language. Primary **positive** source for v2 classifier.

## Paths

`data/<lang>/raw/canonical.jsonl`, `translated.jsonl`, `obfuscated.jsonl` (gitignored).

## Build

```bash
python scripts/build_classifier_dataset.py --multilingual --hf-in-train neg-only
```
