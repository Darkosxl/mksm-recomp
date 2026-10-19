// Ps2/Renderer/Character/ps2render.cpp: ordering the fighter draws.
#include "ps2/decomp.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;

constexpr std::uint32_t kQsort = 0x00476E00u;              // libc qsort
constexpr std::uint32_t kCompareLinkedTexture = 0x0024CF58u;  // fn_24cf58: by texture_get_link_a of each mesh's texture

}

// fn_24cff8(count, meshes): sorts a fighter's mesh list (an array of pointers) by the texture each mesh's texture is
// linked to (link A, TextureManager), with qsort, so that meshes sharing a linked texture are drawn together.
// Lists shorter than two are left alone. Called by fn_246cf0 before it packs the meshes.
PS2_DECOMP(0024CFF8, SortMeshesByLinkedTexture) {
    c.r[v1].d[0] = c.r[a0].d[0];  // count
    StackFrame f(c, 16);
    f.sd(ra, 0);
    c.r[a0].d[0] = c.r[a1].d[0];  // the array, qsort's base
    c.r[v0].d[0] = c.r[v1].sd[0] < 2;
    tick(c, 7);
    if (c.r[v0].d[0] == 0) {
        set32(c.r[a3], kCompareLinkedTexture);
        c.r[a1].d[0] = c.r[v1].d[0];
        set32(c.r[a2], 4);  // sizeof(pointer)
        tick(c, 6);
        if (!call(c, kQsort, Ra{0x0024D02Cu})) return;
    }
    f.ld(ra, 0);
    f.pop();
    tick(c, 4);
}
