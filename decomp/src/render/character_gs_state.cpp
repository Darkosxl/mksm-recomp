// Ps2/Renderer/Character/ps2render.cpp: the GS state of the character microcode's passes (images A/B,
// decomp/notes/native-renderer.md §3.2 and §3.4). The fighter packers (fn_244368, fn_246258, fn_246918) set it per
// mesh as VU1 constants, each one qword sent by STCYCL 4,4 + UNPACK V4-32; VU1 kicks them as an A+D header ahead of
// each pass's vertices. VU1 data memory (qwords):
//   0x20        pass-2 constant RGBA (2^23-biased floats)
//   0x21        GIF tag of the A+D header (PACKED, NLOOP 4)
//   0x22, 0x23  pass 1 (base): ALPHA_1, TEST_1; the batch's own A+D (the skin TEX0) rides in the input
//   0x25-0x27   pass 2 (environment highlight): ALPHA_1, TEST_1, TEX0_1
//   0x2d        FBA_1
#include "ps2/decomp_vu0.hpp"
#include "instance.hpp"
#include "vif.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp::render;

// globals
constexpr std::uint32_t kShadowPass = 0x004F4B2Cu;      // nonzero while the fighters are drawn as their shadows
constexpr std::uint32_t kShadowStrength = 0x0066608Cu;  // float: 0.2, or less the higher the fighter (fn_246cf0)
constexpr std::uint32_t kPauseLight = 0x004F50E4u;      // set by the pause menu (PauseMenu.cpp): light pass 2 from a point
constexpr std::uint32_t kPauseLightPos = 0x006CBAD0u;   // its position, x y z (fn_200668)
constexpr std::uint32_t kHighlightRgba = 0x006635D0u;   // pass-2 colour, 2^23-biased
constexpr std::uint32_t kHighlightBlend = 0x004F4C38u;  // pass 2 of draw modes != 0: blend by destination alpha
constexpr std::uint32_t kHighlightFix = 0x004F4C3Cu;    // pass 2 of draw mode 0: additive strength (ALPHA.FIX)

// VU1 data addresses
constexpr std::uint32_t kVuHighlightRgba = 0x20, kVuAdTag = 0x21, kVuBaseAlpha = 0x22, kVuBaseTest = 0x23;
constexpr std::uint32_t kVuHighlightAlpha = 0x25, kVuHighlightTest = 0x26, kVuHighlightTex0 = 0x27, kVuFba = 0x2d;

constexpr gif::Tag128 kAdTag = gif::AdTag(4);

// pass 1, normal: alpha blending; alpha >= 0x50 or only the colour is written; destination alpha test on
constexpr std::uint64_t kBlend = gs::Alpha(gs::Cs, gs::Cd, gs::As, gs::Cd);
constexpr std::uint64_t kBaseTest = gs::Test(true, gs::A_GEQUAL, 0x50, gs::RGB_ONLY, true, gs::Z_GEQUAL, true, false);
// pass 1, shadow: the destination darkened by Cs * FIX, only where its alpha MSB is 1, and FBA 0 clears it: each
// pixel is darkened once however many shadow triangles cover it
constexpr std::uint64_t kShadowTest = gs::Test(false, gs::A_GEQUAL, 0x04, gs::KEEP, true, gs::Z_GEQUAL, true, true);
// pass 1 of the fighter instances (fn_247bd8): opaque, or blended by a fixed alpha
constexpr std::uint64_t kOpaqueTest = gs::Test(true, gs::A_GEQUAL, 0x3c, gs::RGB_ONLY, true, gs::Z_GREATER);
constexpr std::uint64_t kFadeTest = gs::Test(true, gs::A_GEQUAL, 0x04, gs::KEEP, true, gs::Z_GEQUAL);
// pass 2: added on top
constexpr std::uint64_t kHighlightTest = gs::Test(true, gs::A_GEQUAL, 0x3c, gs::KEEP, true, gs::Z_GEQUAL);
static_assert(kAdTag.lo == 0x1000000000000004ull && kAdTag.hi == 0xe && kBlend == 0x44 && kBaseTest == 0x5750b &&
                  kShadowTest == 0x5c04a && kOpaqueTest == 0x733cb && kFadeTest == 0x5004b && kHighlightTest == 0x503cb,
              "the original's constants");

