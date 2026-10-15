#!/usr/bin/env bash
# usage: audio_run.sh <build-dir> <label> boot|game <frames> [extra ps2run args...]
# boot: from power-on with story.args, stop at frame <frames>.
# game: from logs/spr/f6900.state, run <frames> frames past 6900.
# Writes logs/audio/<label>.wav and logs/audio/<label>.log; extra env (PS2_TRACE_SPU2 etc.) is inherited.
set -u
P=/home/darkwarro/Documents/Twitter/PS2_REA
B=$1; L=$2; M=$3; N=$4; shift 4
G=$P/ps2-web-recomp/games/mksm
MC=/tmp/claude-1000/-home-darkwarro-Documents-Twitter-PS2-REA/f382b8a9-6dae-4c2f-8653-3ff02033685f/scratchpad/mc-$L.ps2
rm -f "$MC"
mkdir -p $P/logs/audio
OUT=$P/logs/audio/$L
if [ "$M" = boot ]; then
  END=$N; EXTRA=()
else
  END=$((6900 + N)); EXTRA=(--load-state $P/logs/spr/f6900.state)
fi
start=$(date +%s)
echo "[run] $L mode $M frames $N start $(date +%T)" > $OUT.log
PS2_DUMP_AUDIO=$OUT.wav $B/ps2run $G/disc/SLUS_210.87 --disc $G/disc.iso --memcard "$MC" \
  $(cat $G/inputs/story.args) --frames $END "${EXTRA[@]}" "$@" >> $OUT.log 2>&1
rc=$?
echo "[run] $L exit $rc after $(( $(date +%s) - start )) s" >> $OUT.log
