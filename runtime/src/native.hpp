#pragma once

#include <cstdint>

// Native renderer, stage 1 (decomp/notes/native-renderer.md §5.2): the world VU1 programs drawn with a WebGPU render
// pipeline from what VU1 is given (Seam V, §2.1). This is the VU1 side: it reads the batch at each program start of a
// world draw and hands it to the renderer (gs/gpu/gpu.cpp) next to the batch's XGKICK. Rendering only and off by default;
// it reads emulator state and never writes any (except PS2_NATIVE_SKIP_VU1 and PS2_R14, debug switches that change
// what VU1 runs, see below).
//   PS2_NATIVE=world|all        draw the world programs natively too (side by side: the emulated path draws as today,
//                               the native path draws into its own target, which only the dump shows)
//   PS2_NATIVE_FRAMES=a,n       only frames a..a+n-1 (default: all)
//   PS2_NATIVE_SKIP_VU1=1       do not run VU1 for the natively drawn batches (the emulated world is not drawn; for the
//                               EE-visible hash gate, §6.2: VU1 and vifvu differ, nothing else may)
//   PS2_NATIVE_CHECK=1          carry each batch's XGKICK packet along; the renderer compares its vertex shader's
//                               outputs with it (the per-vertex oracle of §5.2 stage 0)
//   PS2_NATIVE_PLIGHT=1         apply the point light of 002c80ed/50bda0e2 natively (hardware order, R14)
//   PS2_R14=1                   emulated path: run the bodies that read the colour slot (@3778, @3288) after the colour
//                               UNPACK that follows their MSCNT, as hardware does (§3.3, §7 R14); a look change
namespace ps2::native {

// World programs, by the FNV-1a-32 of the 256 bytes at the MSCAL entry (draws.ndjson "vu1_hash").
enum Program : std::uint32_t { kNone = 0, k567ce7d8 = 1, k002c80ed = 2, k50bda0e2 = 3 };

// Render queue payload (gs::queue::kNative): this header, nad A+D qwords (the batch's own GS state: TEX0_1,
// MIPTBP1_1), kRegQwords VU1 registers (vf1..vf12, vf31, then vi14 in the first word of the last qword), n vertices of
// kVertexWords words (Q0 x y z adc, Q1 s t q -, the RGBA slot after the colour UNPACK), then with kOracle the n x 3
// output qwords of the batch's XGKICK (STQ, RGBA, XYZF2).
struct Batch {
    std::uint32_t program, n, nad, top, flags, seq, frame, kick_qwords;
};
constexpr std::uint32_t kOracle = 1, kSkipped = 2, kRegQwords = 14, kVertexWords = 12;

bool world();
bool skip_vu1();
bool r14();

// The thread that runs VU1.
void vblank(std::uint32_t frame);
void mscal(std::uint32_t pc);                   // MSCAL/MSCALF: which program this draw runs
bool program(int kind, std::uint32_t top);      // a program start, after flush_kicks; true: do not run VU1 (skip mode)
extern bool g_pending;                           // a captured batch waits for its XGKICK to leave
void kick(std::uint32_t start, const std::uint8_t *data, std::uint32_t qwords);  // flush_kicks: each held packet
void kicks_begin();                              // flush_kicks, before the held packets go to the GIF
void kicks_end();                                // and after them: hand the batch over

// R14
bool r14_defer(int kind, std::uint32_t address);  // run_vu: true when the body was deferred
void r14_run();                                   // run a deferred body now
extern bool g_r14_deferred;

}
