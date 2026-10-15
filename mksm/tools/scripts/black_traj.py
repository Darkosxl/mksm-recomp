#!/usr/bin/env python3
# black_traj.py <file.w> [step] [from] [to]   -- print the P1 watch (black_batch.sh layout) every <step> frames
# black_traj.py --runaway <file.w>           -- find the runaway fall (|dy| > 20000 over 100 frames) and the last frame with ground
# Columns: st = +0x1C state frame counter, +0x20 previous state, +0x24 current state; p = 0x5E1660 (pause);
# g = player+0x2CF0 (ground-ray hit count), fl = player+0x2C10 (0x400 = has ground); pos = +0x80; root = +0x1D0
# (ground probe point; y = hit height, or pos.y + 10000 when there is no ground); v = +0xD0 velocity. Y grows downward.
import struct, sys
def fl(x): return struct.unpack('<f', struct.pack('<I', x))[0]
def rows(path):
    for l in open(path):
        p = l.split('|'); yield int(p[0]), [[int(x, 16) for x in q.split()] for q in p[1:]]
def line(f, g):
    return '%d st %X %X %X p%X g%X fl%X pos %s root %s v %s' % (f, *g[0], g[4][0], g[5][0], g[6][0],
        ' '.join('%.0f' % fl(x) for x in g[1]), ' '.join('%.0f' % fl(x) for x in g[2]), ' '.join('%.1f' % fl(x) for x in g[3]))
if sys.argv[1] == '--runaway':
    r = list(rows(sys.argv[2])); ys = [fl(g[1][1]) for _, g in r]
    run = next((i - 100 for i in range(100, len(r)) if abs(ys[i] - ys[i - 100]) > 20000), None)
    if run is None: print('no runaway; last', r[-1][0]); sys.exit()
    k = run + 100
    while k > 0 and r[k][1][5][0] == 0: k -= 1
    print('runaway from', r[run][0], 'last frame with ground', r[k][0])
    for f, g in r[max(0, k - 12):k + 14:2]: print(line(f, g))
else:
    step = int(sys.argv[2]) if len(sys.argv) > 2 else 50
    a = int(sys.argv[3]) if len(sys.argv) > 3 else 0; b = int(sys.argv[4]) if len(sys.argv) > 4 else 10**9
    for f, g in rows(sys.argv[1]):
        if a <= f <= b and f % step == 0: print(line(f, g))
