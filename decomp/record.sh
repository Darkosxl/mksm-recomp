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
# contexts go to disk, not /tmp: /tmp is a tmpfs on the boxes and counts against run.sh's MemoryMax=3G (decomp/ci.sh)
if [ "$funcs" = all ]; then nfuncs=$(grep -cE '^[0-9A-Fa-f]{8}' decomp/overrides.txt); else nfuncs=$(tr ',' '\n' <<< "$funcs" | grep -c .); fi
need_mb=$((nfuncs * $# * ${COUNT:-16} * 33)) free_mb=$(df -Pm "$P" | awk 'NR == 2 {print $4}')
echo "contexts: up to $nfuncs functions x $# scenes x ${COUNT:-16}, ~$((need_mb / 1024)) GB of $((free_mb / 1024)) GB free"
[ $((need_mb * 13 / 10)) -lt "$free_mb" ] || { echo "not enough disk for the contexts (needs 30% headroom)"; exit 1; }
mkdir -p "$P/logs"; ctx=$(mktemp -d "$P/logs/difftest-ctx.XXXXXX")
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
ok=1
for scene in "$@"; do  # a run that did not reach its frame limit was killed: its contexts may be truncated
  grep -q 'frame limit reached' "$out/rec-$scene/run.log" || { echo "recording $scene did not finish:"; tail -3 "$out/rec-$scene/run.log"; ok=0; }
done
[ $ok = 1 ] || exit 1
grep -h 'contexts recorded' "$out"/rec-*/run.log | sed -E 's| in /.*/| in |' | sort | tee "$out/recorded.txt"
n=$(find "$ctx" -name '*.ctx' | wc -l)
echo "contexts: $n"
[ "$n" -gt 0 ] || exit 0
build/native-mksm/difftest --keep-going "$ctx"/* > "$out/replay.log" 2>&1
rc=$?
grep -E '^(PASS|FAIL|ERROR)' "$out/replay.log" | awk '{print $1, $2, $3}' | sort | uniq -c
tail -1 "$out/replay.log"
exit $rc
