#!/usr/bin/env bash
# vsaudit.sh: damage audit of the Versus combo ports (mksm/tools/scripts/vsaudit.py). AWS box only, from ~/w/wt/<tree>.
#   remaster/vsaudit.sh <out> <jobs.txt> <mod ps2run> <base ps2run>
# jobs.txt = `vsaudit.py jobs`. Per build (mod: the ports in, base: the same game without them) and fighter: a
# fight-start state (vsrun.sh start, MOD=1), then every string at each gap in $GAPS (vsrun.sh combo, N=300), $P at a
# time. Output: <out>/<build>/fs-<fighter>/, <out>/<build>/<fighter>/<name>-g<gap>/ (vsrun.sh files), <out>/progress.
# Then on the laptop: vsaudit.py report <pulled out>.
set -uo pipefail
O=${1:?out} J=${2:?jobs} MODBIN=${3:?mod ps2run} BASEBIN=${4:?base ps2run}
GAPS=${GAPS:-8 12 16 20 26} P=${P:-14}
# cursors on the character select (vsrun.sh PICK, P2PICK), ring from Liu Kang to the right: Scorpion, Cage, Reptile,
# Baraka, Kitana, Sub-Zero, Kung Lao. P2 stays on Kung Lao except in the mirror match (fighter reptilemirror).
declare -A PICK=([reptile]="right right right" [baraka]="right right right right" [kitana]="left left left"
                 [cage]="right right" [reptilemirror]="right right right")
declare -A P2PICK=([reptilemirror]="right right right right")
export MOD=1 EVERY=0
mkdir -p "$O"
run() {   # one command line per stdin line, $P at a time, a progress line per finished one
  local n; n=$(wc -l < "$1")
  xargs -P "$P" -d '\n' -I{} bash -c '{} > /dev/null 2>&1; echo "rc $? {}"' < "$1" |
    awk -v n="$n" '{ print NR "/" n, $0; fflush() }' >> "$O/progress"
}
fighters=$(awk '{print $1}' "$J" | sort -u)
: > "$O/fs.cmds"; : > "$O/combo.cmds"
for b in mod base; do
  bin=$MODBIN; [ $b = base ] && bin=$BASEBIN
  for f in $fighters; do
    printf 'BIN=%q FIGHTER=%q PICK=%q P2PICK=%q remaster/vsrun.sh start %q\n' "$bin" "$f" "${PICK[$f]}" "${P2PICK[$f]:-}" \
      "$O/$b/fs-$f" >> "$O/fs.cmds"
  done
  while read -r f name btns; do
    for g in $GAPS; do
      printf 'BIN=%q START=%q remaster/vsrun.sh combo %q %s %s\n' "$bin" "$O/$b/fs-$f/fight-start-$f.state" \
        "$O/$b/$f/$name-g$g" "$g" "$btns" >> "$O/combo.cmds"
    done
  done < "$J"
done
echo "fight starts $(date +%T)" >> "$O/progress"; run "$O/fs.cmds"
echo "combos $(date +%T)" >> "$O/progress"; run "$O/combo.cmds"
echo "done $(date +%T)" >> "$O/progress"
