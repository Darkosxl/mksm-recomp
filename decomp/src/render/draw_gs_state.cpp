// ps2render.cpp (Ps2/Renderer/Character): the GS register part of a draw's material state.
//
// Each block below ends by setting the scratch registers it leaves to what the original leaves there: later blocks
// overwrite some of them, and the last writer of each is what the caller, thread contexts and the state hash see.
#include "vif.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp::render;

// The segment's draw flags (fn_237660's a2; it keeps the previous segment's flags at 0x65e458 to compute what changed).
// Only the bits read here; the names say what each bit selects below.
enum DrawFlags : std::uint64_t {
    kFog = 0x00000080,          // FOGCOL from the fog colour
    kAlphaTest = 0x00000100,    // cut-out: TEST_1 with an alpha test, and a fixed-alpha blend
    kRepeatS = 0x00001000,      // CLAMP_1: repeat in S (else clamp)
    kRepeatT = 0x00002000,      // CLAMP_1: repeat in T (else clamp)
    kAdditive = 0x00004000,     // ALPHA_1: add the source
    kSubtractive = 0x00008000,  // ALPHA_1: subtract the source
    kPass2Blend = 0x00100000,   // context 2 (the second pass): z GEQUAL, normal blend, TEX1_2 = 0
    kNoZWrite = 0x04000000,     // ZBUF_1 with z writes masked
    kFixedAlpha = 0x20000000,   // ALPHA_1 weighs by the fixed alpha instead of the source alpha
    kPass2Shade = 0x40000000,   // context 2 darkens by the source alpha into the back buffer (FRAME_2, ZBUF_2)
};
// a z-write change re-emits ZBUF_1 when the draw writes z again (neither of these bits)
inline constexpr std::uint64_t kZWriteBits = kNoZWrite | kAlphaTest;
// any change in these re-emits the default ALPHA_1 when none is set
inline constexpr std::uint64_t kBlendBits = kPass2Shade | kFixedAlpha | kAdditive | kSubtractive | kAlphaTest;

// globals
inline constexpr std::uint32_t kChainPage = 0x00660000u;  // lui page of the chain packet (0x65e300 = page - 0x1d00)
inline constexpr std::uint32_t kScreen = 0x0067b758u;     // the screen: z buffer base / format (fn_275300, fn_2753a0)
inline constexpr std::uint32_t kFogColor = 0x0065e380u;   // -> fog colour as three words r, g, b
inline constexpr std::uint32_t kDebugView = 0x004f4be0u;  // render debug view; 3 tints segments by type through FOGCOL
inline constexpr std::uint32_t kRgbOnlyCutout = 0x00663458u;  // cut-outs write colour only (alpha test NEVER, RGB_ONLY)
inline constexpr std::uint32_t kFixedAlphaValue = 0x0065e454u;  // ALPHA FIX for kFixedAlpha and cut-outs
inline constexpr std::uint32_t kFrameIndex = 0x004f4d68u;  // which of the two frame buffers is the back buffer

// what the original's flag tests leave in their destination register
std::uint64_t test(Cpu &c, unsigned rd, std::uint64_t value, std::uint64_t mask) { return c.r[rd].d[0] = value & mask; }

std::int64_t hi32(std::uint64_t v) { return static_cast<std::int64_t>(v) >> 32; }      // dsra32
std::int64_t lo32(std::uint64_t v) { return static_cast<std::int32_t>(v); }           // dsll32 + dsra32

// One A+D pair at the write pointer. Returns the pointer it was written at.
std::uint32_t emit(gs::Reg reg, std::uint64_t value) {
    const Chain chain;
    Packet pk{chain.ptr};
    const std::uint32_t at = pk.p;
    pk.ad(reg, value);
    chain.ptr = pk.p;
    return at;
}

// The screen's z buffer base (s1) and format (v0): fn_275300 and fn_2753a0 on the screen object (s0, a0). The block
// before the first call is the caller's to charge. False when a callee did not come back.
bool read_zbuf(Cpu &c, std::uint32_t ret_base, std::uint32_t ret_psm) {
    if (!call(c, 0x00275300u, Ra{ret_base})) return false;
    c.r[s1].d[0] = c.r[v0].d[0];
    c.r[a0].d[0] = c.r[s0].d[0];
    tick(c, 4);
    return call(c, 0x002753A0u, Ra{ret_psm});
}

