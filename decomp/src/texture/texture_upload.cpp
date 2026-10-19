// Ps2/Renderer/Texture/TextureManager.cpp: uploading a texture slot's palette and texels to GS memory.
//
// Both build the same three-part packet in the manager's upload packet (a sceVif1Packet at 0x6783E0) with the Sony
// VIF1 packet library, which stays recompiled:
//   1. a DMA cnt tag with a DIRECT GIF packet of four A+D writes: BITBLTBUF, TRXREG, TRXPOS, TRXDIR (host to local);
//   2. a cnt tag aligned so that DIRECT 1 and an IMAGE GIF tag for the data fill the next qword;
//   3. a ref tag that DMAs the data straight from EE memory behind a DIRECT of the same size.
// Every library call is the original `jal` from the original's register state; a0 is always the packet (s0).
#include "texture_manager.hpp"
#include "../render/vif_e.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp::texture;
namespace rv = decomp::render;
using rv::GsReg;

constexpr unsigned s8 = gpr::fp;  // the frame pointer register, a ninth saved register here (`fp` is also ps2::fp)

constexpr std::uint32_t kUploadPacket = 0x006783E0u;         // sceVif1Packet the uploads append to
constexpr std::uint32_t kAdTag = 0x005857C0u;                // static GIF tag: PACKED A+D, EOP, NLOOP closed later
constexpr std::uint32_t kZeroSizeMessage = 0x005857D0u;      // "Background texture %d is 32 bit"
constexpr std::uint32_t kFirstBackgroundSlot = 0x006728A8u;  // slot number the message counts from

// libvifpk (names from the code; fn_384de8 and fn_384eb0 inferred: it opens a cnt tag, PkRef takes a3/t0/t1 opts)
constexpr std::uint32_t kPkCnt = 0x00384DE8u;
constexpr std::uint32_t kPkRef = 0x00384EB0u;
constexpr std::uint32_t kPkOpenDirectCode = 0x003850D8u;
constexpr std::uint32_t kPkCloseDirectCode = 0x00385130u;
constexpr std::uint32_t kPkOpenGifTag = 0x00385160u;
constexpr std::uint32_t kPkCloseGifTag = 0x00385178u;
constexpr std::uint32_t kPkAlign = 0x00385220u;
constexpr std::uint32_t kPkAddCode = 0x003852A0u;
constexpr std::uint32_t kPkAddDword = 0x00385338u;
constexpr std::uint32_t kPkAddGsAD = 0x00385360u;
constexpr std::uint32_t kSprintf = 0x00475918u;

// The library calls on the upload packet (in s0). Each sets a0 and the arguments the way the original's call block
// does, charges that block's cycles and makes the call; false when control left the function (return at once).
struct UploadPacket {
    Cpu &c;

    bool lib(std::uint32_t fn, std::int32_t cycles, std::uint32_t ra) const {
        c.r[a0].d[0] = c.r[s0].d[0];
        tick(c, cycles);
        return call(c, fn, Ra{ra});
    }
    bool cnt(std::int32_t cycles, std::uint32_t ra) const {
        c.r[a1].d[0] = 0;
        return lib(kPkCnt, cycles, ra);
    }
    bool open_direct_code(std::uint32_t ra) const {
        c.r[a1].d[0] = 0;
        return lib(kPkOpenDirectCode, 4, ra);
    }
    // the 128-bit GIF tag the caller copied to sp+0
    bool open_gif_tag(const StackFrame &f, std::uint32_t ra) const {
        f.lq(a1, 0);
        return lib(kPkOpenGifTag, 4, ra);
    }
    bool add_gs_ad(GsReg reg, std::uint64_t value, std::int32_t cycles, std::uint32_t ra) const {
        set32(c.r[a1], static_cast<std::uint32_t>(reg));
        c.r[a2].d[0] = value;
        return lib(kPkAddGsAD, cycles, ra);
    }
    bool close_gif_tag(std::uint32_t ra) const { return lib(kPkCloseGifTag, 3, ra); }
    bool close_direct_code(std::uint32_t ra) const { return lib(kPkCloseDirectCode, 3, ra); }
    // pad so the write pointer sits at word 3 of a qword (PkAlign(pkt, 2, 3)): DIRECT then fills that qword
    bool align(std::uint32_t ra) const {
        set32(c.r[a2], 3);
        set32(c.r[a1], 2);
        return lib(kPkAlign, 5, ra);
    }
    bool add_code(std::uint32_t code, std::uint32_t ra) const {
        set32(c.r[a1], code);
        return lib(kPkAddCode, 5, ra);
    }
    bool add_dword(std::uint64_t value, std::int32_t cycles, std::uint32_t ra) const {
        c.r[a1].d[0] = value;
        return lib(kPkAddDword, cycles, ra);
    }
    // ref tag: `qwc` qwords at `data`, behind a DIRECT with the size ORed in (both registers as the original holds them)
    bool ref(const Reg128 &data, const Reg128 &qwc, std::uint32_t ra) const {
        c.r[a1].d[0] = data.d[0];
        c.r[a2].d[0] = qwc.d[0];
        c.r[a3].d[0] = 0;
        c.r[t0].d[0] = qwc.d[0] | rv::Direct(0);
        c.r[t1].d[0] = 0;
        return lib(kPkRef, 9, ra);
    }
};

