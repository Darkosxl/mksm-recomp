#!/usr/bin/env bash
# pcsx2_newgame.sh  -- from oracle state slot 1 (autosave notice screen) to Single Player / Liu Kang / Normal gameplay on map 0x60.
# Start PCSX2 first:  systemd-run --user --scope -p MemoryMax=3G -p MemorySwapMax=0 -- tools/scripts/pcsx2_headless.sh -state 1 &
# Needs xkey built next to this script (gcc -O1 -o xkey xkey.c -lX11 -lXtst). Screenshot: DISPLAY=:77 import -window root shot.png
T=$(cd "$(dirname "$0")" && pwd); X=${XKEY:-$T/xkey}; export DISPLAY=:77
sleep 15; $X move 400 300; $X click 1
for k in k k k Return k k k k; do sleep 4; $X key $k 150; done   # notice, no save, unformatted, title, brightness, single player, Liu Kang, Normal
for i in $(seq 1 30); do                                        # skip the intro FMV until the gameplay frame counter 0x5E0800 runs
  $X key Return 120; sleep 1; $X key k 120; sleep 3
  fc=$(python3 $T/pine.py read32 0x5E0800 | awk '{print $2}'); echo "fc=$fc"; [ "$fc" != "0x00000000" ] && break
done
echo "opening in-engine cutscene runs ~6000 frames (~100 s); wait until pinewatch shows state C2 outside BA4 before warping"
