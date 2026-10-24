// Debug tool, not a decompilation: calls an EE function at a given frame, from the per-frame gameplay update
// fn_1d6808 at 0x001D6808 (map change, pause, actors). For experiments that need the game's own code path instead of
// a RAM poke, e.g. damage through the set-health function 0x286DB8 so that its health-band events fire.
//
// With PS2_DECOMP=1D6808 and PS2_CALL="<frame>:<addr>:<a0>:<a1>[;...]" (hex except the frame), each call runs once
// at the start of the update in that frame, with every GPR restored afterwards; then the recompiled update runs
// unchanged (this hook off for the one call). Not state-exact on the frames that call: the callee's own effects are
// the point. Each call is logged to stderr with v0.
// fn_1d6808 does not run in Versus; there PS2_DECOMP=1EB378 hooks the per-frame fighter update fn_1eb378 at
// 0x001EB378 (it walks the fighters from 0x5E6B40) the same way. With both on, whichever runs first in a frame calls.
#include "ps2/decomp.hpp"
#include "ps2/system.hpp"

#include <cstdio>
#include <cstdlib>
#include <vector>

namespace {

using namespace ps2;
using namespace ps2::gpr;

struct Call {
    unsigned long long frame;
    unsigned addr, a0, a1;
    bool done;
};

std::vector<Call> &calls() {
    static std::vector<Call> v = [] {
        std::vector<Call> out;
        if (const char *s = std::getenv("PS2_CALL"))
            for (const char *p = s; *p;) {
                Call k{};
                int n = 0;
                if (std::sscanf(p, "%llu:%x:%x:%x%n", &k.frame, &k.addr, &k.a0, &k.a1, &n) != 4) break;
                out.push_back(k);
                p += n;
                if (*p == ';') ++p;
            }
        return out;
    }();
    return v;
}

// the calls due this frame; false: control left (return at once)
bool run_calls(Cpu &c) {
    for (Call &k : calls()) {
        if (k.done || k.frame != frame_count()) continue;
        k.done = true;
        Reg128 saved[32];
        for (unsigned i = 0; i < 32; ++i) saved[i] = c.r[i];
        c.r[a0].d[0] = k.a0;
        c.r[a1].d[0] = k.a1;
        const bool back = call(c, k.addr);
        const std::uint32_t v = c.r[v0].w[0];
        for (unsigned i = 0; i < 32; ++i) c.r[i] = saved[i];
        std::fprintf(stderr, "[call] frame %llu %08X(%08X, %08X) -> %08X%s\n", k.frame, k.addr, k.a0, k.a1, v,
                     back ? "" : " (did not come back)");
        if (!back) return false;
    }
    return true;
}

}

PS2_DECOMP(001D6808, debug_call) {
    if (!run_calls(c)) return;
    decomp::hook_001D6808.enabled = false;
    tail(c, 0x001D6808u);
    decomp::hook_001D6808.enabled = true;
}

PS2_DECOMP(001EB378, debug_call_fighters) {
    if (!run_calls(c)) return;
    decomp::hook_001EB378.enabled = false;
    tail(c, 0x001EB378u);
    decomp::hook_001EB378.enabled = true;
}
