#pragma once

#include <cstdint>

// Native renderer, stages 1-2 (decomp/notes/native-renderer.md §5.2, §7.2-7.4): the world and character VU1 programs drawn
// with a WebGPU render pipeline from what VU1 is given (Seam V, §2.1). This is the VU1 side: it reads the batch at each
// program start of a native draw and hands it to the renderer (gs/gpu/gpu.cpp) next to the batch's XGKICKs. Rendering
// only and off by default; it reads emulator state and never writes any, except in replace mode (the default with
// PS2_NATIVE) and PS2_R14.
//   PS2_NATIVE=world,character|all   replace: those batches skip VU1 (their GIF packets and compute raster with it) and
//                               the native path draws them into a target kept coherent with compute VRAM per 16x16 tile
//                               (gpu.cpp tiles_*; PS2_NATIVE_RUNS=1: stage 1's import + write-back per run instead).
//                               EE-visible state stays the same (§6.2: VU1 and vifvu differ)
//   PS2_NATIVE_MIRROR=1         side by side instead: VU1 and the emulated path draw as today, the native path draws
//                               into its own target, which only the dump shows (remaster/natdiff.sh)
//   PS2_NATIVE_FRAMES=a,n       only frames a..a+n-1 (default: all)
//   PS2_NATIVE_CHECK=1          mirror: carry each batch's XGKICK packet along; the renderer compares its vertex
//                               shader's outputs with it (the per-vertex oracle of §5.2 stage 0)
//   PS2_NATIVE_PLIGHT=1         apply the point light of 002c80ed/50bda0e2 natively (hardware order, R14)
//   PS2_R14=1                   emulated path: run the bodies that read the colour slot (@3778, @3288) after the colour
//                               UNPACK that follows their MSCNT, as hardware does (§3.3, §7 R14); a look change
namespace ps2::native {

// Programs, by the FNV-1a-32 of the 256 bytes at the MSCAL entry (draws.ndjson "vu1_hash"): world (image C), then the
// characters (§3.4): image A (3 passes) rigid, 2 and 3 bones; image B (1 pass) rigid, 2 and 3 bones.
enum Program : std::uint32_t {
    kNone = 0, k567ce7d8 = 1, k002c80ed = 2, k50bda0e2 = 3,
    k672fef39 = 16, kad5f3626 = 17, k51bdaf8f = 18, kc77204b7 = 19, k2f9dff01 = 20, k95a24514 = 21
};
inline bool character(std::uint32_t program) { return program >= k672fef39; }
inline std::uint32_t passes(std::uint32_t program) { return program >= k672fef39 && program <= k51bdaf8f ? 3u : 1u; }
inline bool rigid(std::uint32_t program) { return program == k672fef39 || program == kc77204b7; }

// Render queue payload (gs::queue::kNative): this header, nad A+D qwords (the batch's own GS state: TEX0_1,
// MIPTBP1_1), kRegQwords VU1 registers (vf1..vf12, vf31, then vi14 in the first word of the last qword), n vertices of
// kVertexWords words (Q0 x y z adc, Q1 s t q -, the RGBA slot after the colour UNPACK), then with kOracle the n x 3
// output qwords of the batch's XGKICK (STQ, RGBA, XYZF2).
// tags: the upper words of the batch's two GIF tags (A+D, then vertices), whose PRE/PRIM the renderer applies when
// VU1 is skipped.
// A character batch (nad 0) carries instead kCharRegQwords (vf0..vf31, then I, vi1, vi2), the constants mem[0..45], the
// input from TOP (in[0] tag, in[1] TEX0, in[2] vertex tag, n vertices of 2 (rigid) or 3 qwords), then with kOracle the
// n x 3 output qwords of each of its `kicks` XGKICKs (pass 1, 2, 3). pass: the pass this message draws (mirror: posted
// after that pass's XGKICK), kAllPasses when VU1 was skipped. tags[0]: mem[33]'s upper word (the passes' A+D tag).
struct Batch {
    std::uint32_t program, n, nad, top, flags, seq, frame, kick_qwords, tags[2], pass, kicks;
};
constexpr std::uint32_t kOracle = 1, kSkipped = 2, kRegQwords = 14, kVertexWords = 12;
constexpr std::uint32_t kCharRegQwords = 33, kCharMemQwords = 46, kAllPasses = ~0u;
inline std::uint32_t char_input_qwords(std::uint32_t program, std::uint32_t n) { return 3 + (rigid(program) ? 2 : 3) * n; }
// The A+D qwords pass p (0..2) sets, as mem[] indices; 46 = in[1] (the batch's TEX0). The XGKICK header is mem[33], these
// four, then the vertex tag in[2] (vu1 bodies @00A8 / @07A8 / @0EF0, @0108 / @0410 / @08D0).
constexpr std::uint32_t kPassAd[3][4] = {{34, 35, 45, 46}, {37, 38, 39, 45}, {40, 41, 42, 43}};

bool active();     // PS2_NATIVE names a category
bool world();      // the world programs are native
bool characters(); // the character programs are native
bool replace();  // PS2_NATIVE without PS2_NATIVE_MIRROR: VU1 skipped for the native batches
bool r14();

// The thread that runs VU1.
void vblank(std::uint32_t frame);
void mscal(std::uint32_t pc);                   // MSCAL/MSCALF: which program this draw runs
bool program(int kind, std::uint32_t top);      // a program start, after flush_kicks; true: do not run VU1 (replace mode)
extern bool g_pending;                           // a captured batch waits for its XGKICKs to leave
void kick(std::uint32_t start, const std::uint8_t *data, std::uint32_t qwords);  // flush_kicks: each held packet
void kick_begin(std::size_t i);                  // flush_kicks, before held packet i goes to the GIF
void kick_end(std::size_t i, std::size_t count); // and after it: hand the batch (or the pass) over
void kicks_none();                               // flush_kicks with no packet held (VU1 skipped)

// R14
bool r14_defer(int kind, std::uint32_t address);  // run_vu: true when the body was deferred
void r14_run();                                   // run a deferred body now
extern bool g_r14_deferred;

}
