// ps2render.cpp (Ps2/Renderer/Character): the GS state of a character mesh's highlight pass, as VU1 constants.
#include "vif.hpp"

#include "ps2/decomp_vu0.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp::render;

constexpr std::uint32_t kGetTex0 = 0x0026d2e8u;  // TextureManager::GetTex0(manager, slot)

// The model segment flagged 0x8 at seg+0x138 (set by fn_259c90 in ps2Setup.cpp, 0 when the model has none). Its
// material, *(seg + 0x1bc), starts with the texture slot the highlight pass draws with.
constexpr std::uint32_t kHighlightSegment = 0x00663494u;
constexpr std::uint32_t kTextureManager = 0x004efe94u;  // the TextureManager instance (a pointer)
constexpr std::uint32_t kHighlightMode = 0x004f4c40u;   // a render setting (fn_226dd0); 2 selects the second mode
constexpr std::uint32_t kHighlightColour = 0x006619a0u + 0x30u;  // xyz of a vector in the lighting block at 0x6619a0

// the instance being packed (a0): FIX alpha of a fading instance, -1 while it is opaque
constexpr std::uint32_t kFadeAlpha = 0x1028u;

// GS TEX0 fields the pass changes on the segment's texture
constexpr std::uint64_t kTex0Tcc = 1ull << 34;  // use the texture's alpha
constexpr unsigned kTex0TfxShift = 35;          // TFX: 0 MODULATE, 1 DECAL, 2 HIGHLIGHT, 3 HIGHLIGHT2
constexpr std::uint64_t kTex0Tfx = 3ull << kTex0TfxShift;

// The highlight pass's VU1 data addresses (qwords): GS A+D pairs the microcode copies into the pass's GIF packet,
// then the colour.
enum VuAddr : std::uint32_t { kVuAlpha = 0x28, kVuTest = 0x29, kVuTex0 = 0x2a, kVuFba = 0x2b, kVuColour = 0x2c };

constexpr std::uint32_t kCycle = vif::Stcycl(4, 4);
constexpr std::uint32_t kV4_32Unit = vif::num_field(1) | vif::element_bits(vif::V4_32);  // 0x10080

// One qword of VU1 data at vu_addr: STCYCL 4,4 and UNPACK V4-32, closed.
Closed UnpackQword(Cpu &c, const Chain &chain, std::uint32_t vu_addr, std::uint64_t lo, std::uint64_t hi,
                   std::uint32_t break_pc = 0) {
    Packet pk{chain.ptr};
    pk.w32(kCycle);
    OpenUnpack(chain, pk, vif::V4_32, vu_addr);
    pk.w64(lo);
    pk.w64(hi);
    chain.ptr = pk.p;
    return CloseUnpack(c, chain, pk.p, break_pc);
}

// One GS register as an A+D qword at vu_addr
Closed UnpackAd(Cpu &c, const Chain &chain, std::uint32_t vu_addr, gs::Reg reg, std::uint64_t value,
                std::uint32_t break_pc = 0) {
    return UnpackQword(c, chain, vu_addr, value, reg, break_pc);
}

// the scratch registers every path leaves from its last close
void LeaveClose(Cpu &c, const Closed &last, unsigned word_reg, unsigned bits_reg, unsigned num_reg) {
    set32(c.r[word_reg], last.word);
    c.r[bits_reg].d[0] = last.elem_bits;
    set32(c.r[num_reg], last.num);
    set32(c.r[a1], last.step);
    set32(c.r[a2], last.at);
    set32(c.r[a3], Chain::kAddr);
}

}

