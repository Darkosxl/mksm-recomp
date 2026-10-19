// void texture_set_link_b(TextureManager *tm, int owner, int linked) at 0x0026DE10 (TextureManager.cpp).
// Character setup (ps2Setup.cpp, the type-9 records of a model's setup data) links texture `owner` to texture
// `linked` as link B; the character renderer finds it with texture_get_link_b.
#include "texture_manager.hpp"

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp;

PS2_DECOMP(0026DE10, texture_set_link_b) {
    const u32 manager = c.r[a0].w[0], owner = c.r[a1].w[0], linked = c.r[a2].w[0];
    const u32 owner_slot = texture_slots(manager) + texture_slot_offset(c, a1, owner);
    const u32 linked_offset = texture_slot_offset(c, t0, linked);  // HI/LO keep this product
    set32(c.r[a3], owner_slot);

    c.r[v0].d[0] = rd<u16>(field_addr(owner_slot, offsetof(TextureSlot, flags_16))) | kTexHasLinkB;
    wr<u16>(field_addr(owner_slot, offsetof(TextureSlot, link_248)), static_cast<u16>(linked));
    wr<u16>(field_addr(owner_slot, offsetof(TextureSlot, flags_16)), c.r[v0].h[0]);

    // the array pointer is read again after the stores, and a texture linked to itself gets both bits
    const u32 slots = texture_slots(manager);
    set32(c.r[v1], slots);
    const u32 linked_slot = slots + linked_offset;
    set32(c.r[t0], linked_slot);
    c.r[v0].d[0] = rd<u16>(field_addr(linked_slot, offsetof(TextureSlot, flags_16))) | kTexIsLinkB;
    wr<u16>(field_addr(linked_slot, offsetof(TextureSlot, flags_16)), c.r[v0].h[0]);
    tick(c, 16);
}
