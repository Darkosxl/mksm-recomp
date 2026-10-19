// Ps2/Renderer/Character/ps2render.cpp
#include "../instance.hpp"
#include "../vif.hpp"
#include "../../texture/texture_manager.hpp"

#include "ps2/decomp.hpp"
#include "ps2/decomp_vu0.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using ps2::vu0::gather4;
using namespace decomp::render;
using decomp::texture::TextureManager;

constexpr std::uint32_t kPackLights = 0x0023db48u;   // fn_23db48(inst, lights, origin): light directions and colours
constexpr std::uint32_t kGetTex0 = 0x0026d2e8u;      // TextureManager::GetTex0(tm, slot)
constexpr std::uint32_t kPackBones = 0x00247bd8u;    // fn_247bd8(inst): bone matrices, VU1 mem[0x21..]
constexpr std::uint32_t kPackPass1 = 0x00248058u;    // fn_248058(inst, tex0): pass-1 A+D, mem[0x20], 0x25-0x27, 0x2d
constexpr std::uint32_t kPackPasses23 = 0x00248900u; // fn_248900(inst): passes 2 and 3, mem[0x28..0x2c]

constexpr std::uint32_t kProjection = 0x00660f20u;     // P: world -> screen (VU1 mem[0..3])
constexpr std::uint32_t kShadeProjector = 0x006634a0u; // world position -> pass-3 UV (mem[24..27])
constexpr std::uint32_t kLightOrigin = 0x00629aa0u;    // +0x24/+0x2c/+0x34: an integer position, the lights' origin

// the DIRECT block's GS state: TEX1_1 bilinear, CLAMP_1 clamp/clamp
constexpr std::uint64_t kTex1Bilinear = gs::Tex1{.mmag = gs::Tex1::kLinear, .mmin = gs::Tex1::kLinear}.bits();
constexpr std::uint64_t kClampBoth = gs::Clamp(gs::CLAMP, gs::CLAMP);
static_assert(kTex1Bilinear == 0x60 && kClampBoth == 5);

// pass-1 TEX0 as the skin is drawn: TFX = MODULATE, TCC = RGB (the slot's own TEX0 with bits 34-36 cleared)
constexpr std::uint64_t kTex0KeepTcc = ~(1ull << 34);
constexpr std::uint64_t kTex0KeepTfx = ~(3ull << 35);

}

