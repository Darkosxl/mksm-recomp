// Ps2/Renderer/Character/ps2render.cpp: the per-frame bone matrices of a skinned model.
#include "ps2/decomp.hpp"
#include "ps2/decomp_vu0.hpp"

#include "../../texture/texture_manager.hpp"  // Field

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace ps2::vu0;
using decomp::texture::Field;

// The two matrix palettes the character draw uploads to VU1 (64 bytes per bone, allocated on the first update from
// the pool at [0x4e5114], tag "Allocate_Spad_Addrs_For_Update"), and the update counter.
constexpr std::uint32_t kWorldPalette = 0x006660a0u;  // bone i's world matrix
constexpr std::uint32_t kSkinPalette = 0x006660a4u;   // bone i's skinning matrix (world, bind pivot removed)
constexpr std::uint32_t kPaletteExtra = 0x006660acu;  // 880 bytes allocated with them, not used here
constexpr std::uint32_t kPool = 0x004e5114u;
constexpr std::uint32_t kUpdateCount = 0x006618f8u;   // incremented once per update
constexpr std::uint32_t kSourceFile = 0x005850b0u;    // "c:/Projects/Ps2/Renderer/Character/ps2render.cpp"
constexpr std::uint32_t kAllocTag = 0x00585290u;      // "Allocate_Spad_Addrs_For_Update"
constexpr std::uint32_t kMemoryResetBlock = 0x0020ee28u, kMemoryAllocBlock = 0x0020f058u, kFastMemset = 0x0020f750u;
constexpr std::uint32_t kMatrixSetTranslation = 0x00213c78u, kPreUpdate = 0x002457d0u;

// How a bone got its world matrix: from the model's node, its own (no parent / mode -1), or its parent bone's.
enum class Path { kNone, kNodeChild, kRoot, kDetached, kBoneChild };

// One bone (0x1c0 bytes; the model holds an array of them, and a record of the same shape for the model's own node).
// Matrices are row-major for row vectors: rows 0-2 the rotation, row 3 the translation.
struct Bone {
    static constexpr std::uint32_t kSize = 0x1c0;

    std::uint32_t addr;
    std::uint32_t local() const { return addr + 0x00; }     // relative to the parent
    Field<std::uint32_t> parent{addr + 0x40};                // a bone, the model's node, or 0 (world matrix given)
    std::uint32_t world() const { return addr + 0x50; }     // 0x50-0x8f
    std::uint32_t pivot() const { return addr + 0x90; }     // bind position, removed in the skinning matrix
    std::uint32_t position() const { return addr + 0xa0; }  // copy of the world translation
    std::uint32_t local_position() const { return addr + 0xb0; }  // restored into the local translation
    Field<std::int8_t> mode{addr + 0x150};                   // -1: keeps its own world matrix like a root
};

// The model fields this reads (a0).
struct Model {
    std::uint32_t addr;
    Field<std::uint32_t> pre_update{addr + 0xdc8};  // nonzero: fn_2457d0 runs first
    Field<std::uint32_t> bones{addr + 0x18};
    Field<std::uint32_t> bone_count{addr + 0x30};
    Bone node() const { return {addr + 0x50}; }      // the model's own node: bones whose parent it is hang off it
    Field<std::uint32_t> updated{addr + 0x1000};
};

// The locals of the original's frame: the per-bone done flags at sp+0 (FastMemset over the bone count), then words.
constexpr std::uint32_t kNode = 128, kBones = 132, kNext = 136;
// four copies of i * 64, one per code path that reads it
constexpr std::uint32_t kOffsetD = 140, kOffsetC = 144, kOffsetB = 148, kOffsetA = 152;

void move(Cpu &c, unsigned d, unsigned s) { c.r[d].d[0] = c.r[s].d[0]; }

// world = local x parent world: the local rows in vf5, vf7, vf8, vf9 and the parent's in vf3, vf2, vf1, vf4; the
// result in vf6, vf7, vf8 (rotation) and vf2 (translation).
void concatenate(Cpu &c) {
    const Vf rows[4] = {vf5, vf7, vf8, vf9}, out[4] = {vf6, vf7, vf8, vf2};
    for (int i = 0; i < 4; ++i) {
        vmulabc(c, XYZW, vf3, rows[i], Lane::x);
        vmaddabc(c, XYZW, vf2, rows[i], Lane::y);
        vmaddabc(c, XYZW, vf1, rows[i], Lane::z);
        vmaddbc(c, XYZW, out[i], vf4, rows[i], Lane::w);
    }
}

