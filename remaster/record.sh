#!/usr/bin/env bash
# Record a route of scenes to video, headless on the laptop GPU: every emulated frame goes through --frames-pipe into
# ffmpeg (CUDA scaling, NVENC) at 60 fps, so the video plays at game speed however fast the run went, and the game's audio is muxed
# in. Runs are paced (PS2_FPS_CAP) to keep the laptop cooler; each segment waits for the CPU to cool first and is
# stopped once it stays at 95 C or more for 5 s (startup spikes there for a second or two). Temperatures per second go to
# <segment>/temps.txt.
# usage: remaster/record.sh <out> original|remaster <scene>:<frames>...   (scenes: remaster/scenes.tsv)   env: CAP, PS2RUN
#   original: the unmodified game at 1x, 4:3 in 2560x1440; remaster: play.sh's look (3x6, widescreen, texture pack v2)
#   A scene without inputs gets the story's fight loop (walk up, combo, step left) from its state on.
#   The 2-minute route (cutscenes skipped by cutting between states): menu:900 goro:1500 academy:1200 forest:1200 nether:1200 foundry:1200
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
out=$1 mode=$2
shift 2
temp() { sensors | awk '/Package id/ {print $4}' | tr -d '+°C' | cut -d. -f1; }
fight() { for ((f = $1; f < $2; f += 260)); do echo "--press $f:up:90 --press $((f + 90)):square --press $((f + 110)):square --press $((f + 130)):triangle --press $((f + 160)):left:40 --press $((f + 200)):cross --press $((f + 230)):circle"; done; }
case $mode in
  original) look=(PS2_SCALE=1) vf="format=yuv444p,hwupload_cuda,scale_cuda=1920:1440:interp_algo=lanczos:format=yuv420p,pad_cuda=2560:1440:320:0,setsar=1" cap=${CAP:-67} ;;
  remaster) look=(PS2_SCALE=3x6 PS2_PNACH=$here/mksm/patches/widescreen.pnach PS2_ASPECT=16:9 PS2_FIELD_FLAG=4F4D68,66189C,67B758 PS2_TEX_PACK=$D/textures/pack-v2)
            vf="hwupload_cuda,scale_cuda=2560:1440:interp_algo=lanczos,setsar=1" cap=${CAP:-40} ;;  # laptop, 2-min route: 45 runs p90 90-95 C, 40 p90 78 C
  *) echo "mode: original or remaster" >&2; exit 2 ;;
esac
mkdir -p "$out"
: > "$out/segments.txt"
i=0
for spec in "$@"; do
  scene=${spec%%:*} n=${spec#*:} i=$((i + 1))
  IFS=$'\t' read -r _ state _ args < <(awk -F'\t' -v s="$scene" '$1 == s' "$here/remaster/scenes.tsv")
  start=$(python3 -I -c "import json, sys; print(json.load(open(sys.argv[1]))['frame'])" "$D/states/${state%.state}.json")
  args=${args//@story/$(tr '\n' ' ' < "$here/mksm/inputs/story.args")}
  [ -n "$args" ] || args=$(fight $((start + 30)) $((start + n)) | tr '\n' ' ')
  o=$out/$i-$scene
  rm -rf "$o"; mkdir -p "$o"; mkfifo "$o/frames"
  for _ in $(seq 90); do [ "$(temp)" -lt 65 ] && break; sleep 2; done
  ffmpeg -loglevel error -f image2pipe -c:v pam -framerate 60 -i "$o/frames" -vf "$vf" -c:v h264_nvenc -preset p6 -tune hq -rc vbr -cq 18 -b:v 0 \
    -y "$o/video.mp4" &
  enc=$!
  ( s=0 hot=0; while sleep 1; do t=$(temp); s=$((s + 1)); echo "$s $t $(nvidia-smi --query-gpu=temperature.gpu --format=csv,noheader | head -1)" >> "$o/temps.txt"
      if [ "${t:-0}" -ge 95 ]; then hot=$((hot + 1)); else hot=0; fi
      [ $hot -ge 5 ] && { echo "$scene: ${t} C for 5 s, stopped"; pkill -f "[f]rames-pipe $o/frames"; }
      pgrep -f "[f]rames-pipe $o/frames" > /dev/null || [ $s -lt 15 ] || break; done ) &
  dog=$!
  # shellcheck disable=SC2086
  env "${look[@]}" PS2_GS_HW=1 PS2_THREADS=1 PS2_FPS_CAP=$cap PS2_DUMP_AUDIO=$o/audio.wav PS2_FPS=$((start + 1)),$((start + n - 1)) \
    "$here/remaster/run.sh" "$o" $((start + n)) "$D/states/$state" --frames-pipe "$o/frames" --frame-every 1 $args > /dev/null || echo "$scene: run ended early"
  timeout 2 sh -c ": > '$o/frames'" 2> /dev/null || true  # an encoder still waiting for a writer gets its end of stream
  wait $enc || echo "$scene: encoder failed"
  kill $dog 2> /dev/null || true
  [ -s "$o/video.mp4" ] || { echo "$scene: no video, left out"; continue; }
  [ -s "$o/audio.wav" ] && ffmpeg -loglevel error -i "$o/video.mp4" -i "$o/audio.wav" -c:v copy -c:a aac -b:a 192k -shortest -y "$o/seg.mp4" || cp "$o/video.mp4" "$o/seg.mp4"
  echo "file '$o/seg.mp4'" >> "$out/segments.txt"
  echo "$scene: $(grep -oP '^\[fps\].*: \K[\d.]+ fps' "$o/run.log" || echo '? fps'), max $(sort -k2 -n "$o/temps.txt" | tail -1 | cut -d' ' -f2) C CPU / $(sort -k3 -n "$o/temps.txt" | tail -1 | cut -d' ' -f3) C GPU"
done
ffmpeg -loglevel error -f concat -safe 0 -i "$out/segments.txt" -c copy -y "$out/$mode.mp4"
echo "wrote $out/$mode.mp4"
