from __future__ import annotations

import json
import time
import urllib.error
import urllib.request
from dataclasses import dataclass
from typing import Any


OPENROUTER_CHAT_URL = "https://openrouter.ai/api/v1/chat/completions"


@dataclass(frozen=True)
class OpenRouterConfig:
    api_key: str
    app_name: str = "Safety DS Lexicon Generator"
    site_url: str | None = None
    timeout_seconds: int = 120
    max_retries: int = 3


@dataclass(frozen=True)
class ChatMessage:
    role: str
    content: str


def extract_json_array(text: str) -> list[str]:
    stripped = text.strip()
    if stripped.startswith("```"):
        lines = stripped.splitlines()
        if lines and lines[0].startswith("```"):
            lines = lines[1:]
        if lines and lines[-1].startswith("```"):
            lines = lines[:-1]
        stripped = "\n".join(lines).strip()
    try:
        parsed = json.loads(stripped)
    except json.JSONDecodeError:
        start = stripped.find("[")
        end = stripped.rfind("]")
        if start < 0 or end <= start:
            raise ValueError("Response did not contain a JSON array") from None
        parsed = json.loads(stripped[start : end + 1])
    if not isinstance(parsed, list):
        raise ValueError("Expected JSON array")
    out: list[str] = []
    for item in parsed:
        if isinstance(item, str):
            s = item.strip()
            if s:
                out.append(s)
    return out


class OpenRouterClient:
    def __init__(self, config: OpenRouterConfig) -> None:
        self.config = config

    def chat(
        self,
        *,
        model: str,
        messages: list[ChatMessage],
        temperature: float,
        max_tokens: int,
    ) -> tuple[str, dict[str, Any]]:
        body: dict[str, Any] = {
            "model": model,
            "messages": [{"role": m.role, "content": m.content} for m in messages],
            "temperature": temperature,
            "max_tokens": max_tokens,
        }
        encoded = json.dumps(body).encode("utf-8")
        headers = {
            "Authorization": f"Bearer {self.config.api_key}",
            "Content-Type": "application/json",
            "HTTP-Referer": self.config.site_url
            or "https://github.com/sol087087-arch/Malicious-Coding-Intent-Dataset-Classifier",
            "X-Title": self.config.app_name,
        }
        last_err: Exception | None = None
        for attempt in range(self.config.max_retries + 1):
            req = urllib.request.Request(
                OPENROUTER_CHAT_URL,
                data=encoded,
                headers=headers,
                method="POST",
            )
            try:
                with urllib.request.urlopen(req, timeout=self.config.timeout_seconds) as resp:
                    raw = json.load(resp)
                choices = raw.get("choices") or []
                if not choices:
                    raise ValueError("Empty choices in OpenRouter response")
                content = (choices[0].get("message") or {}).get("content") or ""
                if not str(content).strip():
                    raise ValueError("Empty model content")
                return str(content), raw
            except urllib.error.HTTPError as exc:
                last_err = exc
                detail = exc.read().decode("utf-8", errors="replace")
                retryable = exc.code in {408, 429, 500, 502, 503, 504}
                if not retryable or attempt >= self.config.max_retries:
                    raise RuntimeError(f"HTTP {exc.code}: {detail[:500]}") from exc
                time.sleep(2 ** attempt)
            except (urllib.error.URLError, TimeoutError, ValueError) as exc:
                last_err = exc
                if attempt >= self.config.max_retries:
                    raise
                time.sleep(2 ** attempt)
        raise RuntimeError(f"OpenRouter request failed: {last_err}")