// The original copies the static A+D tag to sp+0 with two doubleword loads (a pair of argument registers) for the
// lq at the OpenGifTag call; the lui/addiu of its address stay in v0/v1.
void copy_ad_tag(Cpu &c, const StackFrame &f, unsigned lo, unsigned hi) {
    set32(c.r[v0], kAdTag & 0xFFFF0000u);
    set32(c.r[v1], kAdTag);
    c.r[lo].d[0] = ld64(kAdTag);
    c.r[hi].d[0] = ld64(kAdTag + 8);
    f.sd(lo, 0);
    f.sd(hi, 8);
}

}

// Uploads the palette (CLUT) of texture slot a1 to its place in GS memory (cbp, cpsm), when the slot is palettized
// (bpp < 16): 16x16 colours for an 8-bit texture, 16x2 for a 4-bit one, DMA'd from the slot's palette in EE memory.
// a2 != 0 uploads nothing (every caller seen passes 0). The TextureManager loaders (fn_26bcf8, fn_26bb00) and the
// ps2Setup.cpp model loaders (fn_24db78, fn_24dff0) call it right before UploadImage.
PS2_DECOMP(00268AE0, TextureManager::UploadClut) {
    StackFrame f(c, 128);
    const auto restore = [&] {
        f.lq(s0, 112);
        f.lq(s1, 96);
        f.lq(s2, 80);
        f.lq(s3, 64);
        f.lq(s4, 48);
        f.lq(s5, 32);
        f.ld(ra, 16);
        f.pop();
        tick(c, 10);
    };

    set32(c.r[v0], TextureSlot::kSize);
    const std::uint32_t offset = TextureManager::scaled(c, c.r[a1].w[0]);
    c.r[a1].d[0] = c.lo.d[0];
    f.sq(s0, 112);
    f.sq(s1, 96);
    f.sq(s2, 80);
    f.sq(s3, 64);
    f.sq(s4, 48);
    f.sq(s5, 32);
    f.sd(ra, 16);
    const std::uint32_t slots = TextureManager{c.r[a0].w[0]}.slots;
    const TextureSlot tex{slots + offset};
    set32(c.r[t0], tex.addr);
    set32(c.r[v1], tex.bpp);
    const std::uint64_t bpp = c.r[v1].d[0];  // sign-extended, compared as 64 bits
    c.r[v0].d[0] = bpp < 16;
    tick(c, 16);
    if (bpp >= 16) {  // no palette
        restore();
        return;
    }

    // rows of 16 colours: 16 for 256 colours, 2 otherwise; the size in qwords of 4-byte colours
    const bool eight_bit = bpp == 8;
    set32(c.r[s4], eight_bit ? 16u : 2u);
    tick(c, eight_bit ? 3 + 4 : 3 + 2);
    mmi::mult(c, 0, 16, c.r[s4].w[0]);
    c.r[v0].d[0] = c.lo.d[0];
    set32(c.r[s5], c.r[v0].w[0] >> 2);
    tick(c, 4);
    if (c.r[a2].d[0] != 0) {
        restore();
        return;
    }

    const UploadPacket pk{c};
    copy_ad_tag(c, f, a2, a3);
    set32(c.r[s0], kUploadPacket);
    set32(c.r[s3], tex.clut);
    c.r[s2].d[0] = tex.cbp;
    c.r[s1].d[0] = tex.cpsm;
    if (!pk.cnt(15, 0x00268B90u)) return;
    if (!pk.open_direct_code(0x00268BA0u)) return;
    if (!pk.open_gif_tag(f, 0x00268BB0u)) return;

    // BITBLTBUF: to cbp, width 64, format cpsm. The source fields (unused by a host-to-local transfer) get the
    // palette's EE address and the same format; s1/s2 keep the shifted fields.
    const std::uint64_t cpsm = c.r[s1].d[0], cbp = c.r[s2].d[0];
    c.r[v0].d[0] = 1ull << 48;
    c.r[v1].d[0] = cpsm << 24;
    c.r[s2].d[0] = cbp << 32;
    c.r[s1].d[0] = cpsm << 56;
    if (!pk.add_gs_ad(GsReg::BITBLTBUF, rv::gs::BitBltBuf(c.r[s3].d[0], 1, cpsm, cbp, 1, cpsm), 16, 0x00268BF0u)) return;
    c.r[v0].d[0] = c.r[s4].d[0] << 32;
    if (!pk.add_gs_ad(GsReg::TRXREG, rv::gs::TrxReg(16, c.r[s4].d[0]), 7, 0x00268C0Cu)) return;
    if (!pk.add_gs_ad(GsReg::TRXPOS, rv::gs::TrxPos(0, 0, 0, 0), 5, 0x00268C20u)) return;
    if (!pk.add_gs_ad(GsReg::TRXDIR, rv::gs::TrxDir(rv::gs::TrxDirection::HostToLocal), 5, 0x00268C34u)) return;
    if (!pk.close_gif_tag(0x00268C40u)) return;
    if (!pk.close_direct_code(0x00268C4Cu)) return;

    if (!pk.cnt(4, 0x00268C5Cu)) return;
    if (!pk.align(0x00268C70u)) return;
    if (!pk.add_code(rv::Direct(1), 0x00268C84u)) return;
    if (!pk.add_dword(c.r[s5].d[0] | rv::GifTagImage(0).lo, 6, 0x00268C9Cu)) return;  // IMAGE, NLOOP = the size
    if (!pk.add_dword(rv::GifTagImage(0).hi, 4, 0x00268CACu)) return;
    if (!pk.ref(c.r[s3], c.r[s5], 0x00268CD0u)) return;
    restore();
}

