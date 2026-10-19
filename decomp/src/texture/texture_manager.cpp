// TextureManager (Ps2/Renderer/Texture/TextureManager.cpp): small methods on the texture table. a0 is the
// TextureManager (this), a1 a slot number or a TextureSlot.
//
// Each function ends by setting the scratch registers to what the original leaves in them: callers ignore those
// values, but thread contexts and the state hash do not.
#include "texture_manager.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp::texture;

TextureManager self(const Cpu &c) { return {c.r[a0].w[0]}; }

}

// Computes a texture's GS buffer width (TBW) before its upload to GS memory: one unit per 64 texels, at least 1;
// the 4- and 8-bit palette formats get at least 2 unless the texture is square. Returns nothing (callers ignore v0).
PS2_DECOMP(0026CD50, TextureManager::ComputeBufferWidth) {
    const TextureSlot tex{c.r[a1].w[0]};
    c.r[a2].d[0] = c.r[a1].d[0];
    const std::uint16_t width = tex.width, psm = tex.psm;
    const std::uint32_t tbw = (width + 63u) / 64u;  // the compiler's bias for a negative sum is dead: width is u16
    tex.tbw = static_cast<std::uint16_t>(tbw);
    set32(c.r[a1], width + 63u);
    c.r[a3].d[0] = psm;
    c.r[v1].d[0] = tbw;
    tick(c, 14);

    // PSMT8/PSMT4 in one unsigned compare (a0 keeps its result), then the others one by one (a0 = psm, v0 = the
    // constant compared last)
    bool indexed = static_cast<std::uint32_t>(psm - PSMT8) < 2u;
    c.r[a0].d[0] = indexed;
    if (!indexed) {
        c.r[a0].d[0] = psm;
        static constexpr Psm kOthers[] = {PSMT8H, PSMT4HL, PSMT4HH};
        static constexpr std::int32_t kCycles[] = {4, 3, 3};
        for (int i = 0; i < 3 && !indexed; ++i) {
            c.r[v0].d[0] = kOthers[i];
            tick(c, kCycles[i]);
            indexed = psm == kOthers[i];
        }
    }

    if (indexed) {
        const bool narrow = tex.tbw < 2;
        c.r[v0].d[0] = narrow;
        if (!narrow) {
            tick(c, 6);
            return;
        }
        c.r[v1].d[0] = tex.width;
        tex.tbw = tex.width == tex.height ? 1 : 2;
        c.r[v0].d[0] = tex.tbw;
        tick(c, 12);
    } else if (tbw == 0) {
        tex.tbw = 1;
        c.r[v0].d[0] = 1;
        tick(c, 6);
    } else {
        tick(c, 4);
    }
}

// GS TEX0 register value of texture slot a1, for the VU1 draw packets that bind it.
PS2_DECOMP(0026D2E8, TextureManager::GetTex0) {
    const TextureSlot tex = self(c).slot(c, c.r[a1].w[0]);
    c.r[v0].d[0] = tex.tex0;
    c.r[a1].d[0] = c.lo.d[0];
    set32(c.r[v1], tex.addr);
    tick(c, 7);
}

// GS MIPTBP1 register value of texture slot a1 (where mip levels 1-3 live in GS memory).
PS2_DECOMP(0026D308, TextureManager::GetMipTbp1) {
    const TextureSlot tex = self(c).slot(c, c.r[a1].w[0]);
    c.r[v0].d[0] = tex.miptbp1;
    c.r[a1].d[0] = c.lo.d[0];
    set32(c.r[v1], tex.addr);
    tick(c, 7);
}

// Texture slot a1, or NULL when a1 is not a valid slot number.
PS2_DECOMP(0026D590, TextureManager::GetSlot) {
    if (c.r[a1].d[0] >= TextureManager::kSlotCount) {  // unsigned, all 64 bits: negative numbers are invalid too
        c.r[v0].d[0] = 0;
        tick(c, 6);
        return;
    }
    const std::uint32_t slots = self(c).slots;
    set32(c.r[v0], slots + TextureManager::scaled(c, c.r[a1].w[0]));  // &slots[a1]
    set32(c.r[v1], slots);
    tick(c, 9);
}

// Gives texture slot a1 a linked texture, slot a2, that the character renderer draws over it as an extra blended pass
// (set from a model's texture chunk). a1 records a2 and is flagged kHasLinked, a2 is flagged kIsLinked.
PS2_DECOMP(0026DD90, TextureManager::SetLinkedTexture) {
    const TextureManager mgr = self(c);
    const std::uint32_t from = c.r[a1].w[0], to = c.r[a2].w[0];
    const std::uint32_t from_offset = TextureManager::scaled(c, from);
    c.r[a1].d[0] = c.lo.d[0];
    const std::uint32_t to_offset = TextureManager::scaled(c, to);

    const TextureSlot a{mgr.slots + from_offset};
    a.linked = static_cast<std::uint16_t>(to);
    a.flags |= kHasLinked;
    const std::uint32_t slots = mgr.slots;  // reloaded after the stores, as the original does
    const TextureSlot b{slots + to_offset};
    b.flags |= kIsLinked;

    set32(c.r[a3], a.addr);
    set32(c.r[t0], b.addr);
    set32(c.r[v1], slots);
    c.r[v0].d[0] = b.flags;
    tick(c, 16);
}

// Reads the four parameters of texture slot a1's link C texture into *a2, *a3, *t0 and *t1 (raw float bits, copied
// through f0 and f1). The segment packer fn_23a280 uses them when it draws the linked texture as a second pass.
PS2_DECOMP(0026DF48, TextureManager::GetLinkParams) {
    set32(c.r[v1], TextureSlot::kSize);  // the multiplier register
    const TextureManager mgr = self(c);
    const std::uint32_t slots = mgr.slots;
    const std::uint32_t offset = TextureManager::scaled(c, c.r[a1].w[0]);
    c.r[a1].d[0] = c.lo.d[0];
    const TextureSlot tex{slots + offset};
    set32(c.r[v0], tex.addr);
    const unsigned out[4] = {a2, a3, t0, t1};
    for (std::uint32_t i = 0; i < 4; ++i) {
        std::uint32_t &f = c.f[i & 1];
        f = tex.link_param(i);
        st32(c.r[out[i]].w[0], f);
    }
    tick(c, 14);
}
