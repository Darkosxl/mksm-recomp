#!/usr/bin/env bash
# Build Mortal Kombat: Shaolin Monks (NTSC-U, SLUS_210.87) natively, or for the browser, from your own disc image.
# usage: mksm/build.sh <your.iso> [--retranslate] [--jobs N] [--web]
#   --retranslate  regenerate mksm/generated from the ELF instead of using the committed C++
#   --web          build the browser version (WebGPU, build/web-mksm) instead of the native one; see mksm/notes/web-build.md
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
M="$ROOT/mksm"; G="$ROOT/games/mksm"
iso=${1:?usage: mksm/build.sh <your.iso> [--retranslate] [--jobs N] [--web]}; shift
retranslate=0; jobs=4; web=0
while [ $# -gt 0 ]; do
  case "$1" in --retranslate) retranslate=1 ;; --jobs) jobs=$2; shift ;; --web) web=1 ;; *) echo "unknown option $1" >&2; exit 2 ;; esac
  shift
done

mkdir -p "$G/disc"
ln -sfn "$(realpath "$iso")" "$G/disc.iso"
python3 -I "$ROOT/scripts/disc.py" extract "$G/disc.iso" "$G/disc" SYSTEM.CNF SLUS_210.87 > /dev/null
# the known dump's ELF is an unlock-all mod that breaks Ko-op; patch_koop.py fixes it and refuses unknown bytes
python3 -I "$M/tools/scripts/patch_koop.py" "$G/disc/SLUS_210.87" "$G/disc/SLUS_210.87" || echo "ELF not patched (retail dump?) — continuing"

if [ "$web" = 0 ] || [ "$retranslate" = 1 ]; then
  [ -x "$ROOT/build/tools/eerecomp" ] || CXX=${CXX:-clang++} PS2_JOBS=$jobs "$ROOT/scripts/setup.sh" --native-only
fi
if [ "$retranslate" = 1 ]; then
  # decomp/overrides.txt: the functions with a hand-written replacement get the decomp hook (decomp/README.md)
  # mksm/idle.txt: wait loops charged their cycles at once instead of spinning (recomp/codegen.hpp)
  "$ROOT/build/tools/eerecomp" "$G/disc/SLUS_210.87" --entries "$M/entries.txt" --overrides "$ROOT/decomp/overrides.txt" --idle "$M/idle.txt" \
    --out "$M/generated" | tail -1
  # VU1 microprograms recorded with PS2_VU_RECORD=games/mksm/vu1 become SIMD C++ (unseen ones are JIT'd/interpreted)
  ! compgen -G "$G/vu1/*.bin" > /dev/null || "$ROOT/build/tools/vurecomp" "$G/vu1" "$M/generated" | tail -1
fi

if [ "$web" = 1 ]; then
  # preloads the patched ELF as /game/core.elf; the page streams the disc with HTTP Range requests
  "$ROOT/scripts/setup.sh" --web-only
  PS2_JOBS=$jobs PS2_GENERATED="$M/generated" "$ROOT/scripts/build_web.sh" mksm
  # the game data archives (GAMEDATA.WA*, ~2.4 GB) are what a remote player prefetches into its disc cache (disc-sw.js)
  python3 -I "$ROOT/scripts/disc.py" list "$G/disc.iso" | python3 -I -c 'import json, sys
r = sorted((int(f[1]) * 2048, int(f[2])) for f in (l.split() for l in sys.stdin) if f[3].startswith("GAMEDATA.WA"))
json.dump({"ranges": r}, sys.stdout)' > "$ROOT/build/web-mksm/prefetch.json"
  echo
  echo "Play:   python3 scripts/serve.py build/web-mksm games/mksm/disc.iso   then open http://localhost:8620 in Chrome/Edge"
  exit 0
fi

cmake -S "$ROOT" -B "$ROOT/build/native-mksm" -G Ninja -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_CXX_COMPILER="${CXX:-clang++}" -DPS2_GENERATED="$M/generated" > /dev/null
ninja -j"$jobs" -C "$ROOT/build/native-mksm" ps2run
echo
echo "Play:   build/native-mksm/ps2run games/mksm/disc/SLUS_210.87 --disc games/mksm/disc.iso --window --memcard games/mksm/card.ps2"
echo "Host online co-op: add --host  (friend opens the printed link in a browser)"
