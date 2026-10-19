// Ps2/Renderer/Character/ps2render.cpp: the fighter instance draw, fn_246cf0.
//
// Draws one fighter (render list t=3 from the scene draw fn_23ff60, and the character passes of fn_23df70,
// fn_23fa00 and fn_24cbf8). It poses and frustum-tests the skeleton (fn_2459f8, or fn_245d48 in the effect pass),
// opens a FLUSH tag, makes sure the model's texture set is uploaded, optionally sorts the segments by texture,
// writes the character constants (fn_244368), and then emits one VU1 draw per visible segment:
//
//   DMA call tag -> the segment's prebuilt vertex packet (Segment::packet), whose data part (QWC patched when the
//   next tag opens) carries, per bone the segment is skinned to (1-3):
//       NOP, NOP, STCYCL 4,4, UNPACK V4-32 x4 to VU1 12/16/20      (the template qword at 0x4f4d90)
//       the bone's 4x4 matrix from the palette (Segment::bone*, 64 bytes each)
//   then MSCALF <program>, the rigid / 2-bone / 3-bone program of the loaded VU1 image.
//
// The three-pass draw (args.three_pass, image A 0x49e430) also calls fn_239c48 per segment (its UNPACKs to
// VU 0x22-0x29) before the MSCALF; the one-pass draws use image B 0x49f900 with one of three program families.
//
// Register-exact with the recompiled code: each block leaves the registers the original's code leaves, so calls
// that unwind, loop polls and the final state all see the original's machine.
#include "instance.hpp"
#include "vif_chain.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace decomp::render;
using namespace decomp::render::fighter;

// One bone matrix into VU1 memory: the template qword with the VU address OR'd into its UNPACK (vu_reg holds 12, 16
// or 20; the original's pextlw/pextlw/por leave a0 and a1), then the palette matrix through a2-t1. addr_reg gets
// the palette entry's address as the original computes it.
void upload_bone(Cpu &c, unsigned addr_reg, std::uint32_t palette, std::uint32_t bone, unsigned vu_reg,
                 std::uint32_t dst) {
    set32(c.r[addr_reg], (bone << 6) + palette);
    const std::uint32_t m = c.r[addr_reg].w[0];
    ld128(c.r[s1].w[0] & ~15u, c.r[a1]);
    ld128(m & ~15u, c.r[a2]);
    ld128((m + 16) & ~15u, c.r[a3]);
    ld128((m + 32) & ~15u, c.r[t0]);
    ld128((m + 48) & ~15u, c.r[t1]);
    mmi::pextlw(c.r[a0], c.r[vu_reg], c.r[zero]);
    mmi::pextlw(c.r[a0], c.r[a0], c.r[zero]);
    mmi::por(c.r[a1], c.r[a1], c.r[a0]);
    st128(dst & ~15u, c.r[a1]);
    st128((dst + 16) & ~15u, c.r[a2]);
    st128((dst + 32) & ~15u, c.r[a3]);
    st128((dst + 48) & ~15u, c.r[t0]);
    st128((dst + 64) & ~15u, c.r[t1]);
}

void advance(Cpu &c, unsigned reg, std::uint32_t bytes) { set32(c.r[reg], c.r[reg].w[0] + bytes); }

// The switch on Segment::kind (a2) every program family repeats: 0 rigid, 1 two-bone, 2 three-bone, -1 none.
int kind_index(Cpu &c) {
    const std::uint32_t kind = c.r[a2].w[0];
    tick(c, 2);
    if (kind == 3) return 1;
    c.r[v0].d[0] = c.r[a2].sd[0] < 4;
    tick(c, 3);
    if (!c.r[v0].d[0]) {
        tick(c, 2);
        if (kind == 4) return 2;
    } else {
        tick(c, 2);
        if (kind == 2) return 0;
    }
    tick(c, 2);
    return -1;
}

// The program offset in s0 (label - image base; image B's base is s4).
void set_program(Cpu &c, std::uint32_t label, std::uint32_t image) { set32(c.r[s0], label - image); }

