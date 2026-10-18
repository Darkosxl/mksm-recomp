#!/usr/bin/env bash
# Browser baseline per reference scene: serves build/web-mksm with the scene states, loads each state in Chromium
# (headful in a private Xvfb, NVIDIA, temp profile — drive.mjs), runs past the capture frame and summarises fps,
# GPU % and emulator idle % over the 600 frames (10 s) after it — the first seconds after a state load are warm-up. Only --press inputs carry over (the page has no --stick).
# usage: remaster/web_baseline.sh [scale] [scene...]   (scale 1-3, default 1)
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
scale=${1:-1}; shift || true
scenes=${*:-$(awk -F'\t' '!/^#/ {print $1}' "$here/remaster/scenes.tsv")}
port=$((8700 + RANDOM % 200))
python3 -I "$here/scripts/serve.py" "$here/build/web-mksm" "$here/games/mksm/disc.iso" $port --files "$D/states" \
  > "$D/logs/web-serve.log" 2>&1 &
srv=$!
trap 'rc=$?; kill $srv 2>/dev/null; wait $srv 2>/dev/null; exit $rc' EXIT
for i in $(seq 50); do curl -sf -o /dev/null -I "http://127.0.0.1:$port/" && break; sleep 0.2; done
for scene in $scenes; do
  IFS=$'\t' read -r _ state frame args < <(awk -F'\t' -v s="$scene" '$1 == s' "$here/remaster/scenes.tsv")
  args=${args//@story/$(tr '\n' ' ' < "$here/mksm/inputs/story.args")}
  args=${args//@koop/$(tr '\n' ' ' < "$here/mksm/inputs/koop.args")}
  from=$(python3 -I -c "import json,sys; print(json.load(open(sys.argv[1]))['frame'])" "$D/states/${state%.state}.json")
  press=$(echo "$args" | grep -oE -- '--press [0-9]+:[^ ]+' | awk -v f="$from" '{split($2, a, ":"); if (a[1] > f) printf "%s%s", (n++ ? "," : ""), $2}' || true)
  out=$D/web/scale$scale/$scene
  rm -rf "$out"; mkdir -p "$out"
  node "$here/mksm/tools/web/drive.mjs" --url "http://127.0.0.1:$port/?state=$state&PS2_SCALE=$scale${press:+&press=$press}" \
    --out "$out" --until-frame $((frame + 600)) --seconds 240 --xvfb --nvidia > "$out/drive.log" 2>&1 || true
  python3 -I - "$out/stats.log" "$frame" $((frame + 600)) "$scene" <<'PY' | tee "$out/summary.txt"
import re, sys
log, lo, hi, scene = sys.argv[1], int(sys.argv[2]), int(sys.argv[3]), sys.argv[4]
rows = [tuple(map(float, m.groups())) for m in (re.search(r'frame=(\d+) frame \d+\s+([\d.]+) fps .*?GPU (\d+)%\s+idle emu (\d+)%', l) for l in open(log)) if m]
rows = [r for r in rows if lo <= r[0] <= hi] or rows[-3:]
avg = lambda i: sum(r[i] for r in rows) / len(rows) if rows else float('nan')
print(f'{scene}: fps avg {avg(1):.1f} min {min((r[1] for r in rows), default=float("nan")):.1f}  GPU {avg(2):.0f}%  emu idle {avg(3):.0f}%  (n={len(rows)})')
PY
done
