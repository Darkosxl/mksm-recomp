#!/usr/bin/env bash
# R4 of decomp/notes/native-renderer.md §7, coverage census: runs the game over the reference scenes plus boot to the
# menus, the story from boot, the movie, pause, co-op and every warped level with PS2_CENSUS=1 PS2_NO_VU_THREAD=1 (VU1
# on the emulation thread, so path-1 SIGNAL/FINISH are scanned too) and PS2_TRACE_MC=1 (memory-card writes), all in
# parallel, then tabulates the [census] lines and the VIF1 command counts. Renderer PS2_GS=soft. Heavy: AWS only.
# usage: remaster/census.sh <outdir> [segment...]   (env: LONG=frames for the boot-to-story run, default 14600)
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
outdir=$1; shift
story=$(tr '\n' ' ' < "$here/mksm/inputs/story.args")
koop=$(tr '\n' ' ' < "$here/mksm/inputs/koop.args")
# name  state  frames  inputs
segments="boot - 2300 story
story - ${LONG:-14600} story
koopboot - 6900 koop
menu menu.state 4000 story
charsel charsel.state 4000 story
fmv fmv.state 6100 story
raiden raiden.state 7700 story
goro g7600.state 10600 story
pause g7600.state 8600 pause
koop koop.state 8800 koop
academy academy.state 12000 -
forest forest.state 13000 -
nether nether.state 13400 -
kahn kahn.state 12200 -
foundry foundry.state 16200 -"
export PS2_GS=${PS2_GS:-soft} PS2_CENSUS=1 PS2_NO_VU_THREAD=1 PS2_TRACE_MC=1
while read -r name state frames inputs; do
  [ $# -eq 0 ] || [[ " $* " == *" $name "* ]] || continue
  case $inputs in story) args=$story ;; koop) args=$koop ;; pause) args="$story --press 7700:start" ;; *) args= ;; esac
  st=-; [ "$state" = - ] || st=$D/states/$state
  out=$outdir/$name; rm -rf "$out"; mkdir -p "$out"
  # shellcheck disable=SC2086
  PS2_LOCK=$out/.lock "$here/remaster/run.sh" "$out" "$frames" "$st" $args > /dev/null &
done <<< "$segments"
wait
python3 -I - "$outdir" <<'PY'
import os, re, sys
out = sys.argv[1]
rows, names = {}, []
for seg in sorted(os.listdir(out)):
    log = os.path.join(out, seg, 'run.log')
    if not os.path.exists(log):
        continue
    c, mc, vif, halt = {}, 0, '', ''
    for line in open(log, errors='replace'):
        m = re.match(r'\[census\] (\S+) count=(\d+)(.*)', line)
        if m:
            c[m.group(1)] = (int(m.group(2)), m.group(3).strip())
            if m.group(1) not in names:
                names.append(m.group(1))
        elif line.startswith('[mc] cmd 42'):
            mc += 1
        elif line.startswith('[vif1]'):
            vif = line.strip()
        elif line.startswith('[ee] halted') or line.startswith('[ee] stopped'):
            halt = line.strip()
    rows[seg] = (c, mc, vif, halt)
print('segment   ' + ' '.join(f'{n[:14]:>14}' for n in names) + '  mc_writes')
for seg, (c, mc, vif, halt) in rows.items():
    print(f'{seg:9} ' + ' '.join(f'{c.get(n, ("-",))[0]:>14}' for n in names) + f'  {mc:>9}')
print()
for seg, (c, mc, vif, halt) in rows.items():
    print(f'{seg}: {halt}')
    print(f'  {vif}')
    for n, (v, detail) in c.items():
        if v and detail:
            print(f'  {n}: {v} {detail}')
PY
