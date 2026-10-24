// Debug trace, not a decompilation: void fn_306078(int fighter, int state) at 0x00306078, the fighter set-state entry
// (remap FUN_002E9970, core FUN_00303340 writes fighter +0x24/+0x20/+0x1C, then the state's frame events). Fighter
// i is the struct at 0x005E6B40 + i * 0x33C0 (group: u16 at +0x1E0E).
//
// With PS2_DECOMP=306078 every call is logged, then the recompiled function runs unchanged (this hook off for the
// one call), so the machine state is exactly the recompiled one. Output: PS2_TRACE_STATES=<file> (default stderr),
// one line per call: frame, fighter index, group, current state, requested state, return address (the caller).
#include "ps2/decomp.hpp"
#include "ps2/system.hpp"

#include <cstdio>
#include <cstdlib>

namespace {

using namespace ps2;
using namespace ps2::gpr;

constexpr std::uint32_t kSelf = 0x00306078u;
constexpr std::uint32_t kFighters = 0x005E6B40u, kFighterSize = 0x33C0u;

std::FILE *out() {
    static std::FILE *f = [] {
        const char *path = std::getenv("PS2_TRACE_STATES");
        std::FILE *o = path && *path ? std::fopen(path, "w") : nullptr;
        return o ? o : stderr;
    }();
    return f;
}

}

PS2_DECOMP(00306078, fighter_state_trace) {
    const std::int32_t i = static_cast<std::int32_t>(c.r[a0].w[0]);
    const std::uint32_t f = kFighters + static_cast<std::uint32_t>(i) * kFighterSize;
    std::fprintf(out(), "%llu fighter %d group %d state %d -> %d ra %08X\n", static_cast<unsigned long long>(frame_count()), i,
                 static_cast<int>(rd<std::int16_t>(f + 0x1E0E)), static_cast<int>(rd<std::int32_t>(f + 0x24)),
                 static_cast<int>(c.r[a1].w[0]), c.r[ra].w[0]);
    std::fflush(out());
    decomp::hook_00306078.enabled = false;
    tail(c, kSelf);
    decomp::hook_00306078.enabled = true;
}
