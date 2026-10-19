#!/usr/bin/env bash
# Synthetic contexts for batch j on the box (never on the laptop): records 4 contexts of BASE in koop, derives COUNT
# contexts per function in FUNCS from each with batch_j.py, replays them and prints the results per function.
# usage (from the tree root): [BASE=<hex>] [FUNCS=<hex,...>] [COUNT=n] decomp/difftest/synth/batch_j.sh <outdir>
#   BASE=002459F8 FUNCS=002459F8,00245D48 (the culls, default) or BASE=00242FF8 FUNCS=00242FF8 (the segment loop)
set -e
D=~/w/remaster-data; out=$1; mkdir -p "$out"
base_fn=${BASE:-002459F8} funcs=${FUNCS:-002459F8,00245D48} count=${COUNT:-16}
ninja -j"$(nproc)" -C build/native-mksm ps2run difftest > "$out/build.log" 2>&1 || { tail -20 "$out/build.log"; exit 1; }
ctx=~/w/logs/$(basename "$out")-ctx; rm -rf "$ctx"; mkdir -p "$ctx"
trap 'rm -rf "$ctx"' EXIT
PS2_GS=soft PS2_DIFFTEST_RECORD=$ctx/base PS2_DIFFTEST_FUNCS=$base_fn PS2_DIFFTEST_COUNT=4 PS2_DIFFTEST_EVERY=7 PS2_LOCK=$out/.lock \
  remaster/run.sh "$out/rec" 7002 "$D/states/koop.state" $(tr '\n' ' ' < mksm/inputs/koop.args) > /dev/null 2>&1 || true
ls "$ctx"/base/*.ctx
i=0
for base in "$ctx"/base/*.ctx; do
  i=$((i + 1))
  python3 -I decomp/difftest/synth/batch_j.py "$base" "$ctx/s$i" "$funcs" --count "$count" --seed $i
  # one context per run, stderr dropped (synthetic data can make the callees log every unmapped access), with a time
  # limit: a context that makes a recompiled callee loop on garbage shows up as TIMEOUT instead of stalling the job
  for f in "$ctx/s$i"/*.ctx; do
    timeout 120 build/native-mksm/difftest "$f" >> "$out/replay-synth.log" 2>/dev/null || [ $? != 124 ] || echo "TIMEOUT $f" >> "$out/replay-synth.log"
  done
  rm -rf "$ctx/s$i"
  echo "base $i of 4 replayed"
done
grep -E '^(PASS|FAIL|ERROR|TIMEOUT)' "$out/replay-synth.log" | awk '{print $1, $3}' | sort | uniq -c
grep -E '^PASS' "$out/replay-synth.log" | grep -oE '^PASS [0-9A-F]+ \S+ .*v0 [0-9A-F]+' | awk '{print $3, $NF}' | sort | uniq -c
grep -E '^(PASS|FAIL)' "$out/replay-synth.log" | awk '$2 == "00242FF8" { match($0, /#[0-9]+/); n = substr($0, RSTART + 1, RLENGTH - 1) - 1000;
  print $1, "DrawModelSegments profile", (n % 3 == 0 ? "state" : n % 3 == 1 ? "chain" : "spr") }' | sort | uniq -c