void set_screen(Cpu &c) {
    c.r[s0].sd[0] = kScreen;
    c.r[a0].d[0] = c.r[s0].d[0];
}

// ZBUF_1 from read_zbuf's result
void emit_zbuf1(Cpu &c, bool zmsk) {
    const std::uint64_t zbuf = gs::Zbuf(c.r[s1].d[0], c.r[v0].d[0], zmsk);
    const std::uint32_t at = emit(gs::ZBUF_1, zbuf);
    set32(c.r[v0], at + 16);
    set32(c.r[v1], at);
    c.r[a0].d[0] = gs::ZBUF_1;
    c.r[a1].sd[0] = hi32(zbuf);
}

// ALPHA_1 with the fixed alpha: Cs * FIX + Cd, Cd - Cs * FIX, or (Cs - Cd) * FIX + Cd
std::uint64_t fixed_alpha_blend(std::uint64_t flags) {
    const std::uint64_t fix = static_cast<std::uint32_t>(rd<std::uint32_t>(kFixedAlphaValue));
    if (flags & kAdditive) return gs::Alpha(gs::Cs, gs::Zero, gs::Fix, gs::Cd, fix);
    if (flags & kSubtractive) return gs::Alpha(gs::Zero, gs::Cs, gs::Fix, gs::Cd, fix);
    return gs::Alpha(gs::Cs, gs::Cd, gs::Fix, gs::Cd, fix);
}

