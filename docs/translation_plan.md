# Phase 3: 80+ languages (separate folders)

## Layout — no mixing until you merge manually later

```
data/
  en/                    # English dataset (generation + obfuscation)
    raw/
      canonical.jsonl
      obfuscated.jsonl
      generation_state_canonical.json
    processed/
      canonical_deduped.txt
      lexicon_deduped.txt
  ar/                    # Arabic only
    raw/
      translated.jsonl
    processed/
      lexicon_deduped.txt
  de/
    ...
```

Each `--lang` is **isolated**. `dedup_lexicon.py --lang ar` never reads `data/en/`.

## Pipeline

```
data/en/  canonical → obfuscate → dedup
              ↓ (read canonical_deduped.txt only)
data/ar/  translate → optional obfuscate → dedup
data/de/  ...
```

Later: your own merge step across `data/*/processed/`.

## Methods

| Step | Tool | Output folder |
|------|------|----------------|
| Bulk MT | `translate_lexicon.py --backend nllb` | `data/<lang>/raw/translated.jsonl` |
| LLM refine | `--backend openrouter --lang ru` | same |
| Dedup | `dedup_lexicon.py --lang ru` | `data/<lang>/processed/` |

## Commands

```bash
python scripts/migrate_data_layout.py   # once: move old data/raw → data/en/raw

python scripts/dedup_lexicon.py --lang en

pip install torch transformers sentencepiece
python scripts/translate_lexicon.py --backend nllb --lang ar
python scripts/dedup_lexicon.py --lang ar
```

Languages: `config/languages.yaml` (82 targets + `en` source).
