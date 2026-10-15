#!/usr/bin/env bash
# Build Mortal Kombat: Shaolin Monks (NTSC-U, SLUS_210.87) natively from your own disc image.
# usage: mksm/build.sh <your.iso> [--retranslate] [--jobs N]
#   --retranslate  regenerate mksm/generated from the ELF instead of using the committed C++
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
M="$ROOT/mksm"; G="$ROOT/games/mksm"
iso=${1:?usage: mksm/build.sh <your.iso> [--retranslate] [--jobs N]}; shift
retranslate=0; jobs=4
while [ $# -gt 0 ]; do
  case "$1" in --retranslate) retranslate=1 ;; --jobs) jobs=$2; shift ;; *) echo "unknown option $1" >&2; exit 2 ;; esac
  shift
done

mkdir -p "$G/disc"
ln -sfn "$(realpath "$iso")" "$G/disc.iso"
python3 -I "$ROOT/scripts/disc.py" extract "$G/disc.iso" "$G/disc" SYSTEM.CNF SLUS_210.87 > /dev/null
# the known dump's ELF is an unlock-all mod that breaks Ko-op; patch_koop.py fixes it and refuses unknown bytes
python3 -I "$M/tools/scripts/patch_koop.py" "$G/disc/SLUS_210.87" "$G/disc/SLUS_210.87" || echo "ELF not patched (retail dump?) — continuing"

[ -x "$ROOT/build/tools/eerecomp" ] || CXX=${CXX:-clang++} PS2_JOBS=$jobs "$ROOT/scripts/setup.sh" --native-only
if [ "$retranslate" = 1 ]; then
  "$ROOT/build/tools/eerecomp" "$G/disc/SLUS_210.87" --entries "$M/entries.txt" --out "$M/generated" | tail -1
fi

cmake -S "$ROOT" -B "$ROOT/build/native-mksm" -G Ninja -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_CXX_COMPILER="${CXX:-clang++}" -DPS2_GENERATED="$M/generated" > /dev/null
ninja -j"$jobs" -C "$ROOT/build/native-mksm" ps2run
echo
echo "Play:   build/native-mksm/ps2run games/mksm/disc/SLUS_210.87 --disc games/mksm/disc.iso --window --memcard games/mksm/card.ps2"
echo "Host online co-op: add --host  (friend opens the printed link in a browser)"