void store_rows(const Cpu &c, std::uint32_t at, Vf r0, Vf r1, Vf r2, Vf t) {
    sqc2(c, r0, at);
    sqc2(c, r1, at + 16);
    sqc2(c, r2, at + 32);
    sqc2(c, t, at + 48);
}

// vf1 = -pivot: the four words go through FPRs f3/f1/f0/f2 and GPRs x, y, z, w into t0 (PEXTLW, PEXTLW, PCPYLD, the
// halves in t0/t1), then times vf5.x = -1.0 (f20 through t0). `base` holds pivot's address, as in the original.
void load_negated_pivot(Cpu &c, const Bone &bone, unsigned base, unsigned x, unsigned y, unsigned z, unsigned w) {
    set32(c.r[base], bone.pivot());
    c.f[3] = ld32(bone.pivot());
    c.f[1] = ld32(bone.pivot() + 4);
    c.f[0] = ld32(bone.pivot() + 8);
    c.f[2] = ld32(bone.pivot() + 12);
    set32(c.r[x], c.f[3]);
    set32(c.r[y], c.f[1]);
    set32(c.r[z], c.f[0]);
    set32(c.r[w], c.f[2]);
    mmi::pextlw(c.r[t0], c.r[y], c.r[x]);
    mmi::pextlw(c.r[t1], c.r[w], c.r[z]);
    mmi::pcpyld(c.r[t0], c.r[t1], c.r[t0]);
    qmtc2(c, t0, vf1);
    set32(c.r[t0], c.f[20]);
    qmtc2(c, t0, vf5);
    vmulbc(c, XYZW, vf1, vf1, vf5, Lane::x);
}

// The skinning matrix's translation: vf1 = world.t - pivot x R (vf1 holds -pivot).
void skin_translation(Cpu &c) {
    vmulabc(c, XYZW, vf6, vf1, Lane::x);
    vmaddabc(c, XYZW, vf7, vf1, Lane::y);
    vmaddabc(c, XYZW, vf8, vf1, Lane::z);
    vmaddbc(c, XYZW, vf1, vf2, vf0, Lane::w);
}

void store_skin(const Cpu &c, std::uint32_t at) {
    sqc2(c, vf1, at + 48);
    sqc2(c, vf6, at);
    sqc2(c, vf7, at + 16);
    sqc2(c, vf8, at + 32);
}

// The world matrix back into the bone (rows, translation and position), then MatrixSetTranslation(local,
// local_position) puts the bind position back into the local matrix (the call itself is the caller's).
void write_back(Cpu &c, const Bone &bone) {
    move(c, a0, a2);
    sqc2(c, vf6, bone.world());
    sqc2(c, vf7, bone.world() + 16);
    set32(c.r[a1], bone.local_position());
    sqc2(c, vf8, bone.world() + 32);
    sqc2(c, vf2, bone.position());
    sqc2(c, vf2, bone.world() + 48);
}

// A bone that keeps its own world matrix (no parent, or mode -1): copied into the world palette as is.
void own_world(Cpu &c, const Bone &bone, std::uint32_t i, std::uint32_t done_flag) {
    set32(c.r[a0], ld32(kWorldPalette));
    set32(c.r[v0], bone.world());
    set32(c.r[v1], (i << 6) + c.r[a0].w[0]);
    lqc2(c, vf2, bone.world() + 48);
    st8(done_flag, c.r[gpr::fp].b[0]);
    set32(c.r[s2], c.r[s2].w[0] + 1);
    lqc2(c, vf6, bone.world());
    lqc2(c, vf7, bone.world() + 16);
    lqc2(c, vf8, bone.world() + 32);
    store_rows(c, c.r[v1].w[0], vf6, vf7, vf8, vf2);
    load_negated_pivot(c, bone, v0, a1, v0, v1, a0);
}

}

