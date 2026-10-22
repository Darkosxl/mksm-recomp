#!/usr/bin/env bash
# Web fps sweep: per scene, headless Chromium on the NVIDIA GPU (drive.mjs, which takes heavy.lock itself) on
# build/web-mksm, the scene's state (remaster/scenes.tsv) and inputs (fight inputs for gameplay scenes), N seconds.
# usage: sweep.sh <tag> <seconds> <extra query, e.g. PS2_SCALE=3x6&PS2_WEB_UNPACED=1> <scene>...
#   env: PACK (texture pack dir for serve.py --pack), DRIVE_ARGS (e.g. --frame-times), DRIVE_BEFORE, DRIVE_AT, T (tree)
# Per scene (logs/web/runs/sweep-<tag>-<scene>): mean/min fps of the 1 s windows after the first 5, >18 ms gaps, worst
# gap, idle %s; with --frame-times p50/p95/p99 of the frame times after the first frame + 6 s (the state's disc
# streaming). A run that got no WebGPU adapter is retried up to 3 times.
P=/home/darkwarro/Documents/Twitter/PS2_REA; T=${T:-$(cd "$(dirname "$0")/../../.." && pwd)}; D=$P/remaster-data; tag=$1 secs=$2 extra=$3; shift 3
fight() { for ((f = $1; f < $2; f += 260)); do printf '%s,' "$f:up:90" "$((f + 90)):square" "$((f + 110)):square" "$((f + 130)):triangle" "$((f + 160)):left:40" "$((f + 200)):cross" "$((f + 230)):circle"; done; }
for s in "$@"; do
  IFS=$'\t' read -r _ state _ args < <(awk -F'\t' -v s="$s" '$1 == s' $T/remaster/scenes.tsv)
  [ -n "$state" ] || state=$s.state  # tym and others not in scenes.tsv (record.sh:32)
  start=$(python3 -I -c "import json, sys; print(json.load(open(sys.argv[1]))['frame'])" "$D/states/${state%.state}.json")
  presses=
  for w in $args; do
    if [[ $w == @* ]]; then presses+=$(grep -oP -- '--press \K\S+' "$T/mksm/inputs/${w#@}.args" | tr '\n' ','); elif [[ $w != --press ]]; then presses+=$w,; fi
  done
  [ -n "$presses" ] || presses=$(fight $((start + 30)) $((start + 60 * secs + 600)))
  o=$P/logs/web/runs/sweep-$tag-$s; rm -rf $o; mkdir -p $o
  port=$((8700 + RANDOM % 200))
  python3 -I $T/scripts/serve.py $T/build/web-mksm $T/games/mksm/disc.iso $port --files $D/states ${PACK:+--pack $PACK} > $o/serve.log 2>&1 &
  srv=$!
  for i in $(seq 50); do curl -sf -o /dev/null -I http://127.0.0.1:$port/ && break; sleep 0.2; done
  for try in 1 2 3; do  # drive.mjs fails a run that got no WebGPU adapter: retry it
  until [ $(awk '/MemAvailable/ {print int($2 / 1024)}' /proc/meminfo) -ge 3000 ]; do sleep 5; done  # shared laptop: a capped scope, never below 3 GB free
  node $T/mksm/tools/web/drive.mjs --url "http://127.0.0.1:$port/?state=/$state&press=${presses%,}&$extra" --out $o --nvidia --seconds $secs $DRIVE_ARGS ${DRIVE_BEFORE:+--eval-before-start "$(cat $DRIVE_BEFORE)"} ${DRIVE_AT:+--eval-at "$DRIVE_AT"} > $o/drive.log 2>&1
  grep -q 'no WebGPU adapter' $o/drive.log || break; echo "  $s: no WebGPU adapter (try $try)"; cp $o/drive.log $o/drive-noadapter-$try.log; cp $o/chrome-stderr.log $o/chrome-noadapter-$try.log; cat /sys/bus/pci/devices/0000:01:00.0/power/runtime_status > $o/gpu-power-$try.txt; sleep 20
  done
  kill $srv 2> /dev/null; wait $srv 2> /dev/null
  sleep 10  # flock is unfair: let other sessions' waiters take heavy.lock between scenes
  # stats lines: "<t> frame=N frame F  X fps (S on screen, worst W ms, K >18 ms)   GPU G%   idle emu E% vu V% gs R% ..."
  python3 -I - "$o/stats.log" "$s" << 'EOF'
import re, sys
rows = [l for l in open(sys.argv[1]) if ' fps (' in l]
data = []
for l in rows:
    m = re.search(r'frame=(\d+) .*?([\d.]+) fps \((\d+) on screen, worst ([\d.]+) ms, (\d+) >18 ms\).*?idle emu (-?\d+)% vu (-?\d+)% gs (-?\d+)%', l)
    if m: data.append([float(x) for x in m.groups()])
data = data[5:]
if not data: print(f'{sys.argv[2]}: no frames ({len(rows)} stats lines)'); sys.exit()
fps = [d[1] for d in data]
print(f'{sys.argv[2]}: fps mean {sum(fps) / len(fps):.1f} min {min(fps):.1f} | >18ms {int(sum(d[4] for d in data))} of {int(sum(fps))} worst {max(d[3] for d in data):.1f} ms | '
      f'idle emu {sum(d[5] for d in data) / len(data):.0f}% vu {sum(d[6] for d in data) / len(data):.0f}% gs {sum(d[7] for d in data) / len(data):.0f}% | frames {int(data[0][0])}-{int(data[-1][0])}')
EOF
  [ -s $o/frame-ms.txt ] && python3 -I - "$o/frame-ms.txt" "$s" << 'FT'
import sys
ms = [float(x) for x in open(sys.argv[1]) if x.strip()]
t, k = 0.0, 1  # ms[0]: page start to the first frame
while k < len(ms) and t < 6000: t += ms[k]; k += 1  # skip 6 s more (the state's disc streaming), like the 1 s windows
ms = sorted(ms[k:])
if ms:
    q = lambda p: ms[min(len(ms) - 1, int(p * len(ms)))]
    print(f'{sys.argv[2]}: frames {len(ms)}  p50 {1000 / q(0.5):.1f} fps ({q(0.5):.2f} ms)  p95 {1000 / q(0.95):.1f} fps ({q(0.95):.2f} ms)  p99 {q(0.99):.1f} ms  max {ms[-1]:.1f} ms')
FT
  grep -c 'WebGPU\|validation\|Validation' $o/console.log | sed "s/^/  $s console WebGPU\/validation lines: /"
done
echo "SWEEP END"
