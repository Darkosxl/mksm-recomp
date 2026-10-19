#!/usr/bin/env bash
# Scene gate for decompiled functions: run every reference scene (or the given ones) twice on the current build,
# PS2_DECOMP=off and PS2_DECOMP=all (DECOMP=<hex,hex...> gates a subset), all runs in parallel, and require the same
# emulator state hash on every frame from the state load to the capture frame, and the same captured frame. One line
# per scene; exit status 1 if any scene differs. Renderer PS2_GS=soft by default (CPU boxes); heavy: AWS only.
# usage: decomp/gate.sh <outdir> [scene...]
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
P=$(cd "$here/../.." && pwd)
D=$P/remaster-data
outdir=$1; shift
scenes=${*:-$(awk -F'\t' '!/^#/ {print $1}' "$here/remaster/scenes.tsv")}
on=${DECOMP:-all}
export PS2_GS=${PS2_GS:-soft}
for s in $scenes; do
  IFS=$'\t' read -r _ state frame args < <(awk -F'\t' -v s="$s" '$1 == s' "$here/remaster/scenes.tsv")
  args=${args//@story/$(tr '\n' ' ' < "$here/mksm/inputs/story.args")}
  args=${args//@koop/$(tr '\n' ' ' < "$here/mksm/inputs/koop.args")}
  for mode in off on; do
    out=$outdir/$mode/$s; rm -rf "$out"; mkdir -p "$out"
    [ $mode = off ] && dec=off || dec=$on
    # shellcheck disable=SC2086
    PS2_DECOMP=$dec PS2_LOCK=$out/.lock PS2_HASH_LOG=$out/hash.log PS2_TIME=$((frame - 120)),120 \
      "$here/remaster/run.sh" "$out" $((frame + 2)) "$D/states/$state" --frames-dir "$out" --frame-every "$frame" $args > /dev/null &
  done
done
wait
python3 -I - "$outdir" "$on" "$here/remaster/scenes.tsv" $scenes <<'PY'
import hashlib, sys
outdir, on, tsv, scenes = sys.argv[1], sys.argv[2], sys.argv[3], sys.argv[4:]
frame_of = {l.split('\t')[0]: int(l.split('\t')[2]) for l in open(tsv) if not l.startswith('#') and l.strip()}
bad = 0
for s in scenes:
    logs, imgs = [], []
    for mode in ('off', 'on'):
        d = f'{outdir}/{mode}/{s}'
        try:
            logs.append({int(f[0]): f[1] for f in (l.split() for l in open(f'{d}/hash.log')) if len(f) >= 2})
            imgs.append(hashlib.sha256(open(f'{d}/frame_{frame_of[s]:05d}.ppm', 'rb').read()).hexdigest())
        except OSError as e:
            logs.append({}); imgs.append(f'missing: {e}')
    off, dec = logs
    frames = sorted(set(off) & set(dec))
    first = next((f for f in frames if off[f] != dec[f]), None)
    img = imgs[0] == imgs[1] and not imgs[0].startswith('missing')
    ok = first is None and img and len(off) == len(dec) and bool(frames) and frame_of[s] in frames
    bad += not ok
    span = f'{frames[0]}-{frames[-1]}' if frames else '-'
    print(f"{s:8} frames {span} ({len(frames)} hashed): state {'same' if first is None else f'DIFFERENT from frame {first}'}"
          f"  frame {'same' if img else 'DIFFERENT'}")
print(f'PS2_DECOMP={on} vs off:', 'PASS' if not bad else f'FAIL: {bad} scene(s) differ')
sys.exit(1 if bad else 0)
PY
