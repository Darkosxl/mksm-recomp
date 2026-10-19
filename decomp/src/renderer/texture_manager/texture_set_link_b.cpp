// void texture_set_link_b(TextureManager *tm, int owner, int linked) at 0x0026DE10 (TextureManager.cpp).
// Character setup (ps2Setup.cpp, the type-9 records of a model's setup data) links texture `owner` to texture
// `linked` as link B; the character renderer finds it with texture_get_link_b.
#include "../../texture/texture_manager.hpp"

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp::texture;

PS2_DECOMP(0026DE10, texture_set_link_b) {
    const TextureManager manager{c.r[a0].w[0]};
    const std::uint32_t owner = c.r[a1].w[0], linked = c.r[a2].w[0];
    const TextureSlot owner_slot{manager.slots + TextureManager::scaled(c, a1, owner)};
    const std::uint32_t linked_offset = TextureManager::scaled(c, t0, linked);  // HI/LO keep this product
    set32(c.r[a3], owner_slot.addr);

    c.r[v0].d[0] = static_cast<std::uint16_t>(owner_slot.flags) | kHasLinkB;
    owner_slot.link_bc = static_cast<std::uint16_t>(linked);
    owner_slot.flags = c.r[v0].h[0];

    // the array pointer is read again after the stores, and a texture linked to itself gets both bits
    const std::uint32_t slots = manager.slots;
    set32(c.r[v1], slots);
    const TextureSlot linked_slot{slots + linked_offset};
    set32(c.r[t0], linked_slot.addr);
    c.r[v0].d[0] = static_cast<std::uint16_t>(linked_slot.flags) | kIsLinkB;
    linked_slot.flags = c.r[v0].h[0];
    tick(c, 16);
}
