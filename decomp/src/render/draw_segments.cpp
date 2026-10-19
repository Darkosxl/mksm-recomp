// Ps2/Renderer/Character/ps2render.cpp: the segment loop of the per-instance 3D draw (fn_24cf08 -> fn_249060 ->
// fn_242ff8 -> fn_23a280). decomp/notes/segment-loop.md describes what it receives and emits.
//
// Exactness: the function keeps the original's registers as it goes (every temporary, at every call, preemption check
// and at the return), because a thread switch inside a callee or at a loop check saves all of them. So each block
// below sets the registers the original's block leaves, in its order, and charges its cycles with tick().
#include "dma_chain.hpp"
#include "../texture/texture_manager.hpp"
#include "ps2/system.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp::render;
using decomp::texture::Field;

using u32 = std::uint32_t;
using u64 = std::uint64_t;
using s32 = std::int32_t;

// register writes as the original's instructions make them: w() a 32-bit result (sign-extended), d() 64 bits
void w(Cpu &c, unsigned r, u32 v) { set32(c.r[r], v); }
void d(Cpu &c, unsigned r, u64 v) { c.r[r].d[0] = v; }
u32 W(const Cpu &c, unsigned r) { return c.r[r].w[0]; }
u64 D(const Cpu &c, unsigned r) { return c.r[r].d[0]; }
std::int64_t S(const Cpu &c, unsigned r) { return c.r[r].sd[0]; }
// MULT rs, rt; MFLO rd (HI/LO keep the product)
void mult_lo(Cpu &c, unsigned rd, u32 a, u32 b) {
    mmi::mult(c, 0, a, b);
    d(c, rd, c.lo.d[0]);
}
void set_f(Cpu &c, unsigned n, psf v) { c.f[n] = v.bits; }
psf f(const Cpu &c, unsigned n) { return psf::from_bits(c.f[n]); }

// This function's stack frame (0xD0 bytes)
namespace frame {
constexpr u32 kSize = 0xD0;
constexpr u32 kToCamera = 0x00;  // segment centre minus camera (3 floats), left by the near test
constexpr u32 kProgram = 0x10;   // fn_23a280's a2: entry of the segment's VU1 program, a byte offset in the image
constexpr u32 kNeedB = 0x14;     // the segment's sub-meshes need packet B / A / C this pass (see emit_packets)
constexpr u32 kNeedA = 0x18;
constexpr u32 kNeedC = 0x1C;
constexpr u32 kMainPass = 0x20;  // a1: nonzero = the world pass (draws, packets); 0 = only update the instance state
constexpr u32 kPass = 0x24;      // a2: which of the two draw passes (0 or 1)
constexpr u32 kEnd = 0x28;       // a3: one past the last segment
constexpr u32 kNext = 0x2C;      // index of the next segment
}

// Globals
constexpr u32 kSprDoubleBuffer = 0x004F4D5C;  // 2 = segment records go through the scratchpad (any nonzero becomes 2)
constexpr u32 kSprHalf = 0x004F50D8;          // which scratchpad half the next record goes to
constexpr u32 kFirstSegment = 0x004F50D0;     // index of the first segment to draw
constexpr u32 kSegmentList = 0x0065E460;      // the segment records to draw (pointers, from fn_249060)
constexpr u32 kSprWaitPolls = 0x0065E450;     // polls of CHCR.STR spent waiting for a record
constexpr u32 kUncachedStates = 0x00663450;   // nonzero: write the per-segment states through the uncached segment
constexpr u32 kSprRecord0 = kScratchpad, kSprRecord1 = kScratchpad + 0x1D0;
constexpr u32 kChainInSpr = 0x0066609C;       // nonzero: each segment's chain is built in the scratchpad at 0x70001000
constexpr u32 kChainBase = 0x00660D50;        // ... and the chain pointer goes back to this buffer at the end
constexpr u32 kNoPacketFlush = 0x006634E0;    // nonzero: no FLUSH before the packets
constexpr u32 kNoHeaderAfterPackets = 0x006634E4;
constexpr u32 kPass1First = 0x00666098;       // the first segment of pass 1 (fn_249060)
constexpr u32 kBrightnessTable = 0x0062AC24;  // -> int8 per segment state (FlickerBackground, Backgrnd, MapAnimObject)
constexpr u32 kBrightness = 0x0065E454;       // the vertex colour scale the packers use (128 = 1.0)
constexpr u32 kLightSet = 0x0065E380;         // -> the light set (28-byte entries at 0x4F4C94, or 0x661598, 0x4F4CB0)
constexpr u32 kSentThisFrame = 0x006615B8;    // per sub-mesh id: packets already sent (bits 1-3 pass 0, 4-6 pass 1)
constexpr u32 kStatsA = 0x00661908, kStatsB = 0x00661888;  // counters summed from the records (seg+0x180..0x188)
constexpr u32 kViewMatrix = 0x006610A0, kSegmentMatrix = 0x00661A70;
constexpr u32 kPackerState = 0x0065E2C8;      // fn_23a280's t0: state it keeps across segments (reset here)
constexpr u32 kPackerCacheA = 0x006618FC;     // set to -1 here
constexpr u32 kPackerCacheB = 0x0065E458;     // last value fn_23a280 and fn_237660 compare against, -1 = none

// The render settings block R = 0x4F4B40 (fields used here)
constexpr u32 kR = 0x004F4B40;
constexpr u32 kRDedupe = kR + 0x24, kRPackets = kR + 0x20, kRMode = kR + 0xA0, kRCountOn = kR + 0xB4;
constexpr u32 kRCount = kR + 0xC0, kRLights = kR + 0xC8, kRCharA = kR + 0x104, kRCharB = kR + 0x108, kRSetup = kR + 0xD4;
constexpr u32 kNearTestOn = 0x004F4C98, kNearBias = 0x004F4C74, kCamera = 0x004F4C78;
constexpr u32 kLightsOverride = 0x00661594;

// VU1 microcode images (fn_23de10 uploads them whole) and the image the character labels are relative to
constexpr u32 kImageWorld = 0x004A20B0, kImageCharA = 0x0049E430, kImageCharB = 0x0049F900, kImageCharD = 0x0049BA50;

// Functions called
constexpr u32 kGetSetting = 0x00379988;       // fn_379988(p, q): q ? *q : *p
constexpr u32 kSkinSegment = 0x0023D2F0;      // fn_23d2f0(state, record, 1)
constexpr u32 kMulMatrix = 0x00213CE8;        // sceVu0MulMatrix(m0, m1, m2)
constexpr u32 kPackSegment = 0x0023A280;      // fn_23a280: the segment packer
constexpr u32 kNearSetting = 0x00756C90;

// One mesh segment of a model (0x1D0 bytes; the model's records are at model+0x20, model+0x38 of them)
struct SegmentRecord {
    u32 addr;
    Field<u32> state{addr + 0x00};      // index of its per-instance state (model+0x18, 0x1C0 bytes each)
    Field<u32> kind{addr + 0x10};       // picks the VU1 program family (select_program)
    Field<u32> passes{addr + 0x14};     // ANDed with model+0xE18 when this is not the main pass
    Field<u32> unk18{addr + 0x18};
    Field<u32> unk20{addr + 0x20};
    Field<u32> sub_count{addr + 0x12C}; // sub-meshes (0x20-byte entries at `subs`, first word = sub-mesh id)
    Field<u64> flags{addr + 0x130};
    Field<u64> flags2{addr + 0x138};
    Field<u32> stat_a{addr + 0x180}, stat_b{addr + 0x184}, stat_c{addr + 0x188};
    Field<u32> lod{addr + 0x1A0};       // float; nonzero selects packet_a/packet_b[(int)lod]
    Field<u32> packet_c{addr + 0x1B4};
    Field<u32> header{addr + 0x1B8};    // static VIF packet called at the start of a pass
    Field<u32> subs{addr + 0x1BC};
    Field<u32> light_set{addr + 0x1C4};
    u32 packet_a(u32 i) const { return addr + 0x1A4 + 4 * i; }
    u32 packet_b(u32 i) const { return addr + 0x1AC + 4 * i; }
    u32 bbox(u32 i) const { return addr + 0x60 + 4 * i; }  // min xyz, max xyz
};

