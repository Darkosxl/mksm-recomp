#!/usr/bin/env bash
# Run the remaster build headless with the reference settings: pinned clock, fresh memory card, NVIDIA GPU, no audio,
# memory-capped and serialised on the shared heavy lock (PS2_LOCK=file picks another lock).
# usage: remaster/run.sh <outdir> <frames> <state|-> [ps2run args...]   (env: PS2RUN, extra PS2_* passed through)
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
out=$1 frames=$2 state=$3; shift 3
bin=${PS2RUN:-$here/build/native-mksm/ps2run}
G=$here/games/mksm
mkdir -p "$out"
rm -f "$out/card.ps2"
load=(); [ "$state" = - ] || load=(--load-state "$state")
export __NV_PRIME_RENDER_OFFLOAD=1 __VK_LAYER_NV_optimus=NVIDIA_only SDL_AUDIODRIVER=dummy PS2_RTC=${PS2_RTC:-1792000000}
flock "${PS2_LOCK:-$P/logs/heavy.lock}" systemd-run --user --scope -q -p MemoryMax=3G -p MemorySwapMax=0 -- \
  timeout 1800 "$bin" "$G/disc/SLUS_210.87" --disc "$G/disc.iso" "${load[@]}" --frames "$frames" \
  --memcard "$out/card.ps2" "$@" > "$out/run.log" 2>&1
grep -m1 '^\[ee\] halted' "$out/run.log"
