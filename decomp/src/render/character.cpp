// Ps2/Renderer/Character/ps2render.cpp area (the setter sits in the ps2render module; its only reader is the
// character renderer fn_2357d8)
#include "ps2/decomp.hpp"

using namespace ps2::gpr;

namespace {
constexpr std::uint32_t kCharRenderFlag = 0x004F4C58u;
}

// fn_225fc0(on): sets the ps2render flag at 0x4F4C58 that the character renderer (fn_2357d8) tests. Game code
// (GameMain.cpp, GameMapSetup.cpp and two other callers) sets it to 1 or 0 from the answer of fn_1667a8. Not a
// return value: v0 is left holding the address's upper half (lui).
PS2_DECOMP(00225FC0, SetCharRenderFlag) {
    ps2::set32(c.r[v0], kCharRenderFlag & 0xFFFF0000u);
    ps2::st32(kCharRenderFlag, c.r[a0].w[0]);
    ps2::tick(c, 4);
}
