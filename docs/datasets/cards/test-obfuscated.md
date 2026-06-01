# Hold-out: obfuscated lexicon

| | |
|---|---|
| **Slug** | `test-obfuscated` |
| **File** | `data/clf/v2/test_obfuscated.jsonl` |
| **Rows** | 4000 |
| **Label** | 100% malicious |
| **In train** | **Never** |

## Description

Per-language obfuscated variants of lexicon terms. Tests generalization beyond plain canonical/translated strings.

## Eval

```bash
python scripts/evaluate_classifier.py --splits test_obfuscated --profile holdout
```
