#!/usr/bin/env bash
# Desktop frame rate of the reference scenes: the 3-thread layout (PS2_THREADS=1, as with a window), uncapped,
# measured over the 600 frames after each scene's capture frame (PS2_FPS). Env PS2_SCALE etc. pass through.
# usage: remaster/perf.sh [scene...]   (default: all of remaster/scenes.tsv) → one "scene fps" line each
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
D=$(cd "$here/../.." && pwd)/remaster-data
scenes=("$@")
[ ${#scenes[@]} -gt 0 ] || mapfile -t scenes < <(awk -F'\t' '!/^#/ {print $1}' "$here/remaster/scenes.tsv")
for scene in "${scenes[@]}"; do
  IFS=$'\t' read -r _ state frame args < <(awk -F'\t' -v s="$scene" '$1 == s' "$here/remaster/scenes.tsv")
  [ -n "${frame:-}" ] || { echo "unknown scene $scene" >&2; exit 2; }
  args=${args//@story/$(tr '\n' ' ' < "$here/mksm/inputs/story.args")}
  args=${args//@koop/$(tr '\n' ' ' < "$here/mksm/inputs/koop.args")}
  out=$D/perf/$scene; rm -rf "$out"; mkdir -p "$out"
  # shellcheck disable=SC2086
  PS2_THREADS=1 PS2_FPS=$frame,$((frame + 600)) "$here/remaster/run.sh" "$out" $((frame + 602)) "$D/states/$state" $args > /dev/null
  fps=$(grep -oP '^\[fps\].*: \K[\d.]+' "$out/run.log" || echo "?")
  printf '%-8s %6s fps\n' "$scene" "$fps"
done
