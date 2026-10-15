#!/usr/bin/env bash
# black_run.sh <tag> <map_hex> <end_frame> [extra poke ...]
# Warp from a gameplay state to <map> (poke_state.py), run ps2run headless + silent, frames every $EVERY into $OUT/<tag>/frames.
# Env: BIN (ps2run), SRC (warp source state), ARGS (input args file; default sweep/inputs/<map>.args, use an empty file for no input),
#      POKES (replaces the default warp pokes), OUT (default $P/logs/black/runs), EVERY (default 50),
#      plus the debug env of the fix/black-maps runtime: PS2_WATCH*, PS2_DUMP_AT, PS2_PATCH, PS2_PROBE_* (see notes/black-maps.md).
set -u
P=/home/darkwarro/Documents/Twitter/PS2_REA
BIN=${BIN:-$P/wt/black/build/native-mksm/ps2run}
ELF=$P/ps2-web-recomp/games/mksm/disc/SLUS_210.87; ISO=$P/ps2-web-recomp/games/mksm/disc.iso
OUT=${OUT:-$P/logs/black/runs}
tag=$1; id=$2; end=$3; shift 3
d=$OUT/$tag; rm -rf "$d"; mkdir -p "$d/frames"
SRC=${SRC:-$P/logs/font/states/g7600.state}
ARGS=${ARGS:-$P/sweep/inputs/$id.args}
PS2_ELF=$ELF python3 $P/tools/scripts/poke_state.py "$SRC" "$d/w.state" ${POKES:-4d8c04=$id 4d8c08=1 4b0d9c=0 4d8bfc=1 4fee68=1} "$@" > /dev/null
m=$(awk '/MemAvailable/{print int($2/1024)}' /proc/meminfo); [ "$m" -ge 4000 ] || { echo "LOWMEM $m MB"; exit 3; }
export __NV_PRIME_RENDER_OFFLOAD=1 __VK_LAYER_NV_optimus=NVIDIA_only SDL_AUDIODRIVER=dummy
systemd-run --user --scope -p MemoryMax=3G -p MemorySwapMax=0 -- \
  timeout 1800 "$BIN" "$ELF" --disc "$ISO" --memcard "$d/mc.ps2" --load-state "$d/w.state" --frames "$end" \
  --frames-dir "$d/frames" --frame-every "${EVERY:-50}" $(cat "$ARGS") > "$d/log.txt" 2>&1
echo "exit $?" | tee -a "$d/log.txt"
rm -f "$d/w.state" "$d/mc.ps2"
