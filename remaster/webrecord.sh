#!/usr/bin/env bash
# remaster/record.sh in the browser: the web build in headless Chromium on the laptop's NVIDIA GPU, one page per scene.
# Headful in drive.mjs's private Xvfb (headless WebGPU canvases read back black). The page encodes every presented frame (drive.mjs --record, 60 fps however fast the run went) and the game dumps its
# audio when it stops at --frames (PS2_DUMP_AUDIO, pulled out of the page's memory filesystem).
# usage: remaster/webrecord.sh <out> original|remaster <scene>:<frames>[+<skip>]...   (scenes: remaster/scenes.tsv, as record.sh;
#   +skip: the clip starts that many frames after the state, e.g. menu:800+100)
#   original: the unmodified game at 1x, 4:3 at 640x480 (scale it up later: the page's own upscale is bilinear); remaster: the page's 3x6 rung (widescreen, 4x web pack) at 1920x1080
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
out=$1 mode=$2
shift 2
fight() { for ((f = $1; f < $2; f += 260)); do echo "--press $f:up:90 --press $((f + 90)):square --press $((f + 110)):square --press $((f + 130)):triangle --press $((f + 160)):left:40 --press $((f + 200)):cross --press $((f + 230)):circle"; done; }
case $mode in
  original) look='PS2_SCALE=1&pack=off&PS2_PNACH=&PS2_ASPECT=' view=640,480 ;;  # keeps the shell's PS2_FIELD_FLAG: cleared, the presenter blends the fields and moving things ghost
  remaster) look="PS2_SCALE=3x6&pack=${PACK:-4}" view=1920,1080 ;;  # PACK=off|2|4|<index id>
  *) echo "mode: original or remaster" >&2; exit 2 ;;
esac
mkdir -p "$out"
: > "$out/$mode-segments.txt"
port=$((8700 + RANDOM % 200))
python3 -I "$here/scripts/serve.py" "$here/build/web-mksm" "$here/games/mksm/disc.iso" $port --files "$D/states" --pack "$D/textures/web" > "$out/serve.log" 2>&1 &
srv=$!
trap 'kill $srv 2> /dev/null' EXIT
i=0
for spec in "$@"; do
  scene=${spec%%:*} n=${spec#*:} i=$((i + 1)) skip=0
  [[ $n == *+* ]] && skip=${n#*+} n=${n%+*}
  IFS=$'\t' read -r _ state _ args < <(awk -F'\t' -v s="$scene" '$1 == s' "$here/remaster/scenes.tsv") || { state=$scene.state args=@$scene; }
  start=$(python3 -I -c "import json, sys; print(json.load(open(sys.argv[1]))['frame'])" "$D/states/${state%.state}.json")
  for w in $args; do [[ $w == @* ]] && args=${args//$w/$(tr '\n' ' ' < "$here/mksm/inputs/${w#@}.args")}; done
  o=$out/$mode/$i-$scene end=$((start + skip + n))
  [ -n "$args" ] || args=$(fight $((start + 30)) $end | tr '\n' ' ')
  rm -rf "$o"; mkdir -p "$o"
  q=$(python3 -I -c "import sys, urllib.parse; print(urllib.parse.quote(sys.argv[1]))" "--frames $end $args")
  node "$here/mksm/tools/web/drive.mjs" --url "http://127.0.0.1:$port/?$look&state=/$state&PS2_DUMP_AUDIO=/tmp/audio.wav&args=$q" --out "$o" \
    --nvidia --xvfb --window $((${view%,*} + 64)),$((${view#*,} + 200)) --viewport $view --until-frame $end --seconds 1200 --record "$o/video.h264" --record-from $((start + skip)) --pull /tmp/audio.wav:"$o/audio.wav" \
    --eval-before-start "document.getElementById('bar').style.display = 'none'" ${WEBREC_ARGS:-} > "$o/drive.log" 2>&1 || echo "$scene: drive failed"
  [ -s "$o/video.h264" ] || { echo "$scene: no video, left out"; continue; }
  # raw H.264 has no timestamps: muxed straight with the audio, -shortest leaves no audio at all
  ffmpeg -loglevel error -r 60 -i "$o/video.h264" -c copy -y "$o/video.mp4"
  if [ -s "$o/audio.wav" ]; then ffmpeg -loglevel error -i "$o/video.mp4" -ss "$(awk "BEGIN { print $skip / 60 }")" -i "$o/audio.wav" -c:v copy -c:a aac -b:a 192k -shortest -y "$o/seg.mp4"
  else cp "$o/video.mp4" "$o/seg.mp4"; fi
  echo "file '$o/seg.mp4'" >> "$out/$mode-segments.txt"
  echo "$scene: $(grep -o 'recorded .*' "$o/drive.log" | tail -1), $(grep -o 'pull .*' "$o/drive.log" | tail -1)"
done
ffmpeg -loglevel error -f concat -safe 0 -i "$out/$mode-segments.txt" -c copy -y "$out/$mode.mp4"
echo "wrote $out/$mode.mp4"
