#!/usr/bin/env python3
"""Phase 1: generate canonical malicious-coding lexicon via OpenRouter."""

from __future__ import annotations

import argparse
import json
import os
import random
import re
import sys
import time
from datetime import datetime, timezone
from pathlib import Path

import yaml

ROOT = Path(__file__).resolve().parents[1]
if str(ROOT / "scripts") not in sys.path:
    sys.path.insert(0, str(ROOT / "scripts"))

from openrouter_client import ChatMessage, OpenRouterClient, OpenRouterConfig, extract_json_array
from paths import SOURCE_LANG, canonical_raw, canonical_state, raw_dir

CANONICAL_PATH = canonical_raw(SOURCE_LANG)
LEGACY_PATHS = [
    ROOT / "data" / "raw" / "canonical.jsonl",
    ROOT / "data" / "raw" / "lexicon.jsonl",
]
STATE_PATH = canonical_state(SOURCE_LANG)
PROMPT_PATH = ROOT / "config" / "prompts" / "lexicon_system.md"

# Phase 1: canonical spelling only (letters, digits, spaces, hyphens).
CANONICAL_RE = re.compile(r"^[A-Za-z][A-Za-z0-9 .\-]{0,79}$")
MAX_WORDS = 5
OBFUSCATION_MARKERS = re.compile(r"[@$#*\\|_]|\.{2,}|\d[a-z]|[a-z]\d{2,}")


def load_env_key() -> str:
    env_path = ROOT / ".env"
    if env_path.exists():
        for line in env_path.read_text(encoding="utf-8").splitlines():
            line = line.strip()
            if line.startswith("OPENROUTER_API_KEY="):
                return line.split("=", 1)[1].strip().strip('"').strip("'")
    key = os.environ.get("OPENROUTER_API_KEY", "").strip()
    if not key:
        raise SystemExit("Set OPENROUTER_API_KEY in .env or environment.")
    return key


def load_yaml(path: Path) -> dict:
    return yaml.safe_load(path.read_text(encoding="utf-8"))


def normalize_canonical(s: str) -> str | None:
    s = " ".join(s.split())
    if not s or len(s) > 80:
        return None
    if s.count("\n") > 0:
        return None
    if len(s.split()) > MAX_WORDS:
        return None
    if not CANONICAL_RE.match(s):
        return None
    if OBFUSCATION_MARKERS.search(s.replace(" ", "")):
        return None
    return s


def migrate_legacy() -> None:
    if CANONICAL_PATH.exists():
        return
    legacy = next((p for p in LEGACY_PATHS if p.exists()), None)
    if legacy is None:
        return
    rows: list[str] = []
    with legacy.open(encoding="utf-8") as f:
        for line in f:
            if not line.strip():
                continue
            row = json.loads(line)
            term = row.get("term")
            if not isinstance(term, str):
                continue
            norm = normalize_canonical(term)
            if norm is None:
                continue
            row["term"] = norm
            row["phase"] = "canonical"
            row["variant_type"] = "canonical"
            rows.append(json.dumps(row, ensure_ascii=False))
    if rows:
        CANONICAL_PATH.parent.mkdir(parents=True, exist_ok=True)
        CANONICAL_PATH.write_text("\n".join(rows) + "\n", encoding="utf-8")
        print(f"Migrated {len(rows)} canonical rows from legacy lexicon.jsonl")


