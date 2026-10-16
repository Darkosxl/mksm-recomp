#!/usr/bin/env bash
# usage: run.sh <name> <query string> [drive.mjs options...]   serves build/web-mksm + disc, drives headless chromium
P=/home/darkwarro/Documents/Twitter/PS2_REA; T=$(cd "$(dirname "$0")" && pwd); W=$(cd "$T/../../.." && pwd)
name=$1; query=$2; shift 2
out=$P/logs/web/runs/$name; rm -rf "$out"; mkdir -p "$out"
port=${PORT:-$((8700 + RANDOM % 200))}
python3 -I $W/scripts/serve.py $W/build/web-mksm $W/games/mksm/disc.iso $port > "$out/serve.log" 2>&1 &
srv=$!
trap 'kill $srv 2>/dev/null; wait $srv 2>/dev/null' EXIT
for i in $(seq 50); do curl -sf -o /dev/null -I http://127.0.0.1:$port/ && break; sleep 0.2; done
node "$T/drive.mjs" --url "http://127.0.0.1:$port/?$query" --out "$out" "$@"
rc=$?
echo "[run.sh] drive rc=$rc"
exit $rc