// Opens the segment's DMA `call` tag at the local write pointer t3: pads to a qword (zero words), closes the open
// tag (QWC += qwords since it), writes call(QWC 0) -> packet (t0) with VIF NOP NOP and pads again. The pointer stays
// in t3/t4; [0x65e300] is not updated. False when a loop poll unwound.
bool open_call_tag(Cpu &c) {
    c.r[a0].d[0] = c.r[t3].d[0];
    set32(c.r[v1], 0x00660000u);
    set32(c.r[a3], Chain::kPtr);
    c.r[v0].d[0] = c.r[a0].d[0] & 12u;
    tick(c, 6);
    if (c.r[v0].d[0]) {
        for (;;) {
            st32(c.r[a0].w[0], 0);
            advance(c, a0, 4);
            c.r[v0].d[0] = c.r[a0].d[0] & 12u;
            tick(c, 6);
            if (!c.r[v0].d[0]) break;
            if (poll(c, 0x00247088u)) return false;
        }
    }

    set32(c.r[a1], ld32(Chain::kOpenTag));
    tick(c, 3);
    if (const std::uint32_t open = c.r[a1].w[0]) {
        set32(c.r[v0], c.r[a0].w[0] - open);
        set32(c.r[v0], static_cast<std::uint32_t>(c.r[v0].sw[0] >> 4) - 1u);  // qwords after the open tag
        set32(c.r[v1], ld32(open) + c.r[v0].w[0]);
        st32(open, c.r[v1].w[0]);
        tick(c, 6);
    }

    const std::uint32_t tag = c.r[a0].w[0];
    c.r[v1].d[0] = c.r[a0].d[0];
    st32(Chain::kOpenTag, tag);
    set32(c.r[a0], dma::tag(dma::call));
    st32(tag, dma::tag(dma::call));
    c.r[v0].sd[0] = static_cast<std::int32_t>(0x9FFFFFFFu);  // the dma::tag_addr mask, sign-extended
    c.r[v0].d[0] &= c.r[t0].d[0];
    st32(tag + 4, c.r[v0].w[0]);
    set32(c.r[v1], tag + 4);
    set32(c.r[t3], tag + 8);
    c.r[t4].d[0] = c.r[t3].d[0];
    st32(Chain::kOpenVif, 0);
    // pad target: t4 rounded up to a qword (`and -16`, `sltu`, `movn`)
    set32(c.r[a1], 0xFFFFFFF0u);
    c.r[a1].d[0] &= c.r[t4].d[0];
    c.r[a0].d[0] = c.r[a1].d[0] < c.r[t4].d[0];
    set32(c.r[v0], c.r[a1].w[0] + 16u);
    if (c.r[a0].d[0]) c.r[a1].d[0] = c.r[v0].d[0];
    c.r[v1].d[0] = c.r[t4].d[0] < c.r[a1].d[0];
    tick(c, 20);
    if (c.r[v1].d[0]) {
        tick(c, 1);
        for (;;) {
            st32(c.r[t4].w[0], 0);
            advance(c, t4, 4);
            c.r[v0].d[0] = c.r[t4].d[0] < c.r[a1].d[0];
            tick(c, 6);
            if (!c.r[v0].d[0]) break;
            if (poll(c, 0x00247118u)) return false;
        }
    }
    return true;
}

// ---- the bone matrices of one segment, per program family (each leaves the original's registers) ----

// Three-pass (image A): the image base is computed in a0, the palette in v1 (rigid) or t2; destination t3.
void bones_three_pass(Cpu &c, int kind, const Segment &seg) {
    const std::uint32_t palette = ld32(kBonePalette);
    const std::uint32_t t3_at = c.r[t3].w[0];
    switch (kind) {
    case 0:
        set_program(c, kThreePass.label[0], kImageA);
        set32(c.r[v1], palette);
        upload_bone(c, v0, palette, seg.bone, s3, t3_at);
        advance(c, t3, 80);
        tick(c, 25);
        break;
    case 1:
        set_program(c, kThreePass.label[1], kImageA);
        set32(c.r[t2], palette);
        upload_bone(c, v0, palette, seg.bone, s3, t3_at);
        upload_bone(c, v1, palette, seg.bone1, s5, t3_at + 80);
        advance(c, t3, 160);
        tick(c, 42);
        break;
    case 2:
        set_program(c, kThreePass.label[2], kImageA);
        set32(c.r[t2], palette);
        upload_bone(c, v1, palette, seg.bone, s3, t3_at);
        upload_bone(c, v0, palette, seg.bone1, s5, t3_at + 80);
        upload_bone(c, v1, palette, seg.bone2, t6, t3_at + 160);
        advance(c, t3, 240);
        tick(c, 59);
        break;
    default:
        c.r[s0].d[0] = 0;
        tick(c, 1);
    }
}

