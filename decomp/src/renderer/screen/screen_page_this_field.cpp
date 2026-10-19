// int screen_page_this_field(ScreenBuffers *s) at 0x00275260.
// The frame buffer page the screen effects (ScreenCopy.cpp) and the character renderer use for the current field,
// as a texture base: with field double-buffering (both mode words zero) +0x2a on odd fields and +0x2c on even ones,
// otherwise always +0x2c. screen_page_other_field (0x002752B0) gives the other buffer.
#include "screen_buffers.hpp"

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp;

PS2_DECOMP(00275260, screen_page_this_field) {
    const u32 s = c.r[a0].w[0];
    set32(c.r[v0], rd<u32>(field_addr(s, offsetof(ScreenBuffers, mode_00))));
    tick(c, 3);
    bool fixed = c.r[v0].w[0] != 0;
    if (!fixed) {
        set32(c.r[v0], rd<u32>(field_addr(s, offsetof(ScreenBuffers, mode_04))));
        tick(c, 3);
        fixed = c.r[v0].w[0] != 0;
    }
    std::size_t page = offsetof(ScreenBuffers, page_2c);
    if (!fixed) {
        set32(c.r[v0], (kOdev + 0x8000u) & 0xFFFF0000u);  // lui v0, %hi(odev)
        set32(c.r[v1], rd<u32>(kOdev));
        tick(c, 4);
        if (c.r[v1].w[0] != 0) page = offsetof(ScreenBuffers, page_2a);
    }
    c.r[v0].sd[0] = rd<s16>(field_addr(s, page));
    tick(c, 3);
}
