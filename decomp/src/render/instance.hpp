#pragma once

// The per-instance draw's inputs (Ps2/Renderer/Character/ps2render.cpp): the render-list node, the game object, the
// model with its bones and segments, its lights, and the render-wide settings block. decomp/notes/instance-draw.md
// describes what each function does with them; this header is the struct model the native renderer reads.
//
// Views of guest memory as in texture/texture_manager.hpp: a view holds a guest address, each member is a Field
// whose reads are loads and whose assignments are stores through the recompiled code's access paths. Names marked
// "(inferred)" come from how the code uses the field, not from a symbol or string.
#include "../texture/texture_manager.hpp"

#include <cstdint>

namespace decomp::render {

using texture::Field;

// ---- render lists (fn_2367b8 enqueues, fn_23ff60 walks; notes/native-renderer.md §1.2) ----

// One render-list node: 0x668720 + object.instance_index * 0x18. The draws get (object, node.arg, model).
struct RenderNode {
    static constexpr std::uint32_t kTable = 0x00668720u, kSize = 0x18;

    std::uint32_t addr;
    Field<std::uint32_t> next{addr + 0x00};
    Field<std::uint32_t> arg{addr + 0x04};     // passed through as a1; neither instance draw reads it
    Field<std::uint32_t> model{addr + 0x08};   // Model
    Field<std::uint32_t> object{addr + 0x0c};  // GameObject
    Field<std::uint32_t> list{addr + 0x10};    // list type t (0-8): 1 world, 2 one-pass fighters, 3 three-pass fighters
};

// ---- the game object (only what the draw path reads) ----

struct GameObject {
    std::uint32_t addr;
    // index of this object's render node; 0 marks the object that owns the scene (the stage: its draw takes the
    // static-list path and sets up the frame's lights) (inferred)
    Field<std::uint32_t> instance_index{addr + 0x68};
    Field<std::int8_t> hidden{addr + 0x70};  // nonzero: not enqueued, not drawn
};

// ---- the model ----

// A bone or node of a model's hierarchy (0x1c0 bytes, Model::bones). The world matrix is a 3x4 (rows 0x50-0x7c,
// translation 0x90); fn_249060 turns it into the skin matrix at 0x170 that VU1 gets.
struct Bone {
    static constexpr std::uint32_t kSize = 0x1c0;

    std::uint32_t addr;
    std::uint32_t rotation() const { return addr + 0x50; }  // 3 rows of 4 floats (w unused)
    std::uint32_t pivot() const { return addr + 0x80; }     // added after the inverse translation (inferred: the
                                                            // bind-pose offset)
    std::uint32_t position() const { return addr + 0x90; }  // world translation
    std::uint32_t sphere() const { return addr + 0xa0; }    // bounding sphere centre (qword) for the frustum test
    std::uint32_t skin_matrix() const { return addr + 0x170; }  // 4 rows: rotation rows, pivot - position * R
};

// One drawable segment of a model (0x1d0 bytes, Model::segments): a mesh piece bound to up to three bones with
// its own VIF packet. fn_242ff8 DMAs the whole record to the scratchpad and hands it to the packer fn_23a280.
struct Segment {
    static constexpr std::uint32_t kSize = 0x1d0;

    std::uint32_t addr;
    Field<std::uint32_t> bone{addr + 0x00};   // index into Model::bones (its sphere is the frustum test's centre)
    Field<std::uint32_t> bone1{addr + 0x04};  // second and third bone for 2- and 3-bone skinning (fn_246cf0)
    Field<std::uint32_t> bone2{addr + 0x08};
    Field<std::uint32_t> kind{addr + 0x10};   // fn_246cf0: 2 rigid, 3 two-bone, 4 three-bone; else not drawn
    Field<std::uint32_t> layers{addr + 0x14};  // bit mask tested against Model::layer_mask; 0 = never drawn
    // per-segment frustum result (fn_22c838: 0 outside, 1 inside, 2 crossing): 1 when the test put the segment in
    // the draw list, 0 when it did not; 2 for every segment when RenderSettings::cull_mode != 1 (not tested)
    Field<std::uint32_t> clip{addr + 0x18};
    Field<std::uint32_t> texture{addr + 0x1c};  // TextureManager slot; the draw list is sorted by its link A
    Field<std::uint32_t> clip_drawn{addr + 0x20};  // fn_242ad0 copies clip here (inferred)
    Field<std::uint32_t> radius{addr + 0x78};      // bounding radius (float bits) for the frustum test
    Field<std::uint32_t> depth{addr + 0x128};      // view depth (float bits): the static-list sort, far to near
    Field<std::uint32_t> packet{addr + 0x13c};     // the segment's prebuilt VIF packet, DMA `call`ed per draw
};

// One light of a model's light rig (0x30 bytes, LightRig::lights, three of them).
struct Light {
    static constexpr std::uint32_t kSize = 0x30;