constexpr std::uint64_t ShadowBlend(std::uint32_t fix) { return gs::Alpha(gs::Zero, gs::Cs, gs::Fix, gs::Cd, fix); }
constexpr std::uint64_t FadeBlend(std::uint32_t fix) { return gs::Alpha(gs::Cs, gs::Cd, gs::Fix, gs::Cd, fix); }
constexpr std::uint64_t AddBlend(std::uint32_t fix) { return gs::Alpha(gs::Cs, gs::Zero, gs::Fix, gs::Cd, fix); }
constexpr std::uint64_t kAddByDestAlpha = gs::Alpha(gs::Cs, gs::Zero, gs::Ad, gs::Cd);
static_assert(ShadowBlend(0) == 0x62 && FadeBlend(0) == 0x64 && AddBlend(0) == 0x68 && kAddByDestAlpha == 0x58);

// The fighter render instance the packers get in a0 (only what these read).
struct CharacterInstance {
    std::uint32_t addr;
    gptr<std::uint32_t> object() const { return {addr + 0x18}; }      // its +0xA0 is the world position
    gptr<std::uint32_t> draw_mode() const { return {addr + 0x1018}; } // 0 normal (fn_244368: 2 = absolute texture slot)
    gptr<std::int32_t> alpha() const { return {addr + 0x1028}; }      // fixed blend alpha, -1 = none
};

// fn_2478f0's records, written through its own pointer: STCYCL 4,4, UNPACK V4-32 of NUM 1, the qword (24 bytes)
std::uint32_t put_constant(std::uint32_t p, std::uint32_t vu_addr, const Qword &q) {
    wr<std::uint32_t>(p, vif::Stcycl(4, 4));
    wr<std::uint32_t>(p + 4, vif::Unpack(vif::V4_32, vu_addr, 1));
    for (std::uint32_t i = 0; i < 4; ++i) wr<std::uint32_t>(p + 8 + 4 * i, q.w[i]);
    return p + 24;
}

Reg128 vec4(std::uint32_t x, std::uint32_t y, std::uint32_t z, std::uint32_t w) {
    Reg128 r;
    r.w[0] = x, r.w[1] = y, r.w[2] = z, r.w[3] = w;
    return r;
}

}

