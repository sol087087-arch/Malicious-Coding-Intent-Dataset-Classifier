"""Dataset layout: one folder per language, no cross-lang mixing."""

from __future__ import annotations

from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
DATA_ROOT = ROOT / "data"

SOURCE_LANG = "en"


def dataset_dir(lang: str) -> Path:
    """e.g. data/en, data/ar — each locale is isolated."""
    return DATA_ROOT / lang


def raw_dir(lang: str) -> Path:
    return dataset_dir(lang) / "raw"


def processed_dir(lang: str) -> Path:
    return dataset_dir(lang) / "processed"


def canonical_raw(lang: str = SOURCE_LANG) -> Path:
    return raw_dir(lang) / "canonical.jsonl"


def obfuscated_raw(lang: str = SOURCE_LANG) -> Path:
    return raw_dir(lang) / "obfuscated.jsonl"


def canonical_state(lang: str = SOURCE_LANG) -> Path:
    return raw_dir(lang) / "generation_state_canonical.json"


def canonical_deduped_txt(lang: str = SOURCE_LANG) -> Path:
    return processed_dir(lang) / "canonical_deduped.txt"


def lexicon_deduped_txt(lang: str = SOURCE_LANG) -> Path:
    return processed_dir(lang) / "lexicon_deduped.txt"


def translated_raw(lang: str) -> Path:
    return raw_dir(lang) / "translated.jsonl"


def translation_state(lang: str) -> Path:
    return raw_dir(lang) / "translation_state.json"
