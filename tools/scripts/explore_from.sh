#!/usr/bin/env bash
# Coverage loop from a savestate: run -> merge misses into entries.txt -> retranslate -> rebuild, until no new misses.
# usage: explore_from.sh <state|-> <args-file> <frames> [rounds=6] [tag]
#   state '-' boots from power-on. Logs go to $P/logs/explore-<tag>-r<N>.log, one metrics.csv row per round.
set -euo pipefail
P=/home/darkwarro/Documents/Twitter/PS2_REA
R=$P/ps2-web-recomp
G=$R/games/mksm
state=$1; args=$2; frames=$3; rounds=${4:-6}; tag=${5:-$(basename "$args" .args)}
elf=$G/disc/SLUS_210.87
load=(); [ "$state" = - ] || load=(--load-state "$state")

for ((r = 1; r <= rounds; r++)); do
  log=$P/logs/explore-$tag-r$r.log
  misses=$G/misses-$tag.txt
  cp -f "$G/dev.ps2" "$G/explore-$tag.ps2" 2>/dev/null || true
  rm -f "$misses"
  SDL_AUDIODRIVER=dummy __NV_PRIME_RENDER_OFFLOAD=1 __VK_LAYER_NV_optimus=NVIDIA_only PS2_VU_RECORD=$G/vu1 timeout $((frames / 20 + 300)) "$R/build/native-mksm/ps2run" "$elf" \
    --disc "$G/disc.iso" "${load[@]}" --frames "$frames" --misses "$misses" --memcard "$G/explore-$tag.ps2" \
    $(cat "$args") > "$log" 2>&1 || echo "round $r: ps2run exit $?"
  reason=$(sed -n 's/^\[ee\] halted: //p' "$log" | head -1)
  # only real code addresses inside .text count as coverage misses (0xCDCD... etc. are emulation bugs, not misses)
  new=$(python3 -I - "$G/entries.txt" "$misses" <<'EOF'
import os, sys
entries, misses = sys.argv[1], sys.argv[2]
known = {int(t, 16) for t in open(entries).read().split()}
found = [int(t.rpartition(':')[2], 16) for t in open(misses).read().split()] if os.path.exists(misses) else []
new = sorted({a for a in found if 0x100000 <= a < 0x49a708 and a % 4 == 0 and a not in known})
with open(entries, 'a') as out:
    out.writelines('%x\n' % a for a in new)
print(len(new))
EOF
)
  echo "$(date -Is),explore-$tag,$r,$(wc -l < "$G/entries.txt"),$new,${reason:-ran to the end},,," >> "$P/notes/metrics.csv"
  echo "round $r: ${reason:-ran to the end}; $new new entries; vu1 programs: $(ls "$G/vu1" | wc -l)"
  [ "$new" -gt 0 ] || break
  "$R/build/tools/eerecomp" "$elf" --entries "$G/entries.txt" --out "$R/generated/mksm" | tail -1
  ninja -j"${PS2_JOBS:-8}" -C "$R/build/native-mksm" ps2run > "$P/logs/explore-$tag-build-r$r.log" 2>&1 \
    || { tail -20 "$P/logs/explore-$tag-build-r$r.log"; exit 1; }
done