// fn_245168(model, skip_skin, skip_writeback): computes a skinned model's bone matrices for this frame. Walks the
// bone hierarchy (repeating passes until every bone whose parent is done is done), and for bone i writes
//   world palette [0x6660a0][i] = local x parent world (the model's node matrix for top bones; a bone with no parent
//                                 or mode -1 keeps its own world matrix),
//   skin palette  [0x6660a4][i] = the same rotation, translation world.t - pivot x R (unless skip_skin),
// and unless skip_writeback stores the world matrix back into the bone and restores the local translation. The
// palettes (120 matrices each) are allocated from the pool on the first call; the character packers read them for
// VU1's bone matrices (mem 12-23; inferred from §3.4 of decomp/notes/native-renderer.md, not traced here).
PS2_DECOMP(00245168, UpdateBoneMatrices) {
    StackFrame f(c, 0x150);
    for (const auto [r, off] : {std::pair{s5, 0xe0u}, {s6, 0xd0u}, {s7, 0xc0u}, {s0, 0x130u}, {s1, 0x120u},
                               {s2, 0x110u}, {s3, 0x100u}, {s4, 0xf0u}, {gpr::fp, 0xb0u}})
        f.sq(r, off);
    f.sd(ra, 0xa0);
    st32(f.at(0x140), c.f[20]);
    move(c, s5, a0);
    move(c, s6, a2);
    move(c, s7, a1);
    const Model model{c.r[a0].w[0]};
    const std::uint32_t frame = f.at(0);

    set32(c.r[v0], model.pre_update);
    tick(c, 18);
    if (c.r[v0].d[0] != 0) {
        tick(c, 2);
        if (!call(c, kPreUpdate, Ra{0x002451b8u})) return;
    }

    // first update: allocate the palettes
    set32(c.r[v1], 0x00660000u);
    set32(c.r[v0], ld32(kSkinPalette));
    tick(c, 4);
    if (c.r[v0].d[0] == 0) {
        set32(c.r[s2], 0x004e0000u);
        set32(c.r[a1], 2);
        set32(c.r[a0], ld32(kPool));
        set32(c.r[s3], 0x00660000u);
        set32(c.r[s4], 0x00660000u);
        tick(c, 7);
        if (!call(c, kMemoryResetBlock, Ra{0x002451e4u})) return;
        set32(c.r[s0], kSourceFile);
        set32(c.r[s1], kAllocTag);
        const std::uint32_t sizes[3] = {0x1e00, 0x1e00, 0x370}, lines[3] = {11887, 11888, 11889};
        const std::uint32_t stores[3] = {0, kWorldPalette, kSkinPalette}, ras[3] = {0x00245214u, 0x00245238u, 0x00245260u};
        const std::int32_t cycles[3] = {12, 9, 10};
        for (int k = 0; k < 3; ++k) {
            set32(c.r[a0], ld32(kPool));
            set32(c.r[a1], sizes[k]);
            set32(c.r[a2], 1);
            move(c, a3, s0);
            move(c, t0, s1);
            set32(c.r[t1], lines[k]);
            if (stores[k]) st32(stores[k], c.r[v0].w[0]);  // the previous allocation
            if (k == 2) set32(c.r[v1], 0x00660000u);
            tick(c, cycles[k]);
            if (!call(c, kMemoryAllocBlock, Ra{ras[k]})) return;
        }
        set32(c.r[a0], ld32(kPool));
        set32(c.r[a1], 2);
        st32(kPaletteExtra, c.r[v0].w[0]);
        tick(c, 5);
        if (!call(c, kMemoryResetBlock, Ra{0x00245274u})) return;
    }

    // the model's node: updated, its translation row = its position with w = 1
    const Bone node = model.node();
    set32(c.r[a0], 0x00660000u);
    set32(c.r[a1], node.addr);
    set32(c.r[v0], ld32(kUpdateCount) + 1);
    st32(frame + kNode, node.addr);
    model.updated = 1;
    set32(c.r[at], 0x3f800000u);
    c.f[0] = c.r[at].w[0];
    st32(kUpdateCount, c.r[v0].w[0]);
    st32(node.position() + 12, c.f[0]);
    set32(c.r[a0], 3);
    set32(c.r[v0], node.position());
    set32(c.r[v1], node.world() + 48);
    set32(c.r[a1], -1);
    tick(c, 15);
    for (;;) {  // four words, one per iteration
        c.f[0] = ld32(c.r[v0].w[0]);
        set32(c.r[a0], c.r[a0].w[0] - 1);
        set32(c.r[v0], c.r[v0].w[0] + 4);
        st32(c.r[v1].w[0], c.f[0]);
        set32(c.r[v1], c.r[v1].w[0] + 4);
        tick(c, 7);
        if (c.r[a0].d[0] == c.r[a1].d[0]) break;
        if (poll(c, 0x002452b0u)) return;
    }

    // clear the done flags
    set32(c.r[v1], node.addr);
    set32(c.r[v0], 1);
    move(c, a0, gpr::sp);
    c.r[a1].d[0] = 0;
    node.mode = 1;
    c.r[s2].d[0] = 0;  // bones done
    set32(c.r[v0], model.bones);
    st32(frame + kBones, c.r[v0].w[0]);
    set32(c.r[s4], model.bone_count);
    move(c, a2, s4);
    tick(c, 12);
    if (!call(c, kFastMemset, Ra{0x002452fcu})) return;
    tick(c, 1);

    for (;;) {  // passes over the bones until all are done
        set32(c.r[a2], ld32(frame + kBones));
        c.r[s1].d[0] = 0;
        tick(c, 4);
        if (c.r[s4].sd[0] > 0) {
            set32(c.r[v1], ld32(frame + kNode));
            set32(c.r[gpr::fp], 1);
            set32(c.r[at], 0xbf800000u);
            c.f[20] = c.r[at].w[0];
            set32(c.r[s5], 0x00660000u);
            st32(frame + kOffsetD, 0);
            set32(c.r[s3], c.r[v1].w[0] + 0x50);  // the node's world matrix
            st32(frame + kOffsetC, 0);
            move(c, s0, gpr::sp);
            st32(frame + kOffsetB, 0);
            st32(frame + kOffsetA, 0);
            tick(c, 12);

            for (;;) {  // bone i = s1, its done flag at s0, its record at a2
                const Bone bone{c.r[a2].w[0]};
                const std::uint32_t i = c.r[s1].w[0], done_flag = c.r[s0].w[0];
                set32(c.r[v0], bone.addr + Bone::kSize);
                set32(c.r[a0], bone.addr + Bone::kSize);
                st32(frame + kNext, c.r[a0].w[0]);
                c.r[v0].sd[0] = static_cast<std::int8_t>(ld8(done_flag));
                tick(c, 7);
                if (c.r[v0].d[0] == 0) {
                    set32(c.r[v1], bone.parent);
                    set32(c.r[a1], ld32(frame + kNode));
                    tick(c, 4);
                    Path path = Path::kNone;
                    if (c.r[v1].d[0] == c.r[a1].d[0]) {
                        lqc2(c, vf7, bone.local() + 16);
                        lqc2(c, vf8, bone.local() + 32);
                        lqc2(c, vf9, bone.local() + 48);
                        st8(done_flag, c.r[gpr::fp].b[0]);
                        set32(c.r[s2], c.r[s2].w[0] + 1);
                        const std::uint32_t parent = c.r[s3].w[0];
                        lqc2(c, vf3, parent);
                        lqc2(c, vf2, parent + 16);
                        lqc2(c, vf1, parent + 32);
                        lqc2(c, vf4, parent + 48);
                        lqc2(c, vf5, bone.local());
                        concatenate(c);
                        set32(c.r[v1], ld32(kWorldPalette));
                        set32(c.r[v0], (i << 6) + c.r[v1].w[0]);
                        store_rows(c, c.r[v0].w[0], vf6, vf7, vf8, vf2);
                        load_negated_pivot(c, bone, v1, v0, v1, a0, a1);
                        tick(c, 51);
                        path = Path::kNodeChild;
                    } else {
                        tick(c, 2);
                        if (c.r[v1].d[0] == 0) {
                            own_world(c, bone, i, done_flag);
                            tick(c, 32);
                            path = Path::kRoot;
                        } else {
                            // the parent's index: (parent - bones) / 0x1c0, by the multiply with 0xb6db6db7 (1/7)
                            set32(c.r[a0], ld32(frame + kBones));
                            set32(c.r[v0], 0xb6db6db7u);
                            c.r[a1].sd[0] = bone.mode;
                            set32(c.r[v1], c.r[v1].w[0] - c.r[a0].w[0]);
                            mmi::mult(c, 0, c.r[v1].w[0], c.r[v0].w[0]);
                            c.r[v1].d[0] = c.lo.d[0];
                            set32(c.r[a0], -1);
                            set32(c.r[a3], static_cast<std::uint32_t>(c.r[v1].sw[0] >> 6));
                            tick(c, 10);
                            if (c.r[a1].d[0] == c.r[a0].d[0]) {
                                own_world(c, bone, i, done_flag);
                                tick(c, 32);
                                path = Path::kDetached;
                            } else {
                                set32(c.r[v0], frame + c.r[a3].w[0]);
                                c.r[v1].sd[0] = static_cast<std::int8_t>(ld8(c.r[v0].w[0]));
                                tick(c, 4);
                                if (c.r[v1].d[0] != 0) {  // the parent is done: concatenate with its world matrix
                                    set32(c.r[v1], ld32(kWorldPalette));
                                    set32(c.r[v0], (c.r[a3].w[0] << 6) + c.r[v1].w[0]);
                                    const std::uint32_t parent = c.r[v0].w[0];
                                    lqc2(c, vf7, bone.local() + 16);
                                    lqc2(c, vf8, bone.local() + 32);
                                    lqc2(c, vf9, bone.local() + 48);
                                    lqc2(c, vf4, parent + 48);
                                    st8(done_flag, c.r[gpr::fp].b[0]);
                                    set32(c.r[s2], c.r[s2].w[0] + 1);
                                    lqc2(c, vf5, bone.local());
                                    lqc2(c, vf3, parent);
                                    lqc2(c, vf2, parent + 16);
                                    lqc2(c, vf1, parent + 32);
                                    concatenate(c);
                                    set32(c.r[v0], (i << 6) + c.r[v1].w[0]);
                                    store_rows(c, c.r[v0].w[0], vf6, vf7, vf8, vf2);
                                    load_negated_pivot(c, bone, v1, a0, a1, v0, v1);
                                    tick(c, 53);
                                    path = Path::kBoneChild;
                                }
                            }
                        }
                    }

                    if (path != Path::kNone) {
                        const bool skin = c.r[s7].d[0] == 0;
                        if (skin) {  // the skinning matrix into the skin palette
                            switch (path) {
                            case Path::kNodeChild:
                                set32(c.r[v1], 0x00660000u);
                                set32(c.r[a0], ld32(frame + kOffsetA));
                                set32(c.r[v0], ld32(kSkinPalette));
                                skin_translation(c);
                                set32(c.r[v0], c.r[a0].w[0] + c.r[v0].w[0]);
                                tick(c, 10 + 4);
                                break;
                            case Path::kRoot:
                            case Path::kDetached:
                                set32(c.r[a1], 0x00660000u);
                                set32(c.r[v1], ld32(frame + (path == Path::kRoot ? kOffsetB : kOffsetC)));
                                set32(c.r[v0], ld32(kSkinPalette));
                                skin_translation(c);
                                set32(c.r[v0], c.r[v1].w[0] + c.r[v0].w[0]);
                                tick(c, (path == Path::kRoot ? 4 : 2) + 6 + 4);
                                break;
                            default:
                                set32(c.r[a0], 0x00660000u);
                                set32(c.r[a1], ld32(frame + kOffsetD));
                                set32(c.r[v0], ld32(kSkinPalette));
                                skin_translation(c);
                                set32(c.r[v0], c.r[a1].w[0] + c.r[v0].w[0]);
                                tick(c, 12);
                                break;
                            }
                            store_skin(c, c.r[v0].w[0]);
                        }
                        tick(c, 2);
                        if (c.r[s6].d[0] == 0) {
                            write_back(c, bone);
                            tick(c, 9);
                            if (!call(c, kMatrixSetTranslation, Ra{path == Path::kBoneChild ? 0x00245744u : 0x002455fcu})) return;
                            if (path != Path::kBoneChild) tick(c, 2);
                        }
                    }
                }

                // next bone
                set32(c.r[v0], ld32(frame + kOffsetD) + 64);
                set32(c.r[s1], c.r[s1].w[0] + 1);
                set32(c.r[v1], ld32(frame + kOffsetC) + 64);
                set32(c.r[s0], c.r[s0].w[0] + 1);
                set32(c.r[a0], ld32(frame + kOffsetB) + 64);
                set32(c.r[a1], ld32(frame + kOffsetA) + 64);
                st32(frame + kOffsetD, c.r[v0].w[0]);
                set32(c.r[a2], ld32(frame + kNext));
                st32(frame + kOffsetC, c.r[v1].w[0]);
                c.r[v0].d[0] = c.r[s1].sd[0] < c.r[s4].sd[0] ? 1 : 0;
                st32(frame + kOffsetB, c.r[a0].w[0]);
                st32(frame + kOffsetA, c.r[a1].w[0]);
                tick(c, 18);
                if (c.r[v0].d[0] == 0) break;
                if (poll(c, 0x00245340u)) return;
            }
        }
        c.r[v0].d[0] = c.r[s2].sd[0] < c.r[s4].sd[0] ? 1 : 0;
        tick(c, 3);
        if (c.r[v0].d[0] == 0) break;
        if (poll(c, 0x00245300u)) return;
    }

    for (const auto [r, off] : {std::pair{s0, 0x130u}, {s1, 0x120u}, {s2, 0x110u}, {s3, 0x100u}, {s4, 0xf0u},
                               {s5, 0xe0u}, {s6, 0xd0u}, {s7, 0xc0u}, {gpr::fp, 0xb0u}})
        f.lq(r, off);
    f.ld(ra, 0xa0);
    c.f[20] = ld32(f.at(0x140));
    f.pop();
    tick(c, 14);
}
