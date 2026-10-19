#!/usr/bin/env bash
# Synthetic difftest contexts (decomp/difftest/synth.py, generators in decomp/difftest/synth/*.py) for every function
# that has a generator, or the given ones, each replayed recompiled vs decompiled with difftest. AWS box only (never on
# the laptop); needs a built tree (decomp/ci.sh builds build/native-mksm/difftest and ps2run).
# - zero-machine contexts are sparse files (a few KB each, 128 KB for batch A): a function's are written at once;
# - base-snapshot contexts are full ~33 MB snapshots: written, replayed and deleted BATCH at a time. The snapshot is
#   BASE=<ctx>, or the script records one: the first call of screen_page_this_field (0x00275260, called every frame)
#   in the koop scene (koop.state and the koop inputs to frame 7002, ci.sh's koop run), so callees see a running game;
# - seed contexts are copies of recorded calls of the seed functions (~33 MB each). The script first records the seed
#   functions and the real functions of the selection (synth.py --record) in SCENES, all in parallel (SEEDCOUNT
#   contexts per function and scene, every 7th entry; a scene that does not reach its frame limit fails the job),
#   replays every recorded context as a real one, then writes, replays and deletes the seed generators' contexts
#   BATCH at a time.
# Every replay has a time limit, TIMEOUT seconds plus one per context: a call that hits it (or crashes) is replayed one
# file at a time with TIMEOUT each, and a file that hits that is a failure (a TIMEOUT line; a crash is an ERROR line),
# so a context that makes a callee loop does not stall the job. Contexts go to $P/logs (not /tmp: a tmpfs on the
# boxes) and are deleted at the end.
# Reports go to <outdir>: synth-replay.log (synthetic), synth-real.log (recorded), synth-stderr.log (difftest's
# stderr, the last 64 KB per call), synth-labels.txt (the generators' labels per file) and synth-counts.txt (contexts
# per function, kind real|synth and result). Exit status 1 when any context or recording fails.
# usage: decomp/synth.sh <outdir> [hex,hex,...|all]   (env: COUNT contexts per function, default each generator's;
#        SEED (1); BASE=<recorded .ctx>; BATCH (16); SCENES (scene[:end frame] ... as in coverage.sh, default the
#        gameplay scenes below); SEEDCOUNT (20); TIMEOUT (120))
set -uo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
mkdir -p "$1"; out=$(cd "$1" && pwd) funcs=${2:-all}
base=${BASE:+$(realpath "$BASE")}
batch=${BATCH:-16} seed=${SEED:-1} seedcount=${SEEDCOUNT:-20} tlimit=${TIMEOUT:-120}
# the scenes that reach the seed and real functions; charsel:6300 follows the story inputs into a fight
scenes=${SCENES:-koop raiden goro pause academy forest nether kahn foundry charsel:6300}
cd "$here"
export PS2_GS=${PS2_GS:-soft}
synth=(python3 -I decomp/difftest/synth.py)
difftest=build/native-mksm/difftest
[ -x "$difftest" ] || { echo "no $difftest: build first (decomp/ci.sh)"; exit 2; }

