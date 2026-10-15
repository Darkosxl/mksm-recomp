#!/usr/bin/env bash
# usage: audio_clip.sh <out.ogg> <boot.wav> <boot_start_s> <game.wav> <game_start_s> [seconds=15]
# Concatenates <seconds> of menu audio and <seconds> of gameplay audio (0.5 s silence between) into one Ogg Vorbis clip.
set -eu
OUT=$1; BW=$2; BS=$3; GW=$4; GS=$5; D=${6:-15}
ffmpeg -loglevel error -y -ss "$BS" -t "$D" -i "$BW" -ss "$GS" -t "$D" -i "$GW" \
  -filter_complex "anullsrc=r=48000:cl=stereo,atrim=0:0.5[s];[0:a][s][1:a]concat=n=3:v=0:a=1[a]" \
  -map "[a]" -c:a libvorbis -q:a 5 "$OUT"
