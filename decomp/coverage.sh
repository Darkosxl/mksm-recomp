#!/usr/bin/env bash
# Replay coverage for the decompiled functions (AWS only, never on the laptop). ci.sh records contexts in three scenes;
# many functions are not reached there. This records on every reference scene (or the given ones), all in parallel,
# adds synthetic contexts (decomp/difftest/synth.py), replays each set recompiled vs decompiled, and prints per
# function how many recorded and synthetic contexts passed. Each scene's contexts are deleted after its replay.
# usage: decomp/coverage.sh <outdir> [scene...]
#   FUNCS=<hex,...> (default all) COUNT=<per function per scene> (12) EVERY=<n-th entry> (3) SYNTH=<per function> (60)
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
out=$1; shift; mkdir -p "$out"
scenes=${*:-$(awk -F'\t' '!/^#/ {print $1}' "$here/remaster/scenes.tsv")}
export PS2_GS=${PS2_GS:-soft}
difftest=$here/build/native-mksm/difftest
ctx=$(mktemp -d)
trap 'rm -rf "$ctx"' EXIT

replay() {  # replay <dir> <log>
  if find "$1" -name '*.ctx' 2>/dev/null | grep -q .; then "$difftest" --keep-going "$1" > "$2" 2>&1 || true
  else echo "no contexts" > "$2"; fi
  rm -rf "$1"
}

for s in $scenes; do
  IFS=$'\t' read -r _ state frame args < <(awk -F'\t' -v s="$s" '$1 == s' "$here/remaster/scenes.tsv")
  args=${args//@story/$(tr '\n' ' ' < "$here/mksm/inputs/story.args")}
  args=${args//@koop/$(tr '\n' ' ' < "$here/mksm/inputs/koop.args")}
  (
    # shellcheck disable=SC2086
    PS2_DIFFTEST_RECORD=$ctx/$s PS2_DIFFTEST_FUNCS=${FUNCS:-all} PS2_DIFFTEST_COUNT=${COUNT:-12} PS2_DIFFTEST_EVERY=${EVERY:-3} \
      PS2_LOCK=$out/.lock-$s "$here/remaster/run.sh" "$out/rec-$s" $((frame + 2)) "$D/states/$state" $args > /dev/null 2>&1 \
      || echo "record $s: rc $?"
    replay "$ctx/$s" "$out/replay-$s.log"
  ) &
done
python3 -I "$here/decomp/difftest/synth.py" "$ctx/synth" --count "${SYNTH:-60}" > /dev/null
replay "$ctx/synth" "$out/replay-synth.log"
wait

python3 -I - "$out" "$here/decomp/overrides.txt" $scenes <<'PY'
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
