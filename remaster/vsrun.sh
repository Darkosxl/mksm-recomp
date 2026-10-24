#!/usr/bin/env bash
# vsrun.sh: headless Versus driver for the combo mods. AWS box only (from ~/w/wt/<tree>, normally via remaster/w.sh run).
#   remaster/vsrun.sh start <out>                 char-select state (f1890) -> P1 Reptile, P2 Kung Lao, The Rooftops,
#                                                 "FIGHT!", P1 runs up to P2 (bodies touching) and stands; saves
#                                                 <out>/fight-start-$FIGHTER[-nomod].state at f$FS (P1 idle 2299, P2 idle)
#                                                 PICK: P1's cursor moves from Liu Kang (default "right right right" =
#                                                 Reptile), one every 25 frames from f1900; P2PICK: P2's from Kung Lao
#                                                 (default none), from f2040; FIGHTER names the state
#   remaster/vsrun.sh combo <out> <gap> <btn>...  from $START, P1 presses each <btn> for $LEN frames, one every <gap> frames
#                                                 from f$((FS+10)); runs $N frames. btn: square triangle circle cross ...,
#                                                 b1+b2 (e.g. right+square), or - (an empty slot)
#   remaster/vsrun.sh raw <out> <state> <end> [ps2run args...]
# Output in <out>: run.log, watch.txt (one line per frame), summary.txt (P1 state sequence, P2 damage), frames/*.png.
# watch.txt columns ("|"-separated hex words): frame | P1 group (low 16 bits; Reptile 0x54) | P1 state (+0x24) |
#   P1 frame in state (+0x1C) | P1 x y z (+0x80, float) | P1 hp hp2 max (*(+0x210)+0x398, int) | P2 group | P2 state |
#   P2 frame in state | P2 x y z | P2 hp hp2 max | P1 move id (+0x1E14). P1 slot 0x5E6B40, P2 slot 0x5E9F00.
# Env: MOD=1 runs with PS2_MOD=1. The Versus upgrades are applied at round start, so a combo run should load a
#      fight-start state saved with the same MOD: fight-start-reptile.state (MOD=1), fight-start-reptile-nomod.state (MOD=0).
#      EVERY = frame-dump step (default 10, 0 = none), N = combo frames (300), LEN = press length (4),
#      START = fight-start state, BIN = ps2run.
set -uo pipefail
mode=${1:?usage: vsrun.sh start|combo|raw <out> ...}; O=${2:?out}; shift 2
G=~/w/games/mksm
S=~/w/remaster-data/states/vs
FS=3720   # frame the fight-start state is saved at (start mode); combo inputs are relative to it
[ "${MOD:-0}" = 1 ] && tag= || tag=-nomod
FIGHTER=${FIGHTER:-reptile} PICK=${PICK:-right right right} P2PICK=${P2PICK:-}
START=${START:-$S/fight-start-$FIGHTER$tag.state}
EVERY=${EVERY:-10} N=${N:-300} LEN=${LEN:-4}
mkdir -p "$O/frames"
export SDL_AUDIODRIVER=dummy PS2_GS=${PS2_GS:-soft} PS2_RTC=1792000000
[ "${MOD:-0}" = 1 ] && export PS2_MOD=1 || unset PS2_MOD
export PS2_WATCH="5E894E,2;5E6B64,4;5E6B5C,4;5E6BC0,C;*5E6D50+398,C;5EBD0E,2;5E9F24,4;5E9F1C,4;5E9F80,C;*5EA110+398,C;5E8954,4"
export PS2_WATCH_OUT=$O/watch.txt PS2_WATCH_EVERY=1
args=()
case $mode in
start)
  # P1 cursor starts on Liu Kang: Right x3 = Reptile, accept; P2 accepts its cursor (Kung Lao); P1 accepts the arena.
  # P1 takes input from f3543. The camera looks across the arena, so "towards P2" (+x) is stick 225,46 (up-right):
  # held 3530..3625, P1 runs (2300, 2302), stops (2303) touching P2 (dx ~ 500) and stands (2299) from f3692.
  state=$S/versus-csel-unlocked-f1890.state end=$((FS + 5))
  args=(--pad2) f=1900
  for b in $PICK; do args+=(--press "$f:$b:4"); f=$((f + 25)); done
  f=2040; for b in $P2PICK; do args+=(--press "$f:p2:$b:4"); f=$((f + 12)); done
  args+=(--press 2005:cross:4 --press 2095:p2:cross:4 --press 2195:cross:4 --stick 3530:225,46:96
         --save-state "$FS:$O/fight-start-$FIGHTER$tag.state") ;;
