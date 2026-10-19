// Ps2/Renderer/Character/ps2render.cpp: the GS state of a world segment, appended to the frame's VIF1 chain as A+D
// qwords (the GIF packet around them is the caller's).
#include "../vif.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp::render;

// a2: the segment's render flags (the bits tested here)
enum SegmentFlags : std::uint32_t {
    kFixedAlpha = 0x100,   // ALPHA_1 blends with the fixed alpha at kFixedAlphaValue
    kAltState = 0x200,     // the state is written by fn_236f30 instead, nothing else here
    kContext2 = 0x100000,  // also RGBAQ, ZBUF_2/ZBUF_1, CLAMP_2 first and TEST_2, ALPHA_2, TEX1_2 last
};

constexpr std::uint32_t kLastFlags = 0x0065E458u;        // flags of the last segment written here; -1 = none (the
                                                         // caller resets it), so everything counts as changed
constexpr std::uint32_t kFixedAlphaValue = 0x0065E454u;  // ALPHA_1.FIX under kFixedAlpha
constexpr std::uint32_t kScreenBuffers = 0x0067B758u;    // decomp/include/screen_buffers.hpp
constexpr std::uint32_t kOpaqueSwitch = 0x1018;          // a1 + this: nonzero = opaque state, zero = blended

constexpr std::uint32_t kGetZbp = 0x00275300u;           // (screen) -> Z buffer base page (screen +0x2e)
constexpr std::uint32_t kGetZpsm = 0x002753A0u;          // (screen) -> Z buffer format (screen +0x28)
constexpr std::uint32_t kAltStateWriter = 0x00236F30u;   // fn_236f30(a0, flags, changed)
constexpr std::uint32_t kStateWriter = 0x00236DB0u;      // fn_236db0(a0, flags, changed)

constexpr std::uint32_t kFrame = 0x80;  // the original's stack frame: s0-s6, ra

constexpr std::uint64_t kTexa = gs::Texa(0x80, false, 0x01);
constexpr std::uint64_t kWhiteQ1 = gs::Rgbaq(0xFFFFFFFFu, 0x3F800000u);  // RGBA 255,255,255,255, Q = 1.0
constexpr std::uint64_t kClampBoth = gs::Clamp(gs::CLAMP, gs::CLAMP);
constexpr std::uint64_t kTestOpaque = gs::Test(true, gs::A_GEQUAL, 0x04, gs::KEEP, true, gs::Z_GREATER);
constexpr std::uint64_t kTestBlended = gs::Test(true, gs::A_GEQUAL, 0x1e, gs::RGB_ONLY, true, gs::Z_GREATER);
constexpr std::uint64_t kTest2 = gs::Test(false, gs::A_NEVER, 0, gs::KEEP, true, gs::Z_GEQUAL);
constexpr std::uint64_t kAlphaBlend = gs::Alpha(gs::Cs, gs::Cd, gs::As, gs::Cd);         // (Cs - Cd) As + Cd
constexpr std::uint64_t kAlphaFixed = gs::Alpha(gs::Cs, gs::Cd, gs::Fix, gs::Cd);        // (Cs - Cd) FIX + Cd
constexpr std::uint64_t kAlphaSource = gs::Alpha(gs::Cs, gs::Cd, gs::Fix, gs::Cd, 0x80);  // FIX 1.0: Cs
static_assert(kTexa == 0x100000080u && kTestOpaque == 0x7004Bu && kTestBlended == 0x731EBu && kTest2 == 0x50000u);
static_assert(kAlphaBlend == 68 && kAlphaFixed == 100 && kAlphaSource == (100 | 0x80ull << 32) && kClampBoth == 5);

// ZBUF_n = ZBP (s2, from kGetZbp) | PSM (v0, from kGetZpsm) << 24, in 64 bits as the original builds it in v0 (low
// word) and a1 (high word). Returns the qword's address (v1).
std::uint32_t put_zbuf(Cpu &c, const Chain &chain, gs::Reg reg) {
    set32(c.r[v1], chain.ptr);
    const std::uint64_t value = c.r[s2].d[0] | c.r[v0].d[0] << 24;
    set32(c.r[a0], reg);
    c.r[a1].sd[0] = static_cast<std::int64_t>(value) >> 32;
    c.r[v0].sd[0] = static_cast<std::int32_t>(value);
    put_ad(c.r[v1].w[0], reg, value);
    return c.r[v1].w[0];
}

void restore(Cpu &c, const StackFrame &f) {
    for (unsigned i = 0; i < 7; ++i) f.lq(s0 + i, 0x70 - 0x10 * i);
    f.ld(ra, 0x00);
    f.pop();
    tick(c, 11);
}

}

