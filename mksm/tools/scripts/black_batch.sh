#!/usr/bin/env bash
# black_batch.sh <tag> <map:end> ...  -- one black_run.sh per map (one ps2run at a time), logging the player-state watch
# to $OUT/<tag>-<map>.w (analyse with black_traj.py). Same env as black_run.sh.
P=/home/darkwarro/Documents/Twitter/PS2_REA
OUT=${OUT:-$P/logs/black/runs}; mkdir -p "$OUT"
tag=$1; shift; n=$#; i=0
for me in "$@"; do
  i=$((i+1)); m=${me%%:*}; e=${me##*:}
  until [ "$(awk '/MemAvailable/{print int($2/1024)}' /proc/meminfo)" -ge 4000 ]; do sleep 10; done
  t0=$(date +%s)
  PS2_WATCH="5E6B5C,C;5E6BC0,C;5E6D10,C;5E6C10,C;5E1660,4;5E9830,4;5E9750,4;5E2FC4,4" PS2_WATCH_OUT=$OUT/$tag-$m.w PS2_WATCH_FROM=7600 \
    EVERY=${EVERY:-100} OUT=$OUT $P/tools/scripts/black_run.sh "$tag-$m" "$m" "$e" > /dev/null 2>&1
  echo "map $m $i/$n end $e $(tail -1 "$OUT/$tag-$m/log.txt") $(( $(date +%s) - t0 ))s"
done
echo BATCH DONE
