// TextureManager (Ps2/Renderer/Texture/TextureManager.cpp): uploading texture slots to GS memory from inside the
// frame's VIF1 chain (decomp/notes/native-renderer.md §1.5-1.6).
//
// The chain is built with libvifpk's sceVif1Packet at 0x0065E300, inlined here. The per-slot uploaders append through a
// second sceVif1Packet at 0x006783E0: this function copies the chain's packet header there, calls them, and copies the
// header back, so the chain continues after the transfers they wrote.
//
// The code keeps the original's registers and stores (scratch registers included) because the callees and the
// preemption checks in the padding loops see them; each step is named after the libvifpk operation it inlines.
#include "../render/vif_packet.hpp"
#include "texture_manager.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp::render;

constexpr std::uint32_t kUploadPacket = 0x006783E0u;  // the sceVif1Packet the slot uploaders append through
constexpr std::uint32_t kPacketBytes = 32;            // how much of the packet header is copied there and back
// GIF tag template in .data: PACKED, NREG 1 (A+D), EOP, NLOOP 0 (counted when the tag is closed)
constexpr std::uint32_t kAdGifTag = 0x005857C0u;

constexpr std::uint32_t kFastMemcpy = 0x0020FDE0u;     // FastMemcpy(dst, src, bytes)
constexpr std::uint32_t kUploadPalette = 0x00268AE0u;  // fn_268ae0(mgr, slot, 0): the slot's CLUT transfer
constexpr std::uint32_t kUploadTexels = 0x00268EC0u;   // fn_268ec0(mgr, slot, 0, 1): the slot's image transfer

// Zero words at the chain's write pointer, reloading and storing it for each word, until it reaches register `end`
// (v0 = the pointer, v1 = more to go). False when the machine unwound at the loop head.
bool pad_until(Cpu &c, const Vif1Packet &chain, unsigned end, std::uint32_t loop) {
    for (;;) {
        set32(c.r[v0], chain.cur);
        wr<std::uint32_t>(c.r[v0].w[0], 0);
        set32(c.r[v0], c.r[v0].w[0] + 4);
        c.r[v1].d[0] = c.r[v0].d[0] < c.r[end].d[0];
        chain.cur = c.r[v0].w[0];
        tick(c, 7);
        if (!c.r[v1].d[0]) return true;
        if (poll(c, loop)) return false;
    }
}

// Zero words at register p (a local copy of the write pointer) until p is qword aligned (v0 = p & 12). The caller
// makes the first test. False when the machine unwound at the loop head.
bool pad_to_qword(Cpu &c, unsigned p, std::uint32_t loop) {
    for (;;) {
        wr<std::uint32_t>(c.r[p].w[0], 0);
        set32(c.r[p], c.r[p].w[0] + 4);
        c.r[v0].d[0] = c.r[p].d[0] & 12;
        tick(c, 6);
        if (!c.r[v0].d[0]) return true;
        if (poll(c, loop)) return false;
    }
}

// Closes the open DMA tag at register t (nonzero): its QWC grows by the qwords written after it, up to register p.
void close_dma_tag(Cpu &c, unsigned t, unsigned p) {
    set32(c.r[v0], c.r[p].w[0] - c.r[t].w[0]);
    set32(c.r[v1], rd<std::uint32_t>(c.r[t].w[0]));
    set32(c.r[v0], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[v0].w[0]) >> 4));
    set32(c.r[v0], c.r[v0].w[0] - 1);
    set32(c.r[v1], c.r[v1].w[0] + c.r[v0].w[0]);
    wr<std::uint32_t>(c.r[t].w[0], c.r[v1].w[0]);
    tick(c, 6);
}

// Opens a cnt DMA tag (QWC 0) at register p, qword aligned: it becomes the open tag, no VIF code is open and the
// pointer moves past the tag's 8 bytes (v0 = the tag word, v1 = p + 4, register after = p + 8).
void open_cnt(Cpu &c, const Vif1Packet &chain, unsigned p, unsigned after) {
    const std::uint32_t at = c.r[p].w[0];
    chain.cur = at;
    set32(c.r[v0], dma::tag(dma::kCnt));
    chain.dma_tag = at;
    set32(c.r[v1], at + 4);
    wr<std::uint32_t>(at, c.r[v0].w[0]);
    set32(c.r[after], at + 8);
    chain.cur = c.r[v1].w[0];
    wr<std::uint32_t>(at + 4, 0);
    chain.cur = c.r[after].w[0];
    chain.vif_code = 0;
}

}