    std::uint32_t addr;
    std::uint32_t position() const { return addr + 0x00; }  // world position (qword)
    std::uint32_t color() const { return addr + 0x10; }     // rgb, w unused
    Field<std::uint32_t> near{addr + 0x20};                 // full intensity up to this distance (float bits)
    Field<std::uint32_t> far{addr + 0x24};                  // zero from this distance on; linear in between
};

// The lights of a model (Model::light_rig).
struct LightRig {
    std::uint32_t addr;
    Field<std::uint32_t> anchor{addr + 0x20};  // Bone whose sphere centre is the lit point and whose rotation is
                                               // removed from the light directions
    Field<std::uint32_t> lights{addr + 0x3c};  // 3 Lights followed by the ambient colour at +0x90; 0 = unlit
    static constexpr std::uint32_t kAmbient = 0x90;  // offset from `lights`
};

struct Model {
    std::uint32_t addr;
    Field<std::uint32_t> bones{addr + 0x18};          // Bone array
    Field<std::uint32_t> segments{addr + 0x20};       // Segment array
    Field<std::uint32_t> light_rig{addr + 0x2c};      // LightRig
    Field<std::int32_t> bone_count{addr + 0x30};
    Field<std::int32_t> segment_count{addr + 0x38};
    Field<std::uint32_t> visibility{addr + 0x4c};      // FrustumTest of the whole model (bones[0] sphere): 0-2
    Field<std::uint32_t> always_crossing{addr + 0xdc8};  // 1: skip the whole-model test, test every segment
    Field<std::uint32_t> layer_mask{addr + 0xe18};       // Segment::layers & this != 0: the segment may be drawn
    Field<std::uint32_t> radius{addr + 0xf68};           // whole-model bounding radius (float bits)
    Field<std::uint32_t> textures{addr + 0x1008};        // texture set data for fn_26bcf8 (fn_246120)
    Field<std::uint32_t> texture_set{addr + 0x100c};     // id; the set is uploaded when it changes (0x6618ec)
    Field<std::int32_t> sort_by_texture{addr + 0x1018};  // 2: sort the draw list by texture (fn_24cff8)
    Field<std::uint32_t> has_textures{addr + 0x101c};

    Bone bone(std::uint32_t i) const { return {bones + i * Bone::kSize}; }
    Segment segment(std::uint32_t i) const { return {segments + i * Segment::kSize}; }
};

// ---- render-wide state ----

// The renderer's settings block (0x4f4b40, ps2render.cpp). Fields the instance draws read.
struct RenderSettings {
    static constexpr std::uint32_t kAddr = 0x004F4B40u;

