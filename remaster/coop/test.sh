#!/usr/bin/env bash
# Native lockstep co-op tests (mksm/notes/native-lockstep.md), local only: a throwaway server/signal.mjs on 127.0.0.1,
# headless ps2run instances (PS2_GS=soft, no audio, MemoryMax=3G each), the whole test under the shared heavy lock.
#
#   remaster/coop/test.sh pair    <out> <frames> <state> [host VAR=value...] [-- guest VAR=value...]
#       the host loads <state> and makes the room; the guest boots with no state and joins; the host's game is sent
#       to it (drop-in). Compares the per-frame PS2_HASH_LOG of both after the drop-in frame.
#       TLS=1: wss:// through a local TLS proxy with a self-signed certificate. INVITE=1: both join with --invite links.
#       Host/guest VARs, e.g. PS2_LOCKSTEP_RELAY=1 (no WebRTC), PS2_LOCKSTEP_BLOCK_ICE=1 (WebRTC fails -> relay).
#   remaster/coop/test.sh interop <out> <frames> <state>
#       web/lockstep.js in Node (room host P1, mock emulator, sends <state> as the drop-in blob) against a native guest
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
rm -rf "$out"/A "$out"/B "$out"/signal-data "$out"/*.log "$out"/room "$out"/report.json

# ---- signalling server with throwaway secrets, an invite from its admin API, optionally TLS in front ----
rnd() { head -c 48 /dev/urandom | base64 | tr -d '/+='; }
admin=$(rnd)
COOKIE_SECRET=$(rnd) ADMIN_SECRET=$admin TURN_SECRET=$(rnd) HOST=127.0.0.1 PORT=$PORT DATA_DIR=$out/signal-data \
  node "$here/server/signal.mjs" > "$out/signal.log" 2>&1 &
pids=($!)
trap 'kill "${pids[@]}" 2>/dev/null' EXIT
for _ in $(seq 50); do grep -q listening "$out/signal.log" 2>/dev/null && break; sleep 0.1; done
origin=http://127.0.0.1:$PORT
signal=ws://127.0.0.1:$PORT
tls_env=()
if [ -n "${TLS:-}" ]; then
  openssl req -x509 -newkey ec -pkeyopt ec_paramgen_curve:prime256v1 -nodes -days 1 -subj /CN=127.0.0.1 \
    -addext subjectAltName=IP:127.0.0.1 -keyout "$out/key.pem" -out "$out/cert.pem" 2> /dev/null
  node "$here/remaster/coop/tls_proxy.mjs" $((PORT + 1)) "$PORT" "$out/key.pem" "$out/cert.pem" > "$out/tls.log" 2>&1 &
  pids+=($!)
  for _ in $(seq 50); do grep -q 'tls proxy' "$out/tls.log" 2>/dev/null && break; sleep 0.1; done
  origin=https://127.0.0.1:$((PORT + 1))
  signal=wss://127.0.0.1:$((PORT + 1))
  tls_env=(PS2_LOCKSTEP_CA="$out/cert.pem")
fi
link=$(curl -s -X POST -H "Authorization: Bearer $admin" "http://127.0.0.1:$PORT/admin/invite?uses=10&note=coop-test" |
  python3 -c 'import sys, json; print(json.load(sys.stdin)["link"])') || { echo "signal.mjs did not start"; cat "$out/signal.log"; exit 1; }
link=$origin/invite?${link#*\?}  # through the TLS proxy when TLS=1
curl -s -o /dev/null -D - "http://127.0.0.1:$PORT/invite?${link#*\?}" | sed -n 's/^[Ss]et-[Cc]ookie: \([^;]*\).*/\1/p' > "$out/cookie"

args_file=${ARGS:-$out/input.args}
first=10; [ "$mode" = interop ] && first=1001
if [ -z "${ARGS:-}" ]; then
  { python3 "$here/mksm/tools/scripts/gen_mash.py" "$first" "$frames" 4242
    python3 "$here/mksm/tools/scripts/gen_mash.py" "$first" "$frames" 777 | sed -E 's/^--press ([0-9]+):/--press \1:p2:/'; } > "$args_file"
fi
base=$(python3 -c "import json; print(json.load(open('${state%.state}.json'))['frame'])")
stop=$((base + frames + 200))  # the host plays alone for a while before the guest drops in
# PS2_LOCKSTEP_STUN=none: never fall back to public STUN servers (local only)
common=(SDL_AUDIODRIVER=dummy __NV_PRIME_RENDER_OFFLOAD=1 __VK_LAYER_NV_optimus=NVIDIA_only PS2_GS=soft PS2_RTC=1792000000 PS2_LOCKSTEP_STUN=none "${tls_env[@]}")
args=("$G/disc/SLUS_210.87" --disc "$G/disc.iso" --frames "$stop" $(cat "$args_file"))
ps2run() { # dir join-args extra-env... ; the instance's log, hash log, card and cookie file live in <dir>
  local dir=$1; shift
  local join=(); while [ "$1" != -- ]; do join+=("$1"); shift; done; shift
  mkdir -p "$dir"
  env "${common[@]}" PS2_HASH_LOG="$dir/hash.log" PS2_LOCKSTEP_COOKIE_FILE="$dir/cookies" "$@" \
    systemd-run --user --scope -q -p MemoryMax=3G -p MemorySwapMax=0 -- \
    timeout 1200 "$bin" "${args[@]}" --memcard "$dir/card.ps2" "${join[@]}" > "$dir/run.log" 2>&1
}
cookie_env=(PS2_LOCKSTEP_COOKIE="$(cat "$out/cookie")")

