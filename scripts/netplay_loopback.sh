#!/usr/bin/env bash
# Loopback test of online co-op: starts a headless `ps2run --host`, joins it from a headless Chromium
# (scripts/netplay_test.mjs drives web/netplay.html's test mode), prints both sides' numbers, stops the host.
#
#   netplay_loopback.sh <log-dir> <seconds> <p2-script> -- <ps2run> <elf> [ps2run args...]
#
# <p2-script> is "ms:button:ms,..." relative to the moment P2 connects (buttons: start, cross, square, ...,
# stickl/stickr/sticku/stickd). Environment: PORT (47920), WAIT_BEFORE seconds before joining (0),
# SHOT_EVERY seconds between client screenshots (0 = only the last one).
set -euo pipefail
logdir=$1 seconds=$2 script=$3
shift 3
[ "${1:-}" = -- ] && shift
port=${PORT:-47920}
mkdir -p "$logdir"
"$@" --host "$port" > "$logdir/host.log" 2>&1 &
host=$!
trap 'kill $host 2>/dev/null || true; wait $host 2>/dev/null || true' EXIT
code=
for _ in $(seq 150); do
  code=$(sed -n 's/.*session code \([0-9]\{6\}\).*/\1/p' "$logdir/host.log" | head -1)
  [ -n "$code" ] && break
  kill -0 $host 2>/dev/null || break
  sleep 0.1
done
[ -n "$code" ] || { echo "host did not start:"; tail -5 "$logdir/host.log"; exit 1; }
sleep "${WAIT_BEFORE:-0}"
node "$(dirname "$0")/netplay_test.mjs" "http://127.0.0.1:$port/#code=$code&test=$seconds&script=$script" "$logdir/client.png" \
  --shot-every "${SHOT_EVERY:-0}" | tee "$logdir/client.log"
grep '^\[netplay\]' "$logdir/host.log" | grep -v 'P2 opens' || true
