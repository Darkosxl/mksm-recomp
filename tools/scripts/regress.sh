#!/usr/bin/env bash
# Integration regression for the mksm build: boot, gameplay, Ko-op, Versus. One PASS/FAIL line per case.
# usage: regress.sh [ps2run] [outdir]   (defaults: integration build, logs/regress/<timestamp>)
set -u
P=/home/darkwarro/Documents/Twitter/PS2_REA
G=$P/ps2-web-recomp/games/mksm
BIN=${1:-$P/ps2-web-recomp/build/native-mksm/ps2run}
OUT=${2:-$P/logs/regress/$(date +%m%d-%H%M)}
ST=$P/logs/modes/states
mkdir -p "$OUT"
export __NV_PRIME_RENDER_OFFLOAD=1 __VK_LAYER_NV_optimus=NVIDIA_only

run() {  # name frames state|- extra-args...
  local name=$1 frames=$2 state=$3; shift 3
  local load=(); [ "$state" = - ] || load=(--load-state "$state")
  cp -f "$G/dev.ps2" "$OUT/$name.ps2"
  mkdir -p "$OUT/$name"
  timeout 1200 "$BIN" "$G/disc/SLUS_210.87" --disc "$G/disc.iso" "${load[@]}" --frames "$frames" \
    --memcard "$OUT/$name.ps2" --frames-dir "$OUT/$name" --frame-every 600 "$@" > "$OUT/$name.log" 2>&1
  local rc=$? reason bad
  reason=$(sed -n 's/^\[ee\] halted: //p' "$OUT/$name.log" | head -1)
  bad=$(grep -cE 'unmapped|no translated code|\[iop\] missing|\[sys\] unhandled' "$OUT/$name.log")
  if [ "$rc" = 0 ] && [ "$reason" = "frame limit reached" ] && [ "$bad" = 0 ]; then echo "PASS $name"
  else echo "FAIL $name rc=$rc halt='${reason}' bad_lines=$bad (log $OUT/$name.log)"; fi
}

run boot     6000  -                         $(cat "$G/inputs/story.args")
run gameplay 10800 "$P/logs/audio/f6900-g2.state" $(cat "$G/inputs/story.args")
run koop     9000  "$ST/koop-f6250.state"    --press 6300:start --stick 6400:60,128:200 --stick2 6400:200,128:200 \
                                             --press 6700:square --press 6700:p2:square --press 6900:p2:triangle
run versus   6000  "$ST/vs-f2790.state"      --press 3000:square --press 3100:p2:triangle --stick2 3200:40,128:120
echo "frames + logs: $OUT"
