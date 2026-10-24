#!/usr/bin/env bash
# bossrun.sh: headless story boss fight driver (Reptile, map 0x90). AWS box only (from ~/w/wt/<tree>, via remaster/w.sh run).
#   remaster/bossrun.sh <out> <end> [ps2run args...]
# Starts from $STATE, or else warps from g7600 (map $MAP, P1 takes no damage) into $O/w.state. The Reptile intro
# cutscene runs ~f8200-11350, then the fight. Output in <out>: cmd.txt, run.log, frames/*.png, and watch.txt when
# WATCH is set.
# Env: STATE, MAP (default 90), EVERY = frame-dump step (default 25, 0 = none), WATCH = PS2_WATCH spec,
#      DUMP = PS2_DUMP_AT frames ("f1,f2"; raw EE RAM to <out>/ram_<f>.bin), BIN = ps2run, PS2_GS (default soft).
set -uo pipefail
O=${1:?out}; end=${2:?end frame}; shift 2
G=~/w/games/mksm
mkdir -p "$O/frames"
export SDL_AUDIODRIVER=dummy PS2_GS=${PS2_GS:-soft} PS2_RTC=1792000000 PS2_ELF=$G/disc/SLUS_210.87
unset PS2_MOD
state=${STATE:-}
if [ -z "$state" ]; then
  state=$O/w.state
  python3 mksm/tools/scripts/poke_state.py ~/w/remaster-data/states/g7600.state "$state" \
    4d8c04=${MAP:-90} 4d8c08=1 4b0d9c=0 4fee68=1 4d8bfc=1 || exit 1
fi
[ -n "${WATCH:-}" ] && export PS2_WATCH=$WATCH PS2_WATCH_OUT=$O/watch.txt PS2_WATCH_EVERY=1
[ -n "${DUMP:-}" ] && export PS2_DUMP_AT="$DUMP:$O/ram"
fr=(); [ "${EVERY:-25}" = 0 ] || fr=(--frames-dir "$O/frames" --frame-every "${EVERY:-25}")
echo "[boss] $(date +%T) state $state end $end args $*" | tee "$O/cmd.txt"
timeout 5400 ${BIN:-build/native-mksm/ps2run} $G/disc/SLUS_210.87 --disc $G/disc.iso --load-state "$state" --frames "$end" \
  --memcard "$O/card.ps2" "${fr[@]}" "$@" > "$O/run.log" 2>&1
rc=$?
echo "[boss] ps2run rc $rc at $(date +%T)" | tee -a "$O/cmd.txt"
rm -f "$O/card.ps2" "$O/w.state"
~/w/.venv-remaster/bin/python - "$O" <<'PY'
import sys, glob, os
from PIL import Image
for p in sorted(glob.glob(sys.argv[1] + '/frames/*.ppm')):
    Image.open(p).save(p[:-4] + '.png'); os.remove(p)
PY
exit $rc
