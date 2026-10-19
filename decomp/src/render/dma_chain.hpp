#pragma once

// The VIF1 render chain the 3D draw code appends to (decomp/notes/native-renderer.md §1.5), and the DMA tags, VIF
// codes and DMA-controller registers the decompiled packers write, by name. Constants and pure functions only: each
// decompiled function does its loads and stores itself, in the original's order and with its registers.
#include <cstdint>

namespace decomp::render {

// The chain's globals: one write pointer for every 3D packer, the start the end-of-frame kick sends (fn_241410), the
// DMA tag still open (its QWC grows until the next tag is opened) and the open VIF code whose size is patched when it
// is closed.
namespace chain {
inline constexpr std::uint32_t kPtr = 0x0065E300u;
inline constexpr std::uint32_t kStart = 0x0065E304u;
inline constexpr std::uint32_t kOpenTag = 0x0065E308u;
inline constexpr std::uint32_t kOpenVif = 0x0065E30Cu;
}

// EE address segments
inline constexpr std::uint32_t kPhysMask = 0x0FFFFFFFu;
inline constexpr std::uint32_t kUncached = 0x20000000u;       // kseg uncached
inline constexpr std::uint32_t kUncachedAccel = 0x30000000u;  // uncached accelerated
inline constexpr std::uint32_t kScratchpad = 0x70000000u;     // the 16 KB scratchpad (SPR)

// DMA source-chain tag. First word: QWC (bits 0-15), PCE, ID (28-30), IRQ (31); second word: ADDR (bit 31 = SPR).
// With VIF1 TTE on, the tag's upper two words go to the VIF as two VIF codes.
enum class DmaId : std::uint32_t { refe = 0, cnt = 1, next = 2, ref = 3, refs = 4, call = 5, ret = 6, end = 7 };
constexpr std::uint32_t dma_tag(DmaId id, std::uint32_t qwc = 0) { return static_cast<std::uint32_t>(id) << 28 | qwc; }
// a tag's ADDR word: keeps the SPR bit (31) and drops the uncached segment bits (29-30)
constexpr std::uint32_t dma_addr(std::uint32_t address) { return address & 0x9FFFFFFFu; }
// QWC to add to an open tag at `tag` when the chain has reached `ptr`: the qwords written after the tag's own
// (the original shifts the signed byte distance arithmetically)
constexpr std::uint32_t dma_qwords_after(std::uint32_t tag, std::uint32_t ptr) {
    return static_cast<std::uint32_t>(static_cast<std::int32_t>(ptr - tag) >> 4) - 1u;
}

// VIF codes (CMD in bits 24-30)
namespace vif {
inline constexpr std::uint32_t kFlush = 0x11000000u;  // FLUSH: wait until VU1 and GIF paths 1/2 are idle
}

// DMA controller: channel 9 (toSPR: main RAM to scratchpad) and the shared registers
namespace dmac {
inline constexpr std::uint32_t kToSprChcr = 0x1000D400u;
inline constexpr std::uint32_t kToSprMadr = 0x1000D410u;
inline constexpr std::uint32_t kToSprQwc = 0x1000D420u;
inline constexpr std::uint32_t kToSprSadr = 0x1000D480u;
inline constexpr std::uint32_t kStat = 0x1000E010u;
inline constexpr std::uint32_t kPcr = 0x1000E020u;
inline constexpr std::uint32_t kChcrStart = 0x101u;   // CHCR: STR | DIR (normal mode)
inline constexpr std::uint32_t kChcrBusy = 0x100u;    // CHCR.STR: the transfer is still running
inline constexpr std::uint32_t kChannel9 = 0x200u;    // D_STAT CIS9 (write 1 clears) / D_PCR CPC9
}

}
