// The Z buffer of the screen setup (screen_buffers.hpp), for the GS ZBUF register: the mesh packers (fn_236f30,
// fn_237660) and the screen effects (ScreenCopy.cpp) build ZBUF_1/ZBUF_2 as zbp | zpsm << 24 from these two.
// Both read the one ScreenBuffers object directly; a0 (passed by the callers) is not used.
#include "screen_buffers.hpp"

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp;

namespace {

// lh v0, %lo(field)(v1) after lui v1, %hi(field)
void load_field(Cpu &c, std::size_t offset) {
    const u32 field = field_addr(kScreenBuffers, offset);
    set32(c.r[v1], (field + 0x8000u) & 0xFFFF0000u);
    c.r[v0].sd[0] = rd<s16>(field);
    tick(c, 4);
}

}

// short screen_zbuffer_page() at 0x00275300: the Z buffer's base page (ZBUF.ZBP).
PS2_DECOMP(00275300, screen_zbuffer_page) { load_field(c, offsetof(ScreenBuffers, zbp_2e)); }

// short screen_zbuffer_format() at 0x002753A0: the Z buffer's pixel format (ZBUF.PSM).
PS2_DECOMP(002753A0, screen_zbuffer_format) { load_field(c, offsetof(ScreenBuffers, zpsm_28)); }