// fn_246918(Model *model): the per-draw VU1 constants and GS state of a character instance drawn by the
// instance path (fn_249060, lists t=1/t=2): a DIRECT block (FBA_1 = 0, TEX1_1 bilinear, CLAMP_1 clamp/clamp), the
// lights (fn_23db48), then when [0x4f4c48] is set P and the two pass projectors as UNPACKs (mem[0..3], mem[28..31]
// from the instance, mem[24..27]), and the skin's TEX0 to the bone and pass packers.
PS2_DECOMP(00246918, PackCharInstanceConstants) {
    const Chain ch;
    StackFrame f(c, 0x40);
    set32(c.r[v0], 0x00580000u);
    f.sq(s0, 0x30);
    set32(c.r[v1], kCharAdGifTag);
    f.sq(s1, 0x20);
    set32(c.r[a2], 0x00660000u);
    f.sd(ra, 0x10);
    c.r[s1].d[0] = c.r[a0].d[0];
    const Model model{c.r[s1].w[0]};
    c.r[a1].d[0] = ld64(kCharAdGifTag);
    c.r[s0].d[0] = c.r[a2].d[0];
    c.r[a3].d[0] = ld64(kCharAdGifTag + 8);
    set32(c.r[t1], Chain::kAddr);
    f.sd(a1, 0x00);  // a copy of the A+D GIF tag on the stack
    f.sd(a3, 0x08);

    // FLUSH, then NOPs until the next word is the last of a qword: the DIRECT code goes there, its GIF data aligned
    st32(ch.ptr, vif::Flush());
    set32(c.r[v0], ch.ptr + 4);
    ch.ptr = c.r[v0].w[0];
    set32(c.r[v1], vif::Flush());
    set32(c.r[a1], 0xfffffff0u);
    c.r[a1].d[0] &= c.r[v0].d[0];
    set32(c.r[a0], c.r[a1].w[0] + 12);
    c.r[v1].d[0] = c.r[a0].d[0] < c.r[v0].d[0] ? 1 : 0;
    set32(c.r[a1], c.r[a1].w[0] + 28);
    if (c.r[v1].d[0] != 0) c.r[a0].d[0] = c.r[a1].d[0];
    c.r[v0].d[0] = c.r[v0].d[0] < c.r[a0].d[0] ? 1 : 0;
    tick(c, 28);
    if (c.r[v0].d[0] != 0 && !pad_through_pointer(c, 0x00246988u, a0)) return;

    // DIRECT { GIF tag (A+D, EOP), FBA_1 = 0, TEX1_1 = bilinear, CLAMP_1 = clamp both }
    const std::uint32_t code = ch.ptr;
    ch.code = code;
    st32(code, vif::Direct(0));
    const std::uint32_t tag = code + 4;
    ch.gif_tag = tag;
    f.lq(v0, 0x00);
    st128(tag & ~15u, c.r[v0]);
    const std::uint64_t ad[3][2] = {{0, gs::FBA_1}, {kTex1Bilinear, gs::TEX1_1}, {kClampBoth, gs::CLAMP_1}};
    for (std::uint32_t i = 0; i < 3; ++i) {
        st64(tag + 16 * (i + 1), ad[i][0]);
        st64(tag + 16 * (i + 1) + 8, ad[i][1]);
    }
    const std::uint32_t end = tag + 64;
    ch.ptr = end;
    set32(c.r[t5], Chain::kAddr);
    set32(c.r[t0], gs::FBA_1);
    set32(c.r[t1], static_cast<std::uint32_t>(kTex1Bilinear));
    set32(c.r[t2], static_cast<std::uint32_t>(kClampBoth));
    set32(c.r[t3], gs::CLAMP_1);
    set32(c.r[t4], 2);  // FLG IMAGE, for the close
    set32(c.r[v1], tag);
    set32(c.r[a0], tag + 32);
    set32(c.r[a2], tag + 48);
    set32(c.r[a3], tag);
    const std::int32_t close = close_gif_tag_regs(c, tag, end, a2, a1);
    tick(c, 50 + close);
    ch.gif_tag = 0;
    set32(c.r[v1], ch.ptr);
    c.r[v0].d[0] = c.r[v1].d[0] & 12u;
    tick(c, 9);
    if (c.r[v0].d[0] != 0 && !pad_register_to_qword(c, 0x00246ab8u, v1)) return;
    ch.ptr = c.r[v1].w[0];
    const std::uint32_t qwc = direct_size(c.r[v1].w[0], code);
    set32(c.r[v0], qwc);
    set32(c.r[a1], code);
    set32(c.r[v1], ld32(code) + qwc);
    st32(code, c.r[v1].w[0]);
    ch.code = 0;

    // the lights, from the model's light set and the integer origin made float (x, y, z, 0)
    c.f[3] = 0;
    set32(c.r[a3], c.f[3]);
    c.f[1] = fp::cvt_s_w(ld32(kLightOrigin + 0x24));
    c.f[0] = fp::cvt_s_w(ld32(kLightOrigin + 0x2c));
    c.f[2] = fp::cvt_s_w(ld32(kLightOrigin + 0x34));
    set32(c.r[v0], c.f[1]);
    set32(c.r[v1], c.f[0]);
    set32(c.r[a2], c.f[2]);
    gather4(c, v0, v1, a2, a3);
    c.vu0.vf[1] = c.r[t0];
    c.r[a2] = c.vu0.vf[1];
    c.r[a0].d[0] = c.r[s1].d[0];
    set32(c.r[a1], model.bone(0).position());
    tick(c, 35);
    if (!call(c, kPackLights, Ra{0x00246b5cu})) return;

    // P and the projectors of passes 2 and 3
    set32(c.r[t6], RenderSettings::kAddr);
    set32(c.r[v1], RenderSettings{}.image_b);
    set32(c.r[v0], 0x004f0000u);
    tick(c, 5);
    if (c.r[v1].d[0] != 0) {
        const std::uint32_t p = ch.ptr;
        set32(c.r[t2], p);
        set32(c.r[t3], kMatrixUnpack);
        c.r[v1].d[0] = 0;
        unpack_matrix(c, p, kProjection, 0);
        unpack_matrix(c, p + 80, model.addr + Model::kHighlightProjector, 28);
        unpack_matrix(c, p + 160, kShadeProjector, 24);
        ch.ptr = p + 240;
        set32(c.r[t4], p + 80);
        set32(c.r[t5], p + 160);
        set32(c.r[t2], p + 240);
        set32(c.r[v0], kShadeProjector);
        set32(c.r[v1], 24);
        tick(c, 56);
    }

    // pass 1's texture: the skin slot, absolute or from the characters' first slot
    set32(c.r[v1], model.texture_mode);
    set32(c.r[v0], 2);
    tick(c, 4);
    if (c.r[v1].d[0] == c.r[v0].d[0]) {
        set32(c.r[a1], model.skin_texture);
        tick(c, 3);
    } else {
        set32(c.r[v1], RenderSettings{}.char_textures);
        set32(c.r[v0], model.skin_texture);
        set32(c.r[a1], c.r[v0].w[0] - c.r[v1].w[0]);
        tick(c, 3);
    }
    set32(c.r[v0], 0x004f0000u);
    set32(c.r[a0], ld32(TextureManager::kInstance));
    tick(c, 4);
    if (!call(c, kGetTex0, Ra{0x00246c88u})) return;
    c.r[v1].d[0] = kTex0KeepTfx;
    c.r[a1].d[0] = kTex0KeepTcc;
    c.r[s0].d[0] = c.r[v0].d[0] & kTex0KeepTfx & kTex0KeepTcc;
    c.r[a0].d[0] = c.r[s1].d[0];
    tick(c, 13);
    if (!call(c, kPackBones, Ra{0x00246cbcu})) return;
    c.r[a1].d[0] = c.r[s0].d[0];
    c.r[a0].d[0] = c.r[s1].d[0];
    tick(c, 4);
    if (!call(c, kPackPass1, Ra{0x00246cccu})) return;
    c.r[a0].d[0] = c.r[s1].d[0];
    tick(c, 3);
    if (!call(c, kPackPasses23, Ra{0x00246cd8u})) return;

    f.lq(s0, 0x30);
    f.lq(s1, 0x20);
    f.ld(ra, 0x10);
    f.pop();
    tick(c, 6);
}