// Effect pass (image B, the effect family): label in v1 (rigid) or v0, palette in t2; destination t3.
void bones_effect(Cpu &c, int kind, const Segment &seg) {
    const std::uint32_t t3_at = c.r[t3].w[0];
    switch (kind) {
    case 0: {
        set32(c.r[v1], kEffect.label[0]);
        const std::uint32_t palette = ld32(kBonePalette);
        set32(c.r[t2], palette);
        set_program(c, kEffect.label[0], c.r[s4].w[0]);
        upload_bone(c, v0, palette, seg.bone, s3, t3_at);
        advance(c, t3, 80);
        tick(c, 23);
        break;
    }
    case 1:
    case 2: {
        const std::uint32_t palette = ld32(kBonePalette);
        set32(c.r[t2], palette);
        set_program(c, kEffect.label[kind], c.r[s4].w[0]);
        upload_bone(c, v1, palette, seg.bone, s3, t3_at);
        upload_bone(c, v0, palette, seg.bone1, s5, t3_at + 80);
        if (kind == 2) upload_bone(c, v1, palette, seg.bone2, t6, t3_at + 160);
        advance(c, t3, kind == 2 ? 240 : 160);
        tick(c, kind == 2 ? 57 : 40);
        break;
    }
    default:
        c.r[s0].d[0] = 0;
        tick(c, 1);
    }
}

// One-pass (image B, normal or alternative family): destination t4, the final write pointer in t3.
void bones_one_pass(Cpu &c, int kind, const Segment &seg, const Programs &programs, std::int32_t select_cycles) {
    const std::uint32_t at = c.r[t4].w[0];
    switch (kind) {
    case 0: {
        set32(c.r[v1], programs.label[0]);
        const std::uint32_t palette = ld32(kBonePalette);
        set32(c.r[t2], palette);
        tick(c, select_cycles);
        set_program(c, programs.label[0], c.r[s4].w[0]);
        upload_bone(c, v0, palette, seg.bone, s3, at);
        set32(c.r[t3], at + 80);
        tick(c, 19);
        break;
    }
    case 1: {
        const std::uint32_t palette = ld32(kBonePalette);
        set32(c.r[t2], palette);
        tick(c, select_cycles);
        set_program(c, programs.label[1], c.r[s4].w[0]);
        upload_bone(c, v1, palette, seg.bone, s3, at);
        set32(c.r[v1], at + 80);
        upload_bone(c, v0, palette, seg.bone1, s5, at + 80);
        set32(c.r[t3], at + 160);
        tick(c, 36);
        break;
    }
    case 2: {
        const std::uint32_t palette = ld32(kBonePalette);
        tick(c, select_cycles);
        set_program(c, programs.label[2], c.r[s4].w[0]);
        upload_bone(c, v1, palette, seg.bone, s3, at);
        set32(c.r[t2], at + 80);
        upload_bone(c, v0, palette, seg.bone1, s5, at + 80);
        set32(c.r[v0], at + 160);
        upload_bone(c, v1, palette, seg.bone2, t6, at + 160);
        set32(c.r[t3], at + 240);
        tick(c, 53);
        break;
    }
    default:
        c.r[s0].d[0] = 0;
        tick(c, 1);
    }
}