    std::uint32_t addr = kAddr;
    Field<std::uint32_t> per_area_lists{addr + 0x14};     // 1: the stage draws the current area's list, else the
                                                          // global list (index 32 of frame::kStaticLists)
    Field<std::uint32_t> skinning{addr + 0x18};           // nonzero: fn_2457d0 and the bones' skin matrices
    Field<std::uint32_t> no_pass1_segments{addr + 0x44};  // nonzero: pass-1 draws stop before fn_242ff8
    Field<std::uint32_t> area_mask_off{addr + 0x48};      // 0: the draw's area mask is 1 << [0x65e394]
    Field<std::uint32_t> cull_mode{addr + 0xa0};          // 1: frustum-test models and segments; 2 becomes 3 after
                                                          // a pass-1 draw (inferred: a one-shot request)
    Field<std::uint32_t> segments_drawn{addr + 0xbc};     // stage segments drawn this frame (fn_23ff60 clears it)
    Field<std::uint32_t> cull{addr + 0xc4};               // 0: no culling, every segment is drawn
    Field<std::uint32_t> glow_scale{addr + 0xd8};         // float: light 0's colour w when [0x4f6e44] is set
    Field<std::uint32_t> specular_scale{addr + 0xdc};     // float: length of the specular half vector
    Field<std::uint32_t> anchor_free_lights{addr + 0x108};  // nonzero: light directions stay in world space
};

// ---- the per-frame light state the instance draw builds (globals in ps2render.cpp) ----

namespace frame {
inline constexpr std::uint32_t kLightDirs = 0x00661920u;     // 4 rows: -dir0, -dir1, -dir2, specular half vector
inline constexpr std::uint32_t kHalfVector = 0x00661950u;    // row 3 of kLightDirs
inline constexpr std::uint32_t kLocalLights = 0x00661960u;   // kLightDirs in the anchor's frame, transposed
inline constexpr std::uint32_t kLightColors = 0x006619a0u;   // sceVu0LightColorMatrix(colors 0-2, ambient)
inline constexpr std::uint32_t kLocalLights2 = 0x006619e0u;  // copy of kLocalLights (fn_246918 uploads it)
inline constexpr std::uint32_t kHalfVectorInit = 0x00661a20u;
inline constexpr std::uint32_t kDrawList = 0x0065e460u;      // Segment pointers to draw this instance
inline constexpr std::uint32_t kStaticLists = 0x006662a8u;   // per camera: {list, list, count, count}
inline constexpr std::uint32_t kExtraSegments = 0x00663648u; // appended after the pass-1 stage list
}

// ---- fighter instance draw (fn_246cf0) ----

// The fighter fields fn_246cf0's effect pass reads (floats). The effect strength [kEffectScale] is divided by
// (effect_end - effect_now) / 100 + 1 while effect_now < effect_end - 1, else reset to 0.2 (inferred names).
struct FighterObject {
    std::uint32_t addr;
    Field<std::uint32_t> effect_now{addr + 0x84};
    Field<std::uint32_t> effect_end{addr + 0xf4};  // read through the getter fn_326140
};

// The argument block fn_246cf0 keeps at sp+0 and passes to fn_239c48 (a2 = sp).
struct FighterDrawArgs {
    std::uint32_t addr;
    Field<std::int32_t> tag{addr + 0x00};          // always -2
    Field<std::uint32_t> three_pass{addr + 0x04};  // t0: image A (fn_23ff60, fn_24cbf8) instead of image B
    Field<std::uint32_t> effect_pass{addr + 0x08}; // t1: the pass fn_23fa00 draws after fn_241da0 / fn_242230
    Field<std::uint32_t> visibility{addr + 0x0c};  // pose/cull result: 0 culled, 1 inside, 2 test Segment::clip
    Field<std::uint32_t> segments{addr + 0x10};    // Model::segments
    Field<std::uint32_t> next{addr + 0x14};        // index of the next segment
};

namespace fighter {
inline constexpr std::uint32_t kEffectScale = 0x0066608Cu;    // float; set by fn_241da0/fn_242230, read by fn_2478f0
inline constexpr std::uint32_t kBonePalette = 0x006660A4u;    // -> bone matrices, 64 bytes each (built by fn_245168)
inline constexpr std::uint32_t kSortList = 0x006660ACu;       // -> Segment pointers sorted by texture (fn_24cff8)
inline constexpr std::uint32_t kAltPrograms = 0x006660C0u;    // nonzero: image B's second family (no writer found)
inline constexpr std::uint32_t kEffectPrograms = 0x004F4B2Cu; // nonzero (1 in the ELF): effect pass has its own
                                                              // family and keeps the current textures
inline constexpr std::uint32_t kMatrixUnpack = 0x004F4D90u;   // qword: NOP, NOP, STCYCL 4,4, UNPACK V4-32 x4 @0
inline constexpr std::uint32_t kConstantsMode = 0x00010402u;  // a2 of fn_244368 (meaning unknown)

// VU1 microcode images (notes/native-renderer.md §1.5) and the programs a segment starts with, by Segment::kind
// 2 (rigid), 3 (two bones), 4 (three bones)
inline constexpr std::uint32_t kImageA = 0x0049E430u, kImageB = 0x0049F900u;
struct Programs {
    std::uint32_t label[3];  // absolute ELF addresses; MSCALF takes (label - image) / 8
};
inline constexpr Programs kThreePass{{kImageA + 0x000, kImageA + 0x6F0, kImageA + 0xE50}};
inline constexpr Programs kOnePass{{kImageB + 0x000, kImageB + 0x360, kImageB + 0x800}};
inline constexpr Programs kOnePassAlt{{kImageB + 0xD20, kImageB + 0x1030, kImageB + 0x1550}};
inline constexpr Programs kEffect{{kImageB + 0x1B20, kImageB + 0x1DB0, kImageB + 0x21E0}};
inline constexpr std::uint32_t kBoneVuAddr[3] = {12, 16, 20};  // VU1 qword address of each bone matrix
}

}
