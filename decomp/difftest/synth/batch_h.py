"""Batch H: the character renderer, on recorded calls (seed generators).

fn_246918 and fn_246258 (no scene calls them), fn_246120's queue mode (mode 2), and the modes and render settings of
fn_244368 the scenes do not use (flat, one pass, no light rig, antialiasing, fog) start from a recorded call of
fn_244368 (the 3-pass fighter constants): a real machine in the middle of building the frame's VIF1 chain with a real
character instance in a0. fn_246918, fn_246258 and their callees read the same instance fields, the chain globals at
0x65e300, the TextureManager and the light and projector globals. Every GPR but zero/sp/ra and HI/LO get random 128
bits, and the arguments and the globals the function branches on are varied.

fn_245168 (UpdateBoneMatrices) starts from its own recorded calls (a real model with its bones) and changes the
arguments or the model so it goes through the branches the scenes never take: skip_skin (a1), skip_writeback (a2), a
bone without parent (own world matrix), a bone whose parent comes later in the array (second pass, 'parent not
done'), the palette allocation, the pre-update call. Upper register halves stay as recorded except where noted.
"""
from synth import A0, A1, A2, A3, RAM_SIZE, SP, T0, gen, real, scramble

real(0x00246120)  # its recorded calls (texture mode 1) replay as real contexts

CHAIN = 0x0065E300           # write pointer, start, open DMA tag, open VIFcode, unpack unit, open GIF tag
RENDER = 0x004F4B40          # render state block
SEND_PROJECTIONS = RENDER + 0x108
TEXTURE_MODE = 0x004F4C4C    # 1: upload at once, 2: queue
RENDER_BUFFER = 0x004F4D68
LAST_TEXTURE = 0x006618EC
QUEUE_COUNTS = 0x006633C8
FLOAT_ZERO, FLOAT_HUGE = 0x00000000, 0x4E6E6B28  # 0.0, 1e9


def chain_alignment(c, rng):
    """move the chain pointer by 0-3 words, so every NOP padding length is taken"""
    c.w32(CHAIN, c.rd(CHAIN) + 4 * rng.randrange(4))


@gen(0x00246918, seed=0x00244368, count=40)
def instance_constants(c, rng):  # fn_246918(inst)
    inst = c.low(A0, 32)
    scramble(c, rng, ())
    c.set_arg(A0, inst)
    c.w32(SEND_PROJECTIONS, rng.choice([0, 1, 1, rng.getrandbits(32)]))
    if rng.random() < 0.5:
        c.w32(inst + 0x1018, rng.choice([2, 0, 1, 3]))
    chain_alignment(c, rng)


@gen(0x00246258, seed=0x00244368, count=40)
def segment_constants(c, rng):  # fn_246258(inst, bone, &bone_index, flags) as fn_23a280 calls it
    sp, inst = c.low(SP, 32), c.low(A0, 32)
    scramble(c, rng, ())
    c.set_arg(A0, inst)
    # the segment record's first word is its bone index (real records sit in the scratchpad); a word in the free stack
    # below the frames stands in for it, a1 is that bone's record as fn_23a280 computes it
    bones, count = c.rd(inst + 0x18), c.rd(inst + 0x30)
    index = rng.randrange(count) if 0 < count <= 120 else 0
    segment = sp - 0x4000
    c.w32(segment, index)
    c.set_arg(A2, segment)
    c.set_arg(A1, bones + 0x1C0 * index)
    # draw flag 2 (the caller's condition), bits 12/13 = the CLAMP_1 modes, other bits random
    flags = 2 | rng.getrandbits(16) & ~0x3000 | rng.choice([0, 0x1000, 0x2000, 0x3000])
    c.set_arg(A3, flags)
    chain_alignment(c, rng)


@gen(0x00246120, seed=0x00244368, count=40)
def texture_request(c, rng):  # fn_246120(inst), mostly the queue mode the scenes never use
    inst = c.low(A0, 32)
    scramble(c, rng, ())
    c.set_arg(A0, inst)
    c.w32(TEXTURE_MODE, rng.choice([2, 2, 2, 1, 0, 3]))
    c.w32(inst + 0x101C, rng.choice([1, 1, 1, 0]))
    want = c.rd(inst + 0x100C)
    c.w32(LAST_TEXTURE, want if rng.random() < 0.15 else want ^ (1 + rng.getrandbits(8)))
    half = rng.randrange(2)
    c.w32(RENDER_BUFFER, half)
    c.w32(QUEUE_COUNTS + 4 * (1 - half), rng.choice([0, 1, 50, 98, 99, 100, 101, rng.randrange(100)]))


