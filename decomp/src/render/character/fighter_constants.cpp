// Ps2/Renderer/Character/ps2render.cpp
#include "../instance.hpp"
#include "../vif.hpp"
#include "../../texture/texture_manager.hpp"

#include "ps2/decomp.hpp"
#include "ps2/decomp_vu0.hpp"

namespace {

using namespace ps2;
using namespace ps2::gpr;
using namespace ps2::vu0;
using namespace decomp::render;
using decomp::texture::TextureManager;

constexpr std::uint32_t kFastMemcpy = 0x0020fde0u;
constexpr std::uint32_t kMatrixMultiply = 0x00213ce8u;  // fn_213ce8(dst, a, b)
constexpr std::uint32_t kTransposeMatrix = 0x00213e88u; // sceVu0TransposeMatrix
constexpr std::uint32_t kInverseRigid = 0x00214058u;    // MatrixInverseRigid
constexpr std::uint32_t kExtraLightDir = 0x0023cae8u;   // fn_23cae8: a direction (v0, a quadword) for the 4th row
constexpr std::uint32_t kPackLights = 0x0023db48u;      // fn_23db48(inst, position, origin)
constexpr std::uint32_t kPackFlatBones = 0x002478f0u;   // fn_2478f0(ptr, inst) -> ptr: the flat mode's bone UNPACKs
constexpr std::uint32_t kPackBones = 0x00247bd8u;       // fn_247bd8(inst): bone matrices
constexpr std::uint32_t kPackPass1 = 0x00248058u;       // fn_248058(inst, tex0): pass-1 A+D and constants
constexpr std::uint32_t kPackPasses23 = 0x00248900u;    // fn_248900(inst): passes 2 and 3
constexpr std::uint32_t kGetTex0 = 0x0026d2e8u;         // TextureManager::GetTex0(tm, slot)
constexpr std::uint32_t kLightColorMatrix = 0x00385850u;  // sceVu0LightColorMatrix(m, c0, c1, c2, ambient)

constexpr std::uint32_t kProjection = 0x00660f20u;      // P: world -> screen, VU1 mem[0..3]
constexpr std::uint32_t kFlatProjection = 0x00660f60u;  // what the flat mode sends as mem[0..3] instead
constexpr std::uint32_t kShadeProjector = 0x006634a0u;  // world position -> pass-3 UV, mem[24..27]
constexpr std::uint32_t kLightOrigin = 0x00629aa0u;     // +0x24/+0x2c/+0x34: an integer position
constexpr std::uint32_t kFlatAllowed = 0x004f4b2cu;
constexpr std::uint32_t kLightAlphaMode = 0x004f6e44u;       // 0: every light colour gets .w = 25.0
constexpr std::uint32_t kAntiAliasMode = 0x004f6e94u;        // 1: always, 0/2: depending on the owner's flags
constexpr std::uint32_t kScreenFlags = 0x0067b724u;          // bit 1: the fighters' PRIM goes into the GS block
constexpr std::uint64_t kNoAntiAliasFlags = 0x61000ce000000000ull;  // owner flags (+0x130) that rule out AA1

// PRIM values
constexpr std::uint32_t kPrimFlat = gs::kTriStrip | gs::kIip | gs::kAbe;  // untextured
constexpr std::uint32_t kPrimTextured = kPrimFlat | gs::kTme;
constexpr std::uint32_t kPrimFog = kPrimTextured | gs::kFge;
constexpr std::uint32_t kPrimAntiAlias = gs::kAa1;
static_assert(kPrimFlat == 0x4c && kPrimTextured == 0x5c && kPrimFog == 0x7c && kPrimAntiAlias == 0x80);

// the DIRECT block's GS state: TEX1_1 bilinear, CLAMP_1 clamp/clamp
constexpr std::uint64_t kTex1Bilinear = gs::Tex1{.mmag = gs::Tex1::kLinear, .mmin = gs::Tex1::kLinear}.bits();
constexpr std::uint64_t kClampBoth = gs::Clamp(gs::CLAMP, gs::CLAMP);
static_assert(kTex1Bilinear == 0x60 && kClampBoth == 5);

// TEX0 bits of pass 1: TFX = MODULATE, TCC = RGB
constexpr std::uint64_t kTex0KeepTcc = ~(1ull << 34);
constexpr std::uint64_t kTex0KeepTfx = ~(3ull << 35);

// VU1 double buffers: input at 0x2e and 0x1e9
constexpr std::uint32_t kVuBase = 0x2e, kVuOffset = 0x1e9;

// the original's frame
constexpr std::uint32_t kColours = 0x00;      // 3 x 16: the light colours, for sceVu0LightColorMatrix
constexpr std::uint32_t kDirs = 0x30;         // 3 x 16: the light directions
constexpr std::uint32_t kBoneMatrix = 0x70;   // 64 bytes: the bone's rotation (+ the colour temp at first)
constexpr std::uint32_t kArgOwner = 0xc0, kArgFlags = 0xc4, kArgPasses = 0xc8, kArgFlat = 0xcc;
constexpr std::uint32_t kSavedPtr = 0xd0;

// vD = normalize(vS.xyz), vD.w = vS.w, as the original's VMUL/VADDy/VADDz/VRSQRT/VMULw/VMULq; vf5 and Q keep the
// sum of squares and 1/|v|
void normalize(Cpu &c, Vf d, Vf s) {
    vmul(c, XYZ, vf5, s, s);
    vaddbc(c, X, vf5, vf5, vf5, Lane::y);
    vaddbc(c, X, vf5, vf5, vf5, Lane::z);
    vrsqrt(c, vf0, Lane::w, vf5, Lane::x);
    vmulbc(c, W, d, vf0, s, Lane::w);
    vmulq(c, XYZ, d, s);
}

// vD = vS * f20 (-1.0), through t0 and vf5 as the original's MFC1/QMTC2/VMULx
void scale_by_fpr(Cpu &c, Vf d, Vf s, unsigned fpr) {
    set32(c.r[t0], c.f[fpr]);
    qmtc2(c, t0, vf5);
    vmulbc(c, XYZW, d, s, vf5, Lane::x);
}

// the chain pointer rounded up to a qword: v1 = ptr, v0 = -16 then ptr + 16 - ..., a1 = the target, a0 = a1 < ptr,
// v1 = ptr < target; the caller pads when v1 is set
void qword_target(Cpu &c) {
    set32(c.r[v1], Chain{}.ptr);
    set32(c.r[v0], 0xfffffff0u);
    set32(c.r[a2], Chain::kAddr);
    c.r[a1].d[0] = c.r[v1].d[0] & c.r[v0].d[0];
    c.r[a0].d[0] = c.r[a1].d[0] < c.r[v1].d[0] ? 1 : 0;
    set32(c.r[v0], c.r[a1].w[0] + 16);
    if (c.r[a0].d[0] != 0) c.r[a1].d[0] = c.r[v0].d[0];
    c.r[v1].d[0] = c.r[v1].d[0] < c.r[a1].d[0] ? 1 : 0;
}

// The three lights of the light rig, lit from its anchor bone's position: colour_i = rig colour * attenuation (1 inside
// `near`, 0 beyond `far`, linear between), w = 25.0 unless the alpha mode is on (then light 0's w comes from
// [0x4f4c18], the others 0); direction_i = normalize(bone - light). Into the frame at kColours and kDirs.
bool light_rig(Cpu &c, const StackFrame &f, std::uint32_t rig) {
    set32(c.r[v0], 0x00660000u);
    set32(c.r[a0], 0x00660000u);
    set32(c.r[v0], frame::kHalfVectorInit);
    set32(c.r[v1], 0x004f0000u);
    ld128(frame::kHalfVectorInit, c.r[a1]);
    set32(c.r[a0], frame::kLightDirs + 0x30);
    set32(c.r[t2], ld32(kLightAlphaMode));
    c.r[a3].d[0] = 0;
    st128(frame::kLightDirs + 0x30, c.r[a1]);
    set32(c.r[a1], 0x004f0000u);
    set32(c.r[t3], 0x41c80000u);  // 25.0
    set32(c.r[t4], RenderSettings::kAddr);
    set32(c.r[a0], f.at(kDirs));
    c.r[a1].d[0] = 0;
    tick(c, 15);

    const std::uint32_t bone = c.r[s6].w[0];
    for (;;) {  // i in a3, the direction slot in a0, the light's offset in a1
        set32(c.r[v0], LightRig{rig}.lights);
        lqc2(c, vf2, Bone{bone}.position());
        set32(c.r[v0], c.r[a1].w[0] + c.r[v0].w[0]);
        const std::uint32_t light = c.r[v0].w[0];
        lqc2(c, vf1, light);
        vsub(c, XYZW, vf2, vf2, vf1);
        vmul(c, XYZ, vf5, vf2, vf2);
        vaddbc(c, X, vf5, vf5, vf5, Lane::y);
        vaddbc(c, X, vf5, vf5, vf5, Lane::z);
        vsqrt(c, vf5, Lane::x);
        vaddq(c, XYZ, vf5, vf0);
        qmfc2(c, t0, vf5);
        c.f[2] = c.r[t0].w[0];  // distance
        c.f[0] = ld32(light + 36);  // far
        fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
        tick(c, 18);
        if (c.fcr31 & kFpuCondition) {
            c.f[4] = 0;
            tick(c, 3);
        } else {
            c.f[1] = ld32(light + 32);  // near
            fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
            tick(c, 5);
            if (c.fcr31 & kFpuCondition) {
                set32(c.r[at], 0x3f800000u);
                c.f[4] = c.r[at].w[0];
                tick(c, 4);
            } else {
                c.f[1] = fp::sub(c.f[0], c.f[1]);
                c.f[0] = fp::sub(c.f[0], c.f[2]);
                fpu_div(c, 4, c.f[0], c.f[1]);
                tick(c, 3);
            }
        }
        set32(c.r[v1], c.r[a1].w[0] + LightRig{rig}.lights);
        ld128((c.r[v1].w[0] + 16) & ~15u, c.r[v0]);
        st128(f.at(kBoneMatrix) & ~15u, c.r[v0]);  // the rig colour
        tick(c, 6);
        const std::uint32_t colour = f.at(kBoneMatrix);
        if (c.r[t2].d[0] != 0) {
            tick(c, 2);
            if (c.r[a3].d[0] == 0) {
                c.f[0] = RenderSettings{}.glow_scale;  // through t4 = RenderSettings::kAddr
                st32(colour + 12, c.f[0]);
                tick(c, 4);
            } else {
                st32(colour + 12, 0);
                tick(c, 1);
            }
            c.f[3] = fp::mul(ld32(colour), c.f[4]);
            c.f[1] = fp::mul(ld32(colour + 4), c.f[4]);
            c.f[2] = ld32(colour + 12);
            c.f[0] = fp::mul(ld32(colour + 8), c.f[4]);
            set32(c.r[t5], c.f[3]);
            set32(c.r[t6], c.f[1]);
            set32(c.r[v0], c.f[0]);
            set32(c.r[v1], c.f[2]);
            gather4(c, t5, t6, v0, v1);
            tick(c, 17);
        } else {
            c.f[2] = fp::mul(ld32(colour), c.f[4]);
            c.f[1] = fp::mul(ld32(colour + 4), c.f[4]);
            c.f[0] = fp::mul(ld32(colour + 8), c.f[4]);
            set32(c.r[t5], c.f[2]);
            set32(c.r[t6], c.f[1]);
            set32(c.r[v0], c.f[0]);
            gather4(c, t5, t6, v0, t3);
            tick(c, 13);
        }
        qmtc2(c, t0, vf1);
        sqc2(c, vf1, c.r[a0].w[0] - 48);
        normalize(c, vf1, vf2);
        sqc2(c, vf1, c.r[a0].w[0]);
        set32(c.r[a3], c.r[a3].w[0] + 1);
        set32(c.r[a0], c.r[a0].w[0] + 16);
        set32(c.r[a1], c.r[a1].w[0] + 48);
        c.r[v0].d[0] = c.r[a3].sd[0] < 3 ? 1 : 0;
        tick(c, 15);
        if (c.r[v0].d[0] == 0) return true;
        if (poll(c, 0x00244560u)) return false;
    }
}

// mem[4..7] and mem[8..11]: the light colour matrix (sceVu0LightColorMatrix of the three colours and the rig's
// ambient, ambient .w = 0) and the light directions: rows -d0, -d1, -d2, and a 4th row from d2 and fn_23cae8's
// direction (normalized, negated, scaled by [0x4f4c1c], w = 1), turned into the bone's space (times the inverse of
// the bone's rotation, unless [0x4f4c48]) and transposed.
bool light_matrices(Cpu &c, const StackFrame &f, std::uint32_t rig) {
    set32(c.r[t0], LightRig{rig}.lights + 0x90);
    set32(c.r[v1], 0x00660000u);
    set32(c.r[s1], frame::kLightColors);
    c.r[a1].d[0] = c.r[sp].d[0];
    c.r[a0].d[0] = c.r[s1].d[0];
    set32(c.r[a2], f.at(kColours + 16));
    set32(c.r[a3], f.at(kColours + 32));
    tick(c, 10);
    if (!call(c, kLightColorMatrix, Ra{0x002446f4u})) return false;

    set32(c.r[at], 0xbf800000u);  // -1.0
    c.f[20] = c.r[at].w[0];
    lqc2(c, vf3, f.at(kDirs + 32));
    set32(c.r[s0], 0x00660000u);
    lqc2(c, vf2, f.at(kDirs));
    set32(c.r[s0], frame::kLightDirs);
    lqc2(c, vf1, f.at(kDirs + 16));
    scale_by_fpr(c, vf4, vf3, 20);
    scale_by_fpr(c, vf2, vf2, 20);
    scale_by_fpr(c, vf1, vf1, 20);
    sqc2(c, vf2, frame::kLightDirs);
    set32(c.r[s2], frame::kLightDirs + 0x20);
    sqc2(c, vf1, frame::kLightDirs + 0x10);
    set32(c.r[s3], frame::kLightDirs + 0x30);
    sqc2(c, vf4, frame::kLightDirs + 0x20);
    st32(frame::kLightColors + 0x3c, 0);  // ambient .w
    sqc2(c, vf3, frame::kLightDirs + 0x30);
    normalize(c, vf3, vf3);
    sqc2(c, vf3, frame::kLightDirs + 0x30);
    tick(c, 33);
    if (!call(c, kExtraLightDir, Ra{0x00244778u})) return false;

    lqc2(c, vf1, frame::kLightDirs + 0x30);
    qmtc2(c, v0, vf2);
    vadd(c, XYZW, vf1, vf1, vf2);
    sqc2(c, vf1, frame::kLightDirs + 0x30);
    normalize(c, vf1, vf1);
    sqc2(c, vf1, frame::kLightDirs + 0x30);
    set32(c.r[v1], 0x004f0000u);
    set32(c.r[s1], RenderSettings::kAddr);
    scale_by_fpr(c, vf2, vf1, 20);
    set32(c.r[v0], 0x00660000u);
    c.r[a1].d[0] = c.r[s0].d[0];
    c.f[0] = RenderSettings{}.specular_scale;
    set32(c.r[s7], frame::kLocalLights);
    scale_by_fpr(c, vf1, vf2, 0);
    c.r[a0].d[0] = c.r[s7].d[0];
    sqc2(c, vf1, frame::kLightDirs + 0x30);
    set32(c.r[a2], 16);
    vmulbc(c, W, vf1, vf0, vf0, Lane::w);
    sqc2(c, vf1, frame::kLightDirs + 0x30);
    tick(c, 31);
    if (!call(c, kFastMemcpy, Ra{0x002447f4u})) return false;
    set32(c.r[a1], frame::kLightDirs + 0x10);
    set32(c.r[a0], frame::kLocalLights + 0x10);
    set32(c.r[a2], 16);
    tick(c, 6);
    if (!call(c, kFastMemcpy, Ra{0x0024480cu})) return false;
    c.r[a1].d[0] = c.r[s2].d[0];
    set32(c.r[a0], frame::kLocalLights + 0x20);
    set32(c.r[a2], 16);
    tick(c, 5);
    if (!call(c, kFastMemcpy, Ra{0x00244820u})) return false;
    c.r[a1].d[0] = c.r[s3].d[0];
    set32(c.r[a0], frame::kLocalLights + 0x30);
    set32(c.r[a2], 16);
    tick(c, 5);
    if (!call(c, kFastMemcpy, Ra{0x00244834u})) return false;

    set32(c.r[v1], RenderSettings{}.image_b);
    tick(c, 3);
    if (c.r[v1].d[0] == 0) {
        // the bone's rotation (rows +0x50..+0x70) with its translation (+0x80) zeroed but w kept, as the original
        // loads it word by word through f0-f7 and the GPRs
        const std::uint32_t bone = c.r[s6].w[0];
        const auto word = [&](std::uint32_t off) { return ld32(bone + off); };
        const auto row = [&](Vf v, std::uint32_t off) {
            for (unsigned i = 0; i < 4; ++i) c.vu0.vf[v].w[i] = word(off + 4 * i);
        };
        row(vf4, 0x80);
        row(vf3, 0x50);
        row(vf2, 0x60);
        row(vf1, 0x70);
        const std::uint32_t m = f.at(kBoneMatrix);
        sqc2(c, vf4, m + 0x30);
        sqc2(c, vf3, m);
        sqc2(c, vf2, m + 0x10);
        sqc2(c, vf1, m + 0x20);
        st32(m + 0x30, 0);
        st32(m + 0x34, 0);
        st32(m + 0x38, 0);
        static constexpr struct { unsigned fpr; std::uint32_t off; } kFprs[] = {
            {0, 0x78}, {1, 0x74}, {2, 0x64}, {3, 0x70}, {4, 0x60}, {5, 0x5c}, {6, 0x6c}, {7, 0x7c}};
        for (const auto &r : kFprs) c.f[r.fpr] = word(r.off);
        static constexpr struct { unsigned reg; std::uint32_t off; } kGprs[] = {
            {v0, 0x74}, {v1, 0x78}, {a2, 0x7c}, {t2, 0x64}, {t3, 0x68}, {t5, 0x6c}, {t6, 0x70}};
        for (const auto &r : kGprs) set32(c.r[r.reg], word(r.off));
        set32(c.r[a3], bone + 0x70);
        set32(c.r[a0], m);
        c.r[a1].d[0] = c.r[a0].d[0];
        gather4(c, t6, v0, v1, a2);
        tick(c, 63);
        if (!call(c, kInverseRigid, Ra{0x0024493cu})) return false;
        c.r[a0].d[0] = c.r[s7].d[0];
        set32(c.r[a1], m);
        c.r[a2].d[0] = c.r[s7].d[0];
        tick(c, 5);
        if (!call(c, kMatrixMultiply, Ra{0x00244950u})) return false;
    }
    c.r[a0].d[0] = c.r[s7].d[0];
    c.r[a1].d[0] = c.r[a0].d[0];
    tick(c, 4);
    return call(c, kTransposeMatrix, Ra{0x00244960u});
}

// The GS PRIM the fighter strips are drawn with, or none (false) when [0x67b724] bit 1 is clear. Leaves a1 = the
// value and the original's scratch registers.
bool fighter_prim(Cpu &c, const StackFrame &f) {
    set32(c.r[v1], 0x00680000u);
    set32(c.r[v0], static_cast<std::uint32_t>(static_cast<std::int32_t>(ld32(kScreenFlags)) >> 1));
    c.r[v0].d[0] &= 1;
    tick(c, 6);
    if (c.r[v0].d[0] == 0) return false;

    // textured, with fog when the fog mode says so
    set32(c.r[v0], 0x004f0000u);
    set32(c.r[a1], kPrimTextured);
    set32(c.r[v1], RenderSettings{}.fog_mode);
    tick(c, 5);
    if (c.r[v1].d[0] != 0) {
        set32(c.r[v0], 2);
        tick(c, 3);
        if (c.r[v1].d[0] == c.r[v0].d[0]) {
            set32(c.r[a1], kPrimFog);
            tick(c, 3);
        } else {
            set32(c.r[t3], ld32(f.at(kArgFlags)));
            set32(c.r[v0], kPrimFog);
            c.r[v1].d[0] = c.r[t3].d[0] & 0x80;
            if (c.r[v1].d[0] != 0) c.r[a1].d[0] = c.r[v0].d[0];
            tick(c, 4);
        }
    }

    // antialiasing: always in mode 1; in modes 0 and 2 only for owners without the excluding flags, and not with
    // flags & 0x100 (mode 0 also needs owner flags +0x138 bit 1)
    set32(c.r[v0], 0x004f0000u);
    set32(c.r[v1], 1);
    set32(c.r[a0], ld32(kAntiAliasMode));
    tick(c, 5);
    bool antialias = false;
    const auto owner_allows = [&](unsigned owner_reg, unsigned mask_reg, unsigned flags_reg) {
        set32(c.r[owner_reg], ld32(f.at(kArgOwner)));
        c.r[v0].d[0] = ld64(c.r[owner_reg].w[0] + 0x130);
        c.r[mask_reg].d[0] = kNoAntiAliasFlags;
        c.r[v0].d[0] &= c.r[mask_reg].d[0];
        tick(c, 9);
        if (c.r[v0].d[0] != 0) return false;
        set32(c.r[flags_reg], ld32(f.at(kArgFlags)));
        c.r[v0].d[0] = c.r[flags_reg].d[0] & 0x100;
        tick(c, 4);
        return c.r[v0].d[0] == 0;
    };
    if (c.r[a0].d[0] == c.r[v1].d[0]) {
        antialias = true;
    } else {
        c.r[v0].d[0] = c.r[a0].sd[0] < 2 ? 1 : 0;
        tick(c, 3);
        if (c.r[v0].d[0] != 0) {
            tick(c, 2);
            if (c.r[a0].d[0] == 0) {
                if (owner_allows(t5, v1, t6)) {
                    c.r[v0].d[0] = ld64(c.r[t5].w[0] + 0x138) & 2;
                    tick(c, 4);
                    if (c.r[v0].d[0] != 0) {
                        antialias = true;
                        tick(c, 2);
                    }
                }
            } else {
                tick(c, 2);
            }
        } else {
            set32(c.r[v0], 2);
            tick(c, 3);
            if (c.r[a0].d[0] == c.r[v0].d[0]) antialias = owner_allows(v1, v1, a0);
            else tick(c, 2);
        }
    }
    if (antialias) {
        set32(c.r[v0], kPrimAntiAlias);
        c.r[a1].d[0] |= c.r[v0].d[0];
        tick(c, 2);
    }
    return true;
}

}

