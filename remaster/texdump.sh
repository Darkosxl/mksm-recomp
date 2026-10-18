#!/usr/bin/env bash
# Dump every texture the reference scenes sample (texture pack keys) into remaster-data/textures/dump/<key>.pam with
# index.ndjson (key, size, format, first frame, GIF path). Runs from each scene's state to its capture frame.
# usage: remaster/texdump.sh [scene...]
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
D=$(cd "$here/../.." && pwd)/remaster-data
out=$D/textures/dump
mkdir -p "$out"
scenes=${*:-$(awk -F'\t' '!/^#/ {print $1}' "$here/remaster/scenes.tsv")}
for scene in $scenes; do
  IFS=$'\t' read -r _ state frame args < <(awk -F'\t' -v s="$scene" '$1 == s' "$here/remaster/scenes.tsv")
  args=${args//@story/$(tr '\n' ' ' < "$here/mksm/inputs/story.args")}
  args=${args//@koop/$(tr '\n' ' ' < "$here/mksm/inputs/koop.args")}
  # shellcheck disable=SC2086
  PS2_TEX_DUMP=$out "$here/remaster/run.sh" "$D/logs/texdump/$scene" $((frame + 2)) "$D/states/$state" $args > /dev/null
  echo "$scene: $(ls "$out" | grep -c '\.pam$') textures so far"
done
