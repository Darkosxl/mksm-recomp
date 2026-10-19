#pragma once

// The frame-buffer setup the renderer's screen effects read (ScreenCopy.cpp and the character renderer): one object
// at 0x0067B758, read through the small getters at 0x00275260-0x002753A0. Guest layout (guest.hpp); fields are named
// by offset where their meaning is unknown.
#include "guest.hpp"

namespace decomp {

struct ScreenBuffers {
    u32 mode_00;            // either mode word nonzero: the two pages do not alternate with the field
    u32 mode_04;
    u8 unknown_08[0x2a - 0x08];
    s16 page_2a;            // frame buffer base pages (FBP, 2048-word units) of the two buffers
    s16 page_2c;
};
static_assert(offsetof(ScreenBuffers, mode_04) == 0x04);
static_assert(offsetof(ScreenBuffers, page_2a) == 0x2a);
static_assert(offsetof(ScreenBuffers, page_2c) == 0x2c);

// the game's interlace field flag `odev` (nonzero on odd fields)
inline constexpr u32 kOdev = 0x004F4D68u;

}
