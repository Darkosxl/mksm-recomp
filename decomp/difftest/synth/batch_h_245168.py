#!/usr/bin/env python3
"""Synthetic contexts for fn_245168 (UpdateBoneMatrices) from its recorded ones: the branches the scenes never take.

Each variant starts from a recorded 00245168 context (a real model with its bones) and changes the arguments or the
model so the function goes through: skip_skin (a1), skip_writeback (a2), a bone without parent (own world matrix), a
bone whose parent comes later in the array (second pass, 'parent not done'), the palette allocation, the pre-update
call. Upper register halves stay as recorded except where noted.

  decomp/difftest/synth/batch_h_245168.py <out dir> <base.ctx>...   (bases: recorded 00245168 contexts, one per scene)
"""
import os
import random
import struct
import sys

HEADER = struct.Struct("<8sIIQIIII")
A0, A1, A2 = 4, 5, 6
BONE = 0x1C0


class Ctx:
    def __init__(self, path):
        self.data = bytearray(open(path, "rb").read())
        h = HEADER.unpack_from(self.data)
        assert h[0] == b"PS2DIFF1"
        self.cpu = HEADER.size
        self.ram = self.cpu + h[4]
        self.ram_size = h[5]

    def gpr64(self, r, v=None):
        o = self.cpu + 16 * r
        if v is None:
            return struct.unpack_from("<Q", self.data, o)[0]
        struct.pack_into("<Q", self.data, o, v & (2**64 - 1))

    def rd(self, a, fmt):
        return struct.unpack_from("<" + fmt, self.data, self.ram + a)[0]

    def wr(self, a, fmt, v):
        struct.pack_into("<" + fmt, self.data, self.ram + a, v)

    def index(self, i):
        magic, addr, _, frame, *sizes = HEADER.unpack_from(self.data)
        HEADER.pack_into(self.data, 0, magic, addr, i, frame, *sizes)

    def save(self, path):
        open(path, "wb").write(self.data)


def ancestors(c, bones, count, node, k):
    """indices on bone k's parent chain (stops at the node, 0, a mode -1 bone or a loop)"""
    seen, j = [], k
    while True:
        p = c.rd(bones + BONE * j + 0x40, "I")
        if p == 0 or p == node or c.rd(bones + BONE * j + 0x150, "b") == -1:
            return seen
        j = (p - bones) // BONE
        if not 0 <= j < count or j in seen:
            return seen
        seen.append(j)


def main():
    out, bases = sys.argv[1], sys.argv[2:]
    os.makedirs(out, exist_ok=True)
    rng = random.Random(245168)
    n = 0
    for base in bases:
        for variant in ("skip_skin", "skip_writeback", "skip_both", "root", "second_pass", "alloc", "pre_update"):
            c = Ctx(base)
            m = c.gpr64(A0) & 0xFFFFFFFF
            bones, count, node = c.rd(m + 0x18, "I"), c.rd(m + 0x30, "I"), m + 0x50
            if variant in ("skip_skin", "skip_both"):  # any nonzero 64-bit value, sometimes only in bits 32-63
                c.gpr64(A1, rng.choice([1, 0x80000000, 1 << 32, rng.getrandbits(64) | 1]))
            if variant in ("skip_writeback", "skip_both"):
                c.gpr64(A2, rng.choice([1, 0xFFFFFFFFFFFFFFFF, 1 << 40]))
            if variant == "root" and count:
                for k in rng.sample(range(count), min(3, count)):
                    c.wr(bones + BONE * k + 0x40, "I", 0)
            if variant == "second_pass" and count > 2:
                # bone k's parent becomes a later bone j that does not depend on k: k waits for a second pass
                for _ in range(50):
                    k = rng.randrange(count - 1)
                    j = rng.randrange(k + 1, count)
                    if k not in ancestors(c, bones, count, node, j) and c.rd(bones + BONE * k + 0x150, "b") != -1:
                        c.wr(bones + BONE * k + 0x40, "I", bones + BONE * j)
                        break
            if variant == "alloc":
                c.wr(0x006660A4, "I", 0)
                c.gpr64(A1, rng.choice([0, 1]))
            if variant == "pre_update":
                c.wr(m + 0xDC8, "I", rng.choice([1, 0x12345678]))
                c.wr(0x004F50E0, "I", 0)  # fn_2457d0 must not call back into fn_245168 (it would recurse)
                if rng.random() < 0.5:
                    c.wr(0x004F50DC, "I", 0)
            c.index(n)
            c.save(os.path.join(out, f"00245168_{n:04d}.ctx"))
            n += 1
    print(f"{n} contexts in {out}")


main()
