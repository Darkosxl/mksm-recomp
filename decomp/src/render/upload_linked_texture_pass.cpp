// ps2render.cpp (Ps2/Renderer/Character): the per-material GS state of the 3-pass fighter draw, as VU1 constants.
#include "vif.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp::render;

constexpr std::uint32_t kTextureManager = 0x004efe94;  // TextureManager *: the game's texture table
// The object pass 3 projects its texture from (fn_248900 binds that texture), or NULL: no pass 3
constexpr std::uint32_t kProjector = 0x00663494;

constexpr std::uint32_t kGetLinkedTexture = 0x0026de50;  // texture_get_link_a(manager, slot): linked slot, or -1
constexpr std::uint32_t kGetTex0 = 0x0026d2e8;           // TextureManager::GetTex0(manager, slot)

constexpr std::uint64_t kNoTexture = ~0ull;  // -1, sign-extended as the slot numbers are compared

// The character renderer's draw state (fn_246cf0's s6)
struct CharacterDraw {
    std::uint32_t addr;
    Field<std::uint32_t> mode{addr + 0x1018};       // 2: the meshes are drawn with the linked-texture passes (inferred)
    Field<std::uint32_t> alpha_fix{addr + 0x1028};  // pass 1's constant translucency (ALPHA FIX), -1 = none
};

// The mesh being drawn (fn_246cf0's s5)
struct Mesh {
    std::uint32_t addr;
    Field<std::uint32_t> texture{addr + 0x1c};  // TextureManager slot
};

// VU1 data addresses (qwords) of the character programs' per-pass A+D qwords (decomp/notes/native-renderer.md §3.2)
enum VuConst : std::uint32_t {
    kPass1Alpha = 0x22,  // pass 1 (base): ALPHA_1
    kPass1Test = 0x23,   // pass 1: TEST_1
    kPass2Test = 0x26,   // pass 2 (the linked texture, looked up from the normal): TEST_1
    kPass2Tex0 = 0x27,   // pass 2: TEX0_1
    kPass3Test = 0x29,   // pass 3 (the projected texture): TEST_1
};

// Blends: by the source alpha; by the constant FIX (0x80 = opaque)
constexpr std::uint64_t kBlendAlpha = gs::Alpha(gs::Cs, gs::Cd, gs::As, gs::Cd);
constexpr std::uint64_t blend_fix(std::uint32_t fix) { return gs::Alpha(gs::Cs, gs::Cd, gs::Fix, gs::Cd, fix); }

// Tests (the depth test always on)
constexpr std::uint64_t kTestCutout = gs::Test(true, gs::A_GEQUAL, 0x3c, gs::RGB_ONLY, true, gs::Z_GREATER);
constexpr std::uint64_t kTestOpaque = gs::Test(true, gs::A_GEQUAL, 4, gs::KEEP, true, gs::Z_GEQUAL);
constexpr std::uint64_t kTestOff = gs::Test(true, gs::A_NEVER, 0, gs::KEEP, true, gs::Z_GEQUAL);  // draws nothing
constexpr std::uint64_t kTestOn = gs::Test(false, gs::A_NEVER, 0, gs::KEEP, true, gs::Z_GEQUAL);  // no alpha test
static_assert(kBlendAlpha == 0x44 && blend_fix(0x80) == 0x80'00000064ull);
static_assert(kTestCutout == 0x733cb && kTestOpaque == 0x5004b && kTestOff == 0x50001 && kTestOn == 0x50000);

// TEX0 with TFX (bits 35-36) cleared: MODULATE
constexpr std::uint64_t kTex0NoTfx = ~(3ull << 35);

constexpr std::uint64_t sext(std::uint32_t v) {
    return static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(v)));
}

// One GS register for VU1: STCYCL 4,4, then UNPACK V4-32 of one qword to VU1 address addr, the qword being the A+D
// pair (reg, value); 24 bytes. The original computes NUM as 128 data bits / 128 bits per element with a DIVU, which
// leaves LO = 1, HI = 0 (its divide-by-zero trap tests the constant divisor and can never fire).
void put_register(Cpu &c, Packet &pk, VuConst addr, gs::Reg reg, std::uint64_t value) {
    constexpr std::uint32_t bits = vif::element_bits(vif::V4_32);
    static_assert(bits != 0);
    mmi::divu(c, 0, 128, bits);
    pk.w32(vif::Stcycl(4, 4));
    pk.w32(vif::Unpack(vif::V4_32, addr, c.lo.w[0]));
    pk.ad(reg, value);
}