def load_existing() -> set[str]:
    seen: set[str] = set()
    if not CANONICAL_PATH.exists():
        return seen
    with CANONICAL_PATH.open(encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            try:
                row = json.loads(line)
            except json.JSONDecodeError:
                continue
            term = row.get("term")
            if isinstance(term, str):
                seen.add(term)
    return seen


def load_state() -> dict:
    if STATE_PATH.exists():
        return json.loads(STATE_PATH.read_text(encoding="utf-8"))
    return {"model_index": 0, "category_index": 0, "batch_count": 0}


def save_state(state: dict) -> None:
    STATE_PATH.parent.mkdir(parents=True, exist_ok=True)
    STATE_PATH.write_text(json.dumps(state, indent=2), encoding="utf-8")


def append_terms(rows: list[dict]) -> None:
    CANONICAL_PATH.parent.mkdir(parents=True, exist_ok=True)
    with CANONICAL_PATH.open("a", encoding="utf-8") as f:
        for row in rows:
            f.write(json.dumps(row, ensure_ascii=False) + "\n")


def sample_already_collected(seen: set[str], n: int = 40) -> list[str]:
    if not seen:
        return []
    pool = list(seen)
    if len(pool) <= n:
        return pool
    return random.sample(pool, n)


def build_user_prompt(*, category_label: str, batch_size: int, already: list[str]) -> str:
    already_block = "\n".join(f"- {t}" for t in already) if already else "(none)"
    return (
        f"Category focus: {category_label}\n"
        f"Generate exactly {batch_size} new items.\n"
        f"Return one JSON array of {batch_size} strings.\n\n"
        f"ALREADY_COLLECTED (do not repeat):\n{already_block}"
    )


def next_model(models: list[str], start_index: int) -> tuple[str, int]:
    """Pick model at start_index; caller rotates on failure."""
    return models[start_index % len(models)], start_index


def resolve_models(models_cfg: dict, profile_override: str | None) -> tuple[str, list[str]]:
    profile = profile_override or models_cfg.get("profile", "smart-cheap")
    profiles = models_cfg.get("profiles") or {}
    if profile in profiles:
        return profile, list(profiles[profile]["models"])
    if "models" in models_cfg:
        return profile, list(models_cfg["models"])
    raise SystemExit(f"Unknown profile '{profile}'. Check config/models.yaml.")


def run(*, max_batches: int | None, profile: str | None) -> None:
    migrate_legacy()
    models_cfg = load_yaml(ROOT / "config" / "models.yaml")
    cats_cfg = load_yaml(ROOT / "config" / "categories.yaml")
    gen = models_cfg["generation"]
    profile_name, models = resolve_models(models_cfg, profile)
    categories = cats_cfg["categories"]
    system_prompt = PROMPT_PATH.read_text(encoding="utf-8").strip()

    client = OpenRouterClient(
        OpenRouterConfig(
            api_key=load_env_key(),
            app_name=os.environ.get("OPENROUTER_APP_NAME", "Safety DS Lexicon Generator"),
            site_url=os.environ.get("OPENROUTER_SITE_URL") or None,
        )
    )

    seen = load_existing()
    state = load_state()
    target = int(gen.get("target_canonical_entries", gen.get("target_entries", 6000)))
    batch_size = int(gen["batch_size"])
    delay = float(gen["request_delay_seconds"])
    temperature = float(gen["temperature"])
    max_tokens = int(gen["max_tokens"])
    max_retries = int(gen["max_retries_per_batch"])

    print(f"Profile: {profile_name} | Models: {len(models)}")
    print(f"Existing canonical: {len(seen)} | Target: {target}")

    batches_done = 0
    while len(seen) < target:
        if max_batches is not None and batches_done >= max_batches:
            print(f"Stopped after {max_batches} batches (checkpoint saved).")
            break

        cat_idx = state["category_index"] % len(categories)
        category = categories[cat_idx]
        cat_label = category["label"]
        model_idx = state["model_index"] % len(models)

        accepted: list[dict] = []
        success = False
        tries = 0
        while tries < max_retries and not success:
            model, _ = next_model(models, model_idx)
            user_prompt = build_user_prompt(
                category_label=cat_label,
                batch_size=batch_size,
                already=sample_already_collected(seen),
            )
            print(
                f"[batch {state['batch_count']}] category={category['id']} "
                f"model={model} seen={len(seen)}"
            )
            try:
                content, raw = client.chat(
                    model=model,
                    messages=[
                        ChatMessage(role="system", content=system_prompt),
                        ChatMessage(role="user", content=user_prompt),
                    ],
                    temperature=temperature,
                    max_tokens=max_tokens,
                )
                items = extract_json_array(content)
                ts = datetime.now(timezone.utc).isoformat()
                for item in items:
                    norm = normalize_canonical(item)
                    if norm is None or norm in seen:
                        continue
                    seen.add(norm)
                    accepted.append(
                        {
                            "term": norm,
                            "phase": "canonical",
                            "variant_type": "canonical",
                            "category": category["id"],
                            "model": model,
                            "profile": profile_name,
                            "created_at": ts,
                            "word_count": len(norm.split()),
                        }
                    )
                success = True
                state["model_index"] = (model_idx + 1) % len(models)
                state["category_index"] = (cat_idx + 1) % len(categories)
                state["batch_count"] = int(state.get("batch_count", 0)) + 1
                save_state(state)
                if accepted:
                    append_terms(accepted)
                print(f"  +{len(accepted)} accepted (total {len(seen)})")
            except Exception as exc:
                tries += 1
                print(f"  model failed ({tries}/{max_retries}): {exc}")
                model_idx = (model_idx + 1) % len(models)
                state["model_index"] = model_idx
                save_state(state)
                wait_s = min(60, 2**tries)
                msg = str(exc)
                if "retry_after_seconds" in msg:
                    try:
                        marker = '"retry_after_seconds":'
                        i = msg.find(marker)
                        if i >= 0:
                            rest = msg[i + len(marker) :]
                            num = ""
                            for ch in rest:
                                if ch.isdigit() or ch == ".":
                                    num += ch
                                elif num:
                                    break
                            if num:
                                wait_s = max(wait_s, int(float(num)) + 1)
                    except (ValueError, TypeError):
                        pass
                time.sleep(wait_s)

        if not success:
            print("All retries exhausted for this batch; stopping.")
            break

        batches_done += 1
        if len(seen) >= target:
            print(f"Target reached: {len(seen)} terms.")
            break
        time.sleep(delay)

    print(f"Done. Canonical entries: {len(seen)} -> {CANONICAL_PATH}")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--max-batches",
        type=int,
        default=None,
        help="Stop after N batches (for rate limits); resume later.",
    )
    parser.add_argument(
        "--profile",
        choices=["smart-cheap", "free"],
        default=None,
        help="Model pool from config/models.yaml (default: profile field).",
    )
    args = parser.parse_args()
    run(max_batches=args.max_batches, profile=args.profile)


if __name__ == "__main__":
    main()
