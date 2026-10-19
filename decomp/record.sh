#!/usr/bin/env bash
# Records real call contexts of chosen decompiled functions over chosen reference scenes (remaster/scenes.tsv, or
# "boot" for a cold boot of 1500 frames), all scenes in parallel, then replays them with difftest. For functions that
# decomp/ci.sh's three recording runs do not reach. AWS box only (never on the laptop); needs a built tree (ci.sh).
# Contexts are scratch and deleted at the end; reports go to <outdir> (replay.log, per-scene run logs).
# usage: decomp/record.sh <outdir> <hex,hex,...|all> <scene>...   (env: COUNT per function and scene, default 16;
#        EVERY, default 1)
set -uo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
out=$1 funcs=$2; shift 2
mkdir -p "$out"
cd "$here"
export PS2_GS=${PS2_GS:-soft}
ctx=$(mktemp -d)
trap 'rm -rf "$ctx"' EXIT
for scene in "$@"; do
  if [ "$scene" = boot ]; then state=- frame=1500 args=
  else
    IFS=$'\t' read -r _ state frame args < <(awk -F'\t' -v s="$scene" '$1 == s' remaster/scenes.tsv)
    [ -n "${frame:-}" ] || { echo "unknown scene $scene" >&2; exit 2; }
    state=$D/states/$state
    args=${args//@story/$(tr '\n' ' ' < mksm/inputs/story.args)}
    args=${args//@koop/$(tr '\n' ' ' < mksm/inputs/koop.args)}
  fi
  # shellcheck disable=SC2086
  PS2_DIFFTEST_RECORD=$ctx/$scene PS2_DIFFTEST_FUNCS=$funcs PS2_DIFFTEST_COUNT=${COUNT:-16} PS2_DIFFTEST_EVERY=${EVERY:-1} \
    PS2_LOCK=$out/.lock-$scene remaster/run.sh "$out/rec-$scene" $((frame + 2)) "$state" $args > /dev/null &
done
wait
grep -h 'contexts recorded' "$out"/rec-*/run.log | sed 's|/tmp/[^ ]*/||' | sort | tee "$out/recorded.txt"
n=$(find "$ctx" -name '*.ctx' | wc -l)
echo "contexts: $n"
[ "$n" -gt 0 ] || exit 0
build/native-mksm/difftest --keep-going "$ctx"/* > "$out/replay.log" 2>&1
rc=$?
grep -E '^(PASS|FAIL|ERROR)' "$out/replay.log" | awk '{print $1, $2, $3}' | sort | uniq -c
tail -1 "$out/replay.log"
exit $rc