// One iteration of the segment loop for segment index a0 (0x246fd8-0x247898). False when control left.
bool draw_segment(Cpu &c, const FighterDrawArgs &args) {
    const Model model{c.r[s6].w[0]};
    const std::uint32_t i = c.r[a0].w[0];

    // the segment: from the texture-sorted list, or the model's array in order (indexed with MADD, so HI/LO
    // keep the address)
    set32(c.r[v0], model.sort_by_texture);
    tick(c, 3);
    bool sorted = false;
    if (c.r[v0].d[0] == c.r[s7].d[0]) {
        set32(c.r[v0], args.three_pass);
        tick(c, 3);
        sorted = c.r[v0].d[0] != 0;
    }
    if (sorted) {
        set32(c.r[v0], 0x00660000u);
        set32(c.r[v1], ld32(kSortList));
        set32(c.r[v0], (i << 2) + c.r[v1].w[0]);
        set32(c.r[t5], ld32(c.r[v0].w[0]));
        tick(c, 7);
    } else {
        set32(c.r[v1], args.segments);
        set32(c.r[v0], Segment::kSize);
        c.lo.d[0] = c.r[v1].d[0];
        mmi::madd(c, 0, i, Segment::kSize);
        c.r[t5].d[0] = c.lo.d[0];
        set32(c.r[v1], c.r[t5].w[0] + Segment::kSize);  // the address of a `pref` of the next one
        tick(c, 6);
    }
    const Segment seg{c.r[t5].w[0]};

    // drawn when on a layer, inside the frustum when the pose test asks for per-segment results, and of a kind
    // with a program (2-4)
    set32(c.r[v0], seg.layers);
    set32(c.r[v1], i + 1);
    args.next = c.r[v1].w[0];
    set32(c.r[t0], seg.packet);
    set32(c.r[a2], seg.kind);
    tick(c, 7);
    if (!c.r[v0].d[0]) return true;
    set32(c.r[v0], args.visibility);
    tick(c, 3);
    if (c.r[v0].d[0] == c.r[s7].d[0]) {
        set32(c.r[v0], seg.clip);
        tick(c, 3);
        if (!c.r[v0].d[0]) return true;
    }
    set32(c.r[v0], c.r[a2].w[0] - 2u);
    set32(c.r[a0], i + 1);
    args.next = c.r[a0].w[0];
    c.r[v0].d[0] = c.r[v0].d[0] < 3u;
    tick(c, 6);
    if (!c.r[v0].d[0]) return true;

    if (!open_call_tag(c)) return false;
    set32(c.r[a0], args.three_pass);
    c.r[t3].d[0] = c.r[t4].d[0];
    tick(c, 4);

    if (c.r[a0].d[0]) {
        // three-pass: the bone matrices, then fn_239c48's constants, with the write pointer stored around it
        // and t6/t7/t9 (loop constants in caller-saved registers) kept on the stack
        bones_three_pass(c, kind_index(c), seg);
        set32(c.r[v0], 0x00660000u);
        st128((c.r[sp].w[0] + 0x20) & ~15u, c.r[t6]);
        st32(Chain::kPtr, c.r[t3].w[0]);
        c.r[a1].d[0] = c.r[t5].d[0];
        st128((c.r[sp].w[0] + 0x30) & ~15u, c.r[t7]);
        c.r[a0].d[0] = c.r[s6].d[0];
        st128((c.r[sp].w[0] + 0x40) & ~15u, c.r[t9]);
        c.r[a2].d[0] = c.r[sp].d[0];
        tick(c, 10);
        if (!call(c, 0x00239C48u, Ra{0x00247398u})) return false;
        set32(c.r[v1], 0x00660000u);
        ld128((c.r[sp].w[0] + 0x20) & ~15u, c.r[t6]);
        set32(c.r[t3], ld32(Chain::kPtr));
        ld128((c.r[sp].w[0] + 0x30) & ~15u, c.r[t7]);
        ld128((c.r[sp].w[0] + 0x40) & ~15u, c.r[t9]);
        tick(c, 7);
    } else {
        set32(c.r[a0], args.effect_pass);
        tick(c, 3);
        bool effect = false;
        if (c.r[a0].d[0]) {
            set32(c.r[v0], 0x004F0000u);
            set32(c.r[v1], ld32(kEffectPrograms));
            tick(c, 4);
            effect = c.r[v1].d[0] != 0;
        }
        if (effect) {
            bones_effect(c, kind_index(c), seg);
        } else {
            set32(c.r[v0], 0x00660000u);
            set32(c.r[v1], ld32(kAltPrograms));
            tick(c, 4);
            const bool alt = c.r[v1].d[0] != 0;
            const int kind = kind_index(c);
            bones_one_pass(c, kind, seg, alt ? kOnePassAlt : kOnePass, alt ? 6 : 4);
        }
    }

    // start the segment's program; the vertex packet's MSCNTs continue it
    set32(c.r[v1], vif::code(vif::MSCALF));
    set32(c.r[v0], static_cast<std::uint32_t>(c.r[s0].sw[0] >> 3) | vif::code(vif::MSCALF));
    st32(c.r[t3].w[0], c.r[v0].w[0]);
    advance(c, t3, 4);
    tick(c, 5);
    return true;
}

}

