#!/usr/bin/env bash
# Hardware GS renderer check (CPU box, lavapipe): each scene with PS2_GS_HW off and on, in parallel; the state hash on
# every frame must match, and the captured frames are compared (PSNR, max |d|, % of pixels off by more than 2).
# usage: remaster/hwcheck.sh <outdir> [scene...]   (env PS2_SCALE etc. pass through)
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
D=$(cd "$here/../.." && pwd)/remaster-data
outdir=$1; shift
scenes=${*:-$(awk -F'\t' '!/^#/ {print $1}' "$here/remaster/scenes.tsv")}
export PS2_GS=gpu PS2_GPU_FALLBACK=1
for s in $scenes; do
  IFS=$'\t' read -r _ state frame args < <(awk -F'\t' -v s="$s" '$1 == s' "$here/remaster/scenes.tsv")
  args=${args//@story/$(tr '\n' ' ' < "$here/mksm/inputs/story.args")}
  args=${args//@koop/$(tr '\n' ' ' < "$here/mksm/inputs/koop.args")}
  for mode in off hw; do
    out=$outdir/$mode/$s; rm -rf "$out"; mkdir -p "$out"
    [ $mode = hw ] && hw=1 || hw=
    # shellcheck disable=SC2086
    PS2_GS_HW=$hw PS2_LOCK=$out/.lock PS2_HASH_LOG=$out/hash.log "$here/remaster/run.sh" "$out" $((frame + 2)) "$D/states/$state" \
      --frames-dir "$out" --frame-every "$frame" $args > /dev/null &
  done
done
wait
"${PYTHON:-python3}" -I - "$outdir" "$here/remaster/scenes.tsv" $scenes <<'PY'
import sys, numpy as np
outdir, tsv, scenes = sys.argv[1], sys.argv[2], sys.argv[3:]
frame_of = {l.split('\t')[0]: int(l.split('\t')[2]) for l in open(tsv) if not l.startswith('#') and l.strip()}
def ppm(p):
    b = open(p, 'rb').read()
    parts = b.split(maxsplit=4)
    w, h = int(parts[1]), int(parts[2])
    return np.frombuffer(b[len(b) - w * h * 3:], np.uint8).reshape(h, w, 3).astype(np.int32)
bad = 0
for s in scenes:
    try:
        logs = [dict(l.split()[:2] for l in open(f'{outdir}/{m}/{s}/hash.log') if len(l.split()) >= 2) for m in ('off', 'hw')]
        a, b = (ppm(f'{outdir}/{m}/{s}/frame_{frame_of[s]:05d}.ppm') for m in ('off', 'hw'))
    except OSError as e:
        print(f'{s:8} missing: {e}'); bad += 1; continue
    same = logs[0] == logs[1] and bool(logs[0])
    d = np.abs(a - b)
    mse = float((d ** 2).mean())
    psnr = 99.0 if mse == 0 else 10 * np.log10(255 ** 2 / mse)
    print(f'{s:8} state {"same" if same else "DIFFERENT"}  psnr {psnr:5.1f} dB  max {d.max():3d}  >2: {100 * (d.max(axis=2) > 2).mean():5.2f}%')
    bad += not same
sys.exit(1 if bad else 0)
PY