// fn_244368(Model *model, owner, flags, three_passes, flat): the per-mesh VU1 constants and GS state of a
// 3-pass fighter (fn_246cf0, list t=3, VU1 image A), appended to the frame chain in a new DMA CNT:
//   - P (mem[0..3]), the light colours (mem[8..11]) and directions (mem[4..7]) from the model's light rig; the flat
//     mode sends another matrix as P, identity light directions, and the bones through fn_2478f0 instead of fn_247bd8;
//   - with three passes: the lights again through fn_23db48, the pass-2 projector (mem[28..31], from the instance),
//     the skin TEX0 (MODULATE, RGB) to fn_248058, the pass-3 projector (mem[24..27]) and fn_248900; with one, an A+D
//     qword FBA_1 = 1 at mem[0x2d];
//   - a DIRECT block: FBA_1, TEX1_1 bilinear, CLAMP_1 clamp/clamp, FBA_1 = 1 again for one pass, and PRIM (flat:
//     untextured; else textured with fog and antialiasing by the render settings);
//   - BASE 0x2e / OFFSET 0x1e9 for the VU1 double buffer and a FLUSH.
PS2_DECOMP(00244368, PackFighterConstants) {
    const Chain ch;
    StackFrame f(c, 0x190);
    set32(c.r[v0], 0x00660000u);
    f.sq(gpr::fp, 0xf0);
    set32(c.r[t2], Chain::kAddr);
    set32(c.r[t1], ch.ptr);
    c.r[gpr::fp].d[0] = c.r[v0].d[0];
    f.sq(s4, 0x130);
    f.sq(s0, 0x170);
    c.r[s4].d[0] = c.r[a0].d[0];
    const Model model{c.r[s4].w[0]};
    f.sq(s1, 0x160);
    f.sq(s2, 0x150);
    f.sq(s3, 0x140);
    f.sq(s5, 0x120);
    f.sq(s6, 0x110);
    f.sq(s7, 0x100);
    f.sd(ra, 0xe0);
    st32(f.at(0x180), c.f[20]);
    f.sw(a1, kArgOwner);
    f.sw(a2, kArgFlags);
    f.sw(a3, kArgPasses);
    f.sw(t0, kArgFlat);
    c.r[v0].d[0] = c.r[t1].d[0] & 12;
    tick(c, 24);
    if (c.r[v0].d[0] != 0 && !pad_register_to_qword(c, 0x002443c8u, t1)) return;

    // close the open DMA CNT tag (QWC = the qwords after it), open a new one here, FLUSH
    set32(c.r[a0], ch.tag);
    tick(c, 3);
    if (c.r[a0].d[0] != 0) {
        const std::uint32_t open = c.r[a0].w[0];
        set32(c.r[v0], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[t1].w[0] - open) >> 4) - 1);
        set32(c.r[v1], ld32(open) + c.r[v0].w[0]);
        st32(open, c.r[v1].w[0]);
        tick(c, 6);
    }
    const std::uint32_t tag = c.r[t1].w[0];
    ch.tag = tag;
    st32(tag, dma::TagWord(dma::CNT));
    st32(tag + 4, 0);
    ch.code = 0;
    st32(tag + 8, vif::Flush());
    ch.ptr = tag + 8;  // the pointer stays in s5/t4 until the first UNPACKs are written
    set32(c.r[v0], vif::Flush());
    set32(c.r[v1], 0xfffffff0u);
    set32(c.r[a0], tag + 8);
    set32(c.r[t4], tag + 12);
    c.r[s5].d[0] = c.r[t4].d[0];
    c.r[a1].d[0] = c.r[s5].d[0] & c.r[v1].d[0];
    c.r[a0].d[0] = c.r[a1].d[0] < c.r[s5].d[0] ? 1 : 0;
    set32(c.r[v0], c.r[a1].w[0] + 16);
    if (c.r[a0].d[0] != 0) c.r[a1].d[0] = c.r[v0].d[0];
    c.r[v1].d[0] = c.r[s5].d[0] < c.r[a1].d[0] ? 1 : 0;
    tick(c, 23);
    if (c.r[v1].d[0] != 0) {
        for (;;) {  // NOPs to the next qword
            st32(c.r[s5].w[0], vif::Nop());
            set32(c.r[s5], c.r[s5].w[0] + 4);
            c.r[v0].d[0] = c.r[s5].d[0] < c.r[a1].d[0] ? 1 : 0;
            tick(c, 6);
            if (c.r[v0].d[0] == 0) break;
            if (poll(c, 0x00244460u)) return;
        }
    }

    // mem[0..3] goes first, at s5 (written once the lights are done); the light UNPACKs follow at t4
    set32(c.r[v0], ld32(f.at(kArgFlat)));
    c.r[t4].d[0] = c.r[s5].d[0];
    tick(c, 4);
    const std::uint32_t first = c.r[s5].w[0];
    if (c.r[v0].d[0] != 0) {
        // flat: identity light directions, the flat projection as P
        set32(c.r[v1], 0x00660000u);
        set32(c.r[v0], frame::kLocalLights);
        vsub(c, XYZW, vf4, vf0, vf0);
        vadd(c, W, vf4, vf4, vf0);
        vmr32(c, XYZW, vf5, vf4);
        vmr32(c, XYZW, vf6, vf5);
        vmr32(c, XYZW, vf7, vf6);
        sqc2(c, vf4, frame::kLocalLights + 0x30);
        sqc2(c, vf5, frame::kLocalLights + 0x20);
        sqc2(c, vf6, frame::kLocalLights + 0x10);
        sqc2(c, vf7, frame::kLocalLights);
        set32(c.r[v1], 0x00660000u);
        set32(c.r[a0], 0x004f0000u);
        c.r[t2].d[0] = 0;
        set32(c.r[v1], kFlatProjection);
        set32(c.r[v0], kMatrixUnpack);
        unpack_matrix(c, first, kFlatProjection, 0);
        set32(c.r[t4], first + 80);
        tick(c, 32);
    } else {
        const std::uint32_t rig = model.light_rig;
        set32(c.r[a2], rig);
        set32(c.r[t4], first + 80);
        st32(f.at(kSavedPtr), first + 80);
        set32(c.r[v0], LightRig{rig}.lights);
        set32(c.r[s6], LightRig{rig}.anchor);
        tick(c, 7);
        if (c.r[v0].d[0] != 0) {
            if (!light_rig(c, f, rig)) return;
            if (!light_matrices(c, f, rig)) return;
        }
        set32(c.r[a3], 0x00660000u);
        set32(c.r[t3], 0x004f0000u);
        set32(c.r[t2], kProjection);
        c.r[v1].d[0] = 0;
        set32(c.r[v0], kMatrixUnpack);
        unpack_matrix(c, first, kProjection, 0);
        set32(c.r[t4], ld32(f.at(kSavedPtr)));
        tick(c, 19);
    }

    // mem[8..11] light colours, mem[4..7] light directions
    const std::uint32_t lights = c.r[t4].w[0];
    set32(c.r[t5], 0x00660000u);
    set32(c.r[t6], 0x004f0000u);
    set32(c.r[v1], frame::kLightColors);
    set32(c.r[t3], kMatrixUnpack);
    unpack_matrix(c, lights, frame::kLightColors, 8);
    set32(c.r[t2], frame::kLocalLights);
    set32(c.r[v0], 4);
    unpack_matrix(c, lights + 80, frame::kLocalLights, 4);
    set32(c.r[v1], ld32(f.at(kArgFlat)));
    set32(c.r[t4], lights + 160);
    tick(c, 39);

    // the bones
    if (c.r[v1].d[0] != 0) {
        c.r[a0].d[0] = c.r[t4].d[0];
        c.r[a1].d[0] = c.r[s4].d[0];
        tick(c, 4);
        if (!call(c, kPackFlatBones, Ra{0x00244a58u})) return;
        ch.ptr = c.r[v0].w[0];
        tick(c, 3);
    } else {
        ch.ptr = c.r[t4].w[0];
        c.r[a0].d[0] = c.r[s4].d[0];
        tick(c, 4);
        if (!call(c, kPackBones, Ra{0x00244a74u})) return;
    }

    // flat only when the render settings allow it
    set32(c.r[v0], 0x004f0000u);
    set32(c.r[a0], ld32(f.at(kArgFlat)));
    set32(c.r[v1], ld32(kFlatAllowed));
    set32(c.r[a1], ld32(f.at(kArgPasses)));
    if (c.r[v1].d[0] == 0) c.r[a0].d[0] = 0;
    st32(f.at(kArgFlat), c.r[a0].w[0]);
    tick(c, 8);

    if (c.r[a1].d[0] != 0) {
        // three passes: lights, the pass-2 projector, pass 1's texture, the pass-3 projector
        c.f[3] = 0;
        c.f[2] = fp::cvt_s_w(ld32(kLightOrigin + 0x34));
        c.r[a0].d[0] = c.r[s4].d[0];
        c.f[1] = fp::cvt_s_w(ld32(kLightOrigin + 0x24));
        set32(c.r[a1], model.bone(0).position());
        c.f[0] = fp::cvt_s_w(ld32(kLightOrigin + 0x2c));
        set32(c.r[v0], kLightOrigin);
        set32(c.r[t3], c.f[3]);
        set32(c.r[a2], c.f[1]);
        set32(c.r[a3], c.f[0]);
        set32(c.r[t2], c.f[2]);
        gather4(c, a2, a3, t2, t3);
        qmtc2(c, t0, vf1);
        c.r[a2] = c.vu0.vf[1];
        tick(c, 23);
        if (!call(c, kPackLights, Ra{0x00244af0u})) return;

        set32(c.r[t3], model.addr + Model::kHighlightProjector);
        qword_target(c);
        tick(c, 11);
        if (c.r[v1].d[0] != 0) {
            tick(c, 1);
            if (!pad_through_pointer(c, 0x00244b20u, a1)) return;
        }
        set32(c.r[t5], 0x004f0000u);
        set32(c.r[t2], 28);
        const std::uint32_t p = ch.ptr;
        set32(c.r[v1], kMatrixUnpack);
        unpack_matrix(c, p, model.addr + Model::kHighlightProjector, 28);
        set32(c.r[v0], p + 80);
        set32(c.r[a0], 2);
        ch.ptr = p + 80;
        set32(c.r[v1], model.texture_mode);
        tick(c, 23);
        if (c.r[v1].d[0] == c.r[a0].d[0]) {
            set32(c.r[a1], model.skin_texture);
            tick(c, 3);
        } else {
            set32(c.r[v0], 0x004f0000u);
            set32(c.r[a0], model.skin_texture);
            set32(c.r[v1], RenderSettings{}.char_textures);
            set32(c.r[a1], c.r[a0].w[0] - c.r[v1].w[0]);
            tick(c, 4);
        }
        set32(c.r[v0], 0x004f0000u);
        set32(c.r[a0], ld32(TextureManager::kInstance));
        tick(c, 4);
        if (!call(c, kGetTex0, Ra{0x00244bc4u})) return;
        c.r[v1].d[0] = kTex0KeepTfx;
        c.r[a1].d[0] = kTex0KeepTcc;
        c.r[v0].d[0] &= c.r[v1].d[0];
        c.r[a0].d[0] = c.r[s4].d[0];
        c.r[a1].d[0] &= c.r[v0].d[0];
        tick(c, 13);
        if (!call(c, kPackPass1, Ra{0x00244bf8u})) return;

        qword_target(c);
        tick(c, 10);
        if (c.r[v1].d[0] != 0 && !pad_through_pointer(c, 0x00244c20u, a1)) return;
        set32(c.r[t6], 0x004f0000u);
        set32(c.r[v1], kShadeProjector);
        set32(c.r[t3], kMatrixUnpack);
        set32(c.r[t2], 24);
        const std::uint32_t q = ch.ptr;
        unpack_matrix(c, q, kShadeProjector, 24);
        set32(c.r[v0], q + 80);
        c.r[a0].d[0] = c.r[s4].d[0];
        ch.ptr = q + 80;
        tick(c, 24);
        if (!call(c, kPackPasses23, Ra{0x00244c9cu})) return;
        tick(c, 2);
    } else {
        // one pass: STCYCL 4/4, UNPACK V4-32 to mem[0x2d] { A+D FBA_1 = 1 }, its NUM from the unpack unit
        const std::uint32_t p = ch.ptr;
        st32(p, vif::Stcycl(4, 4));
        const std::uint32_t code = p + 4;
        ch.code = code;
        st32(code, vif::Unpack(vif::V4_32, 0x2d));
        ch.code_unit = vif::unpack_unit(vif::V4_32);
        st64(code + 4, 1);
        st64(code + 12, gs::FBA_1);
        ch.ptr = code + 20;
        set32(c.r[a3], Chain::kAddr);
        set32(c.r[t0], code + 4);
        c.r[t1].sd[0] = static_cast<std::int32_t>(0xffff0000u);
        set32(c.r[a2], ch.code);
        set32(c.r[a1], ch.code_unit);
        set32(c.r[a0], static_cast<std::uint32_t>(static_cast<std::int32_t>(code + 16 - c.r[a2].w[0]) >> 2) << 5);
        c.r[v1].d[0] = c.r[a1].d[0] & 0xffff;
        c.r[a1].d[0] &= c.r[t1].d[0];
        mmi::divu(c, 0, c.r[a0].w[0], c.r[v1].w[0]);  // elements
        tick(c, 36);
        c.r[a0].d[0] = c.lo.d[0];
        mmi::mult(c, 0, c.r[a1].w[0], c.r[a0].w[0]);  // NUM << 16
        c.r[a1].d[0] = c.lo.d[0];
        set32(c.r[v0], ld32(c.r[a2].w[0]) + c.r[a1].w[0]);
        st32(c.r[a2].w[0], c.r[v0].w[0]);
        ch.code = 0;
        tick(c, 6);
    }

    // DIRECT: NOPs until the code sits in a qword's last word, then { GIF tag A+D, the GS state }
    set32(c.r[a0], ch.ptr);
    set32(c.r[v1], kCharAdGifTag);
    c.r[v0].d[0] = c.r[a0].d[0] & 0xfffffffffffffff0ull;
    c.r[a2].d[0] = ld64(kCharAdGifTag + 8);
    set32(c.r[a3], c.r[v0].w[0] + 12);
    c.r[a1].d[0] = ld64(kCharAdGifTag);
    c.r[v1].d[0] = c.r[a3].d[0] < c.r[a0].d[0] ? 1 : 0;
    set32(c.r[v0], c.r[v0].w[0] + 28);
    if (c.r[v1].d[0] != 0) c.r[a3].d[0] = c.r[v0].d[0];
    f.sd(a2, 8);
    f.sd(a1, 0);
    c.r[a0].d[0] = c.r[a0].d[0] < c.r[a3].d[0] ? 1 : 0;
    set32(c.r[a2], Chain::kAddr);
    tick(c, 17);
    if (c.r[a0].d[0] != 0 && !pad_through_pointer(c, 0x00244d90u, a3)) return;

    const std::uint32_t code = ch.ptr;
    ch.code = code;
    st32(code, vif::Direct(0));
    const std::uint32_t gif = code + 4;
    ch.gif_tag = gif;
    f.lq(v0, 0);
    st128(gif & ~15u, c.r[v0]);
    set32(c.r[v1], gif);
    set32(c.r[a0], gif);
    set32(c.r[a1], gif + 16);
    set32(c.r[a2], ld32(f.at(kArgFlat)));
    tick(c, 17);
    std::uint32_t p = gif + 16;
    const auto ad = [&](std::uint64_t value, gs::Reg reg) {
        st64(p, value);
        st64(p + 8, reg);
        p += 16;
        ch.ptr = p;
    };
    if (c.r[a2].d[0] != 0) {
        ad(1, gs::FBA_1);
        set32(c.r[v0], 1);
        set32(c.r[v1], gs::FBA_1);
        set32(c.r[a0], p);
        tick(c, 10);
    } else {
        ad(0, gs::FBA_1);
        set32(c.r[v0], gs::FBA_1);
        set32(c.r[v1], p);
        tick(c, 7);
    }
    set32(c.r[a1], p);
    ad(kTex1Bilinear, gs::TEX1_1);
    ad(kClampBoth, gs::CLAMP_1);
    set32(c.r[v0], p - 16);
    set32(c.r[v1], gs::CLAMP_1);
    set32(c.r[a0], static_cast<std::uint32_t>(kClampBoth));
    set32(c.r[a2], p);
    set32(c.r[a3], ld32(f.at(kArgPasses)));
    tick(c, 20);
    if (c.r[a3].d[0] == 0) {
        ad(1, gs::FBA_1);
        set32(c.r[v0], 1);
        set32(c.r[v1], gs::FBA_1);
        set32(c.r[a0], p);
        tick(c, 8);
    }
    set32(c.r[t2], ld32(f.at(kArgFlat)));
    tick(c, 3);
    if (c.r[t2].d[0] != 0) {
        set32(c.r[v0], p);
        set32(c.r[v1], kPrimFlat);
        ad(kPrimFlat, gs::PRIM);
        set32(c.r[a0], p);
        tick(c, 10);
    } else if (fighter_prim(c, f)) {
        set32(c.r[v1], p);
        c.r[a0].d[0] = static_cast<std::uint64_t>(c.r[a1].sd[0] >> 32);
        c.r[v0].sd[0] = static_cast<std::int32_t>(c.r[a1].w[0]);
        st32(p, c.r[v0].w[0]);
        st32(p + 4, c.r[a0].w[0]);
        st64(p + 8, 0);  // PRIM
        p += 16;
        ch.ptr = p;
        set32(c.r[a1], p);
        tick(c, 10);
    }

    // close the GIF tag and the DIRECT code (padded to a qword)
    set32(c.r[t1], Chain::kAddr);
    set32(c.r[t0], ch.gif_tag);
    set32(c.r[a1], 2);  // FLG IMAGE, for the close
    const std::int32_t close = close_gif_tag_regs(c, ch.gif_tag, ch.ptr, a3, a2);
    tick(c, 15 + close);
    ch.gif_tag = 0;
    set32(c.r[v1], ch.ptr);
    c.r[v0].d[0] = c.r[v1].d[0] & 12;
    tick(c, 9);
    if (c.r[v0].d[0] != 0 && !pad_register_to_qword(c, 0x002450a8u, v1)) return;
    ch.ptr = c.r[v1].w[0];
    const std::uint32_t qwc = direct_size(c.r[v1].w[0], code);
    set32(c.r[a3], Chain::kAddr);
    set32(c.r[a1], vif::Base(kVuBase));
    set32(c.r[a2], vif::Offset(kVuOffset));
    set32(c.r[t0], vif::Flush());
    set32(c.r[a0], code);
    set32(c.r[v1], ld32(code) + qwc);
    st32(code, c.r[v1].w[0]);
    ch.code = 0;

    // the VU1 input double buffer, then wait for the previous draw
    const std::uint32_t end = ch.ptr;
    st32(end, vif::Base(kVuBase));
    st32(end + 4, vif::Offset(kVuOffset));
    st32(end + 8, vif::Flush());
    ch.ptr = end + 12;
    set32(c.r[v0], end + 4);
    set32(c.r[v1], end + 8);
    set32(c.r[a0], end + 12);

    f.lq(s0, 0x170);
    f.lq(s1, 0x160);
    f.lq(s2, 0x150);
    f.lq(s3, 0x140);
    f.lq(s4, 0x130);
    f.lq(s5, 0x120);
    f.lq(s6, 0x110);
    f.lq(s7, 0x100);
    f.lq(gpr::fp, 0xf0);
    f.ld(ra, 0xe0);
    c.f[20] = ld32(f.at(0x180));
    f.pop();
    tick(c, 41);
}
