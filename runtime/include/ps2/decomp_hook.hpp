#pragma once

// The part of the decomp runtime (ps2/decomp.hpp, decomp/README.md) that generated units with a decompiled function
// see. eerecomp --overrides puts, at each listed function's entry label,
//
//   if (::decomp::hook_XXXXXXXX.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_XXXXXXXX, depth)) return; }
//
// and the decompiled function's source defines decomp::hook_XXXXXXXX with PS2_DECOMP(XXXXXXXX, name).
#include "ps2/cpu.hpp"

#include <cstdint>

namespace ps2 {

struct DecompFn {
    using Body = void (*)(Cpu &);
    DecompFn(std::uint32_t addr, const char *name, Body body);

    std::uint32_t addr;
    const char *name;
    Body body;
    // read by the generated hook. Starts true so the first entry configures the hooks from the environment
    // (decomp_configure); afterwards true only while the function is decompiled-on or being recorded
    bool on = true;
    bool enabled = false;            // PS2_DECOMP: run body instead of the recompiled code
    bool record = false;             // PS2_DIFFTEST_RECORD: capture call contexts at entry
    std::uint32_t entries = 0;       // entries seen while recording
    std::uint32_t recorded = 0;      // contexts written
};

// Called at a hooked function's entry. Runs the decompiled body when the function is on and returns true: c.pc then
// holds where execution continues (the return address, or the resume point if control left the function early).
// Returns false to run the recompiled body.
bool decomp_enter(Cpu &c, DecompFn &f, std::uint32_t depth);

}
