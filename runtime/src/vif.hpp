#pragma once

#include <cstdint>

namespace ps2::state {
class Stream;
}

namespace ps2::vif {

void state(ps2::state::Stream &s);

// PS2_VU1_NULL=1 (debug; R8 in decomp/notes/native-renderer.md): the EE walks VIF1 as the timing shadow it is with the
// VU1 thread on, and nothing consumes it (the VU1 thread drops the work; without that thread it is never posted), so
// VU1 and GIF paths 1/2 never run. Default off.
bool null_sink();
// VU1 thread: guest address of the next kVif1 payload (Seam V records)
void posted_source(std::uint32_t guest);

void reset();
void reset_vu_side();
void stats();
void transfer(int unit, const std::uint8_t *data, std::uint32_t qwc);
bool stalled(int unit);
std::uint32_t read(int unit, std::uint32_t reg);
void write(int unit, std::uint32_t reg, std::uint32_t value);

}
