// ps2render: an object without a source path in the map, right after meshdraw.cpp (0x2655c0)
#include "ps2/decomp.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;

enum Outcode : std::uint32_t {
    kLeft = 1,    // px <= x0
    kRight = 2,   // px >= x1
    kTop = 4,     // py <= y0
    kBottom = 8,  // py >= y1
};

}

// Clip outcode of a projected vertex *t0 = (px, py) against the guard band (a0, a1)-(a2, a3), the screen plus a
// margin in GS 12.4 coordinates (globals 0x4F9040-0x4F904C). Edges count as outside; 0 = strictly inside. The mesh
// and quad drawers test the corners of a bounding box with it and skip objects whose corners are all outside.
// Compares all 64 bits of the argument registers, as the original's slt does.
PS2_DECOMP(002655C0, GuardBandOutcode) {
    const std::int64_t x0 = c.r[a0].sd[0], y0 = c.r[a1].sd[0], x1 = c.r[a2].sd[0], y1 = c.r[a3].sd[0];
    const gptr<std::int32_t> point{c.r[t0].w[0]};
    const std::int64_t px = point[0], py = point[1];

    std::uint64_t code = px <= x0 ? kLeft : 0;
    const std::uint64_t with_right = code | kRight;  // computed before the test (a2)
    if (x1 <= px) code |= kRight;
    if (py <= y0) code |= kTop;
    const std::uint64_t result = y1 <= py ? code | kBottom : code;

    c.r[v0].d[0] = result;
    c.r[v1].d[0] = px < x1;
    c.r[a0].d[0] = code;
    c.r[a1].d[0] = y0 < py;
    c.r[a2].d[0] = with_right;
    c.r[t1].d[0] = py < y1;
    tick(c, 15);
}
