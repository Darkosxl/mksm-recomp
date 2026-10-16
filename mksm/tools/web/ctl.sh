#!/usr/bin/env bash
# Sends live commands to a drive.mjs run started with --control logs/web/runs/<name>.ctl, then screenshots.
# usage: ctl.sh <run name> "<cmd>[;<cmd>...]" [shot delay frames]   -> prints the screenshot taken after the commands
P=/home/darkwarro/Documents/Twitter/PS2_REA; run=$1; cmds=$2; delay=${3:-60}
ctl=$P/logs/web/runs/$run.ctl; out=$P/logs/web/runs/$run
label="s$(date +%s%N | tail -c 7)"
IFS=';' read -ra list <<< "$cmds"
for c in "${list[@]}"; do [ -n "$c" ] && echo "$c" >> "$ctl"; done
echo "shot $label $delay" >> "$ctl"
for i in $(seq 600); do f=$(ls "$out"/shot-*-"$label"-f*.png 2>/dev/null | head -1); [ -n "$f" ] && break; sleep 0.25; done
grep "\[ctl\]" "$out/stats.log" | tail -n $(( ${#list[@]} + 1 )) | cut -c1-140
tail -1 "$out/stats.log" | cut -c1-160
echo "$f"