combo)
  gap=${1:?gap}; shift
  state=$START end=$((FS + N)) f=$((FS + 10))
  args=(--pad2)
  for b in "$@"; do [ "$b" = - ] || args+=(--press "$f:$b:$LEN"); f=$((f + gap)); done ;;
raw)
  state=${1:?state} end=${2:?end}; shift 2; args=("$@") ;;
*) echo "unknown mode $mode" >&2; exit 2 ;;
esac
cp -f "$S/mc-gallery.ps2" "$O/card.ps2" && chmod u+w "$O/card.ps2"
echo "[vs] $(date +%T) mode $mode MOD=${MOD:-0} state $state end $end args ${args[*]}" | tee "$O/cmd.txt"
timeout 3600 ${BIN:-build/native-mksm/ps2run} $G/disc/SLUS_210.87 --disc $G/disc.iso --load-state "$state" --frames "$end" \
  --memcard "$O/card.ps2" --frames-dir "$O/frames" --frame-every "$EVERY" "${args[@]}" > "$O/run.log" 2>&1
rc=$?
echo "[vs] ps2run rc $rc at $(date +%T)" | tee -a "$O/cmd.txt"
rm -f "$O/card.ps2"
~/w/.venv-remaster/bin/python - "$O" "$FS" <<'PY'
import sys, glob, os, struct
from PIL import Image
O, FS = sys.argv[1], int(sys.argv[2])
for p in sorted(glob.glob(O + '/frames/*.ppm')):
    Image.open(p).save(p[:-4] + '.png', compress_level=1); os.remove(p)  # scratch frames: fast zlib
fl = lambda h: struct.unpack('<f', struct.pack('<I', int(h, 16)))[0]
rows = []
for line in open(O + '/watch.txt'):
    c = [x.split() for x in line.split('|')]
    if len(c) < 12: continue
    rows.append(dict(f=int(c[0][0]), g=int(c[1][0], 16) & 0xFFFF, s=int(c[2][0], 16), x=fl(c[4][0]), hp=int(c[5][0], 16),
                     g2=int(c[6][0], 16) & 0xFFFF, s2=int(c[7][0], 16), x2=fl(c[9][0]), hp2=int(c[10][0], 16), mv=int(c[11][0], 16)))
rows = [r for r in rows if r['f'] >= FS] or rows
out = open(O + '/summary.txt', 'w')
def say(*a): print(*a); print(*a, file=out)
if rows:
    a, z = rows[0], rows[-1]
    say(f"frames {a['f']}..{z['f']}  P1 group {a['g']:#x} P2 group {a['g2']:#x}  dx {a['x2'] - a['x']:.1f}..{z['x2'] - z['x']:.1f}")
    seq, prev = [], None
    for r in rows:
        if r['s'] != prev: seq.append([r['f'], r['s'], 1]); prev = r['s']
        else: seq[-1][2] += 1
    say('P1 states: ' + ' '.join(f"{s}@{f}x{n}" for f, s, n in seq))
    hits = [(r['f'], p['hp2'] - r['hp2']) for p, r in zip(rows, rows[1:]) if r['hp2'] < p['hp2']]
    say(f"P2 hp {a['hp2']} -> {z['hp2']} (damage {a['hp2'] - z['hp2']}, {len(hits)} hits: " + ' '.join(f'f{f}:-{d}' for f, d in hits) + ')')
    say(f"P1 hp {a['hp']} -> {z['hp']}")
PY
exit $rc
