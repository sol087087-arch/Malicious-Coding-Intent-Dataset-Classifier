"""Shared normalization + cross-source dedup for classifier dataset build."""

from __future__ import annotations

import hashlib
import re
import unicodedata


def normalize_text(text: str) -> str:
    """Canonical form for duplicate detection across sources."""
    t = unicodedata.normalize("NFKC", text)
    t = t.replace("\r\n", "\n").replace("\r", "\n")
    t = re.sub(r"\s+", " ", t.strip().lower())
    return t


def norm_key(text: str) -> str:
    return hashlib.sha256(normalize_text(text).encode("utf-8")).hexdigest()


class CrossSourceDeduper:
    def __init__(self) -> None:
        self._seen: set[str] = set()
        self.dropped: dict[str, int] = {}
        self.kept: dict[str, int] = {}

    def try_add(self, text: str, source: str) -> bool:
        key = norm_key(text)
        if key in self._seen:
            self.dropped[source] = self.dropped.get(source, 0) + 1
            return False
        self._seen.add(key)
        self.kept[source] = self.kept.get(source, 0) + 1
        return True

    def report(self) -> dict:
        return {
            "unique_texts": len(self._seen),
            "kept_by_source": dict(sorted(self.kept.items())),
            "dropped_by_source": dict(sorted(self.dropped.items())),
            "total_dropped": sum(self.dropped.values()),
        }