if [ "$mode" = pair ]; then
  henv=(); genv=(); side=h
  for a in "$@"; do if [ "$a" = -- ]; then side=g; elif [ $side = h ]; then henv+=("$a"); else genv+=("$a"); fi; done
  if [ -n "${INVITE:-}" ]; then hjoin=(--invite "$link"); cookie_env=(); else hjoin=(--lockstep "$signal" --room new); fi
  t0=$(date +%s)
  ps2run "$out/A" --load-state "$state" "${hjoin[@]}" -- "${cookie_env[@]}" "${henv[@]}" & pa=$!
  room=
  for _ in $(seq 300); do room=$(grep -oP "(?<=created room )[a-z0-9]{12}" "$out/A/run.log" 2>/dev/null | head -1); [ -n "$room" ] && break; sleep 0.1; done
  [ -n "$room" ] || { echo "the host made no room"; kill $pa; tail -3 "$out/A/run.log"; exit 1; }
  if [ -n "${INVITE:-}" ]; then gjoin=(--invite "$link&room=$room"); else gjoin=(--lockstep "$signal" --room "$room"); fi
  ps2run "$out/B" "${gjoin[@]}" -- "${cookie_env[@]}" "${genv[@]}" & pb=$!
  wait $pa; ea=$?; wait $pb; eb=$?
  echo "room $room, $(( $(date +%s) - t0 )) s: host exit $ea, guest exit $eb"
  python3 - "$out/A/hash.log" "$out/B/hash.log" "$out/A/run.log" <<'PY'
import re, sys
log = open(sys.argv[3]).read()
m = re.search(r"\[lockstep\] loaded frame \d+ \(game frame (\d+)\)", log)
if not m:
    print("no drop-in in the host log"); sys.exit()
g = int(m[1])
a, b = ({int(l.split()[0]): l.split()[1] for l in open(p) if int(l.split()[0]) > g} for p in sys.argv[1:3])
both = sorted(set(a) & set(b))
same = sum(a[f] == b[f] for f in both)
first = next((f for f in both if a[f] != b[f]), None)
print(f"drop-in after game frame {g}; hash logs after it: host {len(a)}, guest {len(b)} frames; identical {same}/{len(both)}"
      f" ({both[0] if both else '-'}-{both[-1] if both else '-'}); first divergent frame {first}")
PY
  grep -h -E '^\[lockstep\] (summary|refused|the other player refused|DESYNC|drop-in|using the relay|direct connection|invite|sent the game|received the game)' \
    "$out"/A/run.log "$out"/B/run.log | cut -c1-330
elif [ "$mode" = interop ]; then
  # the native hello: a dry run against a closed port prints it, then stops at the first vblank
  ps2run "$out/dry" --lockstep ws://127.0.0.1:1 --room x -- "${cookie_env[@]}"
  python3 - "$out/dry/run.log" "$out/hello.json" <<'PY'
import json, re, sys
line = next(l for l in open(sys.argv[1]) if l.startswith("[lockstep] build "))
m = re.match(r"\[lockstep\] build (\S+), disc (\S+), game patches .*?, config (\{.*\})$", line.strip())
json.dump({"build": m[1], "disc": m[2], "config": json.loads(m[3])}, open(sys.argv[2], "w"))
PY
  node "$here/remaster/coop/jspeer.mjs" "$origin" "$out/cookie" "$out/hello.json" "$out/room" "$args_file" "$frames" "$out/report.json" "$state" \
    > "$out/js.log" 2>&1 & pj=$!
  pids+=($pj)
  for _ in $(seq 100); do [ -s "$out/room" ] && break; sleep 0.1; done
  [ -s "$out/room" ] || { echo "no room from the JS peer"; cat "$out/js.log"; exit 1; }
  # Node has no RTCPeerConnection, so the native guest goes straight to the relay
  # the state's game frame + frames: the guest stops with the JS peer's last frame
  args=("$G/disc/SLUS_210.87" --disc "$G/disc.iso" --frames $((base + frames)) $(cat "$args_file"))
  ps2run "$out/B" --lockstep "$signal" --room "$(cat "$out/room")" -- "${cookie_env[@]}" PS2_LOCKSTEP_RELAY=1
  echo "native exit $?"
  wait $pj; echo "js exit $?"
  grep -h -E '^\[lockstep\] (handshake|summary|refused|received the game|loaded|drop-in|running)' "$out/B/run.log" | cut -c1-300
  grep -h '\[js\] report' "$out/js.log" | cut -c1-900
else
  echo "usage: $0 pair|interop <out> <frames> <state> ..."; exit 2
fi