// flags bits (seg+0x130)
constexpr u64 kFlagNoLodNear = 1ull << 54, kFlagUnlit = 1ull << 57, kFlagNoPacketC = 1ull << 41;
// flags2 bits (seg+0x138)
constexpr u64 kFlags2Prelit = 4, kFlags2NoNear = 0x400;

// fn_23a280's a3, built in s0 (bits named where the code shows their use)
constexpr u64 kDrawMatrix = 0x1;        // the segment has its own matrix: kSegmentMatrix = view x state matrix
constexpr u64 kDrawSkip = 0x40;         // no program: nothing is drawn
constexpr u64 kDrawLit = 0x80;          // lit with the current light set
constexpr u64 kDrawBrightness = 0x100;  // brightness set (the state's table byte, or model+0x1048 != 128)
constexpr u64 kDrawMainPass = 0x200;
constexpr u64 kDrawCharacter = 0x10000;
constexpr u64 kDrawNear = 0x08000000;   // near the camera: the near-LOD world programs

enum class Flow { draw, skip, left };

// ---- the chain: pad, close the open tag, open a DMA call to a static packet ----

// do { *p = 0; p += 4; } while (p & 12): pads the chain with zero words to a qword (loop head `loop`). v0 = 0 after.
bool pad_to_qword(Cpu &c, unsigned p, u32 loop) {
    for (;;) {
        st32(W(c, p), 0);
        w(c, p, W(c, p) + 4);
        d(c, v0, D(c, p) & 12);
        tick(c, 6);
        if (!D(c, v0)) return true;
        if (poll(c, loop)) return false;
    }
}

// Closes the open DMA tag: its QWC grows by the qwords written after it (a0 = the tag; v0, v1 as the original).
void close_open_tag(Cpu &c, unsigned p, int cycles) {
    w(c, a0, rd<u32>(chain::kOpenTag));
    tick(c, 3);
    if (!D(c, a0)) return;
    const u32 tag = W(c, a0);
    w(c, v0, dma_qwords_after(tag, W(c, p)));
    w(c, v1, rd<u32>(tag) + W(c, v0));
    wr<u32>(tag, W(c, v1));
    tick(c, cycles);
}

// Opens a DMA `call` tag (QWC 0, patched by the next close) to the static packet at `target`; the chain goes on in the
// tag's upper half (its two VIF codes). v0 = the ADDR word, v1 = the new pointer.
void open_call(Cpu &c, unsigned p, unsigned target) {
    const u32 tag = W(c, p);
    wr<u32>(chain::kPtr, tag);
    wr<u32>(chain::kOpenTag, tag);
    wr<u32>(tag, dma_tag(DmaId::call));
    w(c, v0, dma_addr(W(c, target)));
    wr<u32>(tag + 4, W(c, v0));
    w(c, v1, tag + 8);
    wr<u32>(chain::kPtr, tag + 8);
    wr<u32>(chain::kOpenVif, 0);
    w(c, a0, dma_tag(DmaId::call));
}

// ---- toSPR: segment records are DMA'd into one scratchpad half while the other half is packed ----

// Starts the transfer of the record at `record` (RAM) to `dst` (scratchpad): 0x1D qwords, normal mode.
void spr_start(Cpu &c, u32 record, u32 dst) {
    st32(dmac::kToSprQwc, 0x1D);
    st32(dmac::kToSprSadr, dst);
    st32(dmac::kToSprMadr, (record & kPhysMask) | 0x80000000u);
    st32(dmac::kPcr, dmac::kChannel9);
    st32(dmac::kStat, dmac::kChannel9);
    st32(dmac::kToSprChcr, dmac::kChcrStart);
    w(c, v0, dmac::kChcrStart);
    w(c, v1, dmac::kToSprChcr);
    w(c, a0, dmac::kPcr);
    w(c, a1, dmac::kChannel9);
}

// 0x243050: with the scratchpad on, the first record of the list goes to the free half before the loop
void spr_prefetch_first(Cpu &c) {
    w(c, a0, 0x004F0000);
    w(c, v0, 2);
    w(c, v1, rd<u32>(kSprDoubleBuffer));
    tick(c, 5);
    if (D(c, v1) != D(c, v0)) return;
    w(c, v1, 0x004F0000);
    w(c, v0, 0x00660000);
    w(c, a3, rd<u32>(kSegmentList));
    w(c, a0, kSprHalf);
    d(c, a2, D(c, v1));
    tick(c, 7);
    const u32 half = rd<u32>(kSprHalf);
    w(c, v1, half);
    w(c, a2, kSprRecord0);
    tick(c, 4);
    if (!half) {
        w(c, a2, kSprRecord1);
        tick(c, 2);
    }
    w(c, v0, 1 - half);
    wr<u32>(kSprHalf, 1 - half);
    tick(c, 5);
    spr_start(c, W(c, a3), W(c, a2));
    tick(c, 28);
}

// Loop head (0x243158): the record of segment s3 into s1, and the next one's transfer started. False if control left.
bool next_record(Cpu &c) {
    const u32 i = W(c, s3);
    w(c, a0, 0x004F0000);
    w(c, v0, 2);
    w(c, v1, rd<u32>(kSprDoubleBuffer));
    tick(c, 5);
    if (D(c, v1) != D(c, v0)) {
        // 0x2432a8: straight from RAM
        w(c, v0, 0x00660000);
        w(c, a0, i + 1);
        w(c, v1, i << 2);
        w(c, v0, kSegmentList);
        wr<u32>(W(c, sp) + frame::kNext, i + 1);
        w(c, v1, kSegmentList + (i << 2));
        w(c, t2, 0x00660000);
        w(c, s1, rd<u32>(W(c, v1)));
        tick(c, 8);
        return true;
    }
    w(c, v0, dmac::kToSprChcr);
    w(c, a3, 0x00660000);
    w(c, a2, 0x004F0000);
    w(c, v1, ld32(dmac::kToSprChcr));
    w(c, t2, 0x00660000);
    w(c, v0, i + 1);
    wr<u32>(W(c, sp) + frame::kNext, i + 1);
    d(c, v1, D(c, v1) & dmac::kChcrBusy);
    tick(c, 11);
    if (D(c, v1)) {
        // 0x2431a8: wait for the transfer of this record, counting the polls
        w(c, a1, 0x00660000);
        w(c, a0, 0x10000000);
        w(c, v1, rd<u32>(kSprWaitPolls));
        w(c, a0, dmac::kToSprChcr);
        tick(c, 4);
        for (;;) {
            w(c, v0, ld32(dmac::kToSprChcr));
            w(c, v1, W(c, v1) + 1);
            d(c, v0, D(c, v0) & dmac::kChcrBusy);
            tick(c, 6);
            if (!D(c, v0)) break;
            if (poll(c, 0x002431A8)) return false;
        }
        wr<u32>(kSprWaitPolls, W(c, v1));
        tick(c, 1);
    }
    // 0x2431c4: start the next record's transfer into the other half; this one is in the half filled last time
    const u32 next = rd<u32>(W(c, sp) + frame::kNext);
    w(c, a0, next);
    w(c, v1, kSegmentList);
    w(c, a1, kSprHalf);
    w(c, t1, 0x1D);
    w(c, v0, kSegmentList + (next << 2));
    w(c, t0, rd<u32>(W(c, v0)));
    tick(c, 9);
    const u32 half = rd<u32>(kSprHalf);
    w(c, v1, half);
    w(c, v0, kSprRecord1);
    w(c, a3, half ? kSprRecord1 : kSprRecord0);
    d(c, a0, D(c, v1));
    w(c, a2, kSprRecord0);
    tick(c, 9);
    if (!half) {
        w(c, a2, kSprRecord1);
        tick(c, 2);
    }
    w(c, v0, 1 - half);
    wr<u32>(kSprHalf, 1 - half);
    tick(c, 5);
    spr_start(c, W(c, t0), W(c, a2));
    d(c, s1, D(c, a3));
    tick(c, 30);
    return true;
}