// Uploads the GS state of a character mesh's highlight pass to VU1 (ALPHA_1, TEST_1, TEX0_1, FBA_1 at VU 0x28-0x2b
// and a colour at 0x2c), for the character packers (fn_244368, fn_246258, fn_246918). The pass draws the model's
// highlight segment texture (TFX HIGHLIGHT/HIGHLIGHT2); when the model has none or the instance is fading, it is
// switched off with an alpha test that never passes. a0 = the instance being packed.
PS2_DECOMP(00248900, PackHighlightPass) {
    const Chain chain;
    const std::uint32_t inst = c.r[a0].w[0];
    const std::uint32_t segment = rd<std::uint32_t>(kHighlightSegment);
    set32(c.r[v0], 0x00660000u);
    set32(c.r[a1], segment);
    StackFrame f(c, 0x90);
    f.sq(s0, 0x80);
    f.sq(s1, 0x70);
    f.sq(s2, 0x60);
    f.sq(s3, 0x50);
    f.sq(s4, 0x40);
    f.sq(s5, 0x30);
    f.sq(s6, 0x20);
    f.sd(ra, 0x10);
    tick(c, 13);

    bool on = false;
    if (segment != 0) {
        set32(c.r[v1], rd<std::uint32_t>(inst + kFadeAlpha));
        set32(c.r[v0], 0xffffffffu);
        tick(c, 4);
        on = c.r[v1].w[0] == 0xffffffffu;
    }

    if (!on) {
        // ---- off: slot 0's TEX0, and an alpha test that never passes ----
        set32(c.r[v0], 0x004f0000u);
        c.r[a1].d[0] = 0;
        set32(c.r[a0], rd<std::uint32_t>(kTextureManager));
        tick(c, 5);
        if (!call(c, kGetTex0, Ra{0x00248ddcu})) return;
        const std::uint64_t tex0 = c.r[v0].d[0];

        tick(c, 41);
        const Closed first = UnpackAd(c, chain, kVuAlpha, gs::ALPHA_1, gs::Alpha(gs::Zero, gs::Zero, gs::Fix, gs::Cd),
                                      0x00248e7cu);
        const std::uint64_t never = gs::Test(true, gs::A_NEVER, 0, gs::KEEP, true, gs::Z_GEQUAL);
        UnpackAd(c, chain, kVuTest, gs::TEST_1, never);
        UnpackAd(c, chain, kVuTex0, gs::TEX0_1, tex0);
        const Closed last = UnpackAd(c, chain, kVuFba, gs::FBA_1, 1);
        tick(c, 107);

        // v0 the last code, v1 its element bits, a0 its NUM, a1-a3 as every path; t0-t7 the constants
        LeaveClose(c, last, v0, v1, a0);
        set32(c.r[t0], 0x00660000u);
        set32(c.r[t1], first.at);
        set32(c.r[t2], vif::Unpack(vif::V4_32, kVuTest));
        set32(c.r[t3], static_cast<std::uint32_t>(never));
        set32(c.r[t4], vif::Unpack(vif::V4_32, kVuTex0));
        set32(c.r[t5], kCycle);
        set32(c.r[t6], kV4_32Unit);
        set32(c.r[t7], vif::Unpack(vif::V4_32, kVuFba));
    } else {
        // ---- on: the segment's texture as a highlight, blended per the mode ----
        const std::uint32_t material = rd<std::uint32_t>(segment + 0x1bc);
        set32(c.r[v1], material);
        set32(c.r[v0], 0x004f0000u);
        set32(c.r[a0], rd<std::uint32_t>(kTextureManager));
        set32(c.r[a1], rd<std::uint32_t>(material));  // texture slot
        tick(c, 6);
        if (!call(c, kGetTex0, Ra{0x0024895cu})) return;
        std::uint64_t tex0 = c.r[v0].d[0];

        tick(c, 6);
        const bool mode2 = rd<std::uint32_t>(kHighlightMode) == 2;
        std::uint64_t alpha;
        if (mode2) {
            alpha = gs::Alpha(gs::Zero, gs::Zero, gs::Fix, gs::Cd);  // Cd: the colour is kept
            tex0 |= 3ull << kTex0TfxShift;                           // HIGHLIGHT2
            tick(c, 42);
        } else {
            alpha = gs::Alpha(gs::Cd, gs::Zero, gs::As, gs::Zero);   // Cd * As
            tex0 = (tex0 & ~kTex0Tfx) | 2ull << kTex0TfxShift;      // HIGHLIGHT
            tick(c, 48);
        }
        tex0 |= kTex0Tcc;
        UnpackAd(c, chain, kVuAlpha, gs::ALPHA_1, alpha, mode2 ? 0x00248a18u : 0x00248afcu);
        tick(c, mode2 ? 9 : 6);

        tick(c, 41);
        UnpackAd(c, chain, kVuTest, gs::TEST_1, gs::Test(false, gs::A_NEVER, 0, gs::KEEP, true, gs::Z_GEQUAL),
                 0x00248bb8u);
        UnpackAd(c, chain, kVuTex0, gs::TEX0_1, tex0);
        UnpackAd(c, chain, kVuFba, gs::FBA_1, 1);

        // the colour: xyz from the lighting block, w = 0x4b000030 (2^23 + 48). The original packs the four words
        // in t0 with pextlw/pextlw/pcpyld from the mfc1'd GPRs, moves it to vf1, and copies it out through the stack.
        c.r[at].d[0] = 0x4b000030u;
        c.f[3] = 0x4b000030u;
        c.f[2] = rd<std::uint32_t>(kHighlightColour + 8);
        c.f[1] = rd<std::uint32_t>(kHighlightColour + 0);
        c.f[0] = rd<std::uint32_t>(kHighlightColour + 4);
        Reg128 x{}, y{}, z{}, w{};
        set32(x, c.f[1]);
        set32(y, c.f[0]);
        set32(z, c.f[2]);
        set32(w, c.f[3]);
        mmi::pextlw(c.r[t0], y, x);
        mmi::pextlw(c.r[t1], w, z);
        mmi::pcpyld(c.r[t0], c.r[t1], c.r[t0]);
        vu0::qmtc2(c, t0, vu0::vf1);
        vu0::sqc2(c, vu0::vf1, f.at(0));
        const Reg128 &colour = c.vu0.vf[1];
        const Closed last = UnpackQword(c, chain, kVuColour, colour.d[0], colour.d[1]);
        tick(c, 131);

        // v0 the last NUM, v1 its code, a0 its element bits, a1-a3 as every path; t0/t1 the colour; t2-t7 constants
        LeaveClose(c, last, v1, a0, v0);
        set32(c.r[t2], vif::Unpack(vif::V4_32, kVuFba));
        set32(c.r[t3], kCycle);
        set32(c.r[t4], kV4_32Unit);
        set32(c.r[t5], vif::Unpack(vif::V4_32, kVuColour));
        c.r[t6].d[0] = 0xffffffffffff0000ull;
        set32(c.r[t7], gs::TEX0_1);
    }

    f.lq(s0, 0x80);
    f.lq(s1, 0x70);
    f.lq(s2, 0x60);
    f.lq(s3, 0x50);
    f.lq(s4, 0x40);
    f.lq(s5, 0x30);
    f.lq(s6, 0x20);
    f.ld(ra, 0x10);
    f.pop();
    tick(c, 12);
}
