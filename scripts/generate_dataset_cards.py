#!/usr/bin/env python3
"""Generate docs/datasets/ index + per-dataset cards from reports and config."""

from __future__ import annotations

import json
from pathlib import Path

import yaml

ROOT = Path(__file__).resolve().parents[1]
CARDS_DIR = ROOT / "docs" / "datasets" / "cards"
V2_REPORT = ROOT / "data" / "clf" / "v2" / "dataset_report.json"
HF_REPORT = ROOT / "data" / "external" / "hf_import_report.json"
HF_CFG = [ROOT / "config" / "hf_malware_datasets.yaml", ROOT / "config" / "necromonk_datasets.yaml"]
MALWARE_CFG = ROOT / "config" / "malware_code_sources.yaml"


def write_card(slug: str, body: str) -> None:
    CARDS_DIR.mkdir(parents=True, exist_ok=True)
    (CARDS_DIR / f"{slug}.md").write_text(body.strip() + "\n", encoding="utf-8")


def _hf_blurb(repo: str) -> str:
    if "White-Hat" in repo:
        return "Defensive / benign security-agent prompts. **Threshold calibration** + v2 **train negatives** (`--hf-in-train neg-only`)."
    if "destroylist" in repo:
        return "Phishing domains as short malicious phrases. External **positive** benchmark; not in v2 train."
    if "red-team" in repo:
        return "Red-team refusal prompts. Small **positive** external eval set."
    if "code-stress" in repo:
        return "Benign code-stress prompts. External eval (negative)."
    if "Tersa" in repo or "Residual" in repo:
        return "Benign SFT/DPO-style prompts. Hard negatives for train (v2) and eval."
    return "Imported via `import_hf_malware.py`."


def card_hf(repo: str, spec: dict, stats: dict | None) -> str:
    role = spec.get("role", "?")
    kept = stats.get("kept") if stats else "—"
    raw = stats.get("raw_rows") if stats else "—"
    cat = spec.get("category", "—")
    field = spec.get("text_field") or spec.get("text_template", "—")
    in_train = (
        "negatives in train (`--hf-in-train neg-only`)"
        if role == "negative"
        else "eval / benchmark only (not v2 train positives)"
    )
    return f"""# {repo}

| | |
|---|---|
| **Slug** | `{slugify(repo)}` |
| **HF repo** | [{repo}](https://huggingface.co/datasets/{repo}) |
| **Role** | **{role}** |
| **Category** | {cat} |
| **Text field** | `{field}` |
| **Imported rows** | {kept} kept ({raw} raw) |
| **In v2 train** | {in_train} |

## Description

{_hf_blurb(repo)}

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
"""


def slugify(repo: str) -> str:
    return repo.replace("/", "__").lower()


