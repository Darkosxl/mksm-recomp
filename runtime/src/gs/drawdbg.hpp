#pragma once

#include <cstdint>
#include <utility>
#include <vector>

namespace ps2::gs {
struct State;
}

// Frame debugger support (remaster/framedbg). Off unless one of these is set; then every GIF packet carries a tag
// saying where it came from, and every primitive the GS draws is recorded or skipped:
//   PS2_DRAW_DUMP=from,to,dir[,tex]  write dir/draws.ndjson (consecutive primitives with the same source and GS state
//                                    form one draw), dir/frames.ndjson (render-thread time per frame) and, while GPU
//                                    profiling (PS2_GPU_PROFILE) is on, dir/batches.ndjson (which draws each raster
//                                    dispatch holds). ",tex" also writes each new texture as dir/tex/<key>.pam; that
//                                    needs the CPU copy of GS memory (PS2_GS=soft or both).
//   PS2_DRAW_SKIP=group[,group...]   hex group keys (from draws.ndjson) whose primitives are not drawn, from frame
//                                    PS2_DRAW_SKIP_FROM (default 0) on. Rendering only: the game never reads them back.
namespace ps2::gs::drawdbg {

bool enabled();

// Emulation / VU thread: where the GIF data comes from.
void dma_start(int channel, std::uint32_t ra, std::uint32_t madr);
std::uint32_t vif1_ra();             // EE return address that started the VIF1 DMA feeding this thread
void set_vif1_ra(std::uint32_t ra);  // VU thread: carried along with each forwarded VIF1 packet
void vu1_start(std::uint32_t entry, const std::uint8_t *code);  // MSCAL: microprogram entry and a hash of its code
struct Source {
    std::uint32_t ra = 0, madr = 0, vu1_entry = ~0u, vu1_hash = 0;
};
Source vu1_source();               // what an XGKICK made now came from
void set_kick_source(const Source &s);  // flush_kicks, before the held packet goes to the GIF
// gif::transfer: the tag to send ahead of a GIF packet on this path.
Source packet_source(int path);

// Render thread.
void set_tag(int path, const Source &s);
void vblank(std::uint64_t frame);
bool begin_prim(const State &s, int vertices);  // false: skip drawing this primitive
bool skipped(const State &s);  // whether a primitive drawn now, from the last tagged source, would be skipped
void end_prim(std::uint64_t ns);
void gif_time(std::uint64_t ns);
std::uint32_t current_draw();  // id of the draw being recorded, ~0u when not dumping
void batch(std::uint32_t seq, const std::vector<std::pair<std::uint32_t, std::uint32_t>> &draws);

}
