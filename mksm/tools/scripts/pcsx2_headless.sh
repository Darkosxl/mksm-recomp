#!/usr/bin/env bash
# pcsx2_headless.sh [pcsx2-qt args, e.g. -state 1]  -- PCSX2 oracle on a private Xvfb display (:77), software GS, audio off.
# Nothing appears on the desktop and nothing is played. Makes a private config copy in $CFG on first use (Renderer = 13
# software, SPU2 Backend = Null + muted, memcards and snapshots in $CFG; savestates still go to $P/oracle/states).
# Drive it with xkey (xkey.c, XTest) using the oracle Pad1 keyboard binds: K=cross L=circle I=triangle J=square
# Return=start BackSpace=select Q/E=L1/R1 1/3=L2/R2 arrows=d-pad.  Memory: PINE (pine.py, pinewatch.py).
P=/home/darkwarro/Documents/Twitter/PS2_REA
CFG=${CFG:-$P/logs/black/pcsx2-cfg}
if [ ! -f "$CFG/data/PCSX2/inis/PCSX2.ini" ]; then
  mkdir -p "$CFG"; cp -a "$P/oracle/pcsx2-data" "$CFG/data"; cp -a "$P/oracle/memcards" "$CFG/memcards"; mkdir -p "$CFG/snaps"
  INI=$CFG/data/PCSX2/inis/PCSX2.ini
  sed -i 's/^Renderer = .*/Renderer = 13/' "$INI"
  sed -i "s#^MemoryCards = .*#MemoryCards = $CFG/memcards#; s#^Snapshots = .*#Snapshots = $CFG/snaps#" "$INI"
  sed -i '/^\[SPU2\/Output\]/,/^\[/{s/^OutputMuted = .*/OutputMuted = true/;s/^Backend = .*/Backend = Null/}' "$INI"
fi
Xvfb :77 -screen 0 800x600x24 -nolisten tcp > "$CFG/xvfb.log" 2>&1 &
XP=$!
sleep 1
export DISPLAY=:77 QT_QPA_PLATFORM=xcb SDL_AUDIODRIVER=dummy
timeout -k 15 "${PCSX2_TIMEOUT:-1500}" pcsx2-qt -datapath "$CFG/data" -nogui -fastboot -earlyconsolelog -logfile "$CFG/pcsx2.log" "$@" -- "$P/iso/mksm.iso"
kill $XP
