#!/usr/bin/env bash
# R8 of decomp/notes/native-renderer.md §7, null-sink equivalence: runs every reference scene (or the given ones) from
# its state to capture + EXTRA frames in several thread layouts, with and without PS2_VU1_NULL=1 (VU1 and GIF paths 1/2
# never run), all in parallel, hashing every frame with PS2_HASH_SPLIT=2; remaster/nullsink.py compares the logs.
# Modes (MODES, default "st stn th thn"):
#   st  single-threaded (the golden layout)      stn  the same with PS2_VU1_NULL=1
#   th  PS2_THREADS=1 (VU1 and render threads)   thn  the same with PS2_VU1_NULL=1
#   thj, thnj: th, thn with PS2_JITTER=$JITTER (default 7)
#   sts, ths  st, th with the native path side by side (PS2_NATIVE=$NATIVE PS2_NATIVE_MIRROR=1): every section
#             must stay equal
#   stk, thk  st, th with the native path replacing VU1 and the emulated GS for its batches (PS2_NATIVE=$NATIVE):
#             the EE-visible gate of native-renderer.md §6.2 (R10), only vu (vu1x) and vifvu may differ
# Renderer PS2_GS=soft by default (CPU boxes). Heavy: AWS only.
# usage: remaster/nullsink.sh <outdir> [scene...]   (env: EXTRA, default 600; MODES; JITTER; NATIVE, default world)
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
outdir=$1; shift
scenes=${*:-$(awk -F'\t' '!/^#/ {print $1}' "$here/remaster/scenes.tsv")}
modes=${MODES:-st stn th thn}
export PS2_GS=${PS2_GS:-soft} PS2_HASH_SPLIT=2
for s in $scenes; do
  IFS=$'\t' read -r _ state frame args < <(awk -F'\t' -v s="$s" '$1 == s' "$here/remaster/scenes.tsv")
  args=${args//@story/$(tr '\n' ' ' < "$here/mksm/inputs/story.args")}
  args=${args//@koop/$(tr '\n' ' ' < "$here/mksm/inputs/koop.args")}
  for m in $modes; do
    out=$outdir/$m/$s; rm -rf "$out"; mkdir -p "$out"
    env=()
    case $m in th*) env+=(PS2_THREADS=1) ;; esac
    case $m in *n|*nj) env+=(PS2_VU1_NULL=1) ;; esac
    case $m in *j) env+=(PS2_JITTER="${JITTER:-7}") ;; esac
    case $m in *s) env+=(PS2_NATIVE="${NATIVE:-world}" PS2_NATIVE_MIRROR=1) ;; esac
    case $m in *k) env+=(PS2_NATIVE="${NATIVE:-world}") ;; esac
    shot=(); case $m in st|stn|sts|stk) shot=(--frames-dir "$out" --frame-every "$frame") ;; esac
    # shellcheck disable=SC2086
    env "${env[@]}" PS2_LOCK="$out/.lock" PS2_HASH_LOG="$out/hash.log" \
      "$here/remaster/run.sh" "$out" $((frame + ${EXTRA:-600})) "$D/states/$state" "${shot[@]}" $args > /dev/null &
  done
done
wait
echo "done: $outdir"
