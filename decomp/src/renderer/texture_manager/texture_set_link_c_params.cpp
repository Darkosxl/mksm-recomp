// void texture_set_link_c_params(TextureManager *tm, int slot, float p0, float p1, float p2, float p3) at 0x0026DF80
// (TextureManager.cpp). Character setup (ps2Setup.cpp) stores the four parameters of a link C right after
// texture_set_link_c; the character renderer reads them back (0x0026DF48) when it draws the linked texture.
#include "../../texture/texture_manager.hpp"

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp::texture;

PS2_DECOMP(0026DF80, texture_set_link_c_params) {
    set32(c.r[v1], TextureSlot::kSize);  // the multiplier register, left as it is
    const TextureSlot tex{TextureManager{c.r[a0].w[0]}.slots + TextureManager::scaled(c, a1, c.r[a1].w[0])};
    set32(c.r[v0], tex.addr);
    for (std::uint32_t i = 0; i < 4; ++i) tex.link_param(i) = c.f[12 + i];  // raw bits, as SWC1
    tick(c, 10);
}
