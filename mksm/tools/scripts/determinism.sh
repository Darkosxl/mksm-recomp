#!/usr/bin/env bash
# Thread-jitter determinism check (lockstep spike S2): runs one state + input script several times with the browser's
# thread layout (PS2_THREADS=1), with and without random host-thread sleeps (PS2_JITTER) and the VU1 thread on/off,
# writing per-frame hash logs, then diffs every log against the first one of its VU1 mode with hashdiff.py.
# usage: determinism.sh <ps2run> <outdir> <state|-> <until-frame> [ps2run args...]   (env: SEEDS="1 2", MODES="vu novu st", PPM)
#   state - boots from the disc; mode st = single-threaded reference (no PS2_THREADS)
set -u
P=/home/darkwarro/Documents/Twitter/PS2_REA
G=$P/ps2-web-recomp/games/mksm
BIN=$1 OUT=$2 STATE=$3 UNTIL=$4; shift 4
SEEDS=${SEEDS-1 2} MODES=${MODES:-vu novu}
mkdir -p "$OUT"
export __NV_PRIME_RENDER_OFFLOAD=1 __VK_LAYER_NV_optimus=NVIDIA_only SDL_AUDIODRIVER=dummy PS2_HASH_SPLIT=1
run() {  # name env...
  local name=$1; shift
  while [ "$(awk '/MemAvailable/{print int($2/1024)}' /proc/meminfo)" -lt 3000 ]; do echo "[det] waiting for memory"; sleep 30; done
  echo "[det] $name start $(date +%T)"
  env "$@" PS2_HASH_LOG="$OUT/$name.hash" systemd-run --user --scope -q -p MemoryMax=3G -p MemorySwapMax=0 -- \
    timeout 3600 "$BIN" "$G/disc/SLUS_210.87" --disc "$G/disc.iso" "${LOAD[@]}" --frames "$UNTIL" "${ARGS[@]}" > "$OUT/$name.log" 2>&1
  echo "[det] $name rc=$? $(sed -n 's/^\[ee\] halted: //p' "$OUT/$name.log" | head -1) $(grep -h '^\[jitter\] slept' "$OUT/$name.log") $(date +%T)"
}
ARGS=("$@")
LOAD=(); [ "$STATE" = - ] || LOAD=(--load-state "$STATE")
for mode in $MODES; do
  case $mode in
    vu) env=(PS2_THREADS=1) ;;
    novu) env=(PS2_THREADS=1 PS2_NO_VU_THREAD=1) ;;
    st) env=(PS2_UNUSED=1) ;;
  esac
  run "$mode-plain" "${env[@]}"
  [ "$mode" = st ] && continue
  for seed in $SEEDS; do run "$mode-j$seed" "${env[@]}" PS2_JITTER="$seed${PPM:+,$PPM}"; done
done
for mode in $MODES; do
  [ "$mode" = st ] || [ -z "$SEEDS" ] || python3 -I "$(dirname "$0")/hashdiff.py" "$OUT/$mode-plain.hash" "$OUT"/$mode-j*.hash
done
first=$(echo $MODES | cut -d' ' -f1)
for mode in $MODES; do [ "$mode" = "$first" ] || python3 -I "$(dirname "$0")/hashdiff.py" "$OUT/$first-plain.hash" "$OUT/$mode-plain.hash"; done