// 0x2432c8: s7 = the segment's state index, s4 = its state (0x1C0 bytes in model+0x18), whose +0xAC gets 1.0.
// False when this is not the main pass and the model does not draw the segment's passes.
bool segment_state(Cpu &c, u32 model, const SegmentRecord &seg) {
    w(c, v0, rd<u32>(kUncachedStates));
    w(c, s7, seg.state);
    tick(c, 4);
    if (D(c, v0)) {
        w(c, a0, 0x1C0);
        w(c, v1, rd<u32>(model + 0x18));
        mult_lo(c, a0, W(c, s7), 0x1C0);
        w(c, v0, kPhysMask);
        w(c, a1, kUncached);
        w(c, v1, W(c, v1) + W(c, a0));
        d(c, v1, D(c, v1) & kPhysMask);
        d(c, s4, D(c, v1) | kUncached);
        tick(c, 11);
    } else {
        w(c, v0, 0x1C0);
        w(c, v1, rd<u32>(model + 0x18));
        mult_lo(c, v0, W(c, s7), 0x1C0);
        w(c, s4, W(c, v1) + W(c, v0));
        tick(c, 4);
    }
    w(c, at, 0x3F800000);
    c.f[0] = 0x3F800000;  // 1.0f
    wr<u32>(W(c, s4) + 0xAC, c.f[0]);
    w(c, v0, rd<u32>(W(c, sp) + frame::kMainPass));
    tick(c, 7);
    if (D(c, v0)) return true;
    w(c, v0, rd<u32>(model + 0xE18));
    w(c, v1, seg.passes);
    d(c, v0, D(c, v0) & D(c, v1));
    tick(c, 5);
    return D(c, v0) != 0;
}

// 0x243344: s6 = kind, s5 = 0x4F0000, s2 = &program; s0 starts at 0 or kDrawMatrix; the light set and kDrawLit
void segment_lighting(Cpu &c, const SegmentRecord &seg) {
    w(c, v0, 0x004F0000);
    w(c, s6, seg.kind);
    w(c, a0, kR);
    d(c, s5, D(c, v0));
    w(c, v1, rd<u32>(kRCountOn));
    w(c, s2, W(c, sp) + frame::kProgram);
    d(c, s0, 0);
    wr<u32>(W(c, sp) + frame::kProgram, 0);
    tick(c, 10);
    if (D(c, v1)) {
        w(c, v1, rd<u32>(W(c, sp) + frame::kMainPass));
        tick(c, 3);
        if (D(c, v1)) {
            d(c, v0, seg.flags);
            d(c, v1, kFlagNoLodNear);
            d(c, v0, D(c, v0) & D(c, v1));
            tick(c, 6);
            if (!D(c, v0)) {
                w(c, v1, seg.unk18);
                w(c, v0, 2);
                tick(c, 4);
                if (D(c, v1) == D(c, v0)) {
                    w(c, v0, rd<u32>(kRCount) + 1);
                    w(c, s0, 1);  // kDrawMatrix
                    wr<u32>(kRCount, W(c, v0));
                    tick(c, 4);
                }
            }
        }
    }

    // 0x2433b0
    w(c, v0, kR);
    w(c, a0, rd<u32>(kRLights));
    tick(c, 4);
    if (!D(c, a0)) return;
    w(c, v0, 0x00660000);
    w(c, v1, rd<u32>(kLightsOverride));
    tick(c, 4);
    if (D(c, v1)) {
        w(c, a0, seg.light_set);
        d(c, v0, S(c, a0) < 2);
        tick(c, 4);
        if (!D(c, v0)) {
            w(c, v0, 28);
            w(c, v1, 0x004F0000);
            mult_lo(c, v0, W(c, a0), 28);
            w(c, v1, 0x004F4C94);
            w(c, a0, 0x00660000);
            w(c, v0, W(c, v0) + W(c, v1));
            wr<u32>(kLightSet, W(c, v0));
            tick(c, 9);
        } else {
            w(c, v0, 0x00660000);
            w(c, v1, 0x00660000);
            w(c, v0, 0x00661598);
            wr<u32>(kLightSet, W(c, v0));
            tick(c, 4);
        }
        d(c, v0, seg.flags);
        d(c, v1, kFlagUnlit);
        d(c, a0, D(c, s0) | kDrawLit);
        d(c, v0, D(c, v0) & D(c, v1));
        if (!D(c, v0)) d(c, s0, D(c, a0));
        tick(c, 8);
    } else {
        w(c, a1, seg.light_set);
        tick(c, 3);
        bool lit = true;
        if (!D(c, a1)) {
            w(c, v0, 2);
            tick(c, 3);
            lit = D(c, a0) == D(c, v0);
        }
        if (lit) {
            w(c, v0, 2);
            tick(c, 3);
            if (D(c, a0) == D(c, v0)) {
                w(c, v0, 0x004F0000);
                w(c, v1, 0x00660000);
                w(c, v0, 0x004F4CB0);
                d(c, a1, D(c, v1));
                wr<u32>(kLightSet, W(c, v0));
                tick(c, 7);
            } else {
                w(c, v0, 28);
                w(c, v1, 0x004F0000);
                mult_lo(c, v0, W(c, a1), 28);
                w(c, v1, 0x004F4C94);
                w(c, a0, 0x00660000);
                d(c, a1, D(c, a0));
                w(c, v0, W(c, v0) + W(c, v1));
                wr<u32>(kLightSet, W(c, v0));
                tick(c, 8);
            }
            w(c, v0, rd<u32>(kLightSet));
            d(c, a0, D(c, s0) | kDrawLit);
            w(c, v1, rd<u32>(W(c, v0) + 0x18));
            if (D(c, v1)) d(c, s0, D(c, a0));
            tick(c, 4);
        }
    }

    // 0x2434a4
    w(c, v0, kR);
    w(c, a0, 3);
    w(c, v1, rd<u32>(kRMode));
    tick(c, 5);
    if (D(c, v1) != D(c, a0)) return;
    w(c, v1, seg.unk20);
    tick(c, 3);
    if (D(c, v1)) {
        w(c, v0, 2);
        tick(c, 3);
        if (D(c, v1) != D(c, v0)) return;
    }
    d(c, s0, D(c, s0) | kDrawLit);
    tick(c, 1);
}

