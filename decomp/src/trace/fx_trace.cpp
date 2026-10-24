// Debug trace, not a decompilation: pass-through hooks on the functions a fighter's sound and effect frame events go
// through, for checking whether an event found its data (the Chameleon donor moves). Each one logs its arguments,
// runs the recompiled function unchanged (its hook off for the one call) and logs what it returned, so the machine
// state is exactly the recompiled one.
//   0x0031AE78  sound cue lookup (event 288: every loaded bank, a1 = -1)
//   0x002E9700  event 114 (effects) handler
//   0x002CDDB8, 0x00120B18, 0x002C9A60  the effect build chain below it
//   0x002D8040  effect definition lookup (bank, index, out): 0 = the bank has no such index
//   0x001CF518  load a group's sound bank into a slot (group, slot)
//   0x003195F8  load a sound bank file into a slot
// With PS2_DECOMP=<their addresses> each call is logged to PS2_TRACE_FX=<file> (PS2_TRACE_FX= empty: stderr): frame, function,
// a0-a3, the caller (ra), then v0 when it returned ("left" when control left it, e.g. a thread switch). Without
// PS2_TRACE_FX they only tail-call the function (PS2_DECOMP=all, difftest).
#include "ps2/decomp.hpp"
#include "ps2/system.hpp"

#include <cstdio>
#include <cstdlib>

namespace {

using namespace ps2;
using namespace ps2::gpr;

std::FILE *out() {
    static std::FILE *f = [] {
        const char *path = std::getenv("PS2_TRACE_FX");
        std::FILE *o = path && *path ? std::fopen(path, "w") : nullptr;
        return o ? o : path ? stderr : nullptr;
    }();
    return f;
}

void trace(Cpu &c, DecompFn &hook, const char *name) {
    const std::uint32_t ra_ = c.r[ra].w[0];
    hook.enabled = false;
    if (!out()) {
        tail(c, hook.addr);
        hook.enabled = true;
        return;
    }
    std::fprintf(out(), "%llu %s(%08X, %08X, %08X, %08X) ra %08X", static_cast<unsigned long long>(frame_count()), name,
                 c.r[a0].w[0], c.r[a1].w[0], c.r[a2].w[0], c.r[a3].w[0], ra_);
    const bool back = call(c, hook.addr, Ra{ra_});
    hook.enabled = true;
    if (back) std::fprintf(out(), " -> %08X\n", c.r[v0].w[0]);
    else std::fprintf(out(), " -> left\n");
    std::fflush(out());
}

}

PS2_DECOMP(0031AE78, fx_trace_cue) { trace(c, decomp::hook_0031AE78, "cue"); }
PS2_DECOMP(002E9700, fx_trace_ev114) { trace(c, decomp::hook_002E9700, "ev114"); }
PS2_DECOMP(002CDDB8, fx_trace_2cddb8) { trace(c, decomp::hook_002CDDB8, "fx2cddb8"); }
PS2_DECOMP(00120B18, fx_trace_120b18) { trace(c, decomp::hook_00120B18, "fx120b18"); }
PS2_DECOMP(002C9A60, fx_trace_2c9a60) { trace(c, decomp::hook_002C9A60, "fx2c9a60"); }
PS2_DECOMP(002D8040, fx_trace_def) { trace(c, decomp::hook_002D8040, "fxdef"); }
PS2_DECOMP(001CF518, fx_trace_bank_group) { trace(c, decomp::hook_001CF518, "bankgroup"); }
PS2_DECOMP(003195F8, fx_trace_bank_file) { trace(c, decomp::hook_003195F8, "bankfile"); }
