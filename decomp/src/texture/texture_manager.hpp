#pragma once

// TextureManager (Ps2/Renderer/Texture/TextureManager.cpp): the renderer's table of loaded textures.
//
// The structs here are views of the game's objects in emulated RAM: a view holds a guest address, and each member
// reads or writes guest memory through the same access paths as the recompiled loads and stores (ps2::rd/wr). So
//   const TextureSlot tex{c.r[a1].w[0]};
//   tex.tbw = (tex.width + 63) / 64;
// does a halfword load at +0x08 and a halfword store at +0x10, as the original does.
//
// This header lives in decomp/src (not a separate include folder) so it counts towards the lockstep build id
// (cmake/build_id.cmake hashes decomp/src only).
#include "ps2/decomp.hpp"

#include <cstdint>

namespace decomp::texture {

// One member of a guest struct: reading it is a load, assigning it a store.
template <class T>
class Field {
public:
    constexpr Field(std::uint32_t address) : addr_(address) {}
    Field(const Field &) = default;

    operator T() const { return ps2::rd<T>(addr_); }
    const Field &operator=(T v) const {
        ps2::wr<T>(addr_, v);
        return *this;
    }
    // copies the value, not the address
    const Field &operator=(const Field &o) const { return *this = static_cast<T>(o); }
    const Field &operator|=(T v) const { return *this = static_cast<T>(static_cast<T>(*this) | v); }

    std::uint32_t address() const { return addr_; }

private:
    std::uint32_t addr_;
};

// GS pixel storage modes (TEX0.PSM) the texture code tests
enum Psm : std::uint16_t {
    PSMT8 = 0x13,
    PSMT4 = 0x14,
    PSMT8H = 0x1b,
    PSMT4HL = 0x24,
    PSMT4HH = 0x2c,
};

// TextureSlot::flags
enum SlotFlags : std::uint16_t {
    kHasLinked = 0x0008,  // `linked` names the slot of a second texture, drawn as an extra blended pass
    kIsLinked = 0x0010,   // this slot is another slot's `linked` texture
};

// One texture of the manager's table (0x430 bytes).
struct TextureSlot {
    static constexpr std::uint32_t kSize = 0x430;

    std::uint32_t addr;
    Field<std::uint32_t> pixels{addr + 0x00};    // EE address of the texels
    Field<std::uint16_t> width{addr + 0x08};
    Field<std::uint16_t> height{addr + 0x0a};
    Field<std::uint16_t> psm{addr + 0x0c};       // Psm
    Field<std::uint16_t> cpsm{addr + 0x0e};      // pixel format of the palette (CLUT)
    Field<std::uint16_t> tbw{addr + 0x10};       // GS buffer width, in units of 64 texels
    Field<std::uint16_t> cbp{addr + 0x12};       // GS address of the palette, in 64-word blocks
    Field<std::uint16_t> flags{addr + 0x16};     // SlotFlags
    // nonzero: the 4/8-bit texels are stored pre-swizzled and go to GS memory as a PSMCT32 image (half the width,
    // half the height, a quarter at 4 bits)
    Field<std::uint32_t> swizzled{addr + 0x1c};
    Field<std::uint32_t> tbp{addr + 0x20};       // GS address of the texels, in 64-word blocks
    Field<std::uint32_t> clut{addr + 0x38};      // EE address of the palette
    Field<std::uint32_t> bpp{addr + 0x160};      // bits per texel; below 16 the texture has a palette
    Field<std::uint64_t> tex0{addr + 0x230};     // GS TEX0 register: base, width, format, size, CLUT
    Field<std::uint64_t> miptbp1{addr + 0x238};  // GS MIPTBP1 register: base and width of mip levels 1-3
    Field<std::uint16_t> linked{addr + 0x246};   // slot number, valid when flags & kHasLinked

    // the four float parameters (raw bits) of the texture linked as "link C" (texture_set_link_c_params, 0x26DF80)
    Field<std::uint32_t> link_param(std::uint32_t i) const { return {addr + 0x180 + 4 * i}; }
};

struct TextureManager {
    static constexpr std::uint32_t kSlotCount = 321;

    std::uint32_t addr;
    Field<std::uint32_t> slots{addr + 0x20};  // the TextureSlot array

    // Slot i. The original indexes the array with MULT, which leaves i * 0x430 in HI/LO; so does this.
    TextureSlot slot(ps2::Cpu &c, std::uint32_t i) const { return {slots + scaled(c, i)}; }

    // i * sizeof(TextureSlot) as the original's MULT computes it (HI/LO set, the low word returned)
    static std::uint32_t scaled(ps2::Cpu &c, std::uint32_t i) {
        ps2::mmi::mult(c, 0, i, TextureSlot::kSize);
        return c.lo.w[0];
    }
};

}