// fn_2478f0(p): pass-1 GS state of a fighter mesh, written at p for fn_244368 (which then stores the returned end as
// the chain pointer): normal alpha blending, or the shadow pass's darkening with FIX = 100 * shadow strength.
PS2_DECOMP(002478F0, PackCharacterBaseState) {
    StackFrame f(c, 32);
    f.sq(s0, 16);
    f.sq(s1, 0);
    const bool shadow = rd<std::uint32_t>(kShadowPass) != 0;
    const std::uint32_t p = c.r[a0].w[0];

    std::uint64_t blend = kBlend, test = kBaseTest;
    std::int32_t fix = 0;
    if (shadow) {
        constexpr psf kPercent(100.0f);
        const psf scaled = psf::from_bits(rd<std::uint32_t>(kShadowStrength)) * kPercent;
        fix = to_int(scaled);
        blend = ShadowBlend(static_cast<std::uint32_t>(fix));
        test = kShadowTest;
        set_fpr(c, 0, scaled);
        c.f[1] = static_cast<std::uint32_t>(fix);
        set32(c.r[at], kPercent.bits);
    }
    std::uint32_t end = put_constant(p, kVuAdTag, kAdTag.words());
    end = put_constant(end, kVuBaseAlpha, Ad(gs::ALPHA_1, blend));
    end = put_constant(end, kVuBaseTest, Ad(gs::TEST_1, test));
    end = put_constant(end, kVuFba, Ad(gs::FBA_1, gs::Fba(!shadow)));
    f.lq(s0, 16);
    f.lq(s1, 0);
    f.pop();

    // The original computes each NUM as (128 payload bits / 128 per element) << 16 with DIVU; registers hold its
    // constants and those quotients.
    mmi::divu(c, 0, 128, vif::element_bits(vif::V4_32));
    const std::uint32_t num_field = c.lo.w[0] << 16;
    set32(c.r[v0], end);
    set32(c.r[t8], end);
    set32(c.r[t6], 128);
    if (!shadow) {
        set32(c.r[v1], vif::Unpack(vif::V4_32, kVuFba));
        set32(c.r[a0], vif::Unpack(vif::V4_32, kVuBaseTest));
        c.r[a1].d[0] = test;
        set32(c.r[a2], 128);
        set32(c.r[a3], num_field);
        set32(c.r[t0], num_field);
        set32(c.r[t1], vif::Stcycl(4, 4));
        set32(c.r[t2], num_field);
        set32(c.r[t3], gs::TEST_1);
        set32(c.r[t4], gs::FBA_1);
        set32(c.r[t5], 1);
        set32(c.r[t7], 128);
        tick(c, 96);
    } else {
        c.r[v1].sd[0] = fix;
        set32(c.r[a0], vif::Unpack(vif::V4_32, kVuFba));
        c.r[a1].d[0] = test;
        set32(c.r[a2], vif::Unpack(vif::V4_32, kVuBaseTest));
        set32(c.r[a3], 128);
        set32(c.r[t0], num_field);
        set32(c.r[t1], num_field);
        set32(c.r[t2], vif::Stcycl(4, 4));
        set32(c.r[t3], num_field);
        set32(c.r[t4], gs::TEST_1);
        set32(c.r[t5], 128);
        set32(c.r[t7], gs::FBA_1);
        tick(c, 105);
    }
}

bool (*decomp::render::g_blend_model)(std::uint32_t) = nullptr;

// fn_247bd8(instance): pass-1 GS state of a fighter mesh, appended to the chain: opaque (alpha test, depth GREATER),
// or blended by the instance's fixed alpha (fading fighters), or by FIX 128 in draw modes other than 0 (unless a mod
// asks for the texel-alpha blend: g_blend_model, instance.hpp).
PS2_DECOMP(00247BD8, ChainCharacterBaseState) {
    const Chain chain;
    const CharacterInstance inst{c.r[a0].w[0]};
    const std::uint32_t first = chain.ptr;
    chain.unpack_qword(c, kVuAdTag, kAdTag.words());

    const std::int32_t alpha = inst.alpha().get();
    enum { Fade, Mode, Opaque } kind;
    std::uint64_t blend, test;
    if (alpha != -1) {
        kind = Fade, blend = FadeBlend(static_cast<std::uint32_t>(alpha)), test = kFadeTest;
    } else if (inst.draw_mode().get() != 0 && !(g_blend_model && g_blend_model(inst.addr))) {
        kind = Mode, blend = FadeBlend(128), test = kFadeTest;
    } else {
        kind = Opaque, blend = kBlend, test = kOpaqueTest;
    }
    chain.unpack_qword(c, kVuBaseAlpha, Ad(gs::ALPHA_1, blend));
    const std::uint32_t test_at = chain.ptr;
    chain.unpack_qword(c, kVuBaseTest, Ad(gs::TEST_1, test));
    const Chain::Closed fba = chain.unpack_qword(c, kVuFba, Ad(gs::FBA_1, gs::Fba(false)));

    // what the original leaves in its scratch registers: the last close, its constants, and per path the values
    // it built the middle records from
    set32(c.r[v0], fba.code);
    set32(c.r[v1], fba.element_bits);
    set32(c.r[a0], fba.num);
    set32(c.r[a1], fba.num_field);
    set32(c.r[a2], fba.at);
    set32(c.r[a3], Chain::kAddr);
    set32(c.r[t0], 0xFFFF0000u);
    set32(c.r[t4], Chain::kAddr);
    set32(c.r[t5], Chain::kAddr + 0x1d00u);
    set32(c.r[t6], vif::Stcycl(4, 4));
    set32(c.r[t7], 1u << 16 | 128u);
    set32(c.r[t8], 0xFFFF0000u);
    switch (kind) {
    case Fade:
        set32(c.r[t1], gs::TEST_1);
        set32(c.r[t2], first + 8);
        tick(c, 172);
        break;
    case Mode:
        set32(c.r[t1], test_at);
        set32(c.r[t2], gs::TEST_1);
        set32(c.r[t3], gs::ALPHA_1);
        tick(c, 170);
        break;
    case Opaque:
        set32(c.r[t1], test_at);
        set32(c.r[t2], gs::ALPHA_1);
        set32(c.r[t3], gs::TEST_1);
        tick(c, 167);
        break;
    }
}

