# RAG + obfuscation (Safety DS)

## Data layers (separate folders, merge later)

```
data/en/
  raw/
    canonical.jsonl      # clean terms
    obfuscated.jsonl     # variants linked to source_term
  processed/
    canonical_deduped.txt
    obfuscated_deduped.txt
    lexicon_deduped.txt    # canonical + obfuscated merged for one lang

rag/en/                  # built from processed/, not mixed with ar/
  index/                 # vectors
  chunks.jsonl           # metadata for retrieval
```

Per language after translation:

```
data/ar/raw/translated.jsonl
data/ar/raw/obfuscated.jsonl   # obfuscate AR surface forms
rag/ar/index/
```

## Why obfuscation in RAG

| Layer | Role |
|-------|------|
| **Lexicon classifier** | Fast match on canonical + obfuscated strings |
| **RAG retrieval** | Semantic match on intent; **also** retrieve policy by `category` from lexicon hit |
| **Obfuscated index** | User types `r@ns0mw@re` → hit without waiting for LLM paraphrase |

Each obfuscated row keeps `source_term` + `variant_type` (leetspeak, truncate, …) so RAG context explains *what they meant*, not only the noisy surface form.

## Chunk schema (for embedding)

```json
{
  "id": "sha256(term+lang+phase)",
  "text": "rans0mw4re",
  "lang": "en",
  "phase": "obfuscated",
  "variant_type": "leetspeak",
  "source_term": "ransomware",
  "category": "ransomware_crypto",
  "intent_label": "malware_request",
  "edu_pointer": "rag/edu/ransomware_defense.md"
}
```

Canonical chunks use `phase: "canonical"`. Intent-query chunks (phase 3b, later) are full short user prompts.

## Runtime flow

```
user message
  → normalize (NFKC, zero-width strip)
  → substring scan: canonical + obfuscated lists (Aho-Corasick)
  → if hit: category + variant_type
  → embed message → retrieve top-k from rag/{lang}/
        (canonical + obfuscated + intent + edu policy)
  → prompt augmentation:
        "Surface form may be obfuscated. Underlying intent: {category}.
         Respond educationally only; use retrieved edu chunks."
  → LLM
```

## Build order

1. Finish / dedup `data/en/raw/canonical.jsonl`
2. `expand_obfuscations.py` → `data/en/raw/obfuscated.jsonl`
3. `dedup_lexicon.py --lang en` → processed merge
4. Generate `rag/edu/`, `rag/policy/` (manual + LLM)
5. `build_rag_index.py` — embed **both** `canonical_deduped` and `obfuscated_deduped`
6. Translations + obfuscate per `data/<lang>/`
7. Per-lang RAG indexes

## Obfuscation + translation

- **EN:** canonical → obfuscate (Latin rules)
- **AR/RU/ZH:** translate canonical → obfuscate with script-specific rules (extend `expand_obfuscations.py` per script)

Do not translate obfuscated EN strings directly (double noise).