// fn_246cf0(object, node arg, model, pass, three_pass, effect_pass, passes): draws one fighter (see the top of
// this file). a1, a3 and t2 are not read.
PS2_DECOMP(00246CF0, DrawFighterInstance) {
    StackFrame f(c, 0x100);
    set32(c.r[v0], 0xFFFFFFFEu);
    f.sq(s1, 0xd0);
    f.sq(s6, 0x80);
    c.r[s1].d[0] = c.r[a0].d[0];  // the object
    f.sq(s0, 0xe0);
    c.r[s6].d[0] = c.r[a2].d[0];  // the model
    f.sq(s2, 0xc0);
    f.sq(s3, 0xb0);
    f.sq(s4, 0xa0);
    f.sq(s5, 0x90);
    f.sq(s7, 0x70);
    f.sd(ra, 0x50);
    st32(f.at(0xf0), c.f[20]);
    f.sq(gpr::fp, 0x60);
    const Model model{c.r[s6].w[0]};
    const FighterDrawArgs args{f.at(0)};
    set32(c.r[gpr::fp], static_cast<std::uint32_t>(static_cast<std::int32_t>(model.segment_count)));
    args.tag = -2;
    args.effect_pass = c.r[t1].w[0];
    c.r[v0].d[0] = c.r[t1].d[0];
    args.three_pass = c.r[t0].w[0];
    tick(c, 22);

    const auto finish = [&] {
        f.lq(s0, 0xe0);
        f.lq(s1, 0xd0);
        f.lq(s2, 0xc0);
        f.lq(s3, 0xb0);
        f.lq(s4, 0xa0);
        f.lq(s5, 0x90);
        f.lq(s6, 0x80);
        f.lq(s7, 0x70);
        f.lq(gpr::fp, 0x60);
        f.ld(ra, 0x50);
        c.f[20] = ld32(f.at(0xf0));
        f.pop();
        tick(c, 14);
    };

    // pose the skeleton and test it against the frustum: 0 culled, 1 inside, 2 per segment (Segment::clip)
    if (c.r[v0].d[0]) {
        // effect pass: scale its strength by how far the fighter's effect_now is below effect_end
        const FighterObject fighter{c.r[s1].w[0]};
        const psf one(1.0f);
        set32(c.r[at], one.bits);
        set_fpr(c, 20, one);
        tick(c, 4);
        if (!call(c, 0x00326140u, Ra{0x00246D58u})) return;  // f0 = effect_end
        set_fpr(c, 0, fpr(c, 0) - one);
        set_fpr(c, 1, psf::from_bits(fighter.effect_now));
        fpu_compare(c, fpr(c, 1) < fpr(c, 0));
        tick(c, 6);
        if (c.fcr31 & kFpuCondition) {
            c.r[a0].d[0] = c.r[s1].d[0];
            set32(c.r[s0], 0x00660000u);
            tick(c, 4);
            if (!call(c, 0x00326140u, Ra{0x00246D80u})) return;
            const psf hundred(100.0f);
            set_fpr(c, 2, psf::from_bits(fighter.effect_now));
            set32(c.r[at], hundred.bits);
            set_fpr(c, 3, hundred);
            set_fpr(c, 0, fpr(c, 0) - fpr(c, 2));
            set_fpr(c, 1, psf::from_bits(ld32(kEffectScale)));
            set_fpr(c, 0, div(c, fpr(c, 0), hundred) + one);
            set_fpr(c, 1, div(c, fpr(c, 1), fpr(c, 0)));
            st32(kEffectScale, c.f[1]);
            tick(c, 11);
        } else {
            const psf fifth = psf::from_bits(0x3E4CCCCDu);  // 0.2
            set32(c.r[at], fifth.bits);
            set_fpr(c, 0, fifth);
            set32(c.r[v0], 0x00660000u);
            st32(kEffectScale, fifth.bits);
            tick(c, 5);
        }
        c.r[a0].d[0] = c.r[s1].d[0];
        c.r[a1].d[0] = c.r[s6].d[0];
        c.r[a2].d[0] = 0;
        c.r[a3].d[0] = 0;
        tick(c, 6);
        if (!call(c, 0x00245D48u, Ra{0x00246DD8u})) return;
        tick(c, 2);
    } else {
        c.r[a0].d[0] = c.r[s1].d[0];
        c.r[a1].d[0] = c.r[s6].d[0];
        c.r[a2].d[0] = 0;
        c.r[a3].d[0] = 0;
        tick(c, 6);
        if (!call(c, 0x002459F8u, Ra{0x00246DF8u})) return;
    }
    args.visibility = c.r[v0].w[0];
    set32(c.r[v1], args.visibility);
    tick(c, 4);
    if (!c.r[v1].d[0]) return finish();

    if (!open_flush_tag(c, FlushTagRegs{v0, v1, a0, 0, 0x00246E20u, 0x00246EC0u})) return;

    // the model's texture set, unless the effect pass draws with its own program family
    set32(c.r[v0], args.effect_pass);
    tick(c, 3);
    bool upload_textures = true;
    if (c.r[v0].d[0]) {
        set32(c.r[v0], 0x004F0000u);
        set32(c.r[v1], ld32(kEffectPrograms));
        tick(c, 4);
        upload_textures = c.r[v1].d[0] == 0;
    }
    if (upload_textures) {
        c.r[a0].d[0] = c.r[s6].d[0];
        tick(c, 3);
        if (!call(c, 0x00246120u, Ra{0x00246F04u})) return;
    }

    // the three-pass draw of a texture-sorted model: list its segments and sort them by texture (fn_24cff8)
    set32(c.r[v1], static_cast<std::uint32_t>(static_cast<std::int32_t>(model.sort_by_texture)));
    set32(c.r[v0], 2);
    tick(c, 4);
    bool sort = false;
    if (c.r[v1].d[0] == c.r[v0].d[0]) {
        set32(c.r[v1], args.three_pass);
        tick(c, 3);
        sort = c.r[v1].d[0] != 0;
    }
    if (sort) {
        set32(c.r[t5], model.segments);
        c.r[a1].d[0] = 0;
        tick(c, 4);
        if (c.r[gpr::fp].sw[0] > 0) {
            set32(c.r[a2], 0x00660000u);
            tick(c, 2);
            for (;;) {
                set32(c.r[v0], ld32(kSortList));
                set32(c.r[v1], (c.r[a1].w[0] << 2) + c.r[v0].w[0]);
                advance(c, a1, 1);
                c.r[a0].d[0] = c.r[a1].sd[0] < c.r[gpr::fp].sd[0];
                st32(c.r[v1].w[0], c.r[t5].w[0]);
                advance(c, t5, Segment::kSize);
                tick(c, 9);
                if (!c.r[a0].d[0]) break;
                if (poll(c, 0x00246F38u)) return;
            }
        }
        set32(c.r[a0], 0x00660000u);
        set32(c.r[a1], ld32(kSortList));
        c.r[a0].d[0] = c.r[gpr::fp].d[0];
        tick(c, 5);
        if (!call(c, 0x0024CFF8u, Ra{0x00246F70u})) return;
    }

    // the character constants for this model (fn_244368: BASE/OFFSET, UNPACK to VU 0x2d)
    set32(c.r[v0], model.segments);
    set32(c.r[a2], kConstantsMode);
    set32(c.r[a3], args.three_pass);
    c.r[a0].d[0] = c.r[s6].d[0];
    set32(c.r[t0], args.effect_pass);
    args.segments = c.r[v0].w[0];
    c.r[a1].d[0] = c.r[v0].d[0];
    tick(c, 10);
    if (!call(c, 0x00244368u, Ra{0x00246F98u})) return;

    // one draw per segment; the write pointer lives in t3 until the end
    set32(c.r[v1], 0x00660000u);
    c.r[a0].d[0] = 0;
    set32(c.r[t3], ld32(Chain::kPtr));
    tick(c, 5);
    if (c.r[gpr::fp].sw[0] > 0) {
        set32(c.r[s7], 2);
        set32(c.r[s1], kMatrixUnpack);
        set32(c.r[t9], 3);
        set32(c.r[t7], 4);
        set32(c.r[s4], kImageB);
        set32(c.r[v0], 0x004A0000u);
        set32(c.r[s3], kBoneVuAddr[0]);
        set32(c.r[s2], 0x00660000u);
        set32(c.r[s5], kBoneVuAddr[1]);
        set32(c.r[t6], kBoneVuAddr[2]);
        tick(c, 11);
        for (;;) {
            if (!draw_segment(c, args)) return;
            set32(c.r[a0], args.next);
            c.r[v0].d[0] = c.r[a0].sd[0] < c.r[gpr::fp].sd[0];
            tick(c, 4);
            if (!c.r[v0].d[0]) break;
            if (poll(c, 0x00246FD8u)) return;
        }
    }
    set32(c.r[v0], 0x00660000u);
    st32(Chain::kPtr, c.r[t3].w[0]);
    tick(c, 2);
    finish();
}
