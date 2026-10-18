#!/usr/bin/env bash
# Regression check: capture every reference scene (or the given ones) on the current build and compare the image and
# emulator state hash with remaster/golden.json. Prints one line per scene; exit status 1 if any scene differs.
# usage: remaster/check.sh [scene...]   (env passes through, e.g. PS2_SCALE=2 to check that state hashes stay put)
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
scenes=${*:-$(awk -F'\t' '!/^#/ {print $1}' "$here/remaster/scenes.tsv")}
for s in $scenes; do "$here/remaster/capture.sh" "$s" "$D/check/$s" > /dev/null; done
"$P/.venv-remaster/bin/python" -I - "$D" "$here/remaster/golden.json" $scenes <<'PY'
import json, sys
D, golden, scenes = sys.argv[1], json.load(open(sys.argv[2])), sys.argv[3:]
bad = 0
for s in scenes:
    r, g = json.load(open(f'{D}/check/{s}/result.json')), golden[s]
    img, st = r['image_sha256'] == g['image_sha256'], r['state_hash'] == g['state_hash']
    bad += not (img and st)
    print(f"{s:8} image {'same' if img else 'DIFFERENT'}  state {'same' if st else 'DIFFERENT'}  gpu {r['gpu_ms']} ms (golden {g['gpu_ms']})")
print('PASS' if not bad else f'FAIL: {bad} scene(s) differ')
sys.exit(1 if bad else 0)
PY
