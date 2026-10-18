#!/usr/bin/env bash
# Capture one reference scene: load its state, run headless to the capture frame, and record the frame (PNG), the
# emulator state hash at that frame, the image hash, CPU ms/frame (PS2_TIME, single-threaded) and GPU ms/frame
# (sum of PS2_GPU_PROFILE dispatch times) over the 120 frames before it.
# usage: remaster/capture.sh <scene> [outdir]   (scenes: remaster/scenes.tsv; env PS2_GS, PS2_SCALE pass through)
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
py=$P/.venv-remaster/bin/python
scene=$1
out=${2:-$D/golden/$scene}
IFS=$'\t' read -r _ state frame args < <(awk -F'\t' -v s="$scene" '$1 == s' "$here/remaster/scenes.tsv")
[ -n "${frame:-}" ] || { echo "unknown scene $scene" >&2; exit 2; }
args=${args//@story/$(tr '\n' ' ' < "$here/mksm/inputs/story.args")}
args=${args//@koop/$(tr '\n' ' ' < "$here/mksm/inputs/koop.args")}
from=$((frame - 120))
rm -rf "$out"; mkdir -p "$out"
# shellcheck disable=SC2086
PS2_HASH_LOG=$out/hash.log PS2_TIME=$from,120 PS2_GPU_PROFILE=$from,$frame,$out/gpu.txt \
  "$here/remaster/run.sh" "$out" $((frame + 2)) "$D/states/$state" --frames-dir "$out" --frame-every "$frame" $args > /dev/null
ppm=$(printf '%s/frame_%05d.ppm' "$out" "$frame")
"$py" -I - "$ppm" "$out" "$frame" <<'PY'
import hashlib, json, sys
from collections import defaultdict
from PIL import Image
ppm, out, frame = sys.argv[1], sys.argv[2], int(sys.argv[3])
im = Image.open(ppm)
im.save(f'{out}/frame.png')
gpu = defaultdict(int)
for line in open(f'{out}/gpu.txt'):
    f = line.split()
    gpu[int(f[0])] += int(f[3])
state_hash = next((l.split()[1] for l in open(f'{out}/hash.log') if l.split()[0] == str(frame)), None)
cpu = next((float(l.split(': ')[1].split()[0]) for l in open(f'{out}/run.log') if l.startswith('[time]')), None)
r = {'frame': frame, 'size': im.size, 'image_sha256': hashlib.sha256(im.tobytes()).hexdigest(), 'state_hash': state_hash,
     'cpu_ms': cpu, 'gpu_ms': round(sum(gpu.values()) / max(1, len(gpu)) / 1e6, 3), 'gpu_ms_max': round(max(gpu.values(), default=0) / 1e6, 3)}
json.dump(r, open(f'{out}/result.json', 'w'), indent=1)
print(json.dumps(r))
PY
rm -f "$out"/frame_*.ppm
