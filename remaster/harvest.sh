#!/usr/bin/env bash
# Texture harvest over the story maps: warps the g7600 state to each map, runs 2400 frames past it (--frames counts
# from boot, the state is at 7600; maps load in 800-1400) and dumps every texture drawn into
# remaster-data/textures/dump (texdump.sh does the same for the reference scenes). One run at a time, a pause between
# runs, and a RAM/VRAM check before each (waits up to 10 min, then stops).
# ponytail: only what the camera sees at the map's spawn point gets dumped; walking the maps would add more.
# usage: remaster/harvest.sh [map id...]   (hex, default: every story map; runs on the Pi too, with PS2_GS=soft)
set -uo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
D=$(cd "$here/../.." && pwd)/remaster-data
out=$D/textures/dump L=$D/logs/harvest
mkdir -p "$out" "$L"
# Story banks: Soul Tombs, Wastelands, Foundry, Wu Shi, Living Forest, Netherealm (story map only), Evil Monastery.
maps=${*:-00 01 02 03 04 05 06 07 08 0c 0f 11 13 14 18 19 1e  21 29 2c 2d 2e 2f 30  40 41 42 43 44 45 47 48 49 4a
          60 62 63 64 65 66 67 68 6a 6b 6c 6e  80 81 82 84 87 88 89 8e 8f 90 92 93  a0  c0 c1 c2 c3 c4 c5 c6 c7}
guard() {
  for _ in $(seq 60); do
    ram=$(awk '/MemAvailable/ {print int($2/1024)}' /proc/meminfo)
    vram=$(nvidia-smi --query-gpu=memory.free --format=csv,noheader,nounits 2>/dev/null | head -1)  # none on the Pi
    [ "$ram" -ge 4096 ] && [ "${vram:-99999}" -ge 2048 ] && { echo "guard: RAM ${ram} MB, VRAM ${vram} MB"; return 0; }
    echo "guard: waiting, RAM ${ram} MB, VRAM ${vram} MB"; sleep 10
  done
  echo "guard: STOP, not enough memory for 10 min"; exit 3
}
set -- $maps
i=0
for m in "$@"; do
  i=$((i + 1))
  guard
  python3 -I "$here/mksm/tools/scripts/poke_state.py" "$D/states/g7600.state" "$L/$m.state" \
    4d8c04=$m 4d8c08=1 4b0d9c=0 4d8bfc=1 4fee68=1 > /dev/null
  t=$SECONDS
  PS2_TEX_DUMP=$out "$here/remaster/run.sh" "$L/$m" 10000 "$L/$m.state" > /dev/null; rc=$?
  rm -f "$L/$m.state"
  echo "map $i/$# $m rc=$rc $((SECONDS - t))s: $(ls "$out" | grep -c '\.pam$') textures"
  sleep 10
done
echo "harvest done"