@gen(0x00244368, seed=0x00244368, count=64)
def fighter_constants(c, rng):  # fn_244368(inst, owner, flags, three_passes, flat): every mode and setting
    inst, owner, flags = c.low(A0, 32), c.low(A1, 32), c.low(A2, 32)
    scramble(c, rng, ())
    c.set_arg(A0, inst)
    c.set_arg(A1, owner)
    c.set_arg(A2, flags ^ rng.choice([0, 0x80, 0x100, 0x180]))
    c.set_arg(A3, rng.choice([0, 1, 1]))
    c.set_arg(T0, rng.choice([0, 0, 1]))
    c.w32(SEND_PROJECTIONS, rng.choice([0, 0, 1]))
    c.w32(0x004F4B2C, rng.choice([0, 1, 1]))   # flat allowed
    c.w32(0x004F6E44, rng.choice([0, 1]))      # light alpha mode
    c.w32(0x004F6E94, rng.choice([0, 1, 2, 2, 3, 0xFFFFFFFF]))  # antialias mode
    c.w32(0x004F4C08, rng.choice([0, 1, 2]))   # fog mode
    c.w32(0x0067B724, c.rd(0x0067B724) ^ rng.choice([0, 2]))
    if owner and owner + 0x140 <= RAM_SIZE:
        c.w64(owner + 0x130, rng.choice([0, 0, 1 << 61, 1 << 40, rng.getrandbits(64)]))
        c.w64(owner + 0x138, rng.choice([0, 2, rng.getrandbits(64)]))
    mesh = c.rd(inst + 0x2C)
    if 0 < mesh < RAM_SIZE:
        rig = c.rd(mesh + 0x3C)
        if rng.random() < 0.15:
            c.w32(mesh + 0x3C, 0)
        elif 0 < rig < RAM_SIZE:
            for i in range(3):  # attenuation: as recorded, none (beyond far), full (inside near), between
                k = rng.randrange(4)
                if k == 1:
                    c.w32(rig + 48 * i + 36, FLOAT_ZERO)
                elif k == 2:
                    c.w32(rig + 48 * i + 32, FLOAT_HUGE)
                    c.w32(rig + 48 * i + 36, FLOAT_HUGE + 0x800000)
                elif k == 3:
                    c.w32(rig + 48 * i + 32, FLOAT_ZERO)
                    c.w32(rig + 48 * i + 36, FLOAT_HUGE)
    chain_alignment(c, rng)


# ---- fn_245168 ----

BONE = 0x1C0
BONE_VARIANTS = ('skip_skin', 'skip_writeback', 'skip_both', 'root', 'second_pass', 'alloc', 'pre_update')


def ancestors(c, bones, count, node, k):
    """indices on bone k's parent chain (stops at the node, 0, a mode -1 bone or a loop)"""
    seen, j = [], k
    while True:
        p = c.rd(bones + BONE * j + 0x40)
        if p == 0 or p == node or c.rd(bones + BONE * j + 0x150, 'b') == -1:
            return seen
        j = (p - bones) // BONE
        if not 0 <= j < count or j in seen:
            return seen
        seen.append(j)


@gen(0x00245168, seed=0x00245168, count=56)
def update_bone_matrices(c, rng):  # fn_245168(model, skip_skin, skip_writeback): 7 variants, every seed gets each
    variant = BONE_VARIANTS[c.variant(len(BONE_VARIANTS))]
    c.label = variant
    m = c.low(A0, 32)
    bones, count, node = c.rd(m + 0x18), c.rd(m + 0x30), m + 0x50
    if variant in ('skip_skin', 'skip_both'):  # any nonzero 64-bit value, sometimes only in bits 32-63
        c.set_low(A1, rng.choice([1, 0x80000000, 1 << 32, rng.getrandbits(64) | 1]))
    if variant in ('skip_writeback', 'skip_both'):
        c.set_low(A2, rng.choice([1, 0xFFFFFFFFFFFFFFFF, 1 << 40]))
    if variant == 'root' and count:
        for k in rng.sample(range(count), min(3, count)):
            c.w32(bones + BONE * k + 0x40, 0)
    if variant == 'second_pass' and count > 2:
        # bone k's parent becomes a later bone j that does not depend on k: k waits for a second pass
        for _ in range(50):
            k = rng.randrange(count - 1)
            j = rng.randrange(k + 1, count)
            if k not in ancestors(c, bones, count, node, j) and c.rd(bones + BONE * k + 0x150, 'b') != -1:
                c.w32(bones + BONE * k + 0x40, bones + BONE * j)
                break
    if variant == 'alloc':
        c.w32(0x006660A4, 0)
        c.set_low(A1, rng.choice([0, 1]))
    if variant == 'pre_update':
        c.w32(m + 0xDC8, rng.choice([1, 0x12345678]))
        c.w32(0x004F50E0, 0)  # fn_2457d0 must not call back into fn_245168 (it would recurse)
        if rng.random() < 0.5:
            c.w32(0x004F50DC, 0)
