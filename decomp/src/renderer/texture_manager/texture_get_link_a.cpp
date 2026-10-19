// int texture_get_link_a(TextureManager *tm, int slot) at 0x0026DE50 (TextureManager.cpp).
// The texture linked to `slot` as link A, -1 when it has none. The character renderer (ps2render.cpp) sorts its
// draws by it and loads the linked texture along with the slot's own.
#include "texture_manager.hpp"

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp;

PS2_DECOMP(0026DE50, texture_get_link_a) {
    const u32 slot = texture_slots(c.r[a0].w[0]) + texture_slot_offset(c, a1, c.r[a1].w[0]);
    set32(c.r[v1], slot);
    const bool has_link = rd<u16>(field_addr(slot, offsetof(TextureSlot, flags_16))) & kTexHasLinkA;
    if (has_link) c.r[v0].d[0] = rd<u16>(field_addr(slot, offsetof(TextureSlot, link_246)));
    else c.r[v0].sd[0] = -1;
    tick(c, 8 + 3);
}
