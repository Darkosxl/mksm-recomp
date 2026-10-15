#!/usr/bin/env python3
# pinewatch.py <out> <seconds> [poke addr=val ...]  -- poll player state over PINE ~20 Hz; pokes applied first
import sys, time, struct
sys.path.insert(0, '/home/darkwarro/Documents/Twitter/PS2_REA/tools/scripts')
from pine import Pine
p = Pine()
out = open(sys.argv[1], 'w'); dur = float(sys.argv[2])
def r32(a): return p.read(4, a)
def fl(x): return struct.unpack('<f', struct.pack('<I', x))[0]
for kv in sys.argv[3:]:
    a, v = kv.split('='); p.write(4, int(a, 16), int(v, 16)); print('poke', a, v)
t0 = time.time()
while time.time() - t0 < dur:
    st = [r32(0x5E6B5C + 4*i) for i in range(3)]
    pos = [fl(r32(0x5E6BC0 + 4*i)) for i in range(3)]
    rt = [fl(r32(0x5E6D10 + 4*i)) for i in range(3)]
    v = [fl(r32(0x5E6C10 + 4*i)) for i in range(3)]
    line = '%.2f fc %d st %X %X %X p%X g%X fl%X map %X pos %s root %s v %s' % (time.time()-t0, r32(0x5E0800), *st, r32(0x5E1660), r32(0x5E9830), r32(0x5E9750), r32(0x5E2FC4),
        ' '.join('%.0f' % x for x in pos), ' '.join('%.0f' % x for x in rt), ' '.join('%.1f' % x for x in v))
    out.write(line + '\n'); out.flush()
    time.sleep(0.05)
