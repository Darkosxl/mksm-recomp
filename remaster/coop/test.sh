#!/usr/bin/env bash
# Native lockstep co-op tests (mksm/notes/native-lockstep.md), local only: a throwaway server/signal.mjs on 127.0.0.1,
# headless ps2run instances (PS2_GS=soft, no audio, MemoryMax=3G each) under the shared heavy lock.
#
#   remaster/coop/test.sh pair    <out> <frames> <state> [host VAR=value...] [-- guest VAR=value...]
#       two native peers (host makes the room, guest joins); compares their per-frame PS2_HASH_LOG
#   remaster/coop/test.sh interop <out> <frames> <state>
#       web/lockstep.js in Node (room host P1, mock emulator) against a native guest (P2)
#
# Input: ARGS=<file of --press lines> (default: gen_mash.py for p1 + another seed as p2 lines).
# Needs server/node_modules (cd server && npm ci). Env: PS2RUN, PORT (default 8791).
set -uo pipefail
here=$(cd "$(dirname "$0")/../.." && pwd)
P=$(cd "$here/../.." && pwd)
# the whole test holds the machine-wide heavy lock (one emulator job at a time)
[ -n "${COOP_LOCKED:-}" ] || COOP_LOCKED=1 exec flock "$P/logs/heavy.lock" "$0" "$@"
for _ in $(seq 300); do pgrep -x ps2run > /dev/null || break; sleep 2; done  # at most our own two instances
pgrep -x ps2run > /dev/null && { echo "another ps2run is still running"; exit 1; }
G=$here/games/mksm
bin=${PS2RUN:-$here/build/native-mksm/ps2run}
mode=$1 out=$(realpath -m "$2") frames=$3 state=$(realpath "$4"); shift 4
PORT=${PORT:-8791}
[ -d "$here/server/node_modules/ws" ] || { echo "server/node_modules is missing: (cd server && npm ci)"; exit 2; }
mkdir -p "$out"

# ---- signalling server with throwaway secrets, and an invite cookie from its admin API ----
rnd() { head -c 48 /dev/urandom | base64 | tr -d '/+='; }
admin=$(rnd)
COOKIE_SECRET=$(rnd) ADMIN_SECRET=$admin TURN_SECRET=$(rnd) HOST=127.0.0.1 PORT=$PORT DATA_DIR=$out/signal-data \
  node "$here/server/signal.mjs" > "$out/signal.log" 2>&1 &
spid=$!
trap 'kill $spid 2>/dev/null' EXIT
for _ in $(seq 50); do grep -q listening "$out/signal.log" 2>/dev/null && break; sleep 0.1; done
link=$(curl -s -X POST -H "Authorization: Bearer $admin" "http://127.0.0.1:$PORT/admin/invite?uses=10&note=coop-test" |
  python3 -c 'import sys, json; print(json.load(sys.stdin)["link"])') || { echo "signal.mjs did not start"; cat "$out/signal.log"; exit 1; }
curl -s -o /dev/null -D - "$link" | sed -n 's/^[Ss]et-[Cc]ookie: \([^;]*\).*/\1/p' > "$out/cookie"

args_file=${ARGS:-$out/input.args}
if [ -z "${ARGS:-}" ]; then
  { python3 "$here/mksm/tools/scripts/gen_mash.py" 10 "$frames" 4242
    python3 "$here/mksm/tools/scripts/gen_mash.py" 10 "$frames" 777 | sed -E 's/^--press ([0-9]+):/--press \1:p2:/'; } > "$args_file"
fi
base=$(python3 -c "import json; print(json.load(open('${state%.state}.json'))['frame'])")
stop=$((base + frames))
signal=ws://127.0.0.1:$PORT
common=(SDL_AUDIODRIVER=dummy __NV_PRIME_RENDER_OFFLOAD=1 __VK_LAYER_NV_optimus=NVIDIA_only PS2_GS=soft PS2_RTC=1792000000
        PS2_LOCKSTEP_COOKIE=$(cat "$out/cookie"))
