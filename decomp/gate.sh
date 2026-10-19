#!/usr/bin/env bash
# Scene gate for decompiled functions: capture every reference scene (or the given ones) twice on the current build,
# PS2_DECOMP=off and PS2_DECOMP=all (DECOMP=<hex,hex...> gates a subset), and require the same emulator state hash on
# every frame from the state load to the capture frame, and the same image. One line per scene; exit status 1 if
# any scene differs. Heavy (two headless runs per scene): AWS only.
# usage: decomp/gate.sh [scene...]   (scenes: remaster/scenes.tsv; other env passes through to remaster/capture.sh)
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
scenes=${*:-$(awk -F'\t' '!/^#/ {print $1}' "$here/remaster/scenes.tsv")}
on=${DECOMP:-all}
for s in $scenes; do
  PS2_DECOMP=off "$here/remaster/capture.sh" "$s" "$D/decomp-off/$s" > /dev/null
  PS2_DECOMP=$on "$here/remaster/capture.sh" "$s" "$D/decomp-on/$s" > /dev/null
  echo "captured $s"
done
python3 -I - "$D" "$on" $scenes <<'PY'
import json, sys
D, on, scenes = sys.argv[1], sys.argv[2], sys.argv[3:]
bad = 0
for s in scenes:
    logs = []
    for d in ('decomp-off', 'decomp-on'):
        logs.append({int(f[0]): f[1] for f in (l.split() for l in open(f'{D}/{d}/{s}/hash.log')) if len(f) >= 2})
    off, dec = logs
    frames = sorted(set(off) & set(dec))
    first = next((f for f in frames if off[f] != dec[f]), None)
    r_off, r_on = (json.load(open(f'{D}/{d}/{s}/result.json')) for d in ('decomp-off', 'decomp-on'))
    img = r_off['image_sha256'] == r_on['image_sha256']
    ok = first is None and img and len(off) == len(dec) and frames
    bad += not ok
    span = f'{frames[0]}-{frames[-1]}' if frames else '-'
    print(f"{s:8} frames {span} ({len(frames)} hashed): state {'same' if first is None else f'DIFFERENT from frame {first}'}"
          f"  image {'same' if img else 'DIFFERENT'}")
print(f'PS2_DECOMP={on} vs off:', 'PASS' if not bad else f'FAIL: {bad} scene(s) differ')
sys.exit(1 if bad else 0)
PY