// The body after the TEX1_1 call. False when a callee did not come back.
bool emit_state(Cpu &c) {
    const std::uint64_t flags = c.r[s2].d[0], changed = c.r[s4].d[0];
    const std::uint32_t segment = c.r[s5].w[0];
    c.r[s3].sd[0] = kChainPage;

    // ZBUF_1, z writes off: when kNoZWrite is set and changed
    c.r[v1].sd[0] = kNoZWrite;
    tick(c, 5);
    if (test(c, v0, changed, kNoZWrite)) {
        tick(c, 3);
        if (test(c, v0, flags, kNoZWrite)) {
            set_screen(c);
            tick(c, 5);
            if (!read_zbuf(c, 0x00236F98u, 0x00236FA8u)) return false;
            emit_zbuf1(c, true);
            tick(c, 16);
        }
    }

    // ZBUF_1, z writes on again: when a z-write bit changed and neither is set
    c.r[v1].sd[0] = kZWriteBits;
    tick(c, 5);
    if (test(c, v0, changed, kZWriteBits)) {
        tick(c, 3);
        if (!test(c, v0, flags, kZWriteBits)) {
            set_screen(c);
            tick(c, 5);
            if (!read_zbuf(c, 0x0023701Cu, 0x0023702Cu)) return false;
            emit_zbuf1(c, false);
            tick(c, 13);
        }
    }

    // TEST_1, always: alpha >= 0x80 or write colour only; z GREATER
    const std::uint32_t test_at = emit(gs::TEST_1, gs::Test(true, gs::A_GEQUAL, 0x80, gs::RGB_ONLY, true, gs::Z_GREATER));
    c.r[v1].d[0] = gs::TEST_1;
    c.r[a0].d[0] = kBlendBits;
    set32(c.r[a1], test_at);
    set32(c.r[a2], test_at + 16);
    tick(c, 15);
    // ALPHA_1, the normal blend (Cs - Cd) * As + Cd: when a blend bit changed and none is set
    if (test(c, v0, changed, kBlendBits)) {
        tick(c, 3);
        if (!test(c, v0, flags, kBlendBits)) {
            emit(gs::ALPHA_1, gs::Alpha(gs::Cs, gs::Cd, gs::As, gs::Cd, 0x80));
            c.r[v0].d[0] = 0x80;
            set32(c.r[v1], test_at + 32);
            c.r[a0].d[0] = gs::ALPHA_1;
            tick(c, 9);
        }
    }

    // FOGCOL from the fog colour
    tick(c, 3);
    if (test(c, v0, flags, kFog)) {
        const std::uint32_t color = rd<std::uint32_t>(kFogColor);
        const std::uint64_t r = static_cast<std::uint64_t>(lo32(rd<std::uint32_t>(color)));
        const std::uint64_t g = static_cast<std::uint64_t>(lo32(rd<std::uint32_t>(color + 4))) << 8;
        const std::uint64_t b = static_cast<std::uint64_t>(lo32(rd<std::uint32_t>(color + 8))) << 16;
        const std::uint64_t fogcol = r | g | b;
        const std::uint32_t at = emit(gs::FOGCOL, fogcol);
        c.r[v0].sd[0] = lo32(fogcol);
        c.r[v1].sd[0] = hi32(fogcol);
        c.r[a0].d[0] = g;
        c.r[a1].d[0] = b;
        set32(c.r[a2], at);
        c.r[a3].d[0] = gs::FOGCOL;
        set32(c.r[t0], at + 16);
        tick(c, 20);
    }

    // FOGCOL as a debug tint: green for segments of type 0, red for type 2
    const std::uint32_t view = rd<std::uint32_t>(kDebugView);
    c.r[v0].sd[0] = 0x004F0000;
    set32(c.r[v1], view);
    c.r[a0].d[0] = 3;
    tick(c, 5);
    if (view == 3) {
        const std::uint32_t type = rd<std::uint32_t>(segment + 0x20);
        set32(c.r[a0], type);
        tick(c, 3);
        std::uint64_t tint = 0;
        if (type == 0) {
            tint = 0x5000;
            tick(c, 5);
        } else {
            c.r[v0].d[0] = 2;
            tick(c, 3);
            if (type == 2) {
                tint = 0x50;
                tick(c, 3);
            }
        }
        if (tint) {
            const std::uint32_t at = emit(gs::FOGCOL, tint);
            c.r[v0].d[0] = tint;
            set32(c.r[v1], at);
            c.r[a0].d[0] = gs::FOGCOL;
            set32(c.r[a1], at + 16);
            tick(c, 6);
        }
    }

    // CLAMP_1, always: repeat or clamp per axis
    const std::int64_t shifted = static_cast<std::int32_t>(c.r[s2].w[0]) >> 12;  // sra
    const std::uint64_t clamp_s = (static_cast<std::uint64_t>(shifted) ^ 1) & 1;   // 1 = CLAMP unless kRepeatS
    c.r[v1].d[0] = clamp_s;
    tick(c, 6);
    std::uint64_t clamp;
    if (test(c, a0, flags, kRepeatT)) {
        clamp = clamp_s;
        tick(c, 1);
    } else {
        clamp = clamp_s | gs::Clamp(gs::REPEAT, gs::CLAMP);
        tick(c, 4);
    }
    const std::uint32_t clamp_at = emit(gs::CLAMP_1, clamp);
    c.r[v0].d[0] = clamp;
    c.r[a0].d[0] = gs::CLAMP_1;
    set32(c.r[a1], clamp_at + 16);
    set32(c.r[t0], Chain::kAddr);
    set32(c.r[t1], clamp_at);
    tick(c, 15);

    if (test(c, v1, flags, kPass2Shade)) {
        // context 1 plain: no alpha test, normal blend; context 2: TEX1_2 = 0, alpha > 0 and z GEQUAL, Cd * (1 - As)
        emit(gs::TEST_1, gs::Test(false, gs::A_NEVER, 0, gs::KEEP, true, gs::Z_GREATER));
        emit(gs::ALPHA_1, gs::Alpha(gs::Cs, gs::Cd, gs::As, gs::Cd, 0x80));
        c.r[v0].d[0] = 0x80;
        c.r[v1].d[0] = gs::ALPHA_1;
        set32(c.r[a0], Chain::kAddr);
        c.r[a1].d[0] = gs::TEX1_2;
        c.r[a2].d[0] = 0;
        set32(c.r[a3], clamp_at + 48);
        tick(c, 22);
        if (!call(c, 0x00385360u, Ra{0x0023724Cu})) return false;  // sceVif1PkAddGsAD(chain, TEX1_2, 0)

        const std::uint32_t at = emit(gs::TEST_2, gs::Test(true, gs::A_GREATER, 0, gs::KEEP, true, gs::Z_GEQUAL));
        emit(gs::ALPHA_2, gs::Alpha(gs::Zero, gs::Cd, gs::As, gs::Cd));
        c.r[v0].d[0] = 0x46;
        set32(c.r[v1], at + 32);
        set32(c.r[a1], at + 16);
        set_screen(c);
        tick(c, 23);
        if (!read_zbuf(c, 0x002372A8u, 0x002372B8u)) return false;

        // ZBUF_2 (z writes on) and FRAME_2: the back buffer, 640 wide
        const std::uint32_t zbuf_at = emit(gs::ZBUF_2, gs::Zbuf(c.r[s1].d[0], c.r[v0].d[0], false));
        const std::uint32_t index = rd<std::uint32_t>(kFrameIndex);
        const std::uint64_t frame = gs::Frame(index == 0 ? 0x46 : 0, 10);
        emit(gs::FRAME_2, frame);
        c.r[v0].d[0] = frame;
        set32(c.r[v1], zbuf_at);
        set32(c.r[a0], zbuf_at + 16);
        set32(c.r[a1], index);
        c.r[a2].d[0] = gs::Frame(0x46, 10);
        c.r[a3].sd[0] = 0x004F0000;
        c.r[t0].d[0] = gs::FRAME_2;
        set32(c.r[t1], zbuf_at + 32);
        tick(c, 30);
        return true;
    }

    // context 2 for a normal blended second pass: z GEQUAL, (Cs - Cd) * As + Cd, TEX1_2 = 0 (stored word by word)
    tick(c, 4);
    if (test(c, v0, flags, kPass2Blend)) {
        emit(gs::TEST_2, gs::Test(false, gs::A_NEVER, 0, gs::KEEP, true, gs::Z_GEQUAL));
        emit(gs::ALPHA_2, gs::Alpha(gs::Cs, gs::Cd, gs::As, gs::Cd));
        emit(gs::TEX1_2, 0);
        set32(c.r[v0], clamp_at + 60);
        set32(c.r[v1], clamp_at + 64);
        set32(c.r[a0], clamp_at + 32);
        c.r[a1].d[0] = gs::TEX1_2;
        set32(c.r[a2], clamp_at + 48);
        set32(c.r[a3], clamp_at + 52);
        set32(c.r[t0], clamp_at + 56);
        tick(c, 29);
    }

    // TEST_1 for a cut-out that just turned on: alpha >= 5, or colour only
    tick(c, 3);
    if (test(c, v0, changed, kAlphaTest)) {
        tick(c, 3);
        if (test(c, v0, flags, kAlphaTest)) {
            const std::uint32_t rgb_only = rd<std::uint32_t>(kRgbOnlyCutout);
            set32(c.r[v1], rgb_only);
            tick(c, 4);
            std::uint64_t value;
            if (rgb_only) {
                value = gs::Test(true, gs::A_NEVER, 1, gs::RGB_ONLY, true, gs::Z_GREATER);
                tick(c, 6);
            } else {
                value = gs::Test(true, gs::A_GEQUAL, 5, gs::KEEP, true, gs::Z_GREATER);
                tick(c, 4);
            }
            const std::uint32_t at = emit(gs::TEST_1, value);
            c.r[v0].d[0] = value;
            set32(c.r[v1], at);
            c.r[a0].d[0] = gs::TEST_1;
            set32(c.r[a1], at + 16);
            tick(c, 6);
        }
    }

    // ALPHA_1 weighed by the fixed alpha
    tick(c, 4);
    if (test(c, v0, flags, kFixedAlpha)) {
        tick(c, 3);
        if (!test(c, v0, flags, kAdditive)) {
            tick(c, 3);
            test(c, v0, flags, kSubtractive);
        }
        const std::uint64_t alpha = fixed_alpha_blend(flags);
        const std::uint32_t at = emit(gs::ALPHA_1, alpha);
        c.r[v0].sd[0] = lo32(alpha);
        set32(c.r[v1], at);
        set32(c.r[a0], at + 16);
        c.r[a1].sd[0] = hi32(alpha);
        tick(c, 17 + 1);
        return true;
    }

    // a cut-out: colour-only alpha test, ALPHA_1 weighed by the fixed alpha
    tick(c, 3);
    if (test(c, v0, flags, kAlphaTest)) {
        const std::uint32_t at = emit(gs::TEST_1, gs::Test(true, gs::A_NEVER, 1, gs::RGB_ONLY, true, gs::Z_GREATER));
        tick(c, 13);
        if (test(c, v0, flags, kAdditive)) {
            tick(c, 4);
        } else {
            tick(c, 3);
            tick(c, test(c, v0, flags, kSubtractive) ? 4 : 2);
        }
        const std::uint64_t alpha = fixed_alpha_blend(flags);
        emit(gs::ALPHA_1, alpha);
        c.r[v0].sd[0] = hi32(alpha);
        c.r[v1].sd[0] = lo32(alpha);
        c.r[a0].d[0] = static_cast<std::uint32_t>(alpha);
        c.r[a1].d[0] = gs::ALPHA_1;
        set32(c.r[a2], at + 32);
        set32(c.r[a3], at);
        set32(c.r[t0], at + 16);
        tick(c, 15);
        return true;
    }

    // otherwise an additive or subtractive blend by the source alpha, when a blend bit changed
    tick(c, 5);
    if (!test(c, v0, changed, kFixedAlpha | kAdditive | kSubtractive)) return true;
    tick(c, 3);
    if (test(c, v0, flags, kAdditive)) {
        const std::uint32_t at = emit(gs::ALPHA_1, gs::Alpha(gs::Cs, gs::Zero, gs::As, gs::Cd));  // Cs * As + Cd
        c.r[v0].d[0] = 0x48;
        set32(c.r[v1], at);
        c.r[a0].d[0] = gs::ALPHA_1;
        set32(c.r[a1], at + 16);
        tick(c, 11);
        return true;
    }
    tick(c, 3);
    if (test(c, v0, flags, kSubtractive)) {
        const std::uint32_t at = emit(gs::ALPHA_1, gs::Alpha(gs::Zero, gs::Cs, gs::As, gs::Cd));  // Cd - Cs * As
        set32(c.r[v0], at);
        c.r[v1].d[0] = gs::ALPHA_1;
        set32(c.r[a0], at + 16);
        tick(c, 7 + 1);
    }
    return true;
}

}

