#!/usr/bin/env bash
# Capture every reference scene twice (golden + replay), check that both runs give the same image and state hash,
# write remaster/golden.json (committed: hashes and timings only) and a contact sheet of the golden frames.
# usage: remaster/golden.sh [scene...]   (GOLDEN_TAG=s3 PS2_SCALE=3: separate golden-s3.json and data dirs)
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
sfx=${GOLDEN_TAG:+-$GOLDEN_TAG}
scenes=${*:-$(awk -F'\t' '!/^#/ {print $1}' "$here/remaster/scenes.tsv")}
for s in $scenes; do
  "$here/remaster/capture.sh" "$s" "$D/golden$sfx/$s" > /dev/null
  "$here/remaster/capture.sh" "$s" "$D/replay$sfx/$s" > /dev/null
  echo "captured $s"
done
"$P/.venv-remaster/bin/python" -I - "$D" "$here/remaster/golden$sfx.json" "$sfx" $scenes <<'PY'
import json, sys
D, out, sfx, scenes = sys.argv[1], sys.argv[2], sys.argv[3], sys.argv[4:]
golden = {}
try: golden = json.load(open(out))
except FileNotFoundError: pass
bad = 0
for s in scenes:
    g, r = (json.load(open(f'{D}/{d}{sfx}/{s}/result.json')) for d in ('golden', 'replay'))
    same = g['image_sha256'] == r['image_sha256'] and g['state_hash'] == r['state_hash']
    bad += not same
    golden[s] = {**g, 'replay_identical': same}
    print(f"{s:8} f{g['frame']:<6} state {g['state_hash']}  image {g['image_sha256'][:12]}  cpu {g['cpu_ms']} ms  gpu {g['gpu_ms']} ms (max {g['gpu_ms_max']})  replay {'same' if same else 'DIFFERENT'}")
json.dump(golden, open(out, 'w'), indent=1, sort_keys=True)
print('replay mismatches:', bad)
PY
"$P/.venv-remaster/bin/python" -I "$here/remaster/sheet.py" "$D/golden$sfx/sheet.png" $(for s in $scenes; do echo "$D/golden$sfx/$s/frame.png"; done) --cols 4 --width 480
