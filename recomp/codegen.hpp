#pragma once

#include "analysis.hpp"
#include "elf.hpp"
#include "snr2.hpp"

#include <cstdint>
#include <set>
#include <string>
#include <utility>
#include <vector>

namespace recomp {

struct CodegenOptions {
    std::string output;
    std::uint32_t unit_bits = 14;
    std::set<std::uint32_t> probes;
    // EE function entries replaced at run time by hand-written C++ (decomp/README.md): each one's entry calls
    // ps2::decomp_enter() while its hook is on. Main program only; units without one are generated unchanged.
    std::set<std::uint32_t> overrides;
    // Heads of wait loops (a self-loop block of loads and ALU ops whose every iteration computes the same values until
    // preempt() runs events, e.g. polling a device register for vblank): the backward branch charges, at once, the
    // iterations left before the budget runs out, so the loop reaches preempt() at the same budget without spinning.
    // Main program only; each head is checked (codegen.cpp idle_cost) and refused if the loop does not qualify.
    std::set<std::uint32_t> idle;
};

struct Translation {
    const Image *image{};
    Program *program{};
    const Links *links{};
    std::string prefix;
    bool relocatable{};
    std::string name;
    std::uint32_t size{};
    std::vector<std::pair<std::uint32_t, std::uint32_t>> checks;
};

void generate(const std::vector<Translation> &translations, const CodegenOptions &options);

}
