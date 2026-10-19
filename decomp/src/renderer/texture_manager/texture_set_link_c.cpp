// void texture_set_link_c(TextureManager *tm, int owner, int linked) at 0x0026DDD0 (TextureManager.cpp).
// Character setup (ps2Setup.cpp, the type-10 records of a model's setup data) links texture `owner` to texture
// `linked` as link C. texture_set_link_c_params stores the link's four parameters right after; the character
// renderer finds the link with texture_get_link_c.
#include "texture_manager.hpp"

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp;

PS2_DECOMP(0026DDD0, texture_set_link_c) {
    const u32 owner = c.r[a1].w[0], linked = c.r[a2].w[0];
    const u32 slots = texture_slots(c.r[a0].w[0]);
    const u32 linked_slot = slots + texture_slot_offset(c, v0, linked);
    const u32 owner_slot = slots + texture_slot_offset(c, a1, owner);  // HI/LO keep this product
    set32(c.r[t0], linked_slot);
    set32(c.r[a3], owner_slot);

    c.r[v1].d[0] = rd<u16>(field_addr(owner_slot, offsetof(TextureSlot, flags_16))) | kTexHasLinkC;
    wr<u16>(field_addr(owner_slot, offsetof(TextureSlot, link_248)), static_cast<u16>(linked));
    wr<u16>(field_addr(owner_slot, offsetof(TextureSlot, flags_16)), c.r[v1].h[0]);

    // read after the owner's store: a texture linked to itself gets both bits
    c.r[v0].d[0] = rd<u16>(field_addr(linked_slot, offsetof(TextureSlot, flags_16))) | kTexIsLinkC;
    wr<u16>(field_addr(linked_slot, offsetof(TextureSlot, flags_16)), c.r[v0].h[0]);
    tick(c, 15);
}
