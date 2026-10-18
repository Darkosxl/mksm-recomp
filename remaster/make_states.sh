#!/usr/bin/env bash
# Rebuild every reference-scene state from the disc, deterministically, on the current build. Each state gets a
# sidecar <scene>.json with the git commit, the ps2run sha256 and the exact recipe, so a stale state is detectable.
# usage: remaster/make_states.sh [scene...]   (default: all; g7600 is built first when a scene needs it)
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
S=$P/remaster-data/states
L=$P/remaster-data/logs/make-states
bin=${PS2RUN:-$here/build/native-mksm/ps2run}
story=$(tr '\n' ' ' < "$here/mksm/inputs/story.args")
koop=$(tr '\n' ' ' < "$here/mksm/inputs/koop.args")
warp() { echo "4d8c04=$1 4d8c08=1 4b0d9c=0 4d8bfc=1 4fee68=1"; }   # map id, then the invulnerability flag
mkdir -p "$S" "$L"

# scene  source(boot|g7600|warp:<id>)  save-frame  inputs
recipes=(
  "g7600     boot     7600  story"
  "menu      boot     2200  story"
  "charsel   boot     2500  story"
  "fmv       boot     4000  story"
  "raiden    boot     6000  story"
  "koop      boot     6800  koop"
  "academy   warp:67  9800   -"
  "forest    warp:80  10800 -"
  "nether    warp:a0  11200 -"
  "kahn      warp:49  10000 -"
  "foundry   warp:49  14000 -"
)

make() {  # scene source frame inputs
  local scene=$1 src=$2 frame=$3 in=$4 state=- pokes=""
  case $in in story) in=$story ;; koop) in=$koop ;; -) in="" ;; esac
  case $src in
    boot) ;;
    g7600) state=$S/g7600.state ;;
    warp:*) pokes=$(warp "${src#warp:}"); state=$L/$scene-poked.state
            python3 -I "$here/mksm/tools/scripts/poke_state.py" "$S/g7600.state" "$state" $pokes > /dev/null ;;
  esac
  # shellcheck disable=SC2086
  "$here/remaster/run.sh" "$L/$scene" $((frame + 2)) "$state" --save-state "$frame:$S/$scene.state" $in > /dev/null
  [ -s "$S/$scene.state" ] || { echo "FAIL $scene: no state written (log $L/$scene/run.log)"; return 1; }
  python3 -I - "$S/$scene.json" <<PY
import json, sys
json.dump({'scene': '$scene', 'frame': $frame, 'source': '$src', 'pokes': '$pokes'.split(), 'inputs': '${4}',
           'commit': '$(git -C "$here" rev-parse HEAD)', 'ps2run_sha256': '$(sha256sum "$bin" | cut -c1-64)',
           'state_sha256': '$(sha256sum "$S/$scene.state" | cut -c1-64)', 'PS2_RTC': '${PS2_RTC:-1792000000}'},
          open(sys.argv[1], 'w'), indent=1)
PY
  echo "ok $scene @ $frame"
}

want=" ${*:-all} "
for r in "${recipes[@]}"; do
  read -r scene src frame in <<< "$r"
  [ "$want" = " all " ] || [[ "$want" == *" $scene "* ]] || [ "$scene" = g7600 -a ! -s "$S/g7600.state" ] || continue
  make "$scene" "$src" "$frame" "$in"
done