def main() -> None:
    v2 = json.loads(V2_REPORT.read_text(encoding="utf-8")) if V2_REPORT.exists() else {}
    hf_rep = json.loads(HF_REPORT.read_text(encoding="utf-8")) if HF_REPORT.exists() else {}
    hf_stats = {d["repo"]: d for d in hf_rep.get("datasets", [])}

    specs: list[dict] = []
    for cfg_path in HF_CFG:
        if cfg_path.exists():
            specs.extend(yaml.safe_load(cfg_path.read_text(encoding="utf-8")).get("import", []))

    # --- internal cards ---
    langs = ", ".join(v2.get("languages", []))
    splits = v2.get("split_counts", {})
    write_card(
        "lexicon-multilingual",
        f"""# Multilingual lexicon (16 languages)

| | |
|---|---|
| **Slug** | `lexicon-multilingual` |
| **Languages** | {langs} |
| **Raw terms** | {v2.get("sources_raw", {}).get("lexicon", "—")} |
| **In clf (deduped)** | {v2.get("dedup", {}).get("kept_by_source", {}).get("lexicon_multilingual", "—")} malicious |
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
""",
    )

    write_card(
        "template-negatives",
        f"""# Template benign negatives

| | |
|---|---|
| **Slug** | `template-negatives` |
| **Generated count** | {v2.get("sources_raw", {}).get("template_neg", "—")} |
| **In clf train** | {v2.get("dedup", {}).get("kept_by_source", {}).get("template_negative", "—")} |
| **Label** | benign (`malicious=0`) |

## Description

Short synthetic benign phrases: coding tasks, defensive security wording, everyday devops — mirrors lexicon **form** without malicious intent.

## Build

Auto-generated inside `build_classifier_dataset.py` (`--neg-ratio`, `--min-negatives`).
""",
    )

    for split, n in splits.items():
        hold = "train/val/test split" if split in ("train", "val", "test") else ""
        write_card(
            f"clf-{split}",
            f"""# Classifier split: `{split}`

| | |
|---|---|
| **Slug** | `clf-{split}` |
| **File** | `data/clf/v2/{split}.jsonl` |
| **Rows** | {n} |
| **Variant** | {v2.get("variant", "v2_multilingual")} |
| **HF in train mode** | {v2.get("hf_in_train", "neg-only (rebuild to apply)")} |

## Description

Stable hash split of deduped train pool. {hold}

## Record schema

```json
{{"text": "...", "malicious": 0|1, "categories": ["..."], "source": "..."}}
```
""",
        )

    write_card(
        "test-obfuscated",
        f"""# Hold-out: obfuscated lexicon

| | |
|---|---|
| **Slug** | `test-obfuscated` |
| **File** | `data/clf/v2/test_obfuscated.jsonl` |
| **Rows** | {v2.get("obfuscated_test", 4000)} |
| **Label** | 100% malicious |
| **In train** | **Never** |

## Description

Per-language obfuscated variants of lexicon terms. Tests generalization beyond plain canonical/translated strings.

## Eval

```bash
python scripts/evaluate_classifier.py --splits test_obfuscated --profile holdout
```
""",
    )

    write_card(
        "test-malware-code",
        f"""# Hold-out: real malware code snippets

| | |
|---|---|
| **Slug** | `test-malware-code` |
| **File** | `data/clf/v2/test_malware_code.jsonl` |
| **Rows** | {v2.get("malware_code_test", 4000)} |
| **Label** | 100% malicious |
| **In train** | **Never** (v2) |
| **Pool** | `{v2.get("malware_code_path", "data/external/malware_code_merged.json")}` |

## Description

Chunked real malware / rejected-code samples. Long texts (use `--holdout-batch-size 4` when embedding).

Categories (pool): `{json.dumps(v2.get("malware_code_categories", {}))}`

## Build pool

```bash
python scripts/build_malware_code_pool.py
```
""",
    )

    # HF cards
    for spec in specs:
        repo = spec["repo"]
        write_card(slugify(repo), card_hf(repo, spec, hf_stats.get(repo)))

    # malware pool card
    write_card(
        "malware-code-pool",
        """# Malware code pool (builder)

| | |
|---|---|
| **Slug** | `malware-code-pool` |
| **Output** | `data/external/malware_code_merged.json` |
| **Hold-out size** | 4000 (sampled into `test_malware_code.jsonl`) |
| **Config** | `config/malware_code_sources.yaml` |

## Sources

- Local JSON / instructional dumps
- LoRA DPO rejected code
- Optional: `mikosovsky/malware-vxunderground-2024-code-decompiled` (large; gated disk)

## Build

```bash
python scripts/build_malware_code_pool.py
```
""",
    )

    # Index README
    index_rows = [
        "| Card | Type | Role |",
        "|------|------|------|",
        f"| [lexicon-multilingual](cards/lexicon-multilingual.md) | Internal | train positives |",
        f"| [template-negatives](cards/template-negatives.md) | Internal | train negatives |",
    ]
    for split in ("train", "val", "test"):
        if split in splits:
            index_rows.append(
                f"| [clf-{split}](cards/clf-{split}.md) | Split | {splits[split]} rows |"
            )
    index_rows.extend(
        [
            "| [test-obfuscated](cards/test-obfuscated.md) | Hold-out | eval only |",
            "| [test-malware-code](cards/test-malware-code.md) | Hold-out | eval only |",
            "| [malware-code-pool](cards/malware-code-pool.md) | External | pool builder |",
        ]
    )
    for spec in specs:
        repo = spec["repo"]
        role = spec.get("role", "?")
        index_rows.append(
            f"| [{repo}](cards/{slugify(repo)}.md) | HF | {role} |"
        )

    readme = f"""# Dataset catalog

Auto-generated by `scripts/generate_dataset_cards.py`. Re-run after rebuilding clf or HF import.

## v2 summary

- **Train positives:** multilingual lexicon (no obfuscation)
- **Train negatives:** template benign + HF benign (`--hf-in-train neg-only`)
- **Hold-outs:** obfuscated lexicon, malware code pool
- **HF positives** (e.g. destroylist): import for **benchmark**, not v2 train

## Cards

{chr(10).join(index_rows)}

## Regenerate

```bash
python scripts/generate_dataset_cards.py
```
"""
    (ROOT / "docs" / "datasets" / "README.md").write_text(readme, encoding="utf-8")
    print(f"Wrote {CARDS_DIR} ({len(list(CARDS_DIR.glob('*.md')))} cards)")
    print(f"Wrote docs/datasets/README.md")


if __name__ == "__main__":
    main()