// The VU1 program of a segment: v1 = its label, v0 = the image (the caller stores v1 - v0)
struct Program {
    u32 label, image;
    bool via_d;  // the image base is computed at 0x2438c4 (one more cycle)
};

// Stores the program's offset in the frame (0x2438c4/0x2438c8)
void store_program(Cpu &c, Program p, int cycles) {
    w(c, v1, p.label);
    w(c, v0, p.via_d ? 0x004A0000 : p.image);
    tick(c, cycles);
    if (p.via_d) {
        w(c, v0, kImageCharD);
        tick(c, 1);
    }
    w(c, v1, W(c, v1) - W(c, v0));
    wr<u32>(W(c, s2), W(c, v1));
    tick(c, 4);
}

// The character images: A if R+0x104, B if R+0x108, else D (fn_23ff60 uploads the matching image first)
Program character_program(Cpu &c, u32 a, u32 b, u32 d_label) {
    w(c, v1, kR);
    w(c, v0, rd<u32>(kRCharA));
    tick(c, 6);
    if (D(c, v0)) return {a, kImageCharA, false};
    w(c, v0, rd<u32>(kRCharB));
    tick(c, 3);
    if (D(c, v0)) return {b, kImageCharB, false};
    return {d_label, kImageCharD, true};
}

// The world programs of a kind-1 segment by kDrawMatrix and kDrawLit (0x2436b4)
Program world_program(Cpu &c) {
    d(c, v0, D(c, s0) & kDrawMatrix);
    tick(c, 3);
    const bool matrix = D(c, v0) != 0;
    d(c, v0, D(c, s0) & kDrawLit);
    tick(c, 3);
    const bool lit = D(c, v0) != 0;
    if (matrix) return {lit ? kImageWorld + 0xEF0 : kImageWorld + 0x790, kImageWorld, false};
    return {lit ? kImageWorld + 0xB40 : kImageWorld + 0x4A0, kImageWorld, false};
}

// Where select_program goes on: the common draw bits (0x243920), straight to the skip test (0x2439f8), or out
enum class Then { common, skip_test, left };

// 0x2434d4: the jump table at 0x585240 on the segment's kind picks the VU1 program (its entry offset goes to the
// frame) and the draw bits.
Then select_program(Cpu &c, u32 model, const SegmentRecord &seg) {
    const u32 kind = W(c, s6);
    d(c, v0, D(c, s6) < 16);
    tick(c, 3);
    if (!D(c, v0)) return Then::common;
    w(c, v0, 0x00580000);
    w(c, v1, kind << 2);
    w(c, v0, 0x00585240);
    w(c, v1, 0x00585240 + (kind << 2));
    w(c, a0, rd<u32>(W(c, v1)));
    tick(c, 7);
    switch (W(c, a0)) {
    case 0x002434FC: {  // kind 1: rigid world mesh
        d(c, v0, seg.flags);
        d(c, v1, kFlagNoLodNear);
        d(c, v0, D(c, v0) & D(c, v1));
        tick(c, 6);
        if (D(c, v0)) {
            w(c, v1, 0x004A0000);
            w(c, v0, kImageWorld);
            w(c, a0, 0x04000001);
            w(c, v1, 0x790);
            d(c, s0, D(c, s0) | 0x04000001);
            w(c, v0, ~0x80u);
            wr<u32>(W(c, s2), 0x790);
            d(c, s0, D(c, s0) & D(c, v0));  // not lit
            tick(c, 13);
            return Then::common;
        }
        w(c, a0, kNearSetting);
        d(c, a1, 0);
        tick(c, 5);
        if (!call(c, kGetSetting, Ra{0x0024355C})) return Then::left;
        tick(c, 2);
        if (D(c, v0)) {
            w(c, v0, seg.state);
            w(c, a1, 0x1C0);
            w(c, a2, rd<u32>(model + 0x18));
            w(c, v1, 0x004F0000);
            mult_lo(c, v0, W(c, v0), 0x1C0);
            w(c, a0, rd<u32>(kNearTestOn));
            w(c, a1, W(c, v0) + W(c, a2));
            tick(c, 9);
            if (!D(c, a0)) {
                d(c, v0, 0);
                tick(c, 3);
            } else {
                // 0x243594: near when |state centre - camera| < largest bbox extent + bias
                const u32 bb = seg.bbox(0);
                set_f(c, 0, psf::from_bits(rd<u32>(bb + 0)));
                set_f(c, 3, psf::from_bits(rd<u32>(bb + 12)));
                set_f(c, 4, psf::from_bits(rd<u32>(bb + 16)));
                set_f(c, 1, psf::from_bits(rd<u32>(bb + 4)));
                set_f(c, 5, f(c, 3) - f(c, 0));
                set_f(c, 2, psf::from_bits(rd<u32>(bb + 20)));
                set_f(c, 4, f(c, 4) - f(c, 1));
                set_f(c, 0, psf::from_bits(rd<u32>(bb + 8)));
                set_f(c, 2, f(c, 2) - f(c, 0));
                fpu_compare(c, f(c, 5) < f(c, 4));
                tick(c, 13);
                if (c.fcr31 & kFpuCondition) {
                    c.f[5] = c.f[4];
                    tick(c, 1);
                }
                fpu_compare(c, f(c, 5) < f(c, 2));
                tick(c, 4);
                if (c.fcr31 & kFpuCondition) {
                    c.f[5] = c.f[2];
                    tick(c, 1);
                }
                const u32 centre = W(c, a1) + 0xA0, sp_ = W(c, sp);
                w(c, v0, 0x004F0000);
                set_f(c, 2, psf::from_bits(rd<u32>(centre)));
                set_f(c, 0, psf::from_bits(rd<u32>(kCamera)));
                w(c, v1, 0x004F0000);
                w(c, v0, kCamera);
                set_f(c, 3, psf::from_bits(rd<u32>(kNearBias)));
                set_f(c, 2, f(c, 2) - f(c, 0));
                set_f(c, 1, psf::from_bits(rd<u32>(kCamera + 4)));
                set_f(c, 4, psf::from_bits(rd<u32>(kCamera + 8)));
                set_f(c, 3, f(c, 5) + f(c, 3));
                d(c, v0, 0);
                wr<u32>(sp_ + frame::kToCamera, c.f[2]);
                set_f(c, 2, f(c, 2) * f(c, 2));
                set_f(c, 0, psf::from_bits(rd<u32>(centre + 4)));
                set_f(c, 3, f(c, 3) * f(c, 3));
                set_f(c, 0, f(c, 0) - f(c, 1));
                wr<u32>(sp_ + frame::kToCamera + 4, c.f[0]);
                set_f(c, 0, f(c, 0) * f(c, 0));
                set_f(c, 1, psf::from_bits(rd<u32>(centre + 8)));
                set_f(c, 1, f(c, 1) - f(c, 4));
                set_f(c, 2, f(c, 2) + f(c, 0));
                set_f(c, 0, f(c, 1) * f(c, 1));
                wr<u32>(sp_ + frame::kToCamera + 8, c.f[1]);
                set_f(c, 2, f(c, 2) + f(c, 0));
                fpu_compare(c, f(c, 2) < f(c, 3));
                tick(c, 28);
                if (c.fcr31 & kFpuCondition) {
                    w(c, v0, 1);
                    tick(c, 1);
                }
            }
            tick(c, 2);
            if (D(c, v0)) {
                d(c, v0, seg.flags2 & kFlags2NoNear);
                tick(c, 4);
                if (!D(c, v0)) {
                    w(c, v0, static_cast<u32>(kDrawNear));
                    d(c, s0, D(c, s0) | kDrawNear | kDrawMatrix);
                    d(c, v0, D(c, s0) & kDrawLit);
                    const bool lit = D(c, v0) != 0;
                    tick(c, 6);
                    store_program(c, {lit ? kImageWorld + 0x36F0 : kImageWorld + 0x3210, kImageWorld, false}, 6);
                    return Then::common;
                }
            }
        }
        store_program(c, world_program(c), 6);
        return Then::common;
    }
    case 0x00243738: {  // kind 2: world mesh in the main pass, else a rigid character mesh
        w(c, a0, rd<u32>(W(c, sp) + frame::kMainPass));
        tick(c, 3);
        if (D(c, a0)) {
            d(c, v0, seg.flags2);
            d(c, s0, D(c, s0) | 2);
            d(c, v0, D(c, v0) & kFlags2Prelit);
            tick(c, 5);
            if (!D(c, v0)) {
                store_program(c, {kImageWorld + 0x2520, kImageWorld, false}, 6);
                return Then::common;
            }
            w(c, v1, kImageWorld + 0x17E0);
            w(c, v0, kImageWorld);
            w(c, v1, 0x17E0);
            d(c, s0, D(c, s0) | kDrawMatrix);
            wr<u32>(W(c, s2), 0x17E0);
            tick(c, 9);
            return Then::common;
        }
        const Program p = character_program(c, kImageCharA, kImageCharB, kImageCharD + 0x1290);
        d(c, s0, kDrawCharacter | 0x402);
        store_program(c, p, p.via_d ? 5 : 6);
        return Then::common;
    }
    case 0x002437FC: {  // kind 3: character mesh
        const Program p = character_program(c, kImageCharA + 0x6F0, kImageCharB + 0x360, kImageCharD);
        d(c, s0, kDrawCharacter | 0x6);
        store_program(c, p, p.via_d ? 5 : 6);
        return Then::common;
    }
    case 0x00243864: {  // kind 4: character mesh
        const Program p = character_program(c, kImageCharA + 0xE50, kImageCharB + 0x800, kImageCharD + 0x890);
        d(c, s0, kDrawCharacter | 0xA);
        store_program(c, p, p.via_d ? 3 : 6);
        return Then::common;
    }
    case 0x002438D8: {  // kind 5: only with image D loaded
        w(c, v0, 0x004A0000);
        w(c, v1, kImageCharD);
        w(c, v0, 0xDC0);
        w(c, a0, kR);
        w(c, s0, static_cast<u32>(kDrawCharacter));
        w(c, v1, rd<u32>(kRCharA));
        wr<u32>(W(c, s2), 0xDC0);
        d(c, s0, kDrawCharacter | 0x12);
        tick(c, 12);
        if (!D(c, v1)) {
            w(c, v0, rd<u32>(kRCharB));
            tick(c, 3);
            if (!D(c, v0)) return Then::common;
        }
        w(c, s0, static_cast<u32>(kDrawSkip));
        tick(c, 3);
        return Then::skip_test;
    }
    case 0x00243914:  // kinds 0 and 15: nothing to draw
        w(c, s0, static_cast<u32>(kDrawSkip));
        tick(c, 3);
        return Then::skip_test;
    case 0x00243920:  // kinds 6-14: no program
        return Then::common;
    default:
        halt("fn_242ff8: unexpected target in the segment-kind jump table");
        return Then::left;
    }
}

