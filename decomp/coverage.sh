#!/usr/bin/env bash
# Replay coverage for the decompiled functions (AWS only, never on the laptop). ci.sh records contexts in three scenes;
# many functions are not reached there. This records on every reference scene (or the given ones), all in parallel,
# adds synthetic contexts (decomp/difftest/synth.py), replays each set recompiled vs decompiled, and prints per
# function how many recorded and synthetic contexts passed. Each scene's contexts are deleted after its replay.
# usage: decomp/coverage.sh <outdir> [scene[:end frame]...]   (boot[:frames] = from power-on; default end frame: the
#        scene's capture frame + 2, so charsel:6300 follows the story inputs through a level load)
#   FUNCS=<hex,...> (default all) COUNT=<per function per scene> (12) EVERY=<n-th entry> (3) SYNTH=<per function> (60)
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
out=$1; shift; mkdir -p "$out"
scenes=${*:-$(awk -F'\t' '!/^#/ {print $1}' "$here/remaster/scenes.tsv")}
export PS2_GS=${PS2_GS:-soft}
difftest=$here/build/native-mksm/difftest
funcs=${FUNCS:-all} count=${COUNT:-12}

# Contexts go to disk, not /tmp: /tmp is a tmpfs on the boxes and counts against run.sh's MemoryMax=3G, which
# OOM-kills a recording run after ~3 GB of contexts (~33 MB each). Worst case: every function in every scene.
if [ "$funcs" = all ]; then nfuncs=$(grep -cE '^[0-9A-Fa-f]{8}' "$here/decomp/overrides.txt"); else nfuncs=$(tr ',' '\n' <<< "$funcs" | grep -c .); fi
need_mb=$(( $(wc -w <<< "$scenes") * nfuncs * count * 33 ))
free_mb=$(df -Pm "$P" | awk 'NR == 2 {print $4}')
[ $((need_mb * 13 / 10)) -lt "$free_mb" ] || { echo "not enough disk: up to $((need_mb / 1024)) GB of contexts, $((free_mb / 1024)) GB free"; exit 1; }
mkdir -p "$P/logs"; ctx=$(mktemp -d "$P/logs/difftest-cov.XXXXXX")
trap 'rm -rf "$ctx"' EXIT

replay() {  # replay <dir> <log>
  # -print -quit: under pipefail, grep -q closing the pipe early would SIGPIPE a long find and read as "none"
  if find "$1" -name '*.ctx' -print -quit 2>/dev/null | grep -q .; then "$difftest" --keep-going "$1" > "$2" 2>&1 || true
  else echo "no contexts" > "$2"; fi
  rm -rf "$1"
}

for spec in $scenes; do
  s=${spec%%:*}
  if [ "$s" = boot ]; then state=- frame=1498 args=
  else
    IFS=$'\t' read -r _ state frame args < <(awk -F'\t' -v s="$s" '$1 == s' "$here/remaster/scenes.tsv")
    [ -n "$state" ] || { echo "unknown scene $s"; exit 1; }
    state=$D/states/$state
    args=${args//@story/$(tr '\n' ' ' < "$here/mksm/inputs/story.args")}
    args=${args//@koop/$(tr '\n' ' ' < "$here/mksm/inputs/koop.args")}
  fi
  end=$((frame + 2)); [ "$spec" = "$s" ] || end=${spec#*:}
  t=${spec/:/-}  # charsel and charsel:6300 can run side by side
  (
    # shellcheck disable=SC2086
    PS2_DIFFTEST_RECORD=$ctx/$t PS2_DIFFTEST_FUNCS=$funcs PS2_DIFFTEST_COUNT=$count PS2_DIFFTEST_EVERY=${EVERY:-3} \
      PS2_LOCK=$out/.lock-$t "$here/remaster/run.sh" "$out/rec-$t" "$end" "$state" $args > /dev/null 2>&1 || true
    grep -q 'frame limit reached' "$out/rec-$t/run.log" || { echo "recording $t did not finish:"; tail -3 "$out/rec-$t/run.log"; }
    replay "$ctx/$t" "$out/replay-$t.log"
  ) &
done
python3 -I "$here/decomp/difftest/synth.py" "$ctx/synth" --count "${SYNTH:-60}" > /dev/null
replay "$ctx/synth" "$out/replay-synth.log"
wait

python3 -I - "$out" "$here/decomp/overrides.txt" $(for spec in $scenes; do echo "${spec/:/-}"; done) <<'PY'
import collections, re, sys
out, overrides, scenes = sys.argv[1], sys.argv[2], sys.argv[3:]
count = collections.defaultdict(lambda: collections.Counter())
names = {f[0].upper().zfill(8): f[1] if len(f) > 1 else '?' for f in (l.split() for l in open(overrides)) if f and not f[0].startswith('#')}
for src in scenes + ['synth']:
    for line in open(f'{out}/replay-{src}.log'):
        m = re.match(r'(PASS|FAIL) ([0-9A-F]{8}) (\S+) #', line)
        if m:
            names[m[2]] = m[3]
            count[m[2]][('synth' if src == 'synth' else 'rec', m[1])] += 1
        elif line.startswith('ERROR'):
            print(f'{src}: {line.rstrip()}')
bad = 0
print(f'{"addr":8}  {"function":34} {"recorded":>14} {"synthetic":>14}')
for a in sorted(set(count) | set(names)):
    c = count[a]
    bad += c[('rec', 'FAIL')] + c[('synth', 'FAIL')]
    cell = lambda k: f'{c[(k, "PASS")]} pass' + (f', {c[(k, "FAIL")]} FAIL' if c[(k, 'FAIL')] else '')
    print(f'{a}  {names[a]:34} {cell("rec"):>14} {cell("synth"):>14}')
print('all passed' if not bad else f'{bad} failed')
sys.exit(1 if bad else 0)
PY
