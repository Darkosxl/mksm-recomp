#pragma once

// TextureManager (Ps2/Renderer/Texture/TextureManager.cpp): the renderer's table of loaded textures.
//
// The structs here are views of the game's objects in emulated RAM (ps2::Field): a view holds a guest address, and
// each member reads or writes guest memory through the same access paths as the recompiled loads and stores. So
//   const TextureSlot tex{c.r[a1].w[0]};
//   tex.tbw = (tex.width + 63) / 64;
// does a halfword load at +0x08 and a halfword store at +0x10, as the original does.
//
// This header lives in decomp/src so it counts towards the lockstep build id (cmake/build_id.cmake).
#include "ps2/decomp.hpp"

#include <cstdint>

namespace decomp::texture {

// GS pixel storage modes (TEX0.PSM) the texture code tests
enum Psm : std::uint16_t {
    PSMT8 = 0x13,
    PSMT4 = 0x14,
    PSMT8H = 0x1b,
    PSMT4HL = 0x24,
    PSMT4HH = 0x2c,
};

// TextureSlot::flags: links between two textures, set while a model is set up (ps2Setup.cpp). Each link kind has a
// bit on the texture that owns the link and a bit on the texture it names.
enum SlotFlags : std::uint16_t {
    kHasLinkA = 0x0008,  // `link_a` names a second texture, drawn as an extra blended pass (sort key of the draws)
    kIsLinkA = 0x0010,   // this slot is another slot's link A
    kHasLinkB = 0x0020,  // `link_bc` names the linked texture
    kIsLinkB = 0x0040,
    kHasLinkC = 0x0080,  // `link_bc` names the linked texture, link_param(0..3) hold four float parameters for it
    kIsLinkC = 0x0100,
};

// One texture of the manager's table (0x430 bytes).
struct TextureSlot {
    static constexpr std::uint32_t kSize = 0x430;

    std::uint32_t addr;
    ps2::Field<std::uint32_t> pixels{addr + 0x00};    // EE address of the texels
    ps2::Field<std::uint16_t> width{addr + 0x08};
    ps2::Field<std::uint16_t> height{addr + 0x0a};
    ps2::Field<std::uint16_t> psm{addr + 0x0c};       // Psm
    ps2::Field<std::uint16_t> cpsm{addr + 0x0e};      // pixel format of the palette (CLUT)
    ps2::Field<std::uint16_t> tbw{addr + 0x10};       // GS buffer width, in units of 64 texels
    ps2::Field<std::uint16_t> cbp{addr + 0x12};       // GS address of the palette, in 64-word blocks
    ps2::Field<std::uint16_t> flags{addr + 0x16};     // SlotFlags
    // nonzero: the 4/8-bit texels are stored pre-swizzled and go to GS memory as a PSMCT32 image (half the width,
    // half the height, a quarter at 4 bits)
    ps2::Field<std::uint32_t> swizzled{addr + 0x1c};
    ps2::Field<std::uint32_t> tbp{addr + 0x20};       // GS address of the texels, in 64-word blocks
    ps2::Field<std::uint32_t> clut{addr + 0x38};      // EE address of the palette
    ps2::Field<std::uint32_t> bpp{addr + 0x160};      // bits per texel; below 16 the texture has a palette
    ps2::Field<std::uint64_t> tex0{addr + 0x230};     // GS TEX0 register: base, width, format, size, CLUT
    ps2::Field<std::uint64_t> miptbp1{addr + 0x238};  // GS MIPTBP1 register: base and width of mip levels 1-3
    ps2::Field<std::uint16_t> link_a{addr + 0x246};   // slot number, valid when flags & kHasLinkA
    ps2::Field<std::uint16_t> link_bc{addr + 0x248};  // slot number, valid when flags & (kHasLinkB | kHasLinkC)

    // the four float parameters (raw bits) of link C (texture_set_link_c_params, 0x26DF80)
    ps2::Field<std::uint32_t> link_param(std::uint32_t i) const { return {addr + 0x180 + 4 * i}; }
};

struct TextureManager {
    static constexpr std::uint32_t kSlotCount = 321;

    std::uint32_t addr;
    ps2::Field<std::uint32_t> slots{addr + 0x20};  // the TextureSlot array

    // Slot i. The original indexes the array with MULT, which leaves i * 0x430 in HI/LO; so does this.
    TextureSlot slot(ps2::Cpu &c, std::uint32_t i) const { return {slots + scaled(c, i)}; }

    // i * sizeof(TextureSlot) as the original's MULT computes it (HI/LO set, the low word returned)
    static std::uint32_t scaled(ps2::Cpu &c, std::uint32_t i) {
        ps2::mmi::mult(c, 0, i, TextureSlot::kSize);
        return c.lo.w[0];
    }
    // the same with the R5900's three-operand MULT, which also leaves the product in rd
    static std::uint32_t scaled(ps2::Cpu &c, unsigned rd, std::uint32_t i) {
        scaled(c, i);
        c.r[rd].d[0] = c.lo.d[0];
        return c.r[rd].w[0];
    }
};

}
