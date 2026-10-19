// int texture_get_link_a(TextureManager *tm, int slot) at 0x0026DE50 (TextureManager.cpp).
// The texture linked to `slot` as link A, -1 when it has none. The character renderer (ps2render.cpp) sorts its
// draws by it and loads the linked texture along with the slot's own.
#include "../../texture/texture_manager.hpp"

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp::texture;

PS2_DECOMP(0026DE50, texture_get_link_a) {
    const TextureSlot tex{TextureManager{c.r[a0].w[0]}.slots + TextureManager::scaled(c, a1, c.r[a1].w[0])};
    set32(c.r[v1], tex.addr);
    const bool has_link = tex.flags & kHasLinkA;
    if (has_link) c.r[v0].d[0] = tex.link_a;
    else c.r[v0].sd[0] = -1;
    tick(c, 8 + 3);
}
