// Ps2/Renderer/Character/ps2render.cpp: the texture filter (GS TEX1) of a mesh draw.
#include "chain.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp::render;

// The renderer's default TEX1 fields, one word each (fn_224ef0 sets L and K).
constexpr std::uint32_t kFilterDefaults = 0x004F4FE0u;
enum : std::uint32_t {
    kLcm = 0x00,
    kMxl = 0x04,
    kMmag = 0x08,
    kMmin = 0x0c,
    kMtba = 0x10,
    kL = 0x14,
    kK = 0x18,
    kForceDefaultLod = 0x24,  // nonzero: always the default L and K, never the mesh's, and mipmapping stays on
};

// The L and K last emitted (-1 after an unmipmapped draw); fn_23a280 and fn_246120 read them.
constexpr std::uint32_t kLastL = 0x00661900u;
constexpr std::uint32_t kLastK = 0x00661904u;

// A mesh's own L and K, used when the doubleword is nonzero.
constexpr std::uint32_t kMeshL = 0x158;
constexpr std::uint32_t kMeshK = 0x15c;

// A per-mode minification filter override: when [kModeFilter] is set, game mode 0xc2 uses kNearestMipLinear and mode
// 3 kLinearMipNearest. kGameMode is the word the front end sets when a new game starts (FE_NewGameSingle,
// FE_NewGameKoop); which modes these are is not known.
constexpr std::uint32_t kModeFilter = 0x004E59DCu;
constexpr std::uint32_t kGameMode = 0x006427B0u;

constexpr std::uint32_t kNoMipmaps = 0x10000;  // draw flag (a1)

}

// fn_236db0(mesh, flags): appends the A+D write of TEX1_1 for a mesh draw to the chain. With flags & 0x10000 (and the
// default LOD not forced) it is plain bilinear without mipmaps, and the remembered L/K become -1; otherwise it takes
// the default filter fields, the mesh's own L and K when it has them, and the per-mode minification override, and
// remembers the L and K it used. Called by the mesh packers fn_236f30 and fn_237660 before each draw.
PS2_DECOMP(00236DB0, EmitTextureFilter) {
    const std::uint32_t mesh = c.r[a0].w[0];
    set32(c.r[v0], 0x00010000u);
    set32(c.r[a3], 0x004F0000u);
    c.r[a1].d[0] &= kNoMipmaps;
    tick(c, 5);

    if (c.r[a1].d[0] != 0) {
        set32(c.r[v0], kFilterDefaults);
        set32(c.r[v1], ld32(kFilterDefaults + kForceDefaultLod));
        tick(c, 4);
        if (c.r[v1].d[0] == 0) {
            const std::uint32_t p = ld32(kChainPtr);
            put_ad(p, Tex1{.mmag = Tex1::kLinear, .mmin = Tex1::kLinear}.bits(), GsReg::TEX1_1);
            st32(kChainPtr, p + 16);  // the original stores the pointer after each word
            st32(kLastL, ~0u);
            st32(kLastK, ~0u);

            set32(c.r[v0], p + 4);
            set32(c.r[v1], 0x00660000u);
            set32(c.r[a0], p + 8);
            set32(c.r[a1], p + 12);
            set32(c.r[a2], p + 16);
            set32(c.r[a3], ~0u);
            set32(c.r[t0], static_cast<std::uint32_t>(GsReg::TEX1_1));
            set32(c.r[t1], 0x00660000u);
            set32(c.r[t2], 0x00660000u);
            tick(c, 23);
            return;
        }
    }

    // the defaults, in the registers the original keeps them in (t4 lcm, t0 mxl, t3 mmag, a2 mmin, t5 mtba)
    set32(c.r[v0], kFilterDefaults);
    set32(c.r[t4], ld32(kFilterDefaults + kLcm));
    set32(c.r[v1], ld32(kFilterDefaults + kForceDefaultLod));
    set32(c.r[t0], ld32(kFilterDefaults + kMxl));
    set32(c.r[t3], ld32(kFilterDefaults + kMmag));
    set32(c.r[t5], ld32(kFilterDefaults + kMtba));
    set32(c.r[a2], ld32(kFilterDefaults + kMmin));
    tick(c, 9);

    // L in t1, K in t2: the mesh's when it has its own (and they are not forced), else the defaults
    bool own = false;
    if (c.r[v1].d[0] == 0) {
        c.r[v0].d[0] = ld64(mesh + kMeshL);
        tick(c, 3);
        own = c.r[v0].d[0] != 0;
    }
    if (own) {
        set32(c.r[t2], ld32(mesh + kMeshK));
        set32(c.r[t1], ld32(mesh + kMeshL));
        tick(c, 4);
    } else {
        set32(c.r[v0], kFilterDefaults);
        set32(c.r[t2], ld32(kFilterDefaults + kK));
        set32(c.r[t1], ld32(kFilterDefaults + kL));
        tick(c, 3);
    }

    set32(c.r[v0], 0x004E0000u);
    set32(c.r[v1], ld32(kModeFilter));
    tick(c, 4);
    if (c.r[v1].d[0] != 0) {
        set32(c.r[v1], 0x00640000u);
        set32(c.r[a1], Tex1::kNearestMipLinear);
        set32(c.r[v0], ld32(kGameMode));
        set32(c.r[a0], Tex1::kLinearMipNearest);
        c.r[v1].d[0] = c.r[v0].d[0] ^ 0xc2u;
        c.r[v0].d[0] = c.r[v0].d[0] ^ 3u;
        if (c.r[v1].d[0] == 0) c.r[a2].d[0] = Tex1::kNearestMipLinear;
        if (c.r[v0].d[0] == 0) c.r[a2].d[0] = Tex1::kLinearMipNearest;
        tick(c, 8);
    }

    const Tex1 tex1{
        .lcm = c.r[t4].d[0],
        .mxl = c.r[t0].d[0],
        .mmag = c.r[t3].d[0],
        .mmin = c.r[a2].d[0],
        .mtba = c.r[t5].d[0],
        .l = c.r[t1].d[0],
        .k = 0u - c.r[t2].w[0],  // the game keeps K negated
    };
    const std::uint64_t value = tex1.bits();
    const std::uint32_t p = ld32(kChainPtr);
    put_ad(p, value, GsReg::TEX1_1);
    st32(kChainPtr, p + 16);
    st32(kLastK, c.r[t2].w[0]);
    st32(kLastL, c.r[t1].w[0]);

    set32(c.r[v0], 0x00660000u);
    set32(c.r[v1], p);
    c.r[a0].sd[0] = static_cast<std::int64_t>(value) >> 32;
    set32(c.r[a1], 0x00660000u);
    set32(c.r[a2], static_cast<std::uint32_t>(GsReg::TEX1_1));
    set32(c.r[a3], p + 16);
    set32(c.r[t0], 0x00660000u);
    tick(c, 33);
}
