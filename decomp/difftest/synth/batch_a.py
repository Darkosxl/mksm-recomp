"""Batch A (zero machine): the functions that the boot/charsel/koop and scene recordings reach rarely or never
(ArchiveGetFile's packed entries, MatrixTranslate, MemCardStateSetFlag, SetCharRenderFlag). Every Cpu word random
(GPR upper halves, VU0 registers and flags, COP0), half the time with every VU0 vf an EE edge-case float; a random
128 KB RAM region at 0x100000 (plain words, or half the time edge-case floats) that the arguments point into,
including aliasing outputs. (Ported from batch_a.cpp: on w2 4 x 48 contexts passed, ArchiveGetFile 20 packed and
28 plain.)"""
import struct

from synth import A0, A1, A2, A3, CPU_SIZE, OFF_VU0, RA, SP, gen

BASE, SIZE = 0x00100000, 0x20000


def fl(rng):
    """EE edge-case float bits: zeros, denormals, exponent 254-255, the largest magnitude, ordinary values"""
    sign = rng.getrandbits(1) << 31
    k = rng.randrange(8)
    if k == 0:
        return 0
    if k == 1:
        return 0x80000000
    if k == 2:
        return sign | rng.getrandbits(23)
    if k == 3:
        return 0x7F000000 | rng.getrandbits(24)
    if k == 4:
        return sign | 0x7FFFFFFF
    return sign | 0x3A000000 + rng.randrange(0xA000000)


def machine(c, rng):
    c.write(BASE, rng.randbytes(SIZE))
    if rng.randrange(2):
        c.words(BASE, [fl(rng) for _ in range(SIZE // 4)])
    c.cpu[:] = rng.randbytes(CPU_SIZE)
    if rng.randrange(2):
        c.cpu[OFF_VU0:OFF_VU0 + 512] = struct.pack('<128I', *[fl(rng) for _ in range(128)])
    c.cpu[OFF_VU0:OFF_VU0 + 16] = struct.pack('<4I', 0, 0, 0, 0x3F800000)
    c.set_reg(0, 0)
    c.set_low(RA, 0x00100008)  # a return address inside main RAM


def ptr(rng, align, room=0x200):
    """an address in the random region: aligned to `align`, one time in 8 only to 4"""
    p = BASE + rng.randrange(SIZE - room - 0x40)
    return p & ~(align - 1) if rng.randrange(8) else p & ~3


def setp(c, rng, r, a):
    """a pointer in the low word; the word above it zero half the time, random otherwise"""
    c.set_low(r, a, 32 if rng.randrange(2) else 64)


@gen(0x002124C0)
def archive_get_file(c, rng):  # file a1 of archive a0 into *a2 (address), *a3 (size); entries plain or packed (bit 63)
    machine(c, rng)
    arc = BASE + (rng.randrange(SIZE - 0x3000) & ~15)
    c.set_low(A0, (rng.getrandbits(32) << 32 if rng.randrange(2) else 0) | arc)
    w8 = 1 if rng.randrange(2) else rng.getrandbits(32) if rng.randrange(3) else 0
    c.w32(arc + 8, w8)
    directory = arc + (2048 if w8 == 1 else 32)
    if not rng.randrange(3):
        c.write(directory, bytes(8))
    entries = directory if c.r64(directory) else arc + 2048
    idx = rng.randrange(256)
    c.set_low(A1, idx, 32)
    e = rng.getrandbits(63) | (rng.getrandbits(1) << 63)
    c.w64(entries + 8 * idx, e)
    sp = BASE + 0x40 + (rng.randrange(SIZE - 0x80) & ~15)
    setp(c, rng, SP, sp)
    a2, a3 = ptr(rng, 4), ptr(rng, 4)
    k = rng.randrange(6)
    if k == 0:
        a3 = a2  # both outputs the same word
    elif k == 1:
        a2 = sp - 16 + 4 * rng.randrange(4)  # an output in the caller's frame just below sp
    elif k == 2:
        a3 = sp - 16 + 4 * rng.randrange(4)
    setp(c, rng, A2, a2)
    setp(c, rng, A3, a3)


@gen(0x00214658)
def matrix_translate(c, rng):  # m0 (a0) = m1 (a1) moved by v (a2); m1 sometimes m0 or overlapping it
    machine(c, rng)
    a0 = ptr(rng, 16)
    a1 = ptr(rng, 16) if rng.randrange(6) else a0 + 16 * (rng.randrange(5) - 2)
    if not rng.randrange(8):
        a1 = a0
    setp(c, rng, A0, a0)
    setp(c, rng, A1, a1)
    setp(c, rng, A2, ptr(rng, 16))


@gen(0x0021F618)
def memcard_state_set_flag(c, rng):  # card a0's word +8 = 1
    machine(c, rng)
    setp(c, rng, A0, ptr(rng, 4))


@gen(0x00225FC0)
def set_char_render_flag(c, rng):  # global 0x4F4C58 = a0: registers only
    machine(c, rng)
