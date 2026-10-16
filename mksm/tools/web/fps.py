import re, sys
# usage: fps.py stats.log [from_frame] [to_frame] [bucket]
path = sys.argv[1]; lo = int(sys.argv[2]) if len(sys.argv) > 2 else 0; hi = int(sys.argv[3]) if len(sys.argv) > 3 else 10**9
bucket = int(sys.argv[4]) if len(sys.argv) > 4 else 1000
rows = []
for line in open(path):
    m = re.search(r'frame=(\d+) frame \d+\s+([\d.]+) fps \((\d+) on screen\)\s+GPU (\d+)%\s+idle emu (\d+)% vu (\d+)% gs (\d+)%\s+heap (\d+) MB\s+audio (\d+) ms(.*?)\|', line)
    if m:
        f = int(m.group(1))
        if lo <= f <= hi:
            rows.append((f, float(m.group(2)), int(m.group(3)), int(m.group(4)), int(m.group(5)), int(m.group(6)), int(m.group(7)), int(m.group(8)), m.group(10).strip()))
if not rows: print('no rows'); sys.exit()
groups = {}
for r in rows: groups.setdefault(r[0] // bucket, []).append(r)
print('frames        n  fps(min/avg)  screen(min)  gpu%  emu_idle%  vu_idle%  gs_idle%  heapMB  extra')
for k in sorted(groups):
    g = groups[k]
    print('%5d-%-5d %3d  %5.1f/%5.1f   %5d        %4.0f  %6.0f     %6.0f    %6.0f    %5d  %s' % (k*bucket, k*bucket+bucket-1, len(g), min(r[1] for r in g), sum(r[1] for r in g)/len(g), min(r[2] for r in g),
        sum(r[3] for r in g)/len(g), sum(r[4] for r in g)/len(g), sum(r[5] for r in g)/len(g), sum(r[6] for r in g)/len(g), max(r[7] for r in g), ';'.join(sorted(set(r[8] for r in g if r[8])))[:60]))
allf = [r[1] for r in rows]
print('overall n=%d min %.1f avg %.1f; samples < 58 fps: %d' % (len(allf), min(allf), sum(allf)/len(allf), sum(1 for x in allf if x < 58)))
