#!/usr/bin/env bash
# Synthetic difftest contexts (decomp/difftest/synth.py, generators in decomp/difftest/synth/*.py) for every function
# that has a generator, or the given ones, each replayed recompiled vs decompiled with difftest. AWS box only (never on
# the laptop); needs a built tree (decomp/ci.sh builds build/native-mksm/difftest and ps2run).
# - zero-machine contexts are sparse files (a few KB each, 128 KB for batch A): a function's are written at once;
# - base-snapshot contexts are full ~33 MB snapshots: written, replayed and deleted BATCH at a time. The snapshot is
#   BASE=<ctx>, or the script records one: the first call of screen_page_this_field (0x00275260, called every frame)
#   in the koop scene (koop.state and the koop inputs to frame 7002, ci.sh's koop run), so callees see a running game.
# Contexts go to $P/logs (not /tmp: a tmpfs on the boxes) and are deleted; reports go to <outdir>: synth-replay.log and
# synth-counts.txt (contexts per function and result). Exit status 1 when any context fails.
# usage: decomp/synth.sh <outdir> [hex,hex,...|all]   (env: COUNT contexts per function, default each generator's
#        (64 zero, 32 base); SEED (1); BASE=<recorded .ctx>; BATCH (16))
set -uo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
mkdir -p "$1"; out=$(cd "$1" && pwd) funcs=${2:-all}
base=${BASE:+$(realpath "$BASE")}
batch=${BATCH:-16} seed=${SEED:-1}
cd "$here"
export PS2_GS=${PS2_GS:-soft}
synth=(python3 -I decomp/difftest/synth.py)
difftest=build/native-mksm/difftest
[ -x "$difftest" ] || { echo "no $difftest: build first (decomp/ci.sh)"; exit 2; }

list=$("${synth[@]}" --list) || exit 2  # address, zero|base, default count, module, generator
if [ "$funcs" != all ]; then
  sel=
  for f in ${funcs//,/ }; do
    a=$(printf '%08X' "0x${f#0x}") || exit 2
    line=$(awk -v a="$a" '$1 == a' <<< "$list")
    [ -n "$line" ] || { echo "no synthetic generator for $a"; exit 2; }
    sel+=$line$'\n'
  done
  list=${sel%$'\n'}
fi

mkdir -p "$P/logs"; ctx=$(mktemp -d "$P/logs/synth-ctx.XXXXXX")
trap 'rm -rf "$ctx"' EXIT
if grep -q ' base ' <<< "$list"; then
  need_mb=$(((batch + 1) * 34)) free_mb=$(df -Pm "$P" | awk 'NR == 2 {print $4}')
  echo "base-snapshot contexts: $batch at a time, ~$need_mb MB of $free_mb MB free"
  [ $((need_mb * 13 / 10)) -lt "$free_mb" ] || { echo "not enough disk (needs 30% headroom)"; exit 1; }
  if [ -z "$base" ]; then
    echo "== $(date +%T) record the base snapshot (00275260 in koop)"
    # shellcheck disable=SC2046
    PS2_DIFFTEST_RECORD=$ctx/base PS2_DIFFTEST_FUNCS=00275260 PS2_DIFFTEST_COUNT=1 PS2_LOCK=$out/.lock-base \
      remaster/run.sh "$out/rec-base" 7002 "$D/states/koop.state" $(tr '\n' ' ' < mksm/inputs/koop.args) > /dev/null
    grep -q 'frame limit reached' "$out/rec-base/run.log" || { echo "base recording did not finish:"; tail -3 "$out/rec-base/run.log"; exit 1; }
    base=$(find "$ctx/base" -name '*.ctx' | head -1)
    [ -n "$base" ] || { echo "no base snapshot recorded"; exit 1; }
  fi
  echo "base snapshot: $base"
fi

log=$out/synth-replay.log; : > "$log"
total=$(grep -c . <<< "$list") i=0 fail=0
while read -r a kind n _ <&3; do
  i=$((i + 1)) n=${COUNT:-$n}; step=$n opt=()
  [ "$kind" = base ] && step=$batch opt=(--base "$base")
  flog=$ctx/replay.log; : > "$flog"
  for ((k = 0; k < n; k += step)); do
    "${synth[@]}" "$ctx/f" "$a" --first $k --count $((n - k < step ? n - k : step)) --seed "$seed" "${opt[@]}" > /dev/null \
      || { echo "generator for $a failed"; fail=1; rm -rf "$ctx/f"; break; }
    "$difftest" --keep-going "$ctx/f" >> "$flog" 2>&1 || fail=1
    rm -rf "$ctx/f"
  done
  cat "$flog" >> "$log"
  echo "$(date +%T) [$i/$total] $a $kind: $(grep -c '^PASS' "$flog") passed, $(grep -cE '^(FAIL|ERROR)' "$flog") failed"
done 3<<< "$list"

grep -E '^(PASS|FAIL|ERROR)' "$log" | awk '{print $2, $3, $1}' | sort | uniq -c > "$out/synth-counts.txt"
echo "contexts per function:"; cat "$out/synth-counts.txt"
failed=$(grep -cE '^(FAIL|ERROR)' "$log")
echo "$(grep -c '^PASS' "$log") passed, $failed failed"
[ "$fail" = 0 ] && [ "$failed" = 0 ]
