#pragma once

#include <cstdint>

// Seam V record capture (decomp/notes/native-renderer.md §2.1, §5.2): what VU1 is given for every batch, written on
// the thread that runs VU1 (the VU1 thread, or the emulation thread without one). Off unless PS2_TRACE_SEAMV is set;
// it only reads emulator state, so it never changes what the guest computes.
//   PS2_TRACE_SEAMV=file                 the record file (format: remaster/seamv.py, which also reads it)
//   PS2_TRACE_SEAMV_FRAMES=first[,count]  frames to record (default: the first 4 frames the run draws)
//   PS2_TRACE_SEAMV_MB=n                 per-frame cap in MB (default 32); batches past it are counted, not written
//   PS2_TRACE_SEAMV_REGS=1               also write the VU1 registers at every program start (for a replay oracle)
namespace ps2::seamv {

bool on();

// The VU1 side: VIF1 as VU1 sees it, in stream order.
void vblank(std::uint32_t frame);  // the frame the VIF1 work that follows belongs to
void unpack(std::uint32_t cmd, std::uint32_t source, std::uint32_t address, std::uint32_t num, std::uint32_t cycle, std::uint32_t mode,
            std::uint32_t mask, std::uint32_t tops);
// kind: 0 MSCAL, 1 MSCALF, 2 MSCNT; called after the VIF1 double-buffer swap, before VU1 runs
void program(int kind, std::uint32_t pc, std::uint32_t base, std::uint32_t ofst, std::uint32_t tops, std::uint32_t top, std::uint32_t itop, bool dbf);
void code_changed();
// GIF paths 2 and 3 (GS state set by the EE: DIRECT in the VIF1 stream, GIF DMA), in the order the GS gets them
void gif(int path, const std::uint8_t *data, std::uint32_t qwc);

// Guest address of a host pointer into EE RAM or the scratchpad, ~0u otherwise (a VIF1 payload's DMA source).
std::uint32_t guest_address(const std::uint8_t *p);

}