// 0x243920: draw bits from the record's flags and the brightness
void common_bits(Cpu &c, u32 model, const SegmentRecord &seg) {
    d(c, v0, seg.flags2 & kFlags2NoNear);
    tick(c, 4);
    if (D(c, v0)) {
        w(c, v0, 0x20000000);
        d(c, s0, D(c, s0) | D(c, v0));
        tick(c, 2);
    }
    // 0x243938: flags bits 42, 43, 46, 47 give 0x4000, 0x8000, 0x1000, 0x2000; bit 41 gives kDrawCharacter
    const u64 flags = seg.flags;
    d(c, a2, flags);
    d(c, v0, 1ull << 42);
    d(c, a1, D(c, s0) | 0x4000);
    d(c, v1, 1ull << 43);
    d(c, v0, flags & D(c, v0));
    d(c, v1, flags & D(c, v1));
    if (D(c, v0)) d(c, s0, D(c, a1));
    d(c, a0, 1ull << 46);
    d(c, v0, D(c, s0) | 0x8000);
    d(c, a0, flags & D(c, a0));
    if (D(c, v1)) d(c, s0, D(c, v0));
    d(c, a1, 1ull << 47);
    d(c, v0, D(c, s0) | 0x1000);
    d(c, a1, flags & D(c, a1));
    if (D(c, a0)) d(c, s0, D(c, v0));
    d(c, v1, kFlagNoPacketC);
    d(c, v0, D(c, s0) | 0x2000);
    d(c, a2, flags & D(c, v1));
    if (D(c, a1)) d(c, s0, D(c, v0));
    tick(c, 26);
    if (D(c, a2)) {
        w(c, v0, static_cast<u32>(kDrawCharacter));
        d(c, s0, D(c, s0) | kDrawCharacter);
        tick(c, 2);
    }

    // 0x2439a8: main pass: the state's byte in the brightness table
    w(c, v0, rd<u32>(W(c, sp) + frame::kMainPass));
    tick(c, 3);
    if (D(c, v0)) {
        w(c, v1, 0x00630000);
        w(c, a0, seg.state);
        w(c, v0, rd<u32>(kBrightnessTable));
        d(c, a1, D(c, s0) | kDrawBrightness);
        w(c, v0, W(c, v0) + W(c, a0));
        c.r[v1].sd[0] = static_cast<std::int8_t>(ld8(W(c, v0)));
        if (D(c, v1)) d(c, s0, D(c, a1));
        d(c, s0, D(c, s0) | kDrawMainPass);
        tick(c, 8);
    }
    // 0x2439d4: or a model brightness other than 128 (1.0)
    c.f[1] = rd<u32>(model + 0x1048);
    w(c, at, 0x43000000);
    c.f[0] = 0x43000000;  // 128.0f
    fpu_compare(c, f(c, 1) == f(c, 0));
    tick(c, 8);
    if (!(c.fcr31 & kFpuCondition)) {
        d(c, s0, D(c, s0) | kDrawBrightness);
        tick(c, 1);
    }
}

