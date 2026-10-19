// Ps2/Renderer/Character/ps2render.cpp: the node hierarchy of a render instance (a fighter's or an object's
// skeleton): each node's world matrix is its local matrix times its parent's world matrix.
#include "ps2/decomp.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;

// render-layer switches (0x004F5xxx, set elsewhere)
constexpr std::uint32_t kUseAltUpdate = 0x004F50E0u;     // nonzero: instances with field_38 < 220 go to fn_245168
constexpr std::uint32_t kNodesEnabled = 0x004F50DCu;     // zero: no node updates at all
constexpr std::uint32_t kOncePerFrame = 0x004F504Cu;     // nonzero: an instance already marked updated is skipped
constexpr std::uint32_t kUpdateCount = 0x006618F8u;      // counts the instances updated here

constexpr std::uint32_t kAltUpdate = 0x00245168u;              // fn_245168(instance, 0, 1)
constexpr std::uint32_t kMatrixSetTranslation = 0x00213C78u;   // (m, v): m.t.xyz = v
constexpr std::uint32_t kMatrixGetTranslation = 0x00213C98u;   // (v, m): v = m.t.xyz
constexpr std::uint32_t kMulMatrix = 0x00213CE8u;              // sceVu0MulMatrix(m0, m1, m2): m0 = m2 x m1 (row vectors)

constexpr std::uint32_t kFrame = 0xa0;  // the original's stack frame: s0-s7, ra, f20

// One render instance (only the fields used here).
struct Instance {
    std::uint32_t addr;
    gptr<std::uint32_t> nodes() const { return {addr + 0x18}; }       // Node array
    gptr<std::uint32_t> node_count() const { return {addr + 0x30}; }
    gptr<std::uint32_t> field_38() const { return {addr + 0x38}; }    // compared with 220 (signed)
    gptr<std::uint8_t> flag_1a0() const { return {addr + 0x1a0}; }    // set to 1 here
    gptr<std::uint32_t> updated() const { return {addr + 0x1000}; }   // 1 once updated (cleared elsewhere)
};

// Node::state
enum NodeState : std::int8_t {
    kUnused = -1,  // not part of the hierarchy
    kStale = 0,    // world matrix needs recomputing
    kValid = 1,    // world matrix up to date
};

// One node of the hierarchy (0x1c0 bytes). Matrices are 4x4 floats, row vectors, translation in row 3 (+0x30).
struct Node {
    static constexpr std::uint32_t kSize = 0x1c0;

    std::uint32_t addr;
    std::uint32_t local() const { return addr; }                       // matrix relative to the parent
    gptr<std::uint32_t> parent() const { return {addr + 0x40}; }       // Node, 0 for a root
    std::uint32_t world() const { return addr + 0x50; }                // local x parent's world
    gptr<std::uint32_t> world_w() const { return {addr + 0x8c}; }      // world.t.w
    std::uint32_t position() const { return addr + 0xa0; }            // world.t.xyz, read back
    std::uint32_t translation() const { return addr + 0xb0; }         // local.t.xyz
    gptr<std::int8_t> state() const { return {addr + 0x150}; }         // NodeState
    gptr<std::int8_t> pinned() const { return {addr + 0x15b}; }        // nonzero: stays kValid under a stale parent
};

void restore(Cpu &c, const StackFrame &f) {
    for (unsigned i = 0; i < 8; ++i) f.lq(s0 + i, 0x80 - 0x10 * i);
    f.ld(ra, 0x00);
    c.f[20] = ld32(f.at(0x90));
    f.pop();
    tick(c, 13);
}