// Uploads texture slots a1..a2 of the TextureManager a0 to GS memory in the frame's chain: a cnt block with FLUSH, then
// per slot its CLUT and image transfers (fn_268ae0, fn_268ec0), then a cnt block with a DIRECT A+D TEXFLUSH and FLUSH.
// Meshdraw (fn_2610f0, one slot) and fn_246120 (a range) call it before drawing with textures not resident yet.
PS2_DECOMP(0026BCF8, TextureManager::UploadSlots) {
    const Vif1Packet chain = frame_chain();
    StackFrame f(c, 0x70);
    f.sq(s1, 0x50);
    f.sq(s0, 0x60);
    f.sq(s2, 0x40);
    f.sq(s3, 0x30);
    f.sq(s4, 0x20);
    f.sd(ra, 0x10);

    // s2 = the manager, s0 = the slot counter, s3 = the last slot; s1 and s4 are the lui bases of the two packets
    c.r[s2].d[0] = c.r[a0].d[0];
    c.r[s0].d[0] = c.r[a1].d[0];
    c.r[s3].d[0] = c.r[a2].d[0];
    c.r[s1].sd[0] = 0x00660000;  // chain = s1 - 0x1d00
    c.r[s4].sd[0] = 0x00680000;  // upload packet = s4 - 0x7c20
    // the GIF tag template goes to the frame (sp+0), where the DIRECT block below copies it from
    c.r[t1].d[0] = rd<std::uint64_t>(kAdGifTag);
    c.r[t0].d[0] = rd<std::uint64_t>(kAdGifTag + 8);
    f.sd(t1, 0x00);
    f.sd(t0, 0x08);

    // pad the chain with zero words to the next qword boundary (t2 = the end, a3 = whether there is any)
    set32(c.r[a3], chain.cur);
    set32(c.r[t3], chain.addr);
    c.r[t2].d[0] = c.r[a3].d[0] & ~std::uint64_t{15};
    c.r[v1].d[0] = c.r[t2].d[0] < c.r[a3].d[0];
    set32(c.r[v0], c.r[t2].w[0] + 16);
    if (c.r[v1].d[0]) c.r[t2].d[0] = c.r[v0].d[0];
    c.r[a3].d[0] = c.r[a3].d[0] < c.r[t2].d[0];
    tick(c, 29);
    if (c.r[a3].d[0]) {
        tick(c, 1);
        if (!pad_until(c, chain, t2, 0x0026BD70u)) return;
    }

    // sceVif1PkCnt: align, close the open DMA tag, open a cnt tag; then FLUSH, so the draws already in the chain are
    // done before the transfers
    set32(c.r[a2], chain.cur);
    set32(c.r[a3], chain.addr);
    c.r[v0].d[0] = c.r[a2].d[0] & 12;
    tick(c, 5);
    if (c.r[v0].d[0] && !pad_to_qword(c, a2, 0x0026BDA0u)) return;
    set32(c.r[a0], chain.dma_tag);
    tick(c, 3);
    if (c.r[a0].d[0]) close_dma_tag(c, a0, a2);
    open_cnt(c, chain, a2, a0);
    set32(c.r[a1], vif::code(vif::kFlush));
    set32(c.r[a2], chain.addr);
    set32(c.r[v0], chain.cur);
    wr<std::uint32_t>(c.r[v0].w[0], c.r[a1].w[0]);
    set32(c.r[v0], c.r[v0].w[0] + 4);
    c.r[a0].d[0] = c.r[v0].d[0];
    chain.cur = c.r[v0].w[0];
    c.r[v1].d[0] = c.r[a0].d[0] & 12;
    tick(c, 20);

    // close the cnt block (pad, QWC) and leave no DMA tag open for the uploaders
    if (c.r[v1].d[0]) {
        tick(c, 1);
        if (!pad_to_qword(c, a0, 0x0026BE30u)) return;
    }
    set32(c.r[a1], chain.dma_tag);
    tick(c, 3);
    if (c.r[a1].d[0]) close_dma_tag(c, a1, a0);
    chain.cur = c.r[a0].w[0];
    set32(c.r[a1], chain.addr);
    chain.dma_tag = 0;

    // the uploaders append through their own packet: hand them the chain's header
    set32(c.r[a0], kUploadPacket);
    set32(c.r[a2], kPacketBytes);
    tick(c, 7);
    if (!call(c, kFastMemcpy, Ra{0x0026BE88u})) return;

    c.r[v1].d[0] = c.r[s3].sd[0] < c.r[s0].sd[0];
    tick(c, 3);
    if (!c.r[v1].d[0]) {
        tick(c, 1);
        for (;;) {  // 0x0026BE98: every slot from a1 to a2
            c.r[a1].d[0] = c.r[s0].d[0];
            c.r[a0].d[0] = c.r[s2].d[0];
            c.r[a2].d[0] = 0;
            tick(c, 5);
            if (!call(c, kUploadPalette, Ra{0x0026BEACu})) return;
            c.r[a1].d[0] = c.r[s0].d[0];
            c.r[a0].d[0] = c.r[s2].d[0];
            c.r[a2].d[0] = 0;
            set32(c.r[a3], 1);
            tick(c, 6);
            if (!call(c, kUploadTexels, Ra{0x0026BEC4u})) return;
            set32(c.r[s0], c.r[s0].w[0] + 1);
            c.r[v0].d[0] = c.r[s3].sd[0] < c.r[s0].sd[0];
            tick(c, 4);
            if (c.r[v0].d[0]) break;
            if (poll(c, 0x0026BE98u)) return;
        }
    }

    // and take it back: the chain continues after what they wrote
    set32(c.r[s0], chain.addr);
    set32(c.r[a2], kPacketBytes);
    set32(c.r[a1], kUploadPacket);
    c.r[a0].d[0] = c.r[s0].d[0];
    tick(c, 6);
    if (!call(c, kFastMemcpy, Ra{0x0026BEECu})) return;

    // sceVif1PkCnt again
    set32(c.r[a2], chain.cur);
    c.r[v0].d[0] = c.r[a2].d[0] & 12;
    tick(c, 4);
    if (c.r[v0].d[0]) {
        tick(c, 1);
        if (!pad_to_qword(c, a2, 0x0026BF00u)) return;
    }
    set32(c.r[a0], chain.dma_tag);
    tick(c, 3);
    if (c.r[a0].d[0]) close_dma_tag(c, a0, a2);
    open_cnt(c, chain, a2, a1);
    set32(c.r[a0], ~15u);
    set32(c.r[a3], chain.addr);

    // sceVif1PkOpenDirectCode: pad so that the DIRECT code is the last word of a qword (a1 = where it goes)
    set32(c.r[v1], chain.cur);
    c.r[a0].d[0] = c.r[v1].d[0] & c.r[a0].d[0];
    set32(c.r[a1], c.r[a0].w[0] + 12);
    c.r[v0].d[0] = c.r[a1].d[0] < c.r[v1].d[0];
    set32(c.r[a0], c.r[a0].w[0] + 28);
    if (c.r[v0].d[0]) c.r[a1].d[0] = c.r[a0].d[0];
    c.r[v1].d[0] = c.r[v1].d[0] < c.r[a1].d[0];
    tick(c, 21);
    if (c.r[v1].d[0] && !pad_until(c, chain, a1, 0x0026BF90u)) return;
    set32(c.r[v0], chain.cur);
    set32(c.r[a1], vif::code(vif::kDirect));
    set32(c.r[t1], chain.addr);
    set32(c.r[a2], gs::kTexflush);
    set32(c.r[v1], c.r[v0].w[0] + 4);
    chain.vif_code = c.r[v0].w[0];
    chain.cur = c.r[v1].w[0];
    wr<std::uint32_t>(c.r[v0].w[0], c.r[a1].w[0]);
    set32(c.r[a3], gif::kImage);

    // sceVif1PkOpenGifTag with the template, then one A+D qword: TEXFLUSH = 0
    set32(c.r[a0], chain.cur);
    f.lq(v0, 0x00);
    chain.gif_tag = c.r[a0].w[0];
    st128(c.r[a0].w[0] & ~15u, c.r[v0]);
    set32(c.r[v1], chain.cur);
    set32(c.r[v0], c.r[v1].w[0] + 16);
    set32(c.r[a0], c.r[v1].w[0] + 32);
    chain.cur = c.r[v0].w[0];
    wr<std::uint32_t>(c.r[v1].w[0] + 16, 0);
    wr<std::uint32_t>(c.r[v0].w[0] + 8, c.r[a2].w[0]);
    wr<std::uint32_t>(c.r[v0].w[0] + 12, 0);
    wr<std::uint32_t>(c.r[v0].w[0] + 4, 0);
    tick(c, 21);

    // sceVif1PkCloseGifTag: NLOOP = the qwords after the tag (dwords for REGLIST, any length for IMAGE) per NREG
    chain.cur = c.r[a0].w[0];
    set32(c.r[t0], chain.gif_tag);
    c.r[a2].d[0] = rd<std::uint64_t>(c.r[t0].w[0]);
    const std::uint64_t tag = c.r[a2].d[0];
    set32(c.r[a0], c.r[a0].w[0] - c.r[t0].w[0]);
    set32(c.r[a0], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[a0].w[0]) >> 3));
    set32(c.r[a1], c.r[a0].w[0] - 2);
    c.r[v1].d[0] = gif::flg(tag);
    set32(c.r[a0], c.r[a1].w[0] >> 1);
    c.r[v0].d[0] = c.r[v1].d[0] ^ gif::kReglist;
    if (c.r[v0].d[0]) c.r[a1].d[0] = c.r[a0].d[0];
    tick(c, 13);
    if (c.r[v1].d[0] != c.r[a3].d[0]) {
        c.r[v0].d[0] = gif::nreg(tag);
        set32(c.r[a0], 16);
        if (!c.r[v0].d[0]) c.r[v0].d[0] = c.r[a0].d[0];
        set32(c.r[v1], c.r[a1].w[0] + c.r[v0].w[0]);
        tick(c, 6);
        // v0 is 1-16 here, so the original's divide-by-zero break never fires
        set32(c.r[v1], c.r[v1].w[0] - 1);
        mmi::divu(c, 0, c.r[v1].w[0], c.r[v0].w[0]);
        c.r[v1].d[0] = c.lo.d[0];
        c.r[a1].d[0] = c.r[v1].d[0];
        tick(c, 4);
    }
    c.r[v0].d[0] = tag + (c.r[a1].d[0] & 0xFFFFFFFFu);
    wr<std::uint64_t>(c.r[t0].w[0], c.r[v0].d[0]);
    chain.gif_tag = 0;

    // sceVif1PkCloseDirectCode: pad, the DIRECT code's IMMEDIATE += the qwords after it; then FLUSH and pad
    set32(c.r[v1], chain.cur);
    c.r[v0].d[0] = c.r[v1].d[0] & 12;
    tick(c, 9);
    if (c.r[v0].d[0] && !pad_to_qword(c, v1, 0x0026C080u)) return;
    chain.cur = c.r[v1].w[0];
    set32(c.r[a3], chain.addr);
    set32(c.r[a1], vif::code(vif::kFlush));
    set32(c.r[a2], ~15u);
    set32(c.r[v0], chain.cur);
    set32(c.r[a0], chain.vif_code);
    set32(c.r[v0], c.r[v0].w[0] - 4);
    set32(c.r[v0], c.r[v0].w[0] - c.r[a0].w[0]);
    set32(c.r[v1], rd<std::uint32_t>(c.r[a0].w[0]));
    set32(c.r[v0], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[v0].w[0]) >> 2));
    set32(c.r[v0], c.r[v0].w[0] >> 2);
    set32(c.r[v1], c.r[v1].w[0] + c.r[v0].w[0]);
    wr<std::uint32_t>(c.r[a0].w[0], c.r[v1].w[0]);
    chain.vif_code = 0;
    set32(c.r[v0], chain.cur);
    wr<std::uint32_t>(c.r[v0].w[0], c.r[a1].w[0]);
    set32(c.r[v0], c.r[v0].w[0] + 4);
    c.r[a1].d[0] = c.r[v0].d[0] & c.r[a2].d[0];
    chain.cur = c.r[v0].w[0];
    c.r[a0].d[0] = c.r[a1].d[0] < c.r[v0].d[0];
    set32(c.r[v1], c.r[a1].w[0] + 16);
    if (c.r[a0].d[0]) c.r[a1].d[0] = c.r[v1].d[0];
    c.r[v0].d[0] = c.r[v0].d[0] < c.r[a1].d[0];
    tick(c, 25);
    if (c.r[v0].d[0]) {
        tick(c, 1);
        if (!pad_until(c, chain, a1, 0x0026C100u)) return;
    }
    // the cnt tag stays open: the next writer closes it

    f.lq(s0, 0x60);
    f.lq(s1, 0x50);
    f.lq(s2, 0x40);
    f.lq(s3, 0x30);
    f.lq(s4, 0x20);
    f.ld(ra, 0x10);
    f.pop();
    tick(c, 9);
}