// 0x2439f8: the per-segment setup before packing: chain in the scratchpad, skinning, the segment matrix, brightness.
// Not the main pass: only the instance state is updated (skip).
Flow prepare(Cpu &c, u32 model) {
    d(c, v0, D(c, s0) & kDrawSkip);
    tick(c, 3);
    if (D(c, v0)) return Flow::skip;
    w(c, v1, 0x00660000);
    w(c, v0, rd<u32>(kChainInSpr));
    tick(c, 4);
    if (D(c, v0)) {
        w(c, v1, kScratchpad + 0x1000);
        w(c, v0, 0x00660000);
        w(c, a0, chain::kPtr);
        wr<u32>(chain::kPtr, kScratchpad + 0x1000);
        wr<u32>(chain::kOpenTag, 0);
        wr<u32>(chain::kStart, kScratchpad + 0x1000);
        tick(c, 7);
    }
    // 0x243a30
    w(c, a0, rd<u32>(W(c, sp) + frame::kMainPass));
    tick(c, 3);
    if (D(c, a0)) {
        w(c, v0, 2);
        tick(c, 3);
        if (D(c, s6) == D(c, v0)) {
            d(c, a0, D(c, s4));
            d(c, a1, D(c, s1));
            w(c, a2, 1);
            tick(c, 5);
            if (!call(c, kSkinSegment, Ra{0x00243A5C})) return Flow::left;
        }
    }
    // 0x243a5c
    d(c, v0, D(c, s0) & kDrawMatrix);
    tick(c, 3);
    if (D(c, v0)) {
        w(c, a0, kSegmentMatrix);
        w(c, a1, kViewMatrix);
        w(c, a2, W(c, s4) + 0x50);
        tick(c, 7);
        if (!call(c, kMulMatrix, Ra{0x00243A84})) return Flow::left;
    }
    // 0x243a84
    w(c, v0, rd<u32>(W(c, sp) + frame::kMainPass));
    tick(c, 3);
    if (!D(c, v0)) {
        c.f[0] = rd<u32>(model + 0x1048);
        w(c, v0, 0x00660000);
        c.f[1] = static_cast<u32>(to_int(f(c, 0)));
        wr<u32>(kBrightness, c.f[1]);
        tick(c, 6);
        return Flow::skip;
    }
    // 0x243aa8
    d(c, v0, D(c, s0) & kDrawBrightness);
    tick(c, 3);
    if (D(c, v0)) {
        w(c, v1, 0x00630000);
        w(c, a0, 0x00660000);
        w(c, v0, rd<u32>(kBrightnessTable) + W(c, s7));
        c.r[v1].sd[0] = static_cast<std::int8_t>(ld8(W(c, v0)));
        wr<u32>(kBrightness, W(c, v1));
        tick(c, 6);
    }
    return Flow::draw;
}

// One sub-mesh pass over the sent-this-frame bits (loop head `loop`): the frame's need flags get the packets not
// sent yet (bits at shifts 30/29/28 for pass 0, 27/26/25 for pass 1). Stops early once all three are needed.
bool scan_sent(Cpu &c, const SegmentRecord &seg, int shift, u32 loop, int exit_cycles) {
    for (;;) {
        const u32 i = W(c, t1);
        w(c, v0, seg.subs);
        w(c, v1, i << 5);
        w(c, a2, rd<u32>(W(c, a3)));
        w(c, v1, W(c, v1) + W(c, v0));
        w(c, v0, rd<u32>(W(c, v1)) << 2);
        w(c, v0, W(c, v0) + W(c, t3));
        const u32 sent = rd<u32>(W(c, v0));
        w(c, a0, sent);
        w(c, v1, sent << shift);
        w(c, a1, sent << (shift - 1));
        d(c, v1, (S(c, v1) < 0) ^ 1);  // packet A not sent
        d(c, a1, (S(c, a1) < 0) ^ 1);  // packet B not sent
        d(c, a2, D(c, a2) | D(c, v1));
        w(c, a0, sent << (shift - 2));
        wr<u32>(W(c, a3), W(c, a2));
        d(c, a0, (S(c, a0) < 0) ^ 1);  // packet C not sent
        w(c, v0, rd<u32>(W(c, t0)));
        d(c, v0, D(c, v0) | D(c, a1));
        wr<u32>(W(c, t0), W(c, v0));
        w(c, v1, rd<u32>(W(c, t2)));
        d(c, v1, D(c, v1) | D(c, a0));
        wr<u32>(W(c, t2), W(c, v1));
        w(c, v0, rd<u32>(W(c, a3)));
        tick(c, 28);
        if (D(c, v0)) {
            w(c, v0, rd<u32>(W(c, t0)));
            tick(c, 3);
            if (D(c, v0)) {
                tick(c, 2);
                if (D(c, v1)) return true;
            }
        }
        w(c, v0, seg.sub_count);
        w(c, t1, i + 1);
        d(c, v0, S(c, t1) < S(c, v0));
        tick(c, 5);
        if (!D(c, v0)) {
            tick(c, exit_cycles);
            return true;
        }
        if (poll(c, loop)) return false;
    }
}

// 0x243acc: which of the segment's packets A/B/C this pass still needs (frame flags), from the per-sub-mesh
// sent-this-frame table; then the table marks them sent. A nonzero LOD needs A and B. False if control left.
bool packets_needed(Cpu &c, const SegmentRecord &seg) {
    const u32 sp_ = W(c, sp);
    w(c, a1, 0x00660000);
    w(c, a2, seg.stat_a);
    w(c, v1, rd<u32>(kStatsA));
    w(c, v0, kR);
    w(c, a0, rd<u32>(kRDedupe));
    w(c, v1, W(c, v1) + W(c, a2));
    wr<u32>(kStatsA, W(c, v1));
    tick(c, 9);
    if (!D(c, a0)) {
        // 0x243dc4: no dedupe: every packet
        w(c, v0, 1);
        wr<u32>(sp_ + frame::kNeedB, 1);
        wr<u32>(sp_ + frame::kNeedA, 1);
        wr<u32>(sp_ + frame::kNeedC, 1);
        tick(c, 4);
        return true;
    }
    w(c, v0, rd<u32>(sp_ + frame::kPass));
    w(c, t0, sp_ + frame::kNeedB);
    w(c, a3, sp_ + frame::kNeedA);
    w(c, t2, sp_ + frame::kNeedC);
    wr<u32>(sp_ + frame::kNeedB, 0);
    wr<u32>(sp_ + frame::kNeedC, 0);
    wr<u32>(sp_ + frame::kNeedA, 0);
    tick(c, 9);
    if (!D(c, v0)) {
        w(c, v0, seg.sub_count);
        d(c, t1, 0);
        w(c, v1, rd<u32>(sp_ + frame::kPass));
        d(c, v0, S(c, v1) < S(c, v0));
        tick(c, 6);
        if (D(c, v0)) {
            w(c, v0, 0x00660000);
            w(c, t3, kSentThisFrame);
            tick(c, 3);
            if (!scan_sent(c, seg, 30, 0x00243B38, 2)) return false;
        }
    } else {
        w(c, v0, seg.sub_count);
        d(c, t1, 0);
        tick(c, 4);
        if (S(c, v0) > 0) {
            w(c, v0, 0x00660000);
            w(c, t3, kSentThisFrame);
            tick(c, 2);
            if (!scan_sent(c, seg, 27, 0x00243BF0, 0)) return false;
        }
    }

    // 0x243c88
    c.f[1] = seg.lod;
    c.f[0] = 0;
    fpu_compare(c, f(c, 1) == f(c, 0));
    tick(c, 7);
    if (!(c.fcr31 & kFpuCondition)) {
        w(c, v0, 1);
        wr<u32>(W(c, a3), 1);
        wr<u32>(W(c, t0), 1);
        tick(c, 3);
    }
    w(c, v0, rd<u32>(W(c, a3)));
    tick(c, 3);
    if (!D(c, v0)) {
        w(c, v0, rd<u32>(W(c, t0)));
        tick(c, 3);
        if (!D(c, v0)) {
            w(c, v0, rd<u32>(W(c, t2)));
            tick(c, 3);
            if (!D(c, v0)) return true;
        }
    }

    // 0x243cd4: mark them sent (A and B always, C unless kFlagNoPacketC)
    w(c, v0, seg.sub_count);
    d(c, t1, 0);
    tick(c, 4);
    if (S(c, v0) <= 0) return true;
    w(c, v0, 0x00660000);
    d(c, t0, kFlagNoPacketC);
    w(c, a3, kSentThisFrame);
    tick(c, 5);
    for (;;) {
        const u32 i = W(c, t1);
        w(c, v1, seg.subs);
        w(c, v0, i << 5);
        w(c, a0, rd<u32>(sp_ + frame::kPass));
        w(c, v0, rd<u32>(W(c, v0) + W(c, v1)));
        tick(c, 7);
        if (!D(c, a0)) {
            w(c, v0, W(c, v0) << 2);
            w(c, a0, W(c, v0) + W(c, a3));
            w(c, a1, rd<u32>(W(c, a0)));
            d(c, v1, D(c, a1) | 6);
            wr<u32>(W(c, a0), W(c, v1));
            d(c, v0, seg.flags & D(c, t0));
            tick(c, 9);
            if (!D(c, v0)) {
                d(c, v0, D(c, a1) | 14);
                tick(c, 3);
                wr<u32>(W(c, a0), W(c, v0));
                tick(c, 1);
            }
        } else {
            w(c, v0, W(c, v0) << 2);
            w(c, a2, 1);
            w(c, a0, W(c, v0) + W(c, a3));
            w(c, a1, rd<u32>(W(c, a0)));
            d(c, v1, D(c, a1) | 16);
            w(c, v0, W(c, v1) << 26);
            wr<u32>(W(c, a0), W(c, v1));
            w(c, v0, 0u - static_cast<u32>(S(c, v0) < 0));
            tick(c, 11);
            // the original compares this 0/-1 bitfield value with 1, which never matches: the stores always happen
            d(c, v0, D(c, a1) | 48);
            wr<u32>(W(c, a0), W(c, v0));
            tick(c, 2);
            d(c, v0, seg.flags & D(c, t0));
            tick(c, 4);
            if (!D(c, v0)) {
                w(c, v1, rd<u32>(W(c, a0)));
                w(c, v0, W(c, v1) << 25);
                w(c, v0, 0u - static_cast<u32>(S(c, v0) < 0));
                tick(c, 6);
                d(c, v0, D(c, v1) | 64);
                tick(c, 1);
                wr<u32>(W(c, a0), W(c, v0));
                tick(c, 1);
            }
        }
        // 0x243da8
        w(c, v0, seg.sub_count);
        w(c, t1, i + 1);
        d(c, v0, S(c, t1) < S(c, v0));
        tick(c, 5);
        if (!D(c, v0)) {
            tick(c, 2);
            return true;
        }
        if (poll(c, 0x00243CF8)) return false;
    }
}