// Pass 1, one node (s1): a kValid node under a stale parent becomes stale too (unless pinned); s3 = 1 if it did.
void invalidate_under_stale_parent(Cpu &c) {
    const Node node{c.r[s1].w[0]};
    const std::int8_t state = node.state().get();
    c.r[v1].sd[0] = state;
    tick(c, 3);
    if (state == kUnused) return;
    c.r[v0].sd[0] = node.pinned().get();
    tick(c, 3);
    if (c.r[v0].d[0] != 0) return;
    tick(c, 2);
    if (state != kValid) return;
    set32(c.r[v0], node.parent().get());
    tick(c, 3);
    if (c.r[v0].d[0] == 0) return;
    c.r[v0].sd[0] = Node{c.r[v0].w[0]}.state().get();
    tick(c, 3);
    if (c.r[v0].d[0] != kStale) return;
    node.state().set(kStale);
    set32(c.r[s3], 1);
    tick(c, 2);
}

// Pass 2, one node (s1): a stale node whose parent is not stale gets world = local x parent.world, its position read
// back from it, and becomes kValid; s3 = 1 if it did. The parent's world translation is first reset from its
// position. False when control left the function in a call.
bool update_from_parent(Cpu &c) {
    const Node node{c.r[s1].w[0]};
    const std::int8_t state = node.state().get();
    c.r[v0].sd[0] = state;
    tick(c, 3);
    if (state == kUnused) return true;
    tick(c, 2);
    if (state != kStale) return true;
    set32(c.r[a0], node.parent().get());
    tick(c, 3);
    if (c.r[a0].d[0] == 0) return true;
    const Node parent{c.r[a0].w[0]};
    c.r[v0].sd[0] = parent.state().get();
    tick(c, 3);
    if (c.r[v0].d[0] == kStale) return true;

    set32(c.r[a1], parent.position());
    node.state().set(static_cast<std::int8_t>(c.r[s5].w[0]));  // kValid (s5)
    set32(c.r[a0], parent.world());
    set32(c.r[s0], node.world());
    tick(c, 6);
    if (!call(c, kMatrixSetTranslation, Ra{0x0024596Cu})) return false;  // parent.world.t = parent.position

    set32(c.r[s3], 1);
    set32(c.r[a1], node.translation());
    c.r[a0].d[0] = c.r[s1].d[0];
    tick(c, 5);
    if (!call(c, kMatrixSetTranslation, Ra{0x00245980u})) return false;  // node.local.t = node.translation

    set32(c.r[a1], node.parent().get());  // reloaded after the call
    c.r[a0].d[0] = c.r[s0].d[0];
    c.r[a2].d[0] = c.r[s1].d[0];
    set32(c.r[a1], c.r[a1].w[0] + 0x50);  // parent.world
    tick(c, 6);
    if (!call(c, kMulMatrix, Ra{0x00245998u})) return false;  // node.world = node.local x parent.world

    node.world_w().set(c.f[20]);  // 1.0 (f20)
    c.r[a1].d[0] = c.r[s0].d[0];
    set32(c.r[a0], node.position());
    tick(c, 5);
    return call(c, kMatrixGetTranslation, Ra{0x002459ACu});  // node.position = node.world.t
}

}

