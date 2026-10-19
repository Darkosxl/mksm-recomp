#pragma once

// Determinism tooling for lockstep work. Everything here is inert unless its environment variable is set.
//   PS2_CENSUS=1           count the paths where host-side (GPU, other thread) data can reach the guest; printed at exit
//   PS2_JITTER=seed[,ppm]  random 0-2 ms sleeps at host-thread hand-off points, ppm of calls (default 2000); sites:
//                          1 queue post (any producer), 2 VU1 thread item, 3 render thread item, 4 emu thread vblank

#include <cstdint>

namespace ps2::debug {

enum Census : int {
    kGsDownloadDma,     // DMA channel 1 (VIF1 from-memory) reads a GS local->host transfer
    kGsDownloadFifo,    // EE 128-bit read of the VIF1 FIFO (0x10005000)
    kGsDownloadQwords,
    kGsDownloadCached,  // answered from g_download_cache while the render thread runs (stale-able)
    kGsDownloadWait,    // waited for the render thread to read GS memory
    kGsCsrRead,
    kGsPrivRead,        // IMR/BUSDIR/SIGLBLID
    kVu1MemRead,        // EE load from VU1 data memory (0x1100C000-0x1100FFFF)
    kVu1MemWrite,
    kVu1CodeRead,
    kVu1CodeWrite,
    kVu0MemRead,
    kRtcRead,           // the guest reads the wall clock (sceCdReadClock, IOP or EE side)
    kGsSignal,          // SIGNAL/FINISH/LABEL raised (the VU1 thread drops PATH1 ones: gif.cpp transfer())
    kGsSignalPath1,     // SIGNAL/FINISH/LABEL written on GIF path 1 (VU1 XGKICK output), path 2 (VIF1 DIRECT), path 3
    kGsSignalPath2,
    kGsSignalPath3,
    kGsFinish,          // of kGsSignal: FINISH
    kGsLabel,           // of kGsSignal: LABEL
    kIntcVif1,          // INTC 5 raised (VIF1 i-bit)
    kDmaVif1Pause,      // DMA channel 1 paused on a VIF1 stall
    kCmsar1,            // the EE starts VU1 through CMSAR1 (ctc2 vi31; not implemented)
    kCensusCount
};

extern bool g_census;
void count_slow(Census what, std::uint64_t n);
inline void count(Census what, std::uint64_t n = 1) {
    if (g_census) [[unlikely]] count_slow(what, n);
}
void print_census();

extern bool g_jitter;
void jitter_slow(int site);
void print_jitter();
inline void jitter(int site) {
    if (g_jitter) [[unlikely]] jitter_slow(site);
}

}
