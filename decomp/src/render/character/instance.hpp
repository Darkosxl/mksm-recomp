#pragma once

// The character renderer's per-instance record (Ps2/Renderer/Character/ps2render.cpp): what the 3-pass and 1-pass
// fighter draws (fn_246cf0, fn_249060) hand to their constant packers. A view over guest RAM like texture_manager.hpp:
// reading a member is a load, assigning it a store. Only the members the decompiled functions touch are named.
#include "../../texture/texture_manager.hpp"  // Field

#include <cstdint>

namespace decomp::character {

using texture::Field;

struct CharInstance {
    std::uint32_t addr;
    Field<std::uint32_t> model{addr + 0x18};          // the model; model + 0xa0 is its light set (fn_23db48)
    Field<std::uint32_t> mesh{addr + 0x2c};           // the mesh being drawn (fn_244368: its light rig, +0x20/+0x3c)
    Field<std::uint32_t> skin_texture{addr + 0x1004};  // texture of pass 1: a slot, or relative to the character's
    Field<std::uint32_t> texture_upload{addr + 0x1008};  // argument of the TextureManager upload (fn_26bcf8)
    Field<std::uint32_t> texture_id{addr + 0x100c};   // the texture this instance needs resident
    Field<std::uint32_t> texture_slot_mode{addr + 0x1018};  // 2: skin_texture is an absolute slot
    Field<std::uint32_t> wants_texture{addr + 0x101c};  // nonzero: texture_id must be uploaded before the draw
    static constexpr std::uint32_t kHighlightProjector = 0x1060;  // 4x4: world normal -> pass-2 UV (VU1 mem[28..31])
};

// The render state block at 0x4f4b40 (fn_241410's R)
inline constexpr std::uint32_t kRender = 0x004f4b40u;
inline constexpr std::uint32_t kRenderBuffer = kRender + 0x228;  // 0x4f4d68: which half of the double buffers is built

// TextureManager * (the global the texture code passes as `this`)
inline constexpr std::uint32_t kTextureManagerPtr = 0x004efe94u;

}