// fn_248058(instance, tex0): pass-2 GS state of a fighter mesh, appended to the chain: the environment texture
// (TEX0, a1), its colour, and an additive blend. While the pause menu's light is on, the colour is scaled by
// 4e6 / (squared distance from the fighter to the light) and clamped to 10..255 (alpha 128..255).
PS2_DECOMP(00248058, ChainCharacterHighlightState) {
    using namespace ps2::vu0;
    StackFrame f(c, 64);
    f.sq(s2, 16);
    const std::uint64_t tex0 = c.r[a1].d[0];
    const CharacterInstance inst{c.r[a0].w[0]};
    f.sq(s0, 48);
    f.sq(s1, 32);

    const bool lit = rd<std::uint32_t>(kPauseLight) != 0;
    if (lit) {
        constexpr psf kLightScale(4.0e6f);
        static_assert(kLightScale.bits == 0x4A742400u);
        // vf1 = light - fighter, d2 = |vf1.xyz|^2
        const std::uint32_t lx = rd<std::uint32_t>(kPauseLightPos), ly = rd<std::uint32_t>(kPauseLightPos + 4);
        const std::uint32_t lz = rd<std::uint32_t>(kPauseLightPos + 8);
        c.vu0.vf[vf1] = vec4(lx, ly, lz, 0);
        lqc2(c, vf2, inst.object().get() + 0xa0);
        vsub(c, XYZW, vf1, vf1, vf2);
        constexpr std::uint32_t kBias = 0x4B000000u;  // 2^23: a float whose low mantissa bits are the 0..255 value
        c.vu0.vf[vf2] = vec4(kBias, kBias, kBias, kBias);
        constexpr std::uint32_t k255 = 0x437F0000u;
        c.vu0.vf[vf4] = vec4(k255, k255, k255, k255);
        constexpr std::uint32_t k10 = 0x41200000u, k128 = 0x43000000u;
        c.vu0.vf[vf3] = vec4(k10, k10, k10, k128);
        vmul(c, XYZ, vf5, vf1, vf1);
        vaddbc(c, X, vf5, vf5, vf5, Lane::y);
        vaddbc(c, X, vf5, vf5, vf5, Lane::z);
        const psf d2 = psf::from_bits(c.vu0.vf[vf5].w[0]);
        // the colour, unbiased, scaled, clamped, rebiased
        lqc2(c, vf1, kHighlightRgba);
        const psf scale = div(c, kLightScale, d2);
        vsub(c, XYZW, vf1, vf1, vf2);
        c.vu0.vf[vf5].sd[0] = static_cast<std::int32_t>(scale.bits);  // QMTC2 of the GPR that MFC1 filled
        vmulbc(c, XYZW, vf1, vf1, vf5, Lane::x);
        vmini(c, XYZW, vf1, vf1, vf4);
        vmax(c, XYZW, vf1, vf1, vf3);
        vadd(c, XYZW, vf1, vf1, vf2);

        // what the vector setup leaves behind (r8/r9: their upper halves survive the later 32-bit writes)
        set_fpr(c, 0, scale);
        set_fpr(c, 1, d2);
        c.f[2] = lz;
        c.f[3] = 0;
        set32(c.r[at], kLightScale.bits);
        c.r[t0].d[1] = c.vu0.vf[vf5].d[1];
        c.r[t1].d[1] = 0;
    } else {
        lqc2(c, vf1, kHighlightRgba);
    }
    sqc2(c, vf1, f.at(0));  // the colour goes out through the stack

    const Chain chain;
    const std::uint32_t first = chain.ptr;
    chain.unpack_qword(c, kVuHighlightRgba, Qword{{c.vu0.vf[vf1].w[0], c.vu0.vf[vf1].w[1], c.vu0.vf[vf1].w[2], c.vu0.vf[vf1].w[3]}});
    chain.unpack_qword(c, kVuHighlightTex0, Ad(gs::TEX0_1, tex0));
    chain.unpack_qword(c, kVuFba, Ad(gs::FBA_1, gs::Fba(false)));

    Chain::Closed last{};
    std::uint32_t at_p8 = 0;
    const bool normal = inst.draw_mode().get() == 0;
    const bool by_dest_alpha = !normal && rd<std::uint32_t>(kHighlightBlend) != 0;
    if (normal) {
        chain.unpack_qword(c, kVuHighlightTest, Ad(gs::TEST_1, kHighlightTest));
        at_p8 = chain.ptr + 8;
        last = chain.unpack_qword(c, kVuHighlightAlpha, Ad(gs::ALPHA_1, AddBlend(rd<std::uint32_t>(kHighlightFix))));
    } else {
        chain.unpack_qword(c, kVuHighlightAlpha, Ad(gs::ALPHA_1, by_dest_alpha ? kAddByDestAlpha : AddBlend(32)));
        last = chain.unpack_qword(c, kVuHighlightTest, Ad(gs::TEST_1, kFadeTest));
    }
    f.lq(s0, 48);
    f.lq(s1, 32);
    f.lq(s2, 16);
    f.pop();

    // what the original leaves in its scratch registers
    set32(c.r[v0], last.code);
    set32(c.r[a1], last.num_field);
    set32(c.r[a2], last.at);
    c.r[t5].sd[0] = static_cast<std::int64_t>(tex0) >> 32;
    c.r[t6].sd[0] = static_cast<std::int32_t>(tex0);
    set32(c.r[t7], Chain::kAddr);
    set32(c.r[t8], vif::Stcycl(4, 4));
    set32(c.r[t9], Chain::kAddr + 0x1d00u);
    if (normal) {
        set32(c.r[v1], last.element_bits);
        set32(c.r[a0], last.num);
        set32(c.r[a3], at_p8);
        set32(c.r[t0], vif::Unpack(vif::V4_32, kVuHighlightAlpha));
        set32(c.r[t1], gs::TEST_1);
        set32(c.r[t2], kHighlightFix & 0xFFFF0000u);
        set32(c.r[t3], 0x68);
        set32(c.r[t4], gs::ALPHA_1);
        tick(c, lit ? 277 : 222);
    } else {
        set32(c.r[v1], last.num);
        set32(c.r[a0], last.element_bits);
        set32(c.r[a3], Chain::kAddr);
        if (by_dest_alpha) {
            set32(c.r[t0], gs::ALPHA_1);
            set32(c.r[t1], vif::Unpack(vif::V4_32, kVuHighlightTex0));
        } else {
            set32(c.r[t0], 32);
            set32(c.r[t1], 0x68);
        }
        set32(c.r[t2], vif::Unpack(vif::V4_32, kVuFba));
        set32(c.r[t3], first + 24);
        set32(c.r[t4], gs::TEX0_1);
        tick(c, lit ? (by_dest_alpha ? 282 : 281) : (by_dest_alpha ? 227 : 226));
    }
}