// Writes the GS state of a mesh segment's material into the open A+D packet of the frame chain, as GIF A+D pairs:
// TEX1_1 (fn_236db0, from the segment's LOD values), then the z write, alpha test, blend, fog colour and texture wrap of
// context 1, and the second pass's context 2 when the flags ask for one. a0 = the segment record (fn_23a280's), a1 =
// its draw flags, a2 = the flags that changed since the previous segment (all ones for the first). Called through
// fn_237660 by the segment packer fn_23a280, for segments whose flags have bit 0x200, when the GS state may change.
PS2_DECOMP(00236F30, SetDrawGsState) {
    StackFrame f(c, 0x70);
    f.sq(s2, 0x40);
    f.sq(s4, 0x20);
    f.sq(s5, 0x10);
    f.sq(s3, 0x30);
    f.sq(s0, 0x60);
    f.sq(s1, 0x50);
    f.sd(ra, 0x00);
    c.r[s2].d[0] = c.r[a1].d[0];  // flags
    c.r[s4].d[0] = c.r[a2].d[0];  // changed
    c.r[s5].d[0] = c.r[a0].d[0];  // segment
    tick(c, 13);
    if (!call(c, 0x00236DB0u, Ra{0x00236F64u})) return;  // TEX1_1
    if (!emit_state(c)) return;

    f.lq(s0, 0x60);
    f.lq(s1, 0x50);
    f.lq(s2, 0x40);
    f.lq(s3, 0x30);
    f.lq(s4, 0x20);
    f.lq(s5, 0x10);
    f.ld(ra, 0x00);
    f.pop();
    tick(c, 10);
}
