#pragma once

// TextureManager (c:/Projects/Ps2/Renderer/Texture/TextureManager.cpp): the renderer's table of loaded textures.
//
// Guest layouts (guest.hpp); fields are named by offset where their meaning is unknown.
#include "guest.hpp"

namespace decomp {

// flags_16: links between two textures, set while a character's model is set up (ps2Setup.cpp). Each link kind has
// a bit on the texture that owns the link and a bit on the texture it names.
enum TextureFlags : u16 {
    kTexHasLinkA = 0x0008,   // link_246 names the linked texture (sort key of the character draws)
    kTexIsLinkA = 0x0010,
    kTexHasLinkB = 0x0020,   // link_248 names the linked texture
    kTexIsLinkB = 0x0040,
    kTexHasLinkC = 0x0080,   // link_248 names the linked texture, params_180 holds four float parameters for it
    kTexIsLinkC = 0x0100,
};

// One texture: 0x430 bytes; the manager keeps 321 of them in one array.
struct TextureSlot {
    u8 unknown_000[0x16];
    u16 flags_16;            // TextureFlags
    u8 unknown_018[0x180 - 0x18];
    u32 params_180[4];       // link C parameters: four floats, raw bits
    u8 unknown_190[0x246 - 0x190];
    u16 link_246;            // slot index of link A
    u16 link_248;            // slot index of link B or C
    u8 unknown_24a[0x430 - 0x24a];
};
static_assert(sizeof(TextureSlot) == 0x430);
static_assert(offsetof(TextureSlot, flags_16) == 0x16);
static_assert(offsetof(TextureSlot, params_180) == 0x180);
static_assert(offsetof(TextureSlot, link_246) == 0x246);
static_assert(offsetof(TextureSlot, link_248) == 0x248);

struct TextureManager {
    u8 unknown_00[0x20];
    u32 slots_20;            // guest pointer to the TextureSlot array
};
static_assert(offsetof(TextureManager, slots_20) == 0x20);

inline u32 texture_slots(u32 manager) { return ps2::rd<u32>(field_addr(manager, offsetof(TextureManager, slots_20))); }

// index * sizeof(TextureSlot) the way the original computes it: the R5900's three-operand MULT, which leaves the
// product in rd and in HI/LO (both are part of the state the function leaves)
inline u32 texture_slot_offset(ps2::Cpu &c, unsigned rd, u32 index) {
    ps2::mmi::mult(c, 0, index, sizeof(TextureSlot));
    c.r[rd].d[0] = c.lo.d[0];
    return c.r[rd].w[0];
}

}