// A DMA call to packet A or B of the LOD in seg.lod (0x243f20 / 0x244104): a3 = the packet, a1 = the chain pointer.
bool call_lod_packet(Cpu &c, const SegmentRecord &seg, u32 stat, u32 base, u32 loop_lod, u32 loop_0, int pad_after) {
    w(c, a0, 0x00660000);
    c.f[1] = seg.lod;
    c.f[0] = 0;
    w(c, v0, rd<u32>(kStatsB));
    w(c, v1, rd<u32>(stat));
    fpu_compare(c, f(c, 1) == f(c, 0));
    w(c, v0, W(c, v0) + W(c, v1));
    wr<u32>(kStatsB, W(c, v0));
    tick(c, 10);
    if (!(c.fcr31 & kFpuCondition)) {
        c.f[0] = static_cast<u32>(to_int(f(c, 1)));
        w(c, v0, c.f[0]);
        w(c, v1, 0x00660000);
        w(c, a1, rd<u32>(chain::kPtr));
        w(c, a2, chain::kPtr);
        d(c, v1, D(c, a1) & 12);
        w(c, v0, W(c, s1) + (W(c, v0) << 2));
        w(c, a3, rd<u32>(W(c, v0) + (base - seg.addr)));
        tick(c, 11);
        if (D(c, v1)) {
            tick(c, 1);
            if (!pad_to_qword(c, a1, loop_lod)) return false;
            tick(c, pad_after);
        }
    } else {
        w(c, v1, 0x00660000);
        w(c, a3, rd<u32>(base));
        w(c, a1, rd<u32>(chain::kPtr));
        w(c, a2, chain::kPtr);
        d(c, v0, D(c, a1) & 12);
        tick(c, 7);
        if (D(c, v0)) {
            tick(c, 1);
            if (!pad_to_qword(c, a1, loop_0)) return false;
        }
    }
    close_open_tag(c, a1, 6);
    open_call(c, a1, a3);
    w(c, a0, 1);
    tick(c, 14);
    return true;
}

// 0x243dd4: DMA calls to the segment's static packets: the header at the start of a pass (then FLUSH), the needed
// packets A (seg+0x1A4[lod]), C (seg+0x1B4), B (seg+0x1AC[lod]), and the header again after them. False if
// control left.
bool emit_packets(Cpu &c, const SegmentRecord &seg) {
    const u32 sp_ = W(c, sp);
    w(c, v1, kR);
    w(c, v0, rd<u32>(kRPackets));
    tick(c, 4);
    if (!D(c, v0)) return true;
    w(c, v1, rd<u32>(kRSetup));
    w(c, v0, 2);
    tick(c, 4);
    if (D(c, v1) != D(c, v0)) return true;
    w(c, v1, rd<u32>(sp_ + frame::kPass));
    w(c, v0, 1);
    tick(c, 4);
    bool first = false;
    if (D(c, v1) == D(c, v0)) {
        w(c, v0, 0x00660000);
        w(c, v1, rd<u32>(kPass1First));
        tick(c, 4);
        first = D(c, s3) == D(c, v1);
    }
    if (!first) {
        tick(c, 2);
        first = D(c, s3) == 0;
    }
    if (first) {
        // 0x243e1c: the first segment of the pass calls its header packet and needs every packet
        w(c, v0, 1);
        w(c, v1, 0x00660000);
        wr<u32>(sp_ + frame::kNeedA, 1);
        d(c, t0, D(c, v1));
        wr<u32>(sp_ + frame::kNeedC, 1);
        w(c, a2, chain::kPtr);
        wr<u32>(sp_ + frame::kNeedB, 1);
        w(c, a1, rd<u32>(chain::kPtr));
        w(c, a3, seg.header);
        d(c, v0, D(c, a1) & 12);
        tick(c, 12);
        if (D(c, v0)) {
            tick(c, 1);
            if (!pad_to_qword(c, a1, 0x00243E50)) return false;
        }
        close_open_tag(c, a1, 6);
        open_call(c, a1, a3);
        const u32 p = rd<u32>(chain::kPtr);
        wr<u32>(p, vif::kFlush);
        w(c, a0, vif::kFlush);
        w(c, v0, p + 4);
        wr<u32>(chain::kPtr, p + 4);
        tick(c, 18);
    }

    // 0x243ed4: a FLUSH before the packets
    w(c, v0, rd<u32>(sp_ + frame::kNeedA));
    tick(c, 3);
    bool any = D(c, v0) != 0;
    if (!any) {
        w(c, v0, rd<u32>(sp_ + frame::kNeedB));
        tick(c, 3);
        any = D(c, v0) != 0;
        if (!any) {
            w(c, v0, rd<u32>(sp_ + frame::kNeedC));
            tick(c, 3);
            any = D(c, v0) != 0;
        }
    }
    if (any) {
        w(c, v0, 0x00660000);
        w(c, v1, rd<u32>(kNoPacketFlush));
        tick(c, 4);
        if (!D(c, v1)) {
            w(c, a0, 0x00660000);
            w(c, v1, vif::kFlush);
            const u32 p = rd<u32>(chain::kPtr);
            wr<u32>(p, vif::kFlush);
            w(c, v0, p + 4);
            wr<u32>(chain::kPtr, p + 4);
            tick(c, 6);
        }
    }

    // 0x243f20: packet A
    w(c, v0, rd<u32>(sp_ + frame::kNeedA));
    d(c, a0, 0);
    tick(c, 4);
    if (D(c, v0) && !call_lod_packet(c, seg, seg.stat_b.address(), seg.packet_a(0), 0x00243F88, 0x00243FC8, 2)) return false;

    // 0x24403c: packet C
    d(c, v0, seg.flags);
    d(c, v1, kFlagNoPacketC);
    d(c, v0, D(c, v0) & D(c, v1));
    tick(c, 6);
    if (!D(c, v0)) {
        w(c, v0, rd<u32>(sp_ + frame::kNeedC));
        tick(c, 3);
        if (D(c, v0)) {
            w(c, a1, 0x00660000);
            w(c, v0, 0x00660000);
            w(c, a0, seg.stat_c);
            w(c, a3, chain::kPtr);
            w(c, v1, rd<u32>(kStatsB) + W(c, a0));
            w(c, a2, rd<u32>(chain::kPtr));
            w(c, t0, seg.packet_c);
            wr<u32>(kStatsB, W(c, v1));
            d(c, v0, D(c, a2) & 12);
            tick(c, 12);
            if (D(c, v0) && !pad_to_qword(c, a2, 0x00244090)) return false;
            close_open_tag(c, a2, 6);
            open_call(c, a2, t0);
            w(c, a0, 1);
            tick(c, 14);
        }
    }

    // 0x244104: packet B
    w(c, v0, rd<u32>(sp_ + frame::kNeedB));
    tick(c, 3);
    if (D(c, v0) && !call_lod_packet(c, seg, seg.stat_a.address(), seg.packet_b(0), 0x00244168, 0x002441A8, 2)) return false;

    // 0x24421c: after any packet, the header again
    tick(c, 2);
    if (!D(c, a0)) return true;
    w(c, v0, 0x00660000);
    w(c, v1, rd<u32>(kNoHeaderAfterPackets));
    tick(c, 4);
    if (D(c, v1)) return true;
    w(c, v1, 0x00660000);
    w(c, a3, seg.header);
    w(c, a1, rd<u32>(chain::kPtr));
    w(c, a2, chain::kPtr);
    d(c, v0, D(c, a1) & 12);
    tick(c, 7);
    if (D(c, v0) && !pad_to_qword(c, a1, 0x00244250)) return false;
    close_open_tag(c, a1, 6);
    open_call(c, a1, a3);
    tick(c, 13);
    return true;
}

