#!/usr/bin/env bash
# Frame debugger for one reference scene: dumps every draw of the captured frame (GPU run with GPU profiling, then a
# CPU-renderer run for the textures), renders the frame once per group with that group left out (isolation), and
# writes remaster-data/framedbg/<scene>/html/index.html. Rendering-only debug switches: the game state is untouched.
# usage: remaster/framedbg.sh <scene> [max isolation groups, default 40]
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
scene=$1 iso_max=${2:-40}
IFS=$'\t' read -r _ state frame args < <(awk -F'\t' -v s="$scene" '$1 == s' "$here/remaster/scenes.tsv")
[ -n "${frame:-}" ] || { echo "unknown scene $scene" >&2; exit 2; }
args=${args//@story/$(tr '\n' ' ' < "$here/mksm/inputs/story.args")}
args=${args//@koop/$(tr '\n' ' ' < "$here/mksm/inputs/koop.args")}
out=$D/framedbg/$scene
rm -rf "$out"; mkdir -p "$out/soft" "$out/iso"
run() {  # outdir [env...] — run the scene to the capture frame and keep that frame as frame.png
  local dir=$1; shift
  # shellcheck disable=SC2086
  env "$@" "$here/remaster/run.sh" "$dir" $((frame + 2)) "$D/states/$state" --frames-dir "$dir" --frame-every "$frame" $args > /dev/null
  "$P/.venv-remaster/bin/python" -I -c "from PIL import Image; import sys; Image.open(sys.argv[1]).save(sys.argv[2])" \
    "$(printf '%s/frame_%05d.ppm' "$dir" "$frame")" "$dir/frame.png"
  rm -f "$dir"/frame_*.ppm
}
run "$out" PS2_DRAW_DUMP=$((frame - 2)),$frame,$out PS2_GPU_PROFILE=$((frame - 2)),$((frame + 1)),$out/gpu.txt
echo "dumped $(grep -c "\"after_vblank\":$((frame - 1))," "$out/draws.ndjson") draws"
run "$out/soft" PS2_GS=soft PS2_DRAW_DUMP=$((frame - 2)),$frame,$out/soft,tex
echo "textures: $(ls "$out/soft/tex" | wc -l)"
groups=$("$P/.venv-remaster/bin/python" -I - "$out/draws.ndjson" $((frame - 1)) "$iso_max" <<'PY'
import json, sys
from collections import Counter
c = Counter()
for l in open(sys.argv[1]):
    r = json.loads(l)
    if r['after_vblank'] == int(sys.argv[2]): c[r['group']] += r['prims']
print(' '.join(g for g, _ in c.most_common(int(sys.argv[3]))))
PY
)
n=0
for g in $groups; do
  run "$out/iso/$g" PS2_DRAW_SKIP=$g PS2_DRAW_SKIP_FROM=$((frame - 4))
  mv "$out/iso/$g/frame.png" "$out/iso/$g.png"; rm -rf "$out/iso/$g"
  n=$((n + 1)); echo "isolation $n/$(wc -w <<< "$groups") $g"
done
"$P/.venv-remaster/bin/python" -I "$here/remaster/framedbg.py" "$out" "$scene" "$frame"
