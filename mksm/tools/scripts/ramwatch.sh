#!/usr/bin/env bash
# RAM watchdog: one line per state change (ok/warn/crit) + top project consumers; on crit, SIGSTOP our largest
# ps2run/clang/java (project processes only) and SIGCONT them once MemAvailable recovers. Never touches other apps.
# usage: ramwatch.sh [warn_mb=3000] [crit_mb=1500] [resume_mb=3500] [interval_s=10]
warn=${1:-3000}; crit=${2:-1500}; resume=${3:-3500}; every=${4:-10}
P=/home/darkwarro/Documents/Twitter/PS2_REA
paused=()   # pids we stopped
state=ok

avail_mb() { awk '/^MemAvailable/{print int($2/1024)}' /proc/meminfo; }
swap_mb()  { awk '/^SwapTotal/{t=$2}/^SwapFree/{f=$2}END{print int((t-f)/1024)}' /proc/meminfo; }
# project processes: ps2run, clang++ building our trees, Ghidra's java, ninja children
ours() { ps -eo pid=,rss=,args= | awk -v p="$P" '($0 ~ /ps2run/ || ($0 ~ /clang/ && $0 ~ p) || ($0 ~ /java/ && $0 ~ /ghidra/)) && $0 !~ /awk/ {print $1, int($2/1024), $3}' | sort -k2 -rn; }
top3() { ours | head -3 | awk '{printf "%s(%sMB) ", gensub(".*/","","g",$3), $2}'; }

echo "$(date +%T) ramwatch armed: warn<${warn}MB crit<${crit}MB resume>${resume}MB avail=$(avail_mb)MB swap=$(swap_mb)MB"
while true; do
  a=$(avail_mb)
  new=ok; [ "$a" -lt "$warn" ] && new=warn; [ "$a" -lt "$crit" ] && new=crit
  if [ "$new" = crit ]; then
    victim=$(ours | awk '$3 ~ /ps2run|clang/ {print $1; exit}')
    if [ -n "$victim" ] && kill -STOP "$victim" 2>/dev/null; then
      paused+=("$victim"); echo "$(date +%T) CRIT avail=${a}MB swap=$(swap_mb)MB -> paused pid $victim ($(ps -o comm= -p "$victim")); top: $(top3)"
    fi
  fi
  if [ ${#paused[@]} -gt 0 ] && [ "$a" -gt "$resume" ]; then
    for pid in "${paused[@]}"; do kill -CONT "$pid" 2>/dev/null; done
    echo "$(date +%T) RECOVERED avail=${a}MB -> resumed ${paused[*]}"; paused=()
  fi
  if [ "$new" != "$state" ]; then
    echo "$(date +%T) ${new^^} avail=${a}MB swap=$(swap_mb)MB top: $(top3)"; state=$new
  fi
  sleep "$every"
done