// One iteration of the segment loop (0x243158 - 0x2442e0)
Flow draw_segment(Cpu &c, u32 model) {
    if (!next_record(c)) return Flow::left;
    const SegmentRecord seg{W(c, s1)};
    if (!segment_state(c, model, seg)) return Flow::skip;
    segment_lighting(c, seg);
    const Then then = select_program(c, model, seg);
    if (then == Then::left) return Flow::left;
    if (then == Then::common) common_bits(c, model, seg);
    const Flow flow = prepare(c, model);
    if (flow != Flow::draw) return flow;
    if (!packets_needed(c, seg) || !emit_packets(c, seg)) return Flow::left;
    // 0x2442c0: fn_23a280(record, model, program, draw bits, &packer state)
    w(c, v0, 0x00660000);
    w(c, a2, rd<u32>(W(c, sp) + frame::kProgram));
    d(c, a0, D(c, s1));
    d(c, a3, D(c, s0));
    d(c, a1, D(c, gpr::fp));
    w(c, t0, kPackerState);
    tick(c, 8);
    return call(c, kPackSegment, Ra{0x002442E0}) ? Flow::draw : Flow::left;
}

}

// Draws segments [*0x4F50D0, a3) of a model's segment list (0x65E460, built by fn_249060): for each, the record comes
// into the scratchpad by toSPR DMA (double-buffered, the next one in flight), gets its per-instance state, VU1
// program and draw bits, DMA calls to its static packets go into the VIF1 chain, and fn_23a280 packs it. a0 = the
// model, a1 = main pass (0: only the instance state is updated), a2 = draw pass (0/1), a3 = end index.
PS2_DECOMP(00242FF8, DrawModelSegments) {
    const u32 model = c.r[a0].w[0];
    StackFrame fr(c, frame::kSize);
    w(c, v0, 0x004F0000);
    fr.sq(gpr::fp, 0x40);
    w(c, v1, rd<u32>(kSprDoubleBuffer));
    d(c, gpr::fp, D(c, a0));
    for (unsigned k = 0; k < 8; ++k) fr.sq(s0 + k, 0xC0 - 0x10 * k);
    fr.sd(ra, 0x30);
    fr.sw(a1, frame::kMainPass);
    fr.sw(a2, frame::kPass);
    fr.sw(a3, frame::kEnd);
    tick(c, 19);
    if (D(c, v1)) {
        w(c, v0, 2);
        w(c, v1, 0x004F0000);
        wr<u32>(kSprDoubleBuffer, 2);
        tick(c, 3);
    }
    spr_prefetch_first(c);

    // 0x243120: reset the packer's caches, then the loop
    w(c, v0, 0x004F0000);
    w(c, a0, ~0u);
    w(c, v1, 0x00660000);
    w(c, s3, rd<u32>(kFirstSegment));
    wr<u32>(kPackerCacheA, ~0u);
    w(c, v0, 0x00660000);
    w(c, v1, rd<u32>(W(c, sp) + frame::kEnd));
    w(c, a1, 0x00660000);
    wr<u32>(kPackerCacheB, ~0u);
    d(c, v0, S(c, s3) < S(c, v1));
    wr<u32>(kPackerState, 0);
    tick(c, 13);
    if (D(c, v0)) {
        tick(c, 1);
        for (;;) {
            if (draw_segment(c, model) == Flow::left) return;
            // 0x2442e0
            w(c, s3, rd<u32>(W(c, sp) + frame::kNext));
            w(c, v1, rd<u32>(W(c, sp) + frame::kEnd));
            d(c, v0, S(c, s3) < S(c, v1));
            tick(c, 5);
            if (!D(c, v0)) break;
            if (poll(c, 0x00243158)) return;
        }
    }

    // 0x2442f4: a chain built in the scratchpad goes back to the main buffer
    w(c, a0, 0x00660000);
    w(c, v0, rd<u32>(kChainInSpr));
    tick(c, 4);
    if (D(c, v0)) {
        w(c, v0, kPhysMask);
        w(c, v1, rd<u32>(kChainBase));
        w(c, a2, 0x00660000);
        w(c, a0, chain::kPtr);
        w(c, a1, kUncachedAccel);
        d(c, v1, (D(c, v1) & kPhysMask) | kUncachedAccel);
        wr<u32>(chain::kOpenTag, 0);
        wr<u32>(chain::kPtr, W(c, v1));
        wr<u32>(chain::kStart, W(c, v1));
        tick(c, 12);
    }
    for (unsigned k = 0; k < 8; ++k) fr.lq(s0 + k, 0xC0 - 0x10 * k);
    fr.lq(gpr::fp, 0x40);
    fr.ld(ra, 0x30);
    fr.pop();
    tick(c, 13);
}
