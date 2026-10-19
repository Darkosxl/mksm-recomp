#!/usr/bin/env bash
# Synthetic contexts for the character culls on the box (never on the laptop): records 4 CullCharacterSegments
# contexts in koop, derives 16 per function from each with batch_j.py, replays them.
# usage (from the tree root): decomp/difftest/synth/batch_j.sh <outdir>
set -e
D=~/w/remaster-data; out=$1; mkdir -p "$out"
ninja -j"$(nproc)" -C build/native-mksm ps2run difftest > "$out/build.log" 2>&1 || { tail -20 "$out/build.log"; exit 1; }
ctx=~/w/logs/$(basename "$out")-ctx; rm -rf "$ctx"; mkdir -p "$ctx"
trap 'rm -rf "$ctx"' EXIT
PS2_GS=soft PS2_DIFFTEST_RECORD=$ctx/base PS2_DIFFTEST_FUNCS=002459F8 PS2_DIFFTEST_COUNT=4 PS2_DIFFTEST_EVERY=7 PS2_LOCK=$out/.lock \
  remaster/run.sh "$out/rec" 7002 "$D/states/koop.state" $(tr '\n' ' ' < mksm/inputs/koop.args) > /dev/null 2>&1 || true
ls "$ctx"/base/*.ctx
i=0
for base in "$ctx"/base/*.ctx; do
  i=$((i + 1))
  python3 -I decomp/difftest/synth/batch_j.py "$base" "$ctx/s$i" 002459F8,00245D48 --count 16 --seed $i
  build/native-mksm/difftest --keep-going "$ctx/s$i" >> "$out/replay-synth.log" 2>&1 || true
  rm -rf "$ctx/s$i"
done
grep -E '^(PASS|FAIL|ERROR)' "$out/replay-synth.log" | awk '{print $1, $3}' | sort | uniq -c
grep -E '^PASS' "$out/replay-synth.log" | grep -oE '^PASS [0-9A-F]+ \S+ .*v0 [0-9A-F]+' | awk '{print $3, $NF}' | sort | uniq -c
