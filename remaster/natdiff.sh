#!/usr/bin/env bash
# Per-category diff of the native renderer against the emulated one (decomp/notes/native-renderer.md §5.2): loads the
# scene's state (remaster/scenes.tsv) and
#   1. dumps the draws of the frames around the capture frame (PS2_DRAW_DUMP, framedbg's draws.ndjson);
#   2. picks the draw groups that isolate the category (natdiff.py groups: classify.py's rules, categories.json): every
#      other group is skipped (PS2_DRAW_SKIP, from capture - 4), the clear is kept;
#   3. runs again isolated with the native path side by side (PS2_NATIVE=<category>, PS2_NATIVE_CHECK=1) and dumps the
#      first run of native draws at or after the capture frame (PS2_NATIVE_DUMP): the emulated frame and Z before and
#      after it, and the native target;
#   4. compares inside the category's mask (natdiff.py compare): heatmap.png, emu.png, nat.png, depth.png and one JSON
#      line, also appended to <outdir>/natdiff.json.
# The emulated path draws as always in both runs; the native one only reads. Renderer PS2_GS=gpu (PS2_GPU_FALLBACK=1 on
# CPU boxes); PS2_SCALE passes through.
# usage: remaster/natdiff.sh <scene> <category> [outdir]   (env: ISO=0 skips nothing: the category in situ)
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
py=$P/.venv-remaster/bin/python
scene=$1 category=$2
out=${3:-$D/natdiff/$scene-$category}
IFS=$'\t' read -r _ state frame args < <(awk -F'\t' -v s="$scene" '$1 == s' "$here/remaster/scenes.tsv")
[ -n "${frame:-}" ] || { echo "unknown scene $scene" >&2; exit 2; }
args=${args//@story/$(tr '\n' ' ' < "$here/mksm/inputs/story.args")}
args=${args//@koop/$(tr '\n' ' ' < "$here/mksm/inputs/koop.args")}
rm -rf "$out"; mkdir -p "$out/draws" "$out/dump"
export PS2_GS=${PS2_GS:-gpu} PS2_LOCK=${PS2_LOCK:-$out/.lock}
skip=
if [ "${ISO:-1}" != 0 ]; then
  # shellcheck disable=SC2086
  PS2_DRAW_DUMP=$((frame - 6)),$((frame + 2)),$out/draws "$here/remaster/run.sh" "$out/draws" $((frame + 3)) "$D/states/$state" $args > /dev/null
  skip=$("$py" -I "$here/remaster/natdiff.py" groups "$out/draws" "$category")
fi
iso=(); [ -z "$skip" ] || iso=(PS2_DRAW_SKIP="$skip" PS2_DRAW_SKIP_FROM=$((frame - 4)))
# shellcheck disable=SC2086
env "${iso[@]}" PS2_NATIVE="$category" PS2_NATIVE_CHECK="${PS2_NATIVE_CHECK:-1}" PS2_NATIVE_DUMP="$frame,$out/dump" \
  "$here/remaster/run.sh" "$out/run" $((frame + 3)) "$D/states/$state" $args > /dev/null
grep '^\[native\]' "$out/run/run.log" >&2 || true
"$py" -I "$here/remaster/natdiff.py" compare "$out/dump" --scene "$scene" --category "$category" --out "$out/natdiff.json"
