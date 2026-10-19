#!/usr/bin/env bash
# PackSegment (0x0023A280) branch coverage, AWS box only (needs a built tree, decomp/ci.sh): records real calls in
# several scenes, prints which branches each takes (batch_i.py --classify), replays them, then writes variants of each
# (batch_i.py) and replays those. Contexts are deleted at the end; reports go to <outdir>.
# usage: decomp/difftest/synth/batch_i.sh <outdir> [scene...]   (env: COUNT per scene, default 6; EVERY, default 3)
set -uo pipefail
here=$(cd "$(dirname "$0")/../../.." && pwd)
P=$(cd "$here/../.." && pwd)
out=$1; shift; mkdir -p "$out"
scenes=${*:-koop charsel goro nether foundry academy forest kahn}
count=${COUNT:-6}
cd "$here"
export PS2_GS=${PS2_GS:-soft}
n=$(wc -w <<< "$scenes")
need_mb=$((n * count * 12 * 33)) free_mb=$(df -Pm "$P" | awk 'NR == 2 {print $4}')
echo "contexts: up to $((n * count)) recorded + $((n * count * 11)) variants, ~$((need_mb / 1024)) GB of $((free_mb / 1024)) GB free"
[ $((need_mb * 13 / 10)) -lt "$free_mb" ] || { echo "not enough disk"; exit 1; }
mkdir -p "$P/logs"; ctx=$(mktemp -d "$P/logs/difftest-i.XXXXXX")
trap 'rm -rf "$ctx"' EXIT
for scene in $scenes; do
  IFS=$'\t' read -r _ state frame args < <(awk -F'\t' -v s="$scene" '$1 == s' remaster/scenes.tsv)
  [ -n "${frame:-}" ] || { echo "unknown scene $scene"; exit 2; }
  args=${args//@story/$(tr '\n' ' ' < mksm/inputs/story.args)}
  args=${args//@koop/$(tr '\n' ' ' < mksm/inputs/koop.args)}
  # shellcheck disable=SC2086
  PS2_DIFFTEST_RECORD=$ctx/$scene PS2_DIFFTEST_FUNCS=0023A280 PS2_DIFFTEST_COUNT=$count PS2_DIFFTEST_EVERY=${EVERY:-3} \
    PS2_LOCK=$out/.lock-$scene remaster/run.sh "$out/rec-$scene" $((frame + 2)) "$P/remaster-data/states/$state" $args \
    > /dev/null &
done
wait
for scene in $scenes; do
  grep -q 'frame limit reached' "$out/rec-$scene/run.log" || { echo "recording $scene did not finish"; tail -3 "$out/rec-$scene/run.log"; }
done
echo "recorded: $(find "$ctx" -name '*.ctx' | wc -l)"
python3 -I decomp/difftest/synth/batch_i.py "$ctx" --classify > "$out/classify.txt"
awk '{for (i = 2; i <= NF; ++i) n[$i]++} END {for (k in n) print n[k], k}' "$out/classify.txt" | sort -k2 | tee "$out/branches.txt"
build/native-mksm/difftest --keep-going "$ctx"/* > "$out/replay-real.log" 2>&1; echo "real: $(tail -1 "$out/replay-real.log")"
python3 -I decomp/difftest/synth/batch_i.py "$ctx" "$ctx/variants" --per 1 --seed "${SEED:-1}"
python3 -I decomp/difftest/synth/batch_i.py "$ctx/variants" --classify > "$out/classify-variants.txt"
echo "variant branches:"
awk '{for (i = 2; i <= NF; ++i) n[$i]++} END {for (k in n) print n[k], k}' "$out/classify-variants.txt" | sort -k2 | tee "$out/branches-variants.txt"
build/native-mksm/difftest --keep-going "$ctx/variants" > "$out/replay-variants.log" 2>&1; rc=$?
echo "variants: $(tail -1 "$out/replay-variants.log")"
exit $rc
