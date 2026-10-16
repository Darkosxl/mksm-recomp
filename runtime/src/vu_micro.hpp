#pragma once

#include "ps2/cpu.hpp"

#include <cstdint>

namespace ps2::state {
class Stream;
}

namespace ps2 {
class Hash64;
}

namespace ps2::vu {

void state(ps2::state::Stream &s);
// lockstep hash: VU0/VU1 code and data memory, TOP/ITOP and pending XGKICK packets (VU1 registers: regs(1))
void hash(ps2::Hash64 &h);

void reset();
void run(int unit, std::uint32_t address);
std::uint32_t tpc(int unit);
void set_tops(std::uint32_t top, std::uint32_t itop);
void code_changed(int unit);
Vu0Regs &regs(int unit);
std::uint64_t interpreted_calls();
// VU1 XGKICK packets wait until the VIF has to sync with VU1 (MSCAL/MSCNT/MPG/FLUSH*, DIRECT,
// another GIF path, the end of a VIF1 DMA chain, vblank); VIF writes into their source
// qwords before then reach the packet, as they would while the program runs on hardware.
void flush_kicks();
bool kicks_pending();
void vif_wrote(std::uint32_t qword, std::uint32_t lanes);

}