// The chain cursor aligned up to a qword with zero words (VIF NOPs), as the original's loop at `loop` does, from the
// cursor in s0. t0 ends as the aligned cursor; false when a preemption unwound the machine inside the loop.
// enter_cost: what the recompiled code charges between the alignment test and the loop (1 on one path, 0 on the other).
bool align_qword(Cpu &c, std::uint32_t loop, std::int32_t enter_cost) {
    std::uint64_t cur = c.r[s0].d[0];
    std::uint64_t end = cur & sext(-16u);
    const bool unaligned = end < cur;
    const std::uint64_t up = sext(static_cast<std::uint32_t>(end) + 16u);
    if (unaligned) end = up;
    const bool enter = cur < end;
    c.r[t0].d[0] = cur;
    c.r[v0].d[0] = up;
    c.r[a0].d[0] = unaligned;
    c.r[a1].d[0] = end;
    c.r[v1].d[0] = enter;
    tick(c, 9);
    if (!enter) return true;
    tick(c, enter_cost);
    bool more;
    do {
        st32(static_cast<std::uint32_t>(cur), 0);
        cur = sext(static_cast<std::uint32_t>(cur) + 4u);
        more = cur < end;
        tick(c, 6);
        if (more && c.budget < 0) {
            c.r[t0].d[0] = cur;
            c.r[v0].d[0] = 1;
            if (poll(c, loop)) return false;
        }
    } while (more);
    c.r[t0].d[0] = cur;
    c.r[v0].d[0] = 0;
    return true;
}

void leave(Cpu &c, const StackFrame &f) {
    f.lq(s0, 0x60);
    f.lq(s1, 0x50);
    f.lq(s2, 0x40);
    f.lq(s3, 0x30);
    f.lq(s4, 0x20);
    f.lq(s5, 0x10);
    f.ld(ra, 0x0);
    f.pop();
    tick(c, 10);
}

}