// Brings the world matrices of a render instance's node hierarchy (a0) up to date: nodes under a stale parent are
// marked stale, then each stale node is recomputed from its up-to-date parent, both passes repeated until nothing
// changes. The fighter and world draws call it before using the matrices (fn_249060), and the end-of-frame update
// after the draw (fn_241410); with kOncePerFrame set, an instance already updated is skipped. Roots (no parent) are
// left as they are.
PS2_DECOMP(002457D0, UpdateNodeMatrices) {
    const Instance inst{c.r[a0].w[0]};
    c.r[v1].sd[0] = static_cast<std::int32_t>(0x004F0000u);  // lui v1, %hi(kUseAltUpdate)
    const StackFrame f(c, kFrame);
    set32(c.r[v0], rd<std::uint32_t>(kUseAltUpdate));
    for (unsigned i = 0; i < 8; ++i) f.sq(s0 + i, 0x80 - 0x10 * i);
    f.sd(ra, 0x00);
    st32(f.at(0x90), c.f[20]);
    tick(c, 15);

    if (c.r[v0].d[0] != 0) {
        set32(c.r[v0], inst.field_38().get());
        c.r[v0].d[0] = c.r[v0].sd[0] < 220;
        tick(c, 4);
        if (c.r[v0].d[0] != 0) {
            c.r[a1].d[0] = 0;
            set32(c.r[a2], 1);
            tick(c, 4);
            if (!call(c, kAltUpdate, Ra{0x0024582Cu})) return;
            tick(c, 2);
            restore(c, f);
            return;
        }
    }

    c.r[v0].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[v1], rd<std::uint32_t>(kNodesEnabled));
    tick(c, 4);
    if (c.r[v1].d[0] == 0) {
        restore(c, f);
        return;
    }
    set32(c.r[v0], inst.updated().get());
    set32(c.r[a1], 1);
    tick(c, 4);
    if (c.r[v0].d[0] == 1) {
        c.r[v0].sd[0] = static_cast<std::int32_t>(0x004F0000u);
        set32(c.r[v1], rd<std::uint32_t>(kOncePerFrame));
        tick(c, 4);
        if (c.r[v1].d[0] != 0) {
            restore(c, f);
            return;
        }
    }

    c.r[v1].sd[0] = static_cast<std::int32_t>(0x00660000u);  // lui v1, %hi(kUpdateCount)
    inst.updated().set(c.r[a1].w[0]);
    set32(c.r[v0], rd<std::uint32_t>(kUpdateCount));
    set32(c.r[s6], inst.nodes().get());
    set32(c.r[v0], c.r[v0].w[0] + 1);
    set32(c.r[s4], inst.node_count().get());
    wr<std::uint32_t>(kUpdateCount, c.r[v0].w[0]);
    inst.flag_1a0().set(static_cast<std::uint8_t>(c.r[a1].w[0]));
    tick(c, 9);

    // s6 = the nodes, s4 = their count; s1 walks them, s2 counts down, s3 = something changed in this sweep
    for (;;) {  // 0x00245888: pass 1
        c.r[s1].d[0] = c.r[s6].d[0];
        c.r[s3].d[0] = 0;
        tick(c, 4);
        if (c.r[s4].sd[0] > 0) {
            set32(c.r[a1], 0xFFFFFFFFu);  // kUnused and kValid, for the compares
            set32(c.r[a0], 1);
            c.r[s2].d[0] = c.r[s4].d[0];
            tick(c, 4);
            for (;;) {  // 0x002458A8
                invalidate_under_stale_parent(c);
                set32(c.r[s2], c.r[s2].w[0] - 1);
                set32(c.r[s1], c.r[s1].w[0] + Node::kSize);
                tick(c, 4);
                if (c.r[s2].d[0] == 0) break;
                if (poll(c, 0x002458A8u)) return;
            }
        }
        tick(c, 2);
        if (c.r[s3].d[0] == 0) break;
        if (poll(c, 0x00245888u)) return;
    }

    for (;;) {  // 0x00245900: pass 2
        c.r[s1].d[0] = c.r[s6].d[0];
        c.r[s3].d[0] = 0;
        tick(c, 4);
        if (c.r[s4].sd[0] > 0) {
            c.r[at].sd[0] = static_cast<std::int32_t>(0x3F800000u);  // 1.0f
            c.f[20] = c.r[at].w[0];
            set32(c.r[s7], 0xFFFFFFFFu);  // kUnused
            set32(c.r[s5], 1);            // kValid
            c.r[s2].d[0] = c.r[s4].d[0];
            tick(c, 6);
            for (;;) {  // 0x00245928
                if (!update_from_parent(c)) return;
                set32(c.r[s2], c.r[s2].w[0] - 1);
                set32(c.r[s1], c.r[s1].w[0] + Node::kSize);
                tick(c, 4);
                if (c.r[s2].d[0] == 0) break;
                if (poll(c, 0x00245928u)) return;
            }
        }
        tick(c, 2);
        if (c.r[s3].d[0] == 0) break;
        if (poll(c, 0x00245900u)) return;
    }
    restore(c, f);
}
