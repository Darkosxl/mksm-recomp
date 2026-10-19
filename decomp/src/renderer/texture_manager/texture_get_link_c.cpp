// int texture_get_link_c(TextureManager *tm, int slot) at 0x0026DEC0 (TextureManager.cpp).
// The texture linked to `slot` as link C (texture_set_link_c), -1 when it has none. The character renderer
// (ps2render.cpp) takes the first material texture that has one, then reads the link's parameters.
#include "../../texture/texture_manager.hpp"

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp::texture;

PS2_DECOMP(0026DEC0, texture_get_link_c) {
    const TextureSlot tex{TextureManager{c.r[a0].w[0]}.slots + TextureManager::scaled(c, a1, c.r[a1].w[0])};
    set32(c.r[v1], tex.addr);
    const bool has_link = tex.flags & kHasLinkC;
    if (has_link) c.r[v0].d[0] = tex.link_bc;
    else c.r[v0].sd[0] = -1;
    tick(c, 8 + 3);
}
