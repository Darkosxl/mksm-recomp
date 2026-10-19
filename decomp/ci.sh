#!/usr/bin/env bash
# Full check of the decompiled functions on an AWS box (never on the laptop), in order, stopping at the first failure:
#   1. build ps2run, difftest and eerecomp
#   2. regenerate the units from decomp/overrides.txt: must equal the committed mksm/generated
#   3. record real call contexts (boot, charsel, koop in parallel), replay them recompiled vs decompiled
#   4. scene gate (decomp/gate.sh: off vs all, every frame), state hashes vs golden.json with off and with all
# Contexts are scratch (regenerated each time) and are deleted at the end; reports go to <outdir>.
# usage: decomp/ci.sh <outdir>
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
out=$1; mkdir -p "$out"
cd "$here"
step() { echo "== $(date +%T) $*"; }
export PS2_GS=${PS2_GS:-soft}

step build
cmake -S . -B build/native-mksm -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_COMPILER=clang++ \
  -DPS2_GENERATED="$PWD/mksm/generated" > "$out/cmake.log"
ninja -j"$(nproc)" -C build/native-mksm ps2run difftest > "$out/build.log" 2>&1 || { tail -30 "$out/build.log"; exit 1; }
cmake -S . -B build/tools -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_COMPILER=clang++ > /dev/null
ninja -C build/tools eerecomp > /dev/null

step regenerate
tmp=$(mktemp -d); cp -r mksm/generated "$tmp/gen"
build/tools/eerecomp games/mksm/disc/SLUS_210.87 --entries mksm/entries.txt --overrides decomp/overrides.txt \
  --out "$tmp/gen" > "$out/regen.log" 2>&1
diff -r -q mksm/generated "$tmp/gen" > "$out/regen.diff" && echo "regenerated units identical to mksm/generated" \
  || { echo "regenerated units differ:"; cat "$out/regen.diff"; exit 1; }
rm -rf "$tmp"

step record
ctx=$(mktemp -d)
rec() {  # rec <name> <frames> <state|-> [args...]
  local n=$1; shift
  PS2_DIFFTEST_RECORD=$ctx/$n PS2_DIFFTEST_COUNT=32 PS2_DIFFTEST_EVERY=7 PS2_LOCK=$out/.lock-$n \
    remaster/run.sh "$out/rec-$n" "$@" > /dev/null
}
rec boot 1500 - &
rec charsel 2702 "$D/states/charsel.state" $(tr '\n' ' ' < mksm/inputs/story.args) &
rec koop 7002 "$D/states/koop.state" $(tr '\n' ' ' < mksm/inputs/koop.args) &
wait
echo "contexts: $(find "$ctx" -name '*.ctx' | wc -l)"

step replay
build/native-mksm/difftest --keep-going "$ctx"/* > "$out/replay.log" 2>&1 && tail -3 "$out/replay.log" \
  || { tail -20 "$out/replay.log"; rm -rf "$ctx"; exit 1; }
rm -rf "$ctx"

step gate
decomp/gate.sh "$out/gate" | tee "$out/gate.txt"
step "golden, decomp off"
remaster/statecheck.sh "$out/sc-off" | tail -1
step "golden, decomp all"
PS2_DECOMP=all remaster/statecheck.sh "$out/sc-all" | tail -1
step done
