#pragma once

// Helpers for the guest struct layouts in decomp/include: the structs give sizes and offsets only, the data stays in
// emulated memory and is read and written with the typed accessors of ps2/decomp.hpp (rd/wr).
#include "ps2/decomp.hpp"

#include <cstddef>
#include <cstdint>

namespace decomp {

using u8 = std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;
using s16 = std::int16_t;

// guest address of a field: field_addr(slot, offsetof(TextureSlot, flags_16))
constexpr u32 field_addr(u32 base, std::size_t offset) { return base + static_cast<u32>(offset); }

}
