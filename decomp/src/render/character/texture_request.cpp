// Ps2/Renderer/Character/ps2render.cpp
#include "instance.hpp"

#include "ps2/decomp.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using decomp::character::CharInstance;

constexpr std::uint32_t kLastTexture = 0x006618ecu;  // the texture id requested last (requests repeat per mesh)
constexpr std::uint32_t kTextureMode = 0x004f4c4cu;  // 1: upload at once, 2: queue for the frame
constexpr std::uint32_t kUploadTexture = 0x0026bcf8u;  // TextureManager upload (fn_26bcf8)
constexpr std::uint32_t kQueueMark = 0x00223fa8u;      // fn_223fa8, called with 16 + the entry's index
// The upload queues, one per render buffer: 100 entries of 16 bytes each (the instance at +8); their two counts
// follow the 0x1900-byte table.
constexpr std::uint32_t kQueues = 0x00661ac8u;
constexpr std::uint32_t kQueueEntries = 100;
constexpr std::uint32_t kQueueBytes = kQueueEntries * 16;
constexpr std::uint32_t kQueueCounts = kQueues + 0x1900;  // 0x6633c8

}

// fn_246120(CharInstance *inst): makes sure the texture a character mesh is about to be drawn with gets to the GS.
// When the instance asks for a texture other than the last one requested, it is uploaded at once (mode 1) or queued
// in this frame's upload list (mode 2, at most 100 a frame; the buffer not being kicked, by the double-buffer index).
PS2_DECOMP(00246120, RequestCharTexture) {
    StackFrame f(c, 0x40);
    c.r[a2].d[0] = c.r[a0].d[0];
    f.sq(s0, 0x30);
    f.sq(s1, 0x20);
    f.sq(s2, 0x10);
    f.sd(ra, 0x00);
    const CharInstance inst{c.r[a2].w[0]};

    set32(c.r[v0], inst.wants_texture);
    tick(c, 9);
    const auto leave = [&] {
        f.lq(s0, 0x30);
        f.lq(s1, 0x20);
        f.lq(s2, 0x10);
        f.ld(ra, 0x00);
        f.pop();
        tick(c, 7);
    };
    if (c.r[v0].d[0] == 0) return leave();

    set32(c.r[v1], 0x00660000u);
    set32(c.r[a1], inst.texture_id);
    set32(c.r[v0], ld32(kLastTexture));
    tick(c, 5);
    if (c.r[a1].d[0] == c.r[v0].d[0]) return leave();

    const std::uint32_t texture = c.r[a1].w[0];
    set32(c.r[v0], 0x004f0000u);
    st32(kLastTexture, texture);
    set32(c.r[v1], ld32(kTextureMode));
    set32(c.r[s0], 1);
    tick(c, 6);

    if (c.r[v1].d[0] == 1) {
        set32(c.r[a2], inst.texture_upload);
        set32(c.r[a0], ld32(decomp::character::kTextureManagerPtr));
        tick(c, 5);
        if (!call(c, kUploadTexture, Ra{0x00246184u})) return;
        tick(c, 2);
        return leave();
    }

    set32(c.r[v0], 2);
    tick(c, 3);
    if (c.r[v1].d[0] != 2) return leave();

    // the queue of the buffer being built: index 1 - [0x4f4d68]
    const auto count_slot = [] { return kQueueCounts + ((1u - ld32(decomp::character::kRenderBuffer)) << 2); };
    set32(c.r[s1], 0x004f0000u);
    set32(c.r[v0], 0x00660000u);
    set32(c.r[a3], kQueues);
    set32(c.r[s2], kQueueCounts);
    set32(c.r[v1], count_slot());
    set32(c.r[v0], ld32(c.r[v1].w[0]));
    c.r[v0].d[0] = c.r[v0].sd[0] < static_cast<std::int64_t>(kQueueEntries) ? 1 : 0;
    tick(c, 12);
    if (c.r[v0].d[0] == 0) return leave();

    // entry = queue + count * 16; entry->instance = inst
    set32(c.r[v0], kQueueBytes);
    mmi::mult(c, 0, 1u - ld32(decomp::character::kRenderBuffer), kQueueBytes);
    c.r[a0].d[0] = c.lo.d[0];
    set32(c.r[v1], count_slot());
    set32(c.r[a1], count_slot());
    const std::uint32_t count = ld32(c.r[v1].w[0]);
    set32(c.r[v0], kQueues + (count << 4) + c.r[a0].w[0]);
    st32(c.r[v0].w[0] + 8, inst.addr);
    set32(c.r[a0], ld32(c.r[a1].w[0]) + 16);
    tick(c, 21);
    if (!call(c, kQueueMark, Ra{0x0024621cu})) return;

    set32(c.r[v0], count_slot());
    set32(c.r[v1], ld32(c.r[v0].w[0]) + 1);
    st32(c.r[v0].w[0], c.r[v1].w[0]);
    tick(c, 7);
    leave();
}