// Uploads the texels of texture slot a1 to GS memory (tbp, tbw, psm), DMA'd from the slot's pixels in EE memory: a
// width x height image of bpp bits. Pre-swizzled slots go up as PSMCT32 (see TextureSlot::swizzled). A size of zero
// qwords only formats a debug message into a stack buffer, then uploads anyway. a2 != 0 uploads nothing; a3 is unused.
// Called after UploadClut by the same loaders.
PS2_DECOMP(00268EC0, TextureManager::UploadImage) {
    StackFrame f(c, 416);
    const auto restore = [&] {
        f.lq(s0, 400);
        f.lq(s1, 384);
        f.lq(s2, 368);
        f.lq(s3, 352);
        f.lq(s4, 336);
        f.lq(s5, 320);
        f.lq(s6, 304);
        f.lq(s7, 288);
        f.lq(s8, 272);
        f.ld(ra, 256);
        f.pop();
        tick(c, 13);
    };

    c.r[a3].d[0] = c.r[a1].d[0];  // the slot number
    set32(c.r[v0], TextureSlot::kSize);
    const std::uint32_t offset = TextureManager::scaled(c, c.r[a3].w[0]);
    c.r[v0].d[0] = c.lo.d[0];
    f.sq(s0, 400);
    f.sq(s1, 384);
    f.sq(s2, 368);
    f.sq(s3, 352);
    f.sq(s4, 336);
    f.sq(s5, 320);
    f.sq(s6, 304);
    f.sq(s7, 288);
    f.sq(s8, 272);
    f.sd(ra, 256);
    c.r[s6].d[0] = c.r[a2].d[0];
    const std::uint32_t slots = TextureManager{c.r[a0].w[0]}.slots;
    set32(c.r[v1], slots);
    set32(c.r[s0], slots + offset);
    const TextureSlot tex{c.r[s0].w[0]};

    // size in qwords: width * height * bpp / 128, by two MULTs
    const std::uint16_t width = tex.width, height = tex.height;
    c.r[v1].d[0] = height;
    set32(c.r[a0], tex.bpp);
    mmi::mult(c, 0, width, height);
    mmi::mult(c, 0, c.lo.w[0], c.r[a0].w[0]);
    c.r[v0].d[0] = c.lo.d[0];
    set32(c.r[s4], c.r[v0].w[0] >> 7);
    set32(c.r[s8], tex.pixels);
    set32(c.r[s7], tex.tbp);
    tick(c, 27);
    if (c.r[s4].d[0] == 0) {
        // sprintf(sp, "Background texture %d is 32 bit", slot - first background slot); the text is never used
        set32(c.r[v0], kFirstBackgroundSlot & 0xFFFF0000u);
        set32(c.r[a1], kZeroSizeMessage);
        set32(c.r[a2], c.r[a3].w[0] - rd<std::uint32_t>(kFirstBackgroundSlot));
        c.r[a0].d[0] = c.r[sp].d[0];
        tick(c, 8);
        if (!call(c, kSprintf, Ra{0x00268F4Cu})) return;
    }

    set32(c.r[v0], tex.swizzled);
    c.r[s1].d[0] = tex.height;
    c.r[s3].d[0] = tex.width;
    c.r[s2].d[0] = tex.tbw;
    tick(c, 6);
    if (c.r[v0].d[0] != 0) {
        // PSMCT32: half the width and buffer width, half the height (a quarter at 4 bits). The original divides with
        // the signed-division idiom; the fields are 16-bit, so its sign corrections are 0 and the dead temporaries
        // end as below.
        const std::uint32_t h = c.r[s1].w[0], w = c.r[s3].w[0], bw = c.r[s2].w[0];
        set32(c.r[v1], tex.bpp);
        const bool four_bit = c.r[v1].d[0] == 4;
        set32(c.r[s1], four_bit ? h >> 2 : h >> 1);
        tick(c, four_bit ? 4 + 7 : 4 + 3);
        set32(c.r[v0], w);
        set32(c.r[v1], bw);
        set32(c.r[s3], w >> 1);
        set32(c.r[s2], bw >> 1);
        c.r[s5].d[0] = 0;  // PSMCT32
        tick(c, 9);
    } else {
        c.r[s5].d[0] = tex.psm;
        tick(c, 1);
    }
    tick(c, 2);
    if (c.r[s6].d[0] != 0) {
        restore();
        return;
    }

    const UploadPacket pk{c};
    copy_ad_tag(c, f, a0, a1);
    set32(c.r[s0], kUploadPacket);
    if (!pk.cnt(12, 0x00268FFCu)) return;
    if (!pk.open_direct_code(0x0026900Cu)) return;
    if (!pk.open_gif_tag(f, 0x0026901Cu)) return;

    // BITBLTBUF: to tbp, width tbw, format psm. The source fields (unused by a host-to-local transfer) get the
    // texels' EE address and the same width and format.
    const std::uint64_t tbw = c.r[s2].d[0], psm = c.r[s5].d[0];
    c.r[v0].d[0] = tbw << 48;
    c.r[v1].d[0] = psm << 56;
    const std::uint64_t bitbltbuf = rv::gs::BitBltBuf(c.r[s8].d[0], tbw, psm, c.r[s7].d[0], tbw, psm);
    if (!pk.add_gs_ad(GsReg::BITBLTBUF, bitbltbuf, 16, 0x0026905Cu)) return;
    if (!pk.add_gs_ad(GsReg::TRXREG, rv::gs::TrxReg(c.r[s3].d[0], c.r[s1].d[0]), 6, 0x00269074u)) return;
    if (!pk.add_gs_ad(GsReg::TRXPOS, rv::gs::TrxPos(0, 0, 0, 0), 5, 0x00269088u)) return;
    if (!pk.add_gs_ad(GsReg::TRXDIR, rv::gs::TrxDir(rv::gs::TrxDirection::HostToLocal), 5, 0x0026909Cu)) return;
    if (!pk.close_gif_tag(0x002690A8u)) return;
    if (!pk.close_direct_code(0x002690B4u)) return;

    if (!pk.cnt(4, 0x002690C4u)) return;
    if (!pk.align(0x002690D8u)) return;
    if (!pk.add_code(rv::Direct(1), 0x002690ECu)) return;
    c.r[v0].d[0] = c.r[s4].d[0];
    if (!pk.add_dword(c.r[s4].d[0] | rv::GifTagImage(0).lo, 7, 0x00269108u)) return;  // IMAGE, NLOOP = the size
    if (!pk.add_dword(rv::GifTagImage(0).hi, 4, 0x00269118u)) return;
    if (!pk.ref(c.r[s8], c.r[s4], 0x0026913Cu)) return;
    restore();
}
