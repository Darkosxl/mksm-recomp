#!/usr/bin/env bash
# Full check of the decompiled functions on an AWS box (never on the laptop), in order, stopping at the first failure:
#   0. the decomp headers compile together (decomp/headers.sh: no two helpers of one name, i.e. no ODR violation)
#   1. build ps2run, difftest and eerecomp
#   2. regenerate the units from decomp/overrides.txt: must equal the committed mksm/generated
#   3. record real call contexts (boot, charsel, koop in parallel), replay them recompiled vs decompiled
#   4. scene gate (decomp/gate.sh: off vs all, every frame), state hashes vs golden.json with off and with all
# Contexts are scratch (regenerated each time) and are deleted at the end; reports go to <outdir>.
# usage: [RECORD=<hex,...>] decomp/ci.sh <outdir>   (RECORD limits recording + replay to those functions; the gates
#        always run every hooked function)
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
out=$1; mkdir -p "$out"
cd "$here"
step() { echo "== $(date +%T) $*"; }
export PS2_GS=${PS2_GS:-soft}

step headers
decomp/headers.sh > "$out/headers.log" 2>&1 || { cat "$out/headers.log"; exit 1; }
step build
cmake -S . -B build/native-mksm -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_COMPILER=clang++ \
  -DPS2_GENERATED="$PWD/mksm/generated" > "$out/cmake.log"
ninja -j"$(nproc)" -C build/native-mksm ps2run difftest > "$out/build.log" 2>&1 || { tail -30 "$out/build.log"; exit 1; }
cmake -S . -B build/tools -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_COMPILER=clang++ > /dev/null
ninja -C build/tools eerecomp > /dev/null

step regenerate
tmp=$(mktemp -d); cp -r mksm/generated "$tmp/gen"
build/tools/eerecomp games/mksm/disc/SLUS_210.87 --entries mksm/entries.txt --overrides decomp/overrides.txt --idle mksm/idle.txt \
  --out "$tmp/gen" > "$out/regen.log" 2>&1
diff -r -q mksm/generated "$tmp/gen" > "$out/regen.diff" && echo "regenerated units identical to mksm/generated" \
  || { echo "regenerated units differ:"; cat "$out/regen.diff"; exit 1; }
rm -rf "$tmp"

step record
# Contexts go to disk, not /tmp: /tmp is a tmpfs on the boxes, and tmpfs pages count against run.sh's MemoryMax=3G,
# so the recording ps2run gets OOM-killed once a run has written ~3 GB of contexts (~32 MB each).
count=32
# RECORD=<hex,hex,...> records only those functions (the ones a change touches); default: every hooked function
funcs=${RECORD:-all}
if [ "$funcs" = all ]; then nfuncs=$(grep -cE '^[0-9A-Fa-f]{8}' decomp/overrides.txt); else nfuncs=$(tr ',' '\n' <<< "$funcs" | grep -c .); fi
need_mb=$((nfuncs * 3 * count * 33))
free_mb=$(df -Pm "$P" | awk 'NR == 2 {print $4}')
echo "contexts: up to $nfuncs functions x 3 runs x $count, ~$((need_mb / 1024)) GB of $((free_mb / 1024)) GB free"
[ $((need_mb * 13 / 10)) -lt "$free_mb" ] || { echo "not enough disk for the contexts (needs 30% headroom)"; exit 1; }
mkdir -p "$P/logs"; ctx=$(mktemp -d "$P/logs/difftest-ctx.XXXXXX")
trap 'rm -rf "$ctx"' EXIT
rec() {  # rec <name> <frames> <state|-> [args...]; fails unless the run reached its frame limit
  local n=$1; shift
  PS2_DIFFTEST_RECORD=$ctx/$n PS2_DIFFTEST_FUNCS=$funcs PS2_DIFFTEST_COUNT=$count PS2_DIFFTEST_EVERY=7 PS2_LOCK=$out/.lock-$n \
    remaster/run.sh "$out/rec-$n" "$@" > /dev/null || true
  grep -q 'frame limit reached' "$out/rec-$n/run.log" || { echo "recording $n did not finish:"; tail -3 "$out/rec-$n/run.log"; return 1; }
}
rec boot 1500 - & r1=$!
rec charsel 2702 "$D/states/charsel.state" $(tr '\n' ' ' < mksm/inputs/story.args) & r2=$!
rec koop 7002 "$D/states/koop.state" $(tr '\n' ' ' < mksm/inputs/koop.args) & r3=$!
ok=1; for r in $r1 $r2 $r3; do wait $r || ok=0; done; [ $ok = 1 ] || exit 1
echo "contexts: $(find "$ctx" -name '*.ctx' | wc -l)"

step replay
build/native-mksm/difftest --keep-going "$ctx"/* > "$out/replay.log" 2>&1 && tail -3 "$out/replay.log" \
  || { tail -20 "$out/replay.log"; exit 1; }
grep -E '^(PASS|FAIL)' "$out/replay.log" | awk '{print $3}' | sort | uniq -c > "$out/replay-counts.txt"
echo "contexts replayed per function:"; cat "$out/replay-counts.txt"
rm -rf "$ctx"

step gate
decomp/gate.sh "$out/gate" | tee "$out/gate.txt"
step "golden, decomp off"
remaster/statecheck.sh "$out/sc-off" | tail -1
step "golden, decomp all"
PS2_DECOMP=all remaster/statecheck.sh "$out/sc-all" | tail -1
step done