// Fighter draw (fn_246cf0), per mesh: when the mesh's linked texture (TextureManager kHasLinked: a second texture drawn
// over the first as an extra pass) differs from the previous mesh's (*a2, updated), sets the passes' GS state in VU1:
// without one, pass 1 blends by alpha with a cutout test and passes 2 and 3 are switched off (ATST NEVER); with one,
// pass 1 is opaque, pass 2 draws the linked texture, pass 3 is on if there is a projector. Then the draw's constant
// translucency, if any, overrides pass 1's blend. Only for draws in mode 2. a0 = draw state, a1 = mesh, a2 = cache.
PS2_DECOMP(00239C48, UploadLinkedTexturePass) {
    const StackFrame f(c, 0x70);
    f.sq(s1, 0x50);
    f.sq(s4, 0x20);
    f.sq(s0, 0x60);
    f.sq(s2, 0x40);
    f.sq(s3, 0x30);
    f.sq(s5, 0x10);
    f.sd(ra, 0x0);
    c.r[s1].d[0] = c.r[a2].d[0];
    c.r[s4].d[0] = c.r[a0].d[0];
    const CharacterDraw draw{c.r[a0].w[0]};
    const Mesh mesh{c.r[a1].w[0]};

    set32(c.r[v0], 2);
    set32(c.r[v1], draw.mode);
    tick(c, 14);
    if (c.r[v1].d[0] != c.r[v0].d[0]) return leave(c, f);

    c.r[s0].sd[0] = 0x004f0000;  // the TextureManager pointer's page, kept for the second lookup
    set32(c.r[a1], mesh.texture);
    set32(c.r[a0], rd<std::uint32_t>(kTextureManager));
    tick(c, 5);
    if (!call(c, kGetLinkedTexture, Ra{0x00239c94})) return;

    const std::uint64_t linked = c.r[v0].d[0];
    c.r[t4].d[0] = linked;
    c.r[t5].d[0] = c.r[s0].d[0];
    const gptr<std::uint32_t> cache{c.r[s1].w[0]};
    set32(c.r[v0], cache.get());
    tick(c, 5);
    if (linked == c.r[v0].d[0]) return leave(c, f);
    cache.set(static_cast<std::uint32_t>(linked));

    // FLUSH, then align to a qword. The alignment restarts from the old pointer (the original keeps a stale copy), so
    // the FLUSH word is always overwritten again, by padding or by the first STCYCL.
    const Chain chain;
    c.r[v1].sd[0] = 0x00660000;
    c.r[a0].sd[0] = static_cast<std::int32_t>(vif::Flush());
    c.r[s5].d[0] = c.r[v1].d[0];
    const std::uint32_t start = chain.ptr;
    set32(c.r[s0], start);
    set32(c.r[a1], ~0u);
    wr<std::uint32_t>(start, vif::Flush());
    set32(c.r[v0], start + 4);
    chain.ptr = start + 4;
    tick(c, 11);

    Packet pk{0};
    if (linked == kNoTexture) {
        if (!align_qword(c, 0x00239cf8, 0)) return;
        pk.p = c.r[t0].w[0];
        put_register(c, pk, kPass1Alpha, gs::ALPHA_1, kBlendAlpha);
        put_register(c, pk, kPass1Test, gs::TEST_1, kTestCutout);
        put_register(c, pk, kPass2Test, gs::TEST_1, kTestOff);
        put_register(c, pk, kPass3Test, gs::TEST_1, kTestOff);
        tick(c, 24 + 54);
        // what the original leaves in the scratch registers: the last two UNPACKs, the STCYCL, the TEST values, the
        // NUM increments (LO << 16) and the DIVU operands
        set32(c.r[v0], vif::Unpack(vif::V4_32, kPass3Test, 1));
        set32(c.r[v1], vif::Unpack(vif::V4_32, kPass3Test));
        set32(c.r[a0], 128);
        set32(c.r[a1], vif::Unpack(vif::V4_32, kPass2Test));
        set32(c.r[a2], 128);
        set32(c.r[a3], vif::num_field(1));
        set32(c.r[t0], static_cast<std::uint32_t>(kTestOff));
        set32(c.r[t1], vif::num_field(1));
        set32(c.r[t2], vif::Stcycl(4, 4));
        set32(c.r[t3], vif::num_field(1));
        set32(c.r[t4], gs::TEST_1);
        set32(c.r[t5], 128);
        set32(c.r[t6], 128);
    } else {
        if (!align_qword(c, 0x00239e70, 1)) return;
        pk.p = c.r[t0].w[0];
        put_register(c, pk, kPass1Alpha, gs::ALPHA_1, blend_fix(0x80));
        put_register(c, pk, kPass1Test, gs::TEST_1, kTestOpaque);
        put_register(c, pk, kPass2Test, gs::TEST_1, kTestOpaque);

        // the registers at the jal: the records so far (UNPACKs, STCYCL, TEST, NUM increments, DIVU operands)
        set32(c.r[v0], vif::Unpack(vif::V4_32, kPass2Test, 1));
        set32(c.r[v1], vif::Unpack(vif::V4_32, kPass1Test));
        set32(c.r[a0], rd<std::uint32_t>(kTextureManager));
        c.r[a1].d[0] = linked;
        set32(c.r[a2], vif::num_field(1));
        set32(c.r[a3], vif::num_field(1));
        set32(c.r[t0], static_cast<std::uint32_t>(kTestOpaque));
        set32(c.r[t1], vif::num_field(1));
        set32(c.r[t2], 128);
        set32(c.r[t3], 128);
        set32(c.r[s0], pk.p);
        set32(c.r[s1], vif::Stcycl(4, 4));
        set32(c.r[s2], 128);
        set32(c.r[s3], gs::TEST_1);
        tick(c, 24 + 42);
        if (!call(c, kGetTex0, Ra{0x00239f90})) return;

        const std::uint64_t tex0 = c.r[v0].d[0] & kTex0NoTfx;
        put_register(c, pk, kPass2Tex0, gs::TEX0_1, tex0);
        tick(c, 22 + 10);
        const bool projector = rd<std::uint32_t>(kProjector) != 0;
        put_register(c, pk, kPass3Test, gs::TEST_1, projector ? kTestOn : kTestOff);
        // scratch registers as the original leaves them
        set32(c.r[v0], vif::Unpack(vif::V4_32, kPass3Test, 1));
        if (projector) {
            set32(c.r[v1], vif::num_field(1));
            set32(c.r[a0], static_cast<std::uint32_t>(kTestOn));
            tick(c, 14 + 5);
        } else {
            set32(c.r[v1], vif::Unpack(vif::V4_32, kPass3Test));
            set32(c.r[a0], vif::num_field(1));
            tick(c, 15 + 4);
        }
        set32(c.r[a1], 128);
        c.r[a2].d[0] = sext(static_cast<std::uint32_t>(tex0 >> 32));
    }

    // the draw's constant translucency overrides pass 1's blend (no DIVU here: the original folded NUM to 1)
    const std::uint32_t fix = draw.alpha_fix;
    set32(c.r[v1], fix);
    set32(c.r[v0], ~0u);
    tick(c, 6);
    if (fix != ~0u) {
        pk.w32(vif::Stcycl(4, 4));
        pk.w32(vif::Unpack(vif::V4_32, kPass1Alpha, 1));
        pk.ad(gs::ALPHA_1, blend_fix(fix));
        set32(c.r[v0], vif::Unpack(vif::V4_32, kPass1Alpha, 1));
        set32(c.r[v1], 128);
        set32(c.r[a0], vif::num_field(1));
        set32(c.r[a1], gs::ALPHA_1);
        set32(c.r[a2], fix);
        tick(c, 22 + 4);
    }
    chain.ptr = pk.p;
    tick(c, 1);
    leave(c, f);
}
