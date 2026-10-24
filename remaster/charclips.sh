#!/usr/bin/env bash
# charclips.sh: the move clips of docs/characters (animated WebP). AWS box only, from ~/w/wt/<tree> (remaster/w.sh run).
#   remaster/charclips.sh <out> <clips.tsv> [fighter...]
# clips.tsv: fighter, clip name, frames to run past the fight start, ps2run input args (tab-separated; absolute frames,
# the fight start is f3720, see vsrun.sh). Per fighter a fight-start state (vsrun.sh start, MOD=1, soft GS), then per
# clip a vsrun.sh raw run from it with the remaster look (GPU GS on lavapipe, $SCALE supersampling, 16:9 widescreen
# patch; no HD texture pack) and a frame every 2 (30 fps). The clip is cut around P1's move (from P1 leaving his idle
# state to coming back, watch.txt), cropped to $CROP (x0,y0,x1,y1 as fractions of the 16:9 frame: the middle 3/4 and the
# top 3/4, which keeps the health bars), scaled to $W px wide and written as <out>/<fighter>-<clip>.webp, with the run's
# summary.txt next to it. The runs (states, frames) stay in $RUNS. ENCODE=1 only cuts and encodes again.
#   remaster/charclips.sh --reel <out.webp> <fighter>/<clip>:<first frame>...
# cuts $REEL frames (default 30, 1 s) of each recorded clip together, from that game frame on (even: the frames are
# every 2), same crop, $W (default 640) px wide, WebP quality $Q (default 60). docs/media/fighters.webp.
set -uo pipefail
if [ "${1:-}" = --reel ]; then
  out=${2:?out.webp}; shift 2
  exec ~/w/.venv-remaster/bin/python - "$out" "${RUNS:-$HOME/w/clips}" "${W:-640}" "${CROP:-0.125,0,0.875,0.75}" \
    "${REEL:-30}" "${Q:-60}" "$@" <<'PY'
import os, sys
from PIL import Image
out, R, W, n, q = sys.argv[1], sys.argv[2], int(sys.argv[3]), int(sys.argv[5]), int(sys.argv[6])
box = [float(x) for x in sys.argv[4].split(',')]
ims = []
for spec in sys.argv[7:]:
    clip, f0 = spec.rsplit(':', 1)
    for k in range(n):
        im = Image.open('%s/%s/frames/frame_%05d.png' % (R, clip, int(f0) + 2 * k)).convert('RGB')
        w, h = im.size
        ims.append(im.crop((round(box[0] * w), round(box[1] * h), round(box[2] * w), round(box[3] * h))).resize(
            (W, round(W * 9 / 16)), Image.LANCZOS))
ims[0].save(out, save_all=True, append_images=ims[1:], duration=33, loop=0, quality=q, method=6)
print(out, len(ims), 'frames', os.path.getsize(out) // 1024, 'KB')
PY
fi
O=${1:?out} J=${2:?clips.tsv}; shift 2
only=" ${*:-} "
SCALE=${SCALE:-2x4} W=${W:-480} CROP=${CROP:-0.125,0,0.875,0.75} P=${P:-4} PFS=${PFS:-8} R=${RUNS:-$HOME/w/clips}
declare -A PICK=([reptile]="right right right" [baraka]="right right right right" [kitana]="left left left"
                 [cage]="right right" [liukang]="up" [kunglao]="left" [scorpion]="right" [subzero]="left left")
mkdir -p "$O" "$R"
O=$(cd "$O" && pwd)
run() {   # one command line per line of $1, $2 at a time, a progress line per finished one
  local n; n=$(wc -l < "$1")
  xargs -P "$2" -d '\n' -I{} bash -c '{} > /dev/null 2>&1; echo "rc $? {}"' < "$1" |
    awk -v n="$n" '{ print NR "/" n, $0; fflush() }' >> "$O/progress"
}
want() { [ "$only" = "  " ] || [[ $only == *" $1 "* ]]; }
clips=$(grep -v '^#' "$J" | while IFS=$'\t' read -r f name _; do want "$f" && echo "$f/$name"; done)
if [ "${ENCODE:-0}" != 1 ]; then
  : > "$O/fs.cmds"; : > "$O/clip.cmds"
  for f in $(echo "$clips" | cut -d/ -f1 | sort -u); do
    [ -f "$R/fs-$f/fight-start-$f.state" ] && continue
    printf 'MOD=1 EVERY=0 FIGHTER=%q PICK=%q remaster/vsrun.sh start %q\n' "$f" "${PICK[$f]}" "$R/fs-$f" >> "$O/fs.cmds"
  done
  grep -v '^#' "$J" | while IFS=$'\t' read -r f name n args; do
    want "$f" || continue
    rm -rf "${R:?}/$f/$name"
    printf 'MOD=1 EVERY=2 PS2_GS=gpu PS2_GPU_FALLBACK=1 PS2_GS_HW=1 PS2_SCALE=%q PS2_PNACH=%q PS2_ASPECT=16:9 PS2_FIELD_FLAG=4F4D68,66189C,67B758 remaster/vsrun.sh raw %q %q %d --pad2 %s\n' \
      "$SCALE" "$PWD/mksm/patches/widescreen.pnach" "$R/$f/$name" "$R/fs-$f/fight-start-$f.state" $((3720 + n)) "$args" >> "$O/clip.cmds"
  done
  echo "fight starts $(date +%T)" >> "$O/progress"; run "$O/fs.cmds" "$PFS"
  echo "clips $(date +%T)" >> "$O/progress"; run "$O/clip.cmds" "$P"
fi
echo "encode $(date +%T)" >> "$O/progress"
# shellcheck disable=SC2086
~/w/.venv-remaster/bin/python - "$O" "$R" "$W" "$CROP" $clips <<'PY' >> "$O/progress" 2>&1
import glob, os, re, shutil, sys
from PIL import Image
O, R, W = sys.argv[1], sys.argv[2], int(sys.argv[3])
box = [float(x) for x in sys.argv[4].split(',')]
for clip in sys.argv[5:]:
    d = R + '/' + clip
    pngs = {int(re.findall(r'\d+', os.path.basename(p))[-1]): p for p in glob.glob(d + '/frames/*.png')}
    if not pngs or not os.path.exists(d + '/watch.txt'):
        print('no frames', d); continue
    st = {}
    for line in open(d + '/watch.txt'):
        c = line.split('|')
        if len(c) > 2: st[int(c[0].split()[0])] = int(c[2].split()[0], 16)
    fs = [f for f in sorted(st) if f >= 3720]
    idle = st[fs[0]]
    busy = [f for f in fs if st[f] != idle]
    a = (busy[0] - 10) if busy else fs[0]
    b = (busy[-1] + 24) if busy else fs[-1]
    b = min(max(b, a + 120), a + 240)          # 2..4 s
    def frame(p):
        im = Image.open(p).convert('RGB')
        w, h = im.size
        return im.crop((round(box[0] * w), round(box[1] * h), round(box[2] * w), round(box[3] * h))).resize(
            (W, round(W * 9 / 16)), Image.LANCZOS)
    ims = [frame(pngs[f]) for f in sorted(pngs) if a <= f <= b]
    name = clip.replace('/', '-')
    out = '%s/%s.webp' % (O, name)
    ims[0].save(out, save_all=True, append_images=ims[1:], duration=33, loop=0, quality=72, method=6)
    shutil.copy(d + '/summary.txt', '%s/%s.summary.txt' % (O, name))
    print('%s %d frames f%d..f%d %d KB' % (out, len(ims), a, b, os.path.getsize(out) // 1024))
PY
echo "done $(date +%T)" >> "$O/progress"
