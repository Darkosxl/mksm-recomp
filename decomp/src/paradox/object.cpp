// Paradox engine (paradox:general, no source path in the map): the game object, small accessors.
#include "ps2/decomp.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;

constexpr std::uint32_t kGroundY = 0xf4;  // float; the object's position is at +0x80 (y at +0x84)

}

// float fn_326140(Object *o): the height of the ground under the object, as fn_326150 sets it (snapped to the
// object's own y when within 1.0 of it). The fighter draw (fn_246cf0) compares it with o->y.
PS2_DECOMP(00326140, ObjectGetGroundY) {
    c.f[0] = ld32(c.r[a0].w[0] + kGroundY);
    tick(c, 3);
}
