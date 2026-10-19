// Ps2/Renderer/Character/ps2render.cpp
#include "ps2/decomp.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;

constexpr psf kAngleUnits(4096.0f);  // a full turn
constexpr psf kTwoPi(6.28318548f);
static_assert(kAngleUnits.bits == 0x45800000u && kTwoPi.bits == 0x40C90FDBu, "the original's lui/ori constants");

}

// Converts an angle in radians (f12) to the game's 12-bit angle units (4096 per turn), brought once into
// (-2048, 2048]: one turn is added or subtracted at most.
PS2_DECOMP(0024C238, RadiansToAngle) {
    const psf scaled = div(c, fpr(c, 12) * kAngleUnits, kTwoPi);
    const std::int32_t raw = to_int(scaled);
    std::int32_t angle = raw;
    const bool below = angle < 2048;
    if (!below) angle = static_cast<std::int32_t>(static_cast<std::uint32_t>(angle) - 4096u);
    const std::int32_t up = static_cast<std::int32_t>(static_cast<std::uint32_t>(angle) + 4096u);
    const bool above = -2048 < angle;
    if (!above) angle = up;

    set_fpr(c, 12, scaled);
    set_fpr(c, 1, kAngleUnits);
    c.f[0] = static_cast<std::uint32_t>(raw);
    set32(c.r[at], kTwoPi.bits);
    set32(c.r[v0], static_cast<std::uint32_t>(angle));
    set32(c.r[v1], static_cast<std::uint32_t>(up));
    c.r[a0].d[0] = below;
    c.r[a1].d[0] = above;
    tick(c, 18);
}