args=("$G/disc/SLUS_210.87" --disc "$G/disc.iso" --load-state "$state" --frames "$stop" $(cat "$args_file"))
ps2run() { # log hash-log room extra-env...
  local log=$1 hash=$2 room=$3; shift 3
  env "${common[@]}" ${hash:+PS2_HASH_LOG=$hash} "$@" systemd-run --user --scope -q -p MemoryMax=3G -p MemorySwapMax=0 -- \
    timeout 1200 "$bin" "${args[@]}" --memcard "$(dirname "$log")/card.ps2" --lockstep "$signal" --room "$room" > "$log" 2>&1
}

if [ "$mode" = pair ]; then
  henv=(); genv=(); side=h
  for a in "$@"; do if [ "$a" = -- ]; then side=g; elif [ $side = h ]; then henv+=("$a"); else genv+=("$a"); fi; done
  mkdir -p "$out/A" "$out/B"; rm -f "$out"/A/* "$out"/B/*
  t0=$(date +%s)
  ps2run "$out/A/run.log" "$out/A/hash.log" new "${henv[@]}" & pa=$!
  room=
  for _ in $(seq 300); do room=$(grep -oP "(?<=created room )[a-z0-9]{12}" "$out/A/run.log" 2>/dev/null | head -1); [ -n "$room" ] && break; sleep 0.1; done
  [ -n "$room" ] || { echo "the host made no room"; kill $pa; exit 1; }
  ps2run "$out/B/run.log" "$out/B/hash.log" "$room" "${genv[@]}" & pb=$!
  wait $pa; ea=$?; wait $pb; eb=$?
  echo "room $room, $(( $(date +%s) - t0 )) s: host exit $ea, guest exit $eb"
  python3 - "$out/A/hash.log" "$out/B/hash.log" <<'PY'
import sys
a, b = ([l.split()[:2] for l in open(p)] for p in sys.argv[1:3])
n = min(len(a), len(b))
same = sum(a[i] == b[i] for i in range(n))
first = next((a[i][0] for i in range(n) if a[i] != b[i]), None)
print(f"hash logs: host {len(a)} frames, guest {len(b)}; identical {same}/{n}; first divergent frame {first}")
PY
  grep -h -E '^\[lockstep\] (summary|refused|the other player refused|DESYNC)' "$out"/A/run.log "$out"/B/run.log | cut -c1-400
elif [ "$mode" = interop ]; then
  rm -f "$out"/room "$out"/report.json
  # the native hello: a dry run against a closed port prints it, then stops at the first vblank
  ps2run "$out/dry.log" "" x
  python3 - "$out/dry.log" "$out/hello.json" <<'PY'
import json, re, sys
line = next(l for l in open(sys.argv[1]) if l.startswith("[lockstep] build "))
m = re.match(r"\[lockstep\] build (\S+), disc (\S+), game patches .*?, config (\{.*\})$", line.strip())
json.dump({"build": m[1], "disc": m[2], "config": json.loads(m[3])}, open(sys.argv[2], "w"))
PY
  node "$here/remaster/coop/jspeer.mjs" "${signal/ws:/http:}" "$out/cookie" "$out/hello.json" "$out/room" "$args_file" "$frames" "$out/report.json" > "$out/js.log" 2>&1 & pj=$!
  for _ in $(seq 100); do [ -s "$out/room" ] && break; sleep 0.1; done
  [ -s "$out/room" ] || { echo "no room from the JS peer"; kill $pj; exit 1; }
  ps2run "$out/native.log" "" "$(cat "$out/room")"; echo "native exit $?"
  wait $pj; echo "js exit $?"
  grep -h -E '^\[lockstep\] (handshake|summary|refused)' "$out/native.log" | cut -c1-300
  grep -h '\[js\] report' "$out/js.log" | cut -c1-600
else
  echo "usage: $0 pair|interop <out> <frames> <state> ..."; exit 2
fi
