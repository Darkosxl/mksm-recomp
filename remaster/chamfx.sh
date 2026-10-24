#!/usr/bin/env bash
# chamfx.sh: headless checks of a fighter's special-move sounds and effects (the Chameleon donor moves). AWS box only
# (from ~/w/wt/<tree>, normally via remaster/w.sh run); writes into <out>.
#   remaster/chamfx.sh vsstart <out> <rights>   Versus fight start, P1 = roster cell <rights> right of Liu Kang
#                                               (1 Scorpion, 3 Reptile, 6 Sub-Zero), P2 Kung Lao, The Rooftops;
#                                               saves <out>/fs.state at f$FS (vsrun.sh start's inputs; later for
#                                               cells past Reptile's, the frame in <out>/fs.frame); L3=1: press
#                                               L3 on the cell (Reptile -> Chameleon)
#   remaster/chamfx.sh story <out>              story from remaster-data/states/charsel.state as Chameleon (cell 7,
#                                               one L3: Reptile -> Chameleon), saves <out>/fs.state at f$SS
#   remaster/chamfx.sh move <out> <state> <f0> <fighter> <gstate> [N]
#                                               from <state> (saved at f<f0>), FUN_00303340(<fighter>, <gstate>) at
#                                               f<f0>+10 (debug_call; hex fighter, decimal state, 0 = no call), N
#                                               frames (150): audio.wav + stems.wav, frames/ every 2nd, fx.txt (cue
#                                               lookups, event-114 calls, bank loads), watch.txt (P1 state)
# Env: MOD (1) runs with PS2_MOD=1; PAD2 (1) connects pad 2 in move runs (0 for story states); BIN = ps2run;
#      PRESS = "f:button[+button]:frames ..." P1 inputs in move runs (gstate 0: inputs instead of the call);
#      CALL = a PS2_CALL instead, e.g. 7604:1B90B8:0:0 = Versus round-start upgrades for player slot 0 (story has none
#      bought, and the donor specials need a Specials level).
set -uo pipefail
mode=${1:?usage: chamfx.sh vsstart|story|move <out> ...}; O=${2:?out}; shift 2
G=~/w/games/mksm S=~/w/remaster-data/states
FS=3720 SS=7600
mkdir -p "$O"
export SDL_AUDIODRIVER=dummy PS2_GS=${PS2_GS:-soft} PS2_RTC=1792000000
[ "${MOD:-1}" = 1 ] && export PS2_MOD=1 || unset PS2_MOD
card=$S/vs/mc-gallery.ps2 extra=()
case $mode in
vsstart)
  n=${1:?rights}; state=$S/vs/versus-csel-unlocked-f1890.state end=$((FS + 5)) f=1900
  args=(--pad2)
  for _ in $(seq "$n"); do args+=(--press "$f:right:4"); f=$((f + 25)); done
  [ -z "${L3:-}" ] || { args+=(--press "$f:l3:4"); f=$((f + 25)); }  # L3=1 on Reptile's cell: Chameleon
  d=$((f + 30 - 2005)); [ $d -gt 0 ] || d=0  # past Reptile's cell, P2 and the arena wait as long (P2's accept is lost
  FS=$((FS + d)) end=$((FS + 5))             # while P1's plays)
  echo $FS > "$O/fs.frame"
  args+=(--press "$((f + 30)):cross:4" --press $((2095 + d)):p2:cross:4 --press $((2195 + d)):cross:4
         --stick $((3530 + d)):225,46:96 --save-state "$FS:$O/fs.state") ;;
story)
  state=$S/charsel.state end=$((SS + 5)) card=
  args=(--press 2600:right --press 2640:right --press 2680:right --press 2740:l3 --press 2950:cross --press 3100:cross --press 3400:cross --press 3700:cross --press 4000:cross
        --save-state "$SS:$O/fs.state")
  for f in $(seq 4500 240 7140); do args+=(--press "$f:start"); done ;;
move)
  state=${1:?state} f0=${2:?f0} fighter=${3:?fighter} gs=${4:?gstate} n=${5:-150}
  end=$((f0 + n)) args=(--frames-dir "$O/frames" --frame-every 2)
  [ "${PAD2:-1}" = 0 ] || args+=(--pad2)  # a Versus state without pad 2 pauses on "controller removed"
  mkdir -p "$O/frames"
  export PS2_DECOMP=1D6808,1EB378,31AE78,2E9700,2D8040,1CF518,3195F8 PS2_TRACE_FX=$O/fx.txt PS2_DUMP_AUDIO=$O/audio.wav PS2_DUMP_STEMS=$O/stems.wav
  [ "$gs" = 0 ] || export PS2_CALL="$((f0 + 10)):303340:$fighter:$(printf %X "$gs")"
  for p in ${PRESS:-}; do args+=(--press "$p"); done  # f:button[+button]:frames, real inputs instead of a call
  [ -z "${CALL:-}" ] || export PS2_CALL=$CALL       # another debug call, e.g. 7604:1B90B8:0:0 (slot 0's levels)
  export PS2_WATCH="5E6B64,4;5E6B5C,4;5E894E,2;A0020,4" PS2_WATCH_OUT=$O/watch.txt PS2_WATCH_EVERY=1 ;;
*) echo "unknown mode $mode" >&2; exit 2 ;;
esac
if [ -n "$card" ]; then cp -f "$card" "$O/card.ps2" && chmod u+w "$O/card.ps2"; else rm -f "$O/card.ps2"; fi
echo "[chamfx] $(date +%T) $mode MOD=${MOD:-1} state $state end $end PS2_CALL=${PS2_CALL:-} args ${args[*]}" | tee "$O/cmd.txt"
timeout 3600 ${BIN:-build/native-mksm/ps2run} $G/disc/SLUS_210.87 --disc $G/disc.iso --load-state "$state" --frames "$end" \
  --memcard "$O/card.ps2" "${args[@]}" > "$O/run.log" 2>&1
rc=$?
echo "[chamfx] $(date +%T) ps2run rc $rc $(grep -m1 '^\[ee\] halted' "$O/run.log")" | tee -a "$O/cmd.txt"
rm -f "$O/card.ps2"
if [ -d "$O/frames" ]; then
  ~/w/.venv-remaster/bin/python - "$O" <<'PY'
import sys, glob, os
from PIL import Image
for p in sorted(glob.glob(sys.argv[1] + '/frames/*.ppm')):
    Image.open(p).save(p[:-4] + '.png'); os.remove(p)
PY
fi
exit $rc