// Writes the GS state for the next world segment that fn_23a280 packs (it calls this when the segment's flags or
// texture differ from the last one): a0 and a1 are fn_23a280's own (passed on to fn_236db0/fn_236f30, a1 + 0x1018
// picks opaque or blended), a2 the segment's render flags. With kAltState only fn_236f30 runs; otherwise TEST_1, then
// fn_236db0, then ALPHA_1 when kFixedAlpha changed. TEXA comes first after a reset of kLastFlags, and kContext2 adds
// the context-2 registers around them.
PS2_DECOMP(00237660, WriteSegmentGsState) {
    const Chain chain;
    const StackFrame f(c, kFrame);
    c.r[a3].sd[0] = static_cast<std::int32_t>(0x00660000u);  // lui a3, %hi(kLastFlags)
    set32(c.r[v1], rd<std::uint32_t>(kLastFlags));
    for (unsigned i = 0; i < 7; ++i) f.sq(s0 + i, 0x70 - 0x10 * i);
    f.sd(ra, 0x00);
    // s3 = flags, s4 = the bits changed since the last segment (all of them after a reset), s5 = a0, s6 = a1
    c.r[s3].d[0] = c.r[a2].d[0];
    set32(c.r[a2], 0xFFFFFFFFu);
    c.r[v0].d[0] = ~c.r[v1].d[0];
    c.r[s4].d[0] = c.r[v0].d[0] == 0 ? c.r[a2].d[0] : c.r[s3].d[0] ^ c.r[v1].d[0];
    c.r[s5].d[0] = c.r[a0].d[0];
    c.r[s6].d[0] = c.r[a1].d[0];
    wr<std::uint32_t>(kLastFlags, c.r[s3].w[0]);
    tick(c, 21);

    if (c.r[s4].d[0] == ~0ull) {
        c.r[a2].sd[0] = static_cast<std::int32_t>(0x00660000u);
        set32(c.r[a3], gs::TEXA);
        set32(c.r[v0], chain.ptr);
        set32(c.r[v1], static_cast<std::uint32_t>(kTexa));
        set32(c.r[a0], static_cast<std::uint32_t>(kTexa >> 32));
        put_ad(c.r[v0].w[0], gs::TEXA, kTexa);
        set32(c.r[a1], c.r[v0].w[0] + 16);
        chain.ptr = c.r[a1].w[0];
        tick(c, 11);
    }

    c.r[v0].d[0] = c.r[s3].d[0] & kContext2;
    tick(c, 4);
    if (c.r[v0].d[0] != 0) {
        c.r[s1].sd[0] = static_cast<std::int32_t>(0x00660000u);
        const std::uint32_t at = chain.ptr;
        set32(c.r[v1], at);
        set32(c.r[v0], static_cast<std::uint32_t>(kWhiteQ1));
        set32(c.r[a1], 1);
        set32(c.r[s0], kScreenBuffers);
        put_ad(at, gs::RGBAQ, kWhiteQ1);
        set32(c.r[v0], at + 16);
        c.r[a0].d[0] = c.r[s0].d[0];
        chain.ptr = at + 16;
        tick(c, 17);
        if (!call(c, kGetZbp, Ra{0x00237734u})) return;
        c.r[s2].d[0] = c.r[v0].d[0];
        c.r[a0].d[0] = c.r[s0].d[0];
        tick(c, 4);
        if (!call(c, kGetZpsm, Ra{0x00237744u})) return;

        const std::uint32_t zbuf2 = put_zbuf(c, chain, gs::ZBUF_2);
        c.r[a0].d[0] = c.r[s0].d[0];
        set32(c.r[v0], zbuf2 + 16);
        chain.ptr = zbuf2 + 16;
        tick(c, 16);
        if (!call(c, kGetZbp, Ra{0x00237784u})) return;
        c.r[s2].d[0] = c.r[v0].d[0];
        c.r[a0].d[0] = c.r[s0].d[0];
        tick(c, 4);
        if (!call(c, kGetZpsm, Ra{0x00237794u})) return;

        const std::uint32_t zbuf1 = put_zbuf(c, chain, gs::ZBUF_1);
        set32(c.r[a2], static_cast<std::uint32_t>(kClampBoth));
        set32(c.r[v0], zbuf1 + 16);
        set32(c.r[a0], gs::CLAMP_2);
        set32(c.r[a1], zbuf1 + 32);
        put_ad(zbuf1 + 16, gs::CLAMP_2, kClampBoth);
        chain.ptr = zbuf1 + 32;
        tick(c, 21);
    }

    c.r[v0].d[0] = c.r[s3].d[0] & kAltState;
    tick(c, 3);
    if (c.r[v0].d[0] != 0) {
        c.r[a0].d[0] = c.r[s5].d[0];
        c.r[a1].d[0] = c.r[s3].d[0];
        c.r[a2].d[0] = c.r[s4].d[0];
        tick(c, 5);
        if (!call(c, kAltStateWriter, Ra{0x00237808u})) return;
        tick(c, 2);
        restore(c, f);
        return;
    }

    // TEST_1
    set32(c.r[v0], rd<std::uint32_t>(c.r[s6].w[0] + kOpaqueSwitch));
    tick(c, 3);
    const bool opaque = c.r[v0].d[0] != 0;
    c.r[a0].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[v1], chain.ptr);
    set32(c.r[a2], gs::TEST_1);
    const std::uint64_t test1 = opaque ? kTestOpaque : kTestBlended;
    set32(c.r[v0], static_cast<std::uint32_t>(test1));
    tick(c, opaque ? 7 : 5);
    c.r[s0].d[0] = c.r[a0].d[0];  // s0 = %hi of the chain from here on
    put_ad(c.r[v1].w[0], gs::TEST_1, test1);
    chain.ptr = c.r[v1].w[0] + 16;
    c.r[a0].d[0] = c.r[s5].d[0];
    c.r[a1].d[0] = c.r[s3].d[0];
    c.r[a2].d[0] = c.r[s4].d[0];
    tick(c, 12);
    if (!call(c, kStateWriter, Ra{0x0023787Cu})) return;

    // ALPHA_1, when kFixedAlpha changed
    c.r[v0].d[0] = c.r[s4].d[0] & kFixedAlpha;
    tick(c, 3);
    if (c.r[v0].d[0] != 0) {
        c.r[v0].d[0] = c.r[s3].d[0] & kFixedAlpha;
        tick(c, 3);
        if (c.r[v0].d[0] != 0) {
            c.r[v1].sd[0] = static_cast<std::int32_t>(0x00660000u);
            set32(c.r[a1], static_cast<std::uint32_t>(kAlphaFixed));
            set32(c.r[v0], rd<std::uint32_t>(kFixedAlphaValue));
            set32(c.r[a0], gs::ALPHA_1);
            const std::uint32_t at = chain.ptr;
            set32(c.r[v1], at);
            const std::uint64_t value = c.r[v0].d[0] << 32 | c.r[a1].d[0];  // FIX taken whole, as the original does
            c.r[a1].sd[0] = static_cast<std::int64_t>(value) >> 32;
            set32(c.r[a0], at + 16);
            c.r[v0].sd[0] = static_cast<std::int32_t>(value);
            put_ad(at, gs::ALPHA_1, value);
            chain.ptr = at + 16;
            tick(c, 18);
        } else {
            set32(c.r[v0], rd<std::uint32_t>(c.r[s6].w[0] + kOpaqueSwitch));
            tick(c, 3);
            if (c.r[v0].d[0] != 0) {
                const std::uint32_t at = chain.ptr;
                set32(c.r[v0], at);
                set32(c.r[a2], gs::ALPHA_1);
                set32(c.r[v1], static_cast<std::uint32_t>(kAlphaSource));
                set32(c.r[a0], static_cast<std::uint32_t>(kAlphaSource >> 32));
                put_ad(at, gs::ALPHA_1, kAlphaSource);
                set32(c.r[a1], at + 16);
                tick(c, 11);
            } else {
                const std::uint32_t at = chain.ptr;
                set32(c.r[v1], at);
                set32(c.r[a0], gs::ALPHA_1);
                set32(c.r[v0], static_cast<std::uint32_t>(kAlphaBlend));
                put_ad(at, gs::ALPHA_1, kAlphaBlend);
                set32(c.r[a1], at + 16);
                tick(c, 8);
            }
            chain.ptr = c.r[a1].w[0];
            tick(c, 1);
        }
    }

    // TEST_2, ALPHA_2, TEX1_2 (the last qword stored a word at a time, the pointer moved after each)
    c.r[v0].d[0] = c.r[s3].d[0] & kContext2;
    tick(c, 4);
    if (c.r[v0].d[0] != 0) {
        const std::uint32_t at = chain.ptr;
        set32(c.r[v0], at);
        set32(c.r[a2], static_cast<std::uint32_t>(kAlphaBlend));
        put_ad(at, gs::TEST_2, kTest2);
        set32(c.r[a0], at + 16);
        put_ad(at + 16, gs::ALPHA_2, kAlphaBlend);
        put_ad(at + 32, gs::TEX1_2, 0);
        set32(c.r[t0], at + 32);
        set32(c.r[t1], at + 36);
        set32(c.r[t2], at + 40);
        set32(c.r[a3], gs::TEX1_2);
        set32(c.r[a1], at + 44);
        set32(c.r[v1], at + 48);
        chain.ptr = at + 48;
        tick(c, 30);
    }
    restore(c, f);
}
