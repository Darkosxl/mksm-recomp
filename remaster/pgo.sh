#!/usr/bin/env bash
# Profile-guided build (clang): a training build (PS2_PGO=generate) runs scenes the fps A/B doesn't measure, threaded
# hw at 3x6 and 1x, 300 frames past each capture frame, in parallel (CPU box, lavapipe); the merged profile then builds
# <build dir> (PS2_PGO=<profile>). Heavy: on a laptop, run it on a CPU box and copy the .profdata over.
# usage: remaster/pgo.sh <configured build dir> [scene...]   (default: koop raiden nether forest kahn)
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
D=$(cd "$here/../.." && pwd)/remaster-data
build=$(cd "$1" && pwd); shift
scenes=${*:-koop raiden nether forest kahn}
gen=$build-pgo-gen prof=$build-pgo
generated=$(sed -n 's/^PS2_GENERATED:PATH=//p' "$build/CMakeCache.txt")
cmake -S "$here" -B "$gen" -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_COMPILER=clang++ -DPS2_GENERATED="$generated" \
  -DPS2_PGO=generate > /dev/null
ninja -C "$gen" ps2run | tail -n 1
rm -rf "$prof"; mkdir -p "$prof"
export PS2_GS=gpu PS2_GPU_FALLBACK=1 PS2_THREADS=1 PS2_GS_HW=1 PS2RUN=$gen/ps2run LLVM_PROFILE_FILE=$prof/%p.profraw
for s in $scenes; do
  IFS=$'\t' read -r _ state frame args < <(awk -F'\t' -v s="$s" '$1 == s' "$here/remaster/scenes.tsv")
  args=${args//@story/$(tr '\n' ' ' < "$here/mksm/inputs/story.args")}
  args=${args//@koop/$(tr '\n' ' ' < "$here/mksm/inputs/koop.args")}
  for sc in 3x6 1x1; do
    out=$prof/train/$s-$sc; mkdir -p "$out"
    # shellcheck disable=SC2086
    PS2_SCALE=$sc PS2_LOCK=$out/.lock "$here/remaster/run.sh" "$out" $((frame + 300)) "$D/states/$state" $args > /dev/null &
  done
done
wait
llvm-profdata merge -o "$prof.profdata" "$prof"/*.profraw
rm -f "$prof"/*.profraw
cmake -B "$build" -DPS2_PGO="$prof.profdata" > /dev/null
ninja -C "$build" ps2run | tail -n 1
