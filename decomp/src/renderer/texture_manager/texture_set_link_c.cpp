// void texture_set_link_c(TextureManager *tm, int owner, int linked) at 0x0026DDD0 (TextureManager.cpp).
// Character setup (ps2Setup.cpp, the type-10 records of a model's setup data) links texture `owner` to texture
// `linked` as link C. texture_set_link_c_params stores the link's four parameters right after; the character
// renderer finds the link with texture_get_link_c.
#include "../../texture/texture_manager.hpp"

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp::texture;

PS2_DECOMP(0026DDD0, texture_set_link_c) {
    const std::uint32_t owner = c.r[a1].w[0], linked = c.r[a2].w[0];
    const std::uint32_t slots = TextureManager{c.r[a0].w[0]}.slots;
    const TextureSlot linked_slot{slots + TextureManager::scaled(c, v0, linked)};
    const TextureSlot owner_slot{slots + TextureManager::scaled(c, a1, owner)};  // HI/LO keep this product
    set32(c.r[t0], linked_slot.addr);
    set32(c.r[a3], owner_slot.addr);

    c.r[v1].d[0] = static_cast<std::uint16_t>(owner_slot.flags) | kHasLinkC;
    owner_slot.link_bc = static_cast<std::uint16_t>(linked);
    owner_slot.flags = c.r[v1].h[0];

    // read after the owner's store: a texture linked to itself gets both bits
    c.r[v0].d[0] = static_cast<std::uint16_t>(linked_slot.flags) | kIsLinkC;
    linked_slot.flags = c.r[v0].h[0];
    tick(c, 15);
}
