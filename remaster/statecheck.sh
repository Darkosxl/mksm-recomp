#!/usr/bin/env bash
# State-hash-only regression check for CPU boxes: runs the reference scenes in parallel (default renderer PS2_GS=soft,
# no GPU needed) exactly as capture.sh does, and compares only the emulator state hash with remaster/golden.json.
# The images are not compared: that needs the GPU renderer (remaster/check.sh on the laptop).
# usage: remaster/statecheck.sh <outdir> [scene...]   (env passes through, e.g. PS2_DECOMP=all)
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
outdir=$1; shift
scenes=${*:-$(awk -F'\t' '!/^#/ {print $1}' "$here/remaster/scenes.tsv")}
export PS2_GS=${PS2_GS:-soft}
for s in $scenes; do
  IFS=$'\t' read -r _ state frame args < <(awk -F'\t' -v s="$s" '$1 == s' "$here/remaster/scenes.tsv")
  args=${args//@story/$(tr '\n' ' ' < "$here/mksm/inputs/story.args")}
  args=${args//@koop/$(tr '\n' ' ' < "$here/mksm/inputs/koop.args")}
  out=$outdir/$s; rm -rf "$out"; mkdir -p "$out"
  # shellcheck disable=SC2086
  PS2_LOCK=$out/.lock PS2_HASH_LOG=$out/hash.log PS2_TIME=$((frame - 120)),120 \
    "$here/remaster/run.sh" "$out" $((frame + 2)) "$D/states/$state" --frames-dir "$out" --frame-every "$frame" $args > /dev/null &
done
wait
bad=0
for s in $scenes; do
  frame=$(awk -F'\t' -v s="$s" '$1 == s {print $3}' "$here/remaster/scenes.tsv")
  got=$(awk -v f="$frame" '$1 == f {print $2}' "$outdir/$s/hash.log" 2>/dev/null)
  want=$(python3 -I -c 'import json, sys; print(json.load(open(sys.argv[1]))[sys.argv[2]]["state_hash"])' "$here/remaster/golden.json" "$s")
  rm -f "$outdir/$s"/frame_*.ppm
  if [ "$got" = "$want" ]; then echo "$s state same"; else echo "$s state DIFFERENT (got ${got:-none}, golden $want)"; bad=$((bad + 1)); fi
done
[ "$bad" = 0 ] && echo PASS || { echo "FAIL: $bad scene(s) differ"; exit 1; }
