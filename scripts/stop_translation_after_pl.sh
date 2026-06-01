#!/usr/bin/env bash
# Kill translate_lexicon when Polish reaches 15018 (do not start uk/ur/th/nl).
set -euo pipefail
cd "$(dirname "$0")/.."
TARGET=15018
PID="${1:-62396}"
PL_FILE="data/pl/raw/translated.jsonl"

echo "Watching $PL_FILE; will stop PID $PID at $TARGET lines"
while true; do
  if [[ -f "$PL_FILE" ]]; then
    n=$(.venv/Scripts/python -c "
from pathlib import Path
p = Path('$PL_FILE')
print(sum(1 for _ in p.open(encoding='utf-8', errors='replace')))
")
    echo "$(date -Iseconds) pl: $n/$TARGET"
    if [[ "$n" -ge "$TARGET" ]]; then
      echo "Polish complete — stopping translation PID $PID"
      taskkill //PID "$PID" //F 2>/dev/null || kill "$PID" 2>/dev/null || true
      echo "Stopped."
      exit 0
    fi
  fi
  sleep 45
done
