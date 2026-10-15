#include "texcache.hpp"

#include <algorithm>
#include <cmath>
#include <cstring>
#include <vector>

namespace ps2::gs::texcache {

namespace {

// Half-open pixel/texel rectangle.
struct Rect {
    int x0 = 0, y0 = 0, x1 = 0, y1 = 0;
    bool empty() const { return x0 >= x1 || y0 >= y1; }
};

Rect meet(const Rect &a, const Rect &b) { return {std::max(a.x0, b.x0), std::max(a.y0, b.y0), std::min(a.x1, b.x1), std::min(a.y1, b.y1)}; }
Rect join(const Rect &a, const Rect &b) { return {std::min(a.x0, b.x0), std::min(a.y0, b.y0), std::max(a.x1, b.x1), std::max(a.y1, b.y1)}; }

// Every register that shapes a primitive; a change ends the draw.
struct Key {
    Context ctx;
    std::uint64_t attr, texa, fogcol, pabe, colclamp, dthe, dimx, scanmsk, texclut;
};

constexpr std::size_t kMaxPrims = 1024;

struct Tracker {
    bool valid = false, relevant = false, flag = false, pending = false;
    Key key{};
    Rect drawn;
    std::vector<Rect> prims;
    int last_u = 0, last_v = 0;
} g;

std::uint64_t attr_of(const State &st) { return (st.prmodecont & 1u) ? st.prim : (st.prim & 7u) | (st.prmode & ~7ull); }

void page_size(std::uint32_t psm, int &pw, int &ph) {
    switch (psm) {
    case PSMCT16: case PSMCT16S: case PSMZ16: case PSMZ16S: pw = 64; ph = 64; break;
    case PSMT8: pw = 128; ph = 64; break;
    case PSMT4: pw = 128; ph = 128; break;
    default: pw = 64; ph = 32; break;
    }
}

int bits(std::uint32_t psm) {
    switch (psm) {
    case PSMCT16: case PSMCT16S: case PSMZ16: case PSMZ16S: return 16;
    case PSMT8: return 8;
    case PSMT4: return 4;
    default: return 32;
    }
}

// Texel coordinate of a vertex at level 0 (ST is clamped to the texture like PCSX2 does for this test).
void texel(const Context &c, bool fst, const Vertex &v, bool round, int &u, int &t) {
    if (fst) {
        u = static_cast<int>(v.u >> 4);
        t = static_cast<int>(v.v >> 4);
        return;
    }
    const float w = static_cast<float>(1u << std::min<std::uint32_t>(static_cast<std::uint32_t>(c.tex0 >> 26) & 0xFu, 10u));
    const float h = static_cast<float>(1u << std::min<std::uint32_t>(static_cast<std::uint32_t>(c.tex0 >> 30) & 0xFu, 10u));
    const auto coord = [&](float st, float size) {
        float f = std::min(st / v.q, 1.0f) * size;
        if (!std::isfinite(f)) f = 0.0f;
        f = std::clamp(f, -65536.0f, 65536.0f);
        return static_cast<int>(round ? std::round(f) : f);
    };
    u = coord(v.s, w);
    t = coord(v.t, h);
}

Rect pixel_box(const Context &c, const Vertex *v, int count) {
    const int ofx = static_cast<int>(c.xyoffset & 0xFFFFu), ofy = static_cast<int>((c.xyoffset >> 32) & 0xFFFFu);
    Rect r{1 << 30, 1 << 30, -(1 << 30), -(1 << 30)};
    for (int i = 0; i < count; ++i) {
        const int x = (static_cast<int>(v[i].x) - ofx) >> 4, y = (static_cast<int>(v[i].y) - ofy) >> 4;
        r = join(r, {x, y, x, y});
    }
    return r;
}

Rect scissor(const Context &c) {
    return {static_cast<int>(c.scissor & 0x7FFu), static_cast<int>((c.scissor >> 32) & 0x7FFu), static_cast<int>((c.scissor >> 16) & 0x7FFu) + 1,
            static_cast<int>((c.scissor >> 48) & 0x7FFu) + 1};
}

// Only a texture based exactly at the frame (or written Z) buffer can be invalidated mid-draw; other overlaps read the
// draw's starting state throughout.
bool relevant(const Context &c, std::uint64_t attr) {
    if (!(attr & 0x10u)) return false;
    const std::uint32_t tbp = static_cast<std::uint32_t>(c.tex0) & 0x3FFFu;
    const bool ate = c.test & 1u, never = ((c.test >> 1) & 7u) == 0;
    const std::uint32_t afail = static_cast<std::uint32_t>(c.test >> 12) & 3u;
    const std::uint32_t fpsm = static_cast<std::uint32_t>(c.frame >> 24) & 0x3Fu;
    const std::uint32_t full = fpsm == PSMCT24 || fpsm == PSMZ24 ? 0x00FFFFFFu : bits(fpsm) == 16 ? 0x80F8F8F8u : 0xFFFFFFFFu;
    const bool frame = !(ate && never && afail == 2) && (static_cast<std::uint32_t>(c.frame >> 32) & full) != full;
    const bool z = !(ate && never && afail != 2) && !((c.zbuf >> 32) & 1u);
    return (frame && tbp == (static_cast<std::uint32_t>(c.frame) & 0x1FFu) * 32u) || (z && tbp == (static_cast<std::uint32_t>(c.zbuf) & 0x1FFu) * 32u);
}

// PCSX2's rule (GSState::HandleAutoFlush): re-read memory when this primitive samples texels the draw already wrote and
// the cached page cannot hold them: after a TEXFLUSH, or when its texels start in a different page than where the
// previous primitive's texture coordinates ended and some earlier primitive of the draw covers them.
bool must_reload(const Context &c, std::uint64_t attr, const Vertex *v, int count) {
    const bool fst = attr & 0x100u;
    Rect tex{1 << 30, 1 << 30, -(1 << 30), -(1 << 30)};
    for (int i = 0; i < count; ++i) {
        int u, t;
        texel(c, fst, v[i], i != count - 1, u, t);
        tex = join(tex, {u, t, u, t});
    }
    Rect xy = pixel_box(c, v, count);
    if (xy.x0 == xy.x1) ++xy.x1;
    if (xy.y0 == xy.y1) ++xy.y1;
    if (tex.x0 == tex.x1) ++tex.x1;
    if (tex.y0 == tex.y1) ++tex.y1;
    const Rect sc = scissor(c);
    if (meet(xy, sc).empty()) return false;

    int lu = g.last_u, lv = g.last_v;
    const auto clamp_axis = [](std::uint32_t mode, int mn, int mx, int &a, int &b, int &last) {
        if (mode == 2) {
            a = std::min(std::max(a, mn), mx);
            b = std::min(std::max(b, mn), mx);
            last = std::min(std::max(last, mn), mx);
        } else if (mode == 3) {
            a = std::min(std::max(a, mx), mx | mn);
            b = std::min(std::max(b, mx), mx | mn);
            last = std::min(std::max(last, mx), mx | mn);
        }
    };
    clamp_axis(static_cast<std::uint32_t>(c.clamp) & 3u, static_cast<int>(c.clamp >> 4) & 0x3FF, static_cast<int>(c.clamp >> 14) & 0x3FF, tex.x0, tex.x1, lu);
    clamp_axis(static_cast<std::uint32_t>(c.clamp >> 2) & 3u, static_cast<int>(c.clamp >> 24) & 0x3FF, static_cast<int>(c.clamp >> 34) & 0x3FF, tex.y0, tex.y1, lv);

    const std::uint32_t tpsm = static_cast<std::uint32_t>(c.tex0 >> 20) & 0x3Fu, fpsm = static_cast<std::uint32_t>(c.frame >> 24) & 0x3Fu;
    const bool same_kind = (tpsm >= 0x30u) == (fpsm >= 0x30u);
    if (same_kind && meet(tex, g.drawn).empty()) return false;
    if (g.flag) return true;
    int pw, ph;
    page_size(tpsm, pw, ph);
    if ((tex.x0 & ~(pw - 1)) == (lu & ~(pw - 1)) && (tex.y0 & ~(ph - 1)) == (lv & ~(ph - 1))) return false;
    const std::uint32_t fbw = static_cast<std::uint32_t>(c.frame >> 16) & 0x3Fu, tbw = static_cast<std::uint32_t>(c.tex0 >> 14) & 0x3Fu;
    if (bits(tpsm) != bits(fpsm) || fbw != tbw) return true;
    for (auto it = g.prims.rbegin(); it != g.prims.rend(); ++it)
        if (!meet(meet(tex, *it), sc).empty()) return true;
    return false;
}

void record(const Context &c, std::uint64_t attr, const Vertex *v, int count) {
    Rect box = pixel_box(c, v, count);
    const Rect area = meet({box.x0, box.y0, box.x1 + 1, box.y1 + 1}, scissor(c));
    g.drawn = g.prims.empty() ? area : meet(join(g.drawn, {box.x0, box.y0, box.x1 + 1, box.y1 + 1}), scissor(c));
    if (box.x0 == box.x1) ++box.x1;
    if (box.y0 == box.y1) ++box.y1;
    if (g.prims.size() >= kMaxPrims) {
        Rect all = g.prims.front();
        for (const Rect &r : g.prims) all = join(all, r);
        g.prims.assign(1, all);
    }
    g.prims.push_back(box);
    texel(c, attr & 0x100u, v[count - 1], true, g.last_u, g.last_v);
}

}

Run next(const State &st, const Vertex *v, int count) {
    Key key{};
    const std::uint64_t attr = attr_of(st);
    key.ctx = st.ctx[(attr >> 9) & 1u];
    key.attr = attr;
    key.texa = st.texa;
    key.fogcol = st.fogcol;
    key.pabe = st.pabe;
    key.colclamp = st.colclamp;
    key.dthe = st.dthe;
    key.dimx = st.dimx;
    key.scanmsk = st.scanmsk;
    key.texclut = st.texclut;
    const Context &c = key.ctx;
    Run run = Run::same;
    if (!g.valid || std::memcmp(&key, &g.key, sizeof key) != 0) {
        // TEXFLUSH is dropped when TEX0 (TBP0..TFX) changes with it, as PCSX2 does.
        const bool tex0_same = g.valid && !((g.key.ctx.tex0 ^ c.tex0) & 0x1FFFFFFFFFull);
        g.flag = g.pending && tex0_same;
        g.key = key;
        g.valid = true;
        g.relevant = relevant(c, attr);
        g.prims.clear();
        run = Run::new_draw;
    } else {
        g.flag = g.flag || g.pending;
        if (g.relevant && !g.prims.empty() && must_reload(c, attr, v, count)) {
            g.prims.clear();
            g.flag = false;
            run = Run::flushed;
        }
    }
    g.pending = false;
    if (g.relevant) record(c, attr, v, count);
    return run;
}

void texflush() { g.pending = true; }

void reset() { g = Tracker{}; }

}