list=$("${synth[@]}" --list) || exit 2  # address, zero|base|seed:<hex,...>|real, default count, module, generator
if [ "$funcs" != all ]; then
  sel=
  for f in ${funcs//,/ }; do
    a=$(printf '%08X' "0x${f#0x}") || exit 2
    line=$(awk -v a="$a" '$1 == a' <<< "$list")
    [ -n "$line" ] || { echo "no synthetic generator or real function $a"; exit 2; }
    sel+=$line$'\n'
  done
  list=${sel%$'\n'}
fi
gens=$(awk '$2 != "real"' <<< "$list")
rec=$("${synth[@]}" --record "$(awk '{print $1}' <<< "$list" | sort -u | paste -sd,)") || exit 2
needbase=; grep -q ' base ' <<< "$gens" && [ -z "$base" ] && needbase=1

scene() {  # scene <scene[:end frame]|boot[:frames]>: sets state, end and args
  local s=${1%%:*} frame
  if [ "$s" = boot ]; then state=- frame=1498 args=
  else
    IFS=$'\t' read -r _ state frame args < <(awk -F'\t' -v s="$s" '$1 == s' remaster/scenes.tsv)
    [ -n "${frame:-}" ] || return 1
    state=$D/states/$state
    args=${args//@story/$(tr '\n' ' ' < mksm/inputs/story.args)}
    args=${args//@koop/$(tr '\n' ' ' < mksm/inputs/koop.args)}
  fi
  end=$((frame + 2)); [ "$1" = "$s" ] || end=${1#*:}
}
if [ -n "$rec" ]; then
  for spec in $scenes; do scene "$spec" || { echo "unknown scene $spec"; exit 2; }; done
fi

need_mb=0
grep -qE ' (base|seed:[0-9A-F,]+) ' <<< "$gens" && need_mb=$(((batch + 1) * 34))
[ -n "$rec" ] && need_mb=$((need_mb + $(tr ',' '\n' <<< "$rec" | grep -c .) * $(wc -w <<< "$scenes") * seedcount * 34))
if [ "$need_mb" -gt 0 ]; then
  free_mb=$(df -Pm "$P" | awk 'NR == 2 {print $4}')
  echo "full snapshots: ${rec:+$rec x $(wc -w <<< "$scenes") scenes x $seedcount recorded, }$batch synthetic at a" \
    "time, ~$need_mb MB of $free_mb MB free"
  [ $((need_mb * 13 / 10)) -lt "$free_mb" ] || { echo "not enough disk (needs 30% headroom)"; exit 1; }
fi

mkdir -p "$P/logs"; ctx=$(mktemp -d "$P/logs/synth-ctx.XXXXXX")
trap 'rm -rf "$ctx"' EXIT
fail=0
: > "$out/synth-real.log"; : > "$out/synth-replay.log"; : > "$out/synth-stderr.log"; : > "$out/synth-labels.txt"

record() {  # record <ctx dir> <run dir> <funcs> <count> <every> <end frame> <state|-> [args...]
  local dir=$1 run=$2 f=$3 n=$4 every=$5; shift 5
  PS2_DIFFTEST_RECORD=$dir PS2_DIFFTEST_FUNCS=$f PS2_DIFFTEST_COUNT=$n PS2_DIFFTEST_EVERY=$every \
    PS2_LOCK=$out/.lock-${run##*/rec-} remaster/run.sh "$run" "$@" > /dev/null || true
  grep -q 'frame limit reached' "$run/run.log" || { echo "recording ${run##*/} did not finish:"; tail -3 "$run/run.log"; return 1; }
}
pids=()
if [ -n "$needbase" ]; then
  echo "== $(date +%T) record the base snapshot (00275260 in koop)"
  # shellcheck disable=SC2046
  record "$ctx/base" "$out/rec-base" 00275260 1 1 7002 "$D/states/koop.state" $(tr '\n' ' ' < mksm/inputs/koop.args) &
  pids+=($!)
fi
if [ -n "$rec" ]; then
  echo "== $(date +%T) record $rec in: $scenes"
  for spec in $scenes; do
    scene "$spec"; t=${spec/:/-}
    # shellcheck disable=SC2086
    record "$ctx/rec/$t" "$out/rec-$t" "$rec" "$seedcount" 7 "$end" "$state" $args & pids+=($!)
  done
fi
ok=1; for p in "${pids[@]}"; do wait "$p" || ok=0; done
[ $ok = 1 ] || exit 1
if [ -n "$needbase" ]; then
  base=$(find "$ctx/base" -name '*.ctx' | head -1)
  [ -n "$base" ] || { echo "no base snapshot recorded"; exit 1; }
fi
[ -z "$base" ] || ! grep -q ' base ' <<< "$gens" || echo "base snapshot: $base"

replay() {  # replay <log> <ctx file or dir>...: difftest with the time limit; after a timeout or a crash (exit status
            # not 0 or 1) one file at a time, where a timeout is a TIMEOUT line and a crash an ERROR line
  local log=$1 f a rc st n; shift
  n=$(find "$@" -maxdepth 1 -name '*.ctx' | wc -l)
  [ "$n" -gt 0 ] || return 0
  timeout -k 10 $((tlimit + n)) "$difftest" --keep-going "$@" 2>&1 > "$ctx/call.log" | tail -c 65536 >> "$out/synth-stderr.log"
  rc=${PIPESTATUS[0]}
  if [ "$rc" = 0 ] || [ "$rc" = 1 ]; then cat "$ctx/call.log" >> "$log"; return "$rc"; fi
  echo "$(date +%T) replay of $n contexts: exit status $rc$([ "$rc" = 124 ] && echo ' (time limit)'), one at a time"
  rc=0
  while read -r f; do
    timeout -k 10 "$tlimit" "$difftest" "$f" 2>&1 >> "$log" | tail -c 65536 >> "$out/synth-stderr.log"
    st=${PIPESTATUS[0]}
    [ "$st" = 0 ] && continue
    rc=1; [ "$st" = 1 ] && continue
    a=$(basename "$f" | cut -c1-8)
    a="$a $(awk -v a="$a" 'toupper($1) == a {print $2}' decomp/overrides.txt)"
    if [ "$st" = 124 ] || [ "$st" = 137 ]; then echo "TIMEOUT $a $f: over ${tlimit}s" >> "$log"
    else echo "ERROR $a $f: difftest exit status $st" >> "$log"; fi
  done < <(find "$@" -maxdepth 1 -name '*.ctx' | sort)
  return $rc
}
counts() {  # counts <log>: contexts per function and result
  grep -E '^(PASS|FAIL|ERROR|TIMEOUT)' "$1" | awk '{print $2, $3, $1}' | sort | uniq -c
}

if [ -n "$rec" ]; then
  mapfile -t files < <(find "$ctx/rec" -name '*.ctx' | sort)
  echo "== $(date +%T) replay ${#files[@]} recorded contexts"
  for ((k = 0; k < ${#files[@]}; k += batch)); do
    replay "$out/synth-real.log" "${files[@]:k:batch}" || fail=1
    [ $(((k / batch + 1) % 8)) != 0 ] || echo "$(date +%T) real: $((k + batch)) of ${#files[@]} replayed," \
      "$(grep -cE '^(FAIL|ERROR|TIMEOUT)' "$out/synth-real.log") failed"
  done
  counts "$out/synth-real.log"
fi

log=$out/synth-replay.log
total=$(grep -c . <<< "$gens") i=0
[ "$total" = 0 ] || echo "== $(date +%T) synthetic contexts of $total functions"
while read -r a kind n _ <&3; do
  [ -n "$a" ] || continue
  i=$((i + 1)) n=${COUNT:-$n}; step=$n opt=()
  case $kind in
    base) step=$batch opt=(--base "$base") ;;
    seed:*) step=$batch opt=(--seeds "$ctx/rec") ;;
  esac
  flog=$ctx/replay.log; : > "$flog"
  for ((k = 0; k < n; k += step)); do
    "${synth[@]}" "$ctx/f" "$a" --first $k --count $((n - k < step ? n - k : step)) --seed "$seed" "${opt[@]}" > /dev/null \
      || { echo "generator for $a failed"; fail=1; rm -rf "$ctx/f"; break; }
    replay "$flog" "$ctx/f" || fail=1
    [ ! -f "$ctx/f/labels.txt" ] || cat "$ctx/f/labels.txt" >> "$out/synth-labels.txt"
    rm -rf "$ctx/f"
  done
  cat "$flog" >> "$log"
  echo "$(date +%T) [$i/$total] $a $kind: $(grep -c '^PASS' "$flog") passed, $(grep -cE '^(FAIL|ERROR|TIMEOUT)' "$flog") failed"
done 3<<< "$gens"

{ counts "$out/synth-real.log" | awk '{print $1, $2, $3, "real", $4}'
  counts "$log" | awk '{print $1, $2, $3, "synth", $4}'; } > "$out/synth-counts.txt"
echo "contexts per function:"; cat "$out/synth-counts.txt"
failed=$(cat "$out/synth-real.log" "$log" | grep -cE '^(FAIL|ERROR|TIMEOUT)')
echo "$(cat "$out/synth-real.log" "$log" | grep -c '^PASS') passed, $failed failed"
[ "$fail" = 0 ] && [ "$failed" = 0 ]
