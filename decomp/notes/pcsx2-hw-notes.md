# PCSX2 hardware GS renderer: design notes for an MK:SM WebGPU renderer

**Source and method:**
- PCSX2/pcsx2 master at commit 091ab687 (2026-10-16).
- Files read:
  - `pcsx2/GS/Renderers/HW/`: GSRendererHW.cpp/.h, GSTextureCache.cpp/.h, GSHwHack.cpp
  - `pcsx2/GS/Renderers/Common/`: GSDevice.cpp/.h
  - `Vulkan/GSDeviceVK.cpp` and `DX11/GSDevice11.cpp`
  - `bin/resources/shaders/vulkan/tfx.glsl`
- Line numbers refer to that commit.
- This is a summary in my own words. No code is copied (PCSX2 is GPL).

Abbreviations: TC = GSTextureCache.cpp, HW = GSRendererHW.cpp, VK = GSDeviceVK.cpp, SH = tfx.glsl. **[MK]** marks points that bear directly on MK:SM's hard cases.

**One fact frames everything else.** PCSX2's Vulkan, GL and Metal backends rely on one of two ways to read the render target while drawing to it:
- texture barriers or feedback-loop layouts;
- framebuffer fetch.

WebGPU has neither, so its closest model is PCSX2's **D3D11 path** (`GSDevice11::RenderHW` / `SendHWDraw` / `FeedbackCopyAndBind`, GSDevice11.cpp:3240-3420):
- the feature flag `multidraw_fb_copy` stands in for barriers: copy the RT region into a clone texture and bind the clone;
- "one barrier" = one copy of drawarea ∪ samplearea before the draw;
- "full barrier" = one copy per group of non-overlapping primitives (`config.drawlist`).

The same no-barrier copy path exists in VK when `texture_barrier` is off (VK:6332-6375). Design for that path.

---

## 1. Target cache: find, create, resize, invalidate, write back

**Data model** (GSTextureCache.h, class `Target`):
- Two MRU lists: `m_dst[RenderTarget]` and `m_dst[DepthStencil]`. An RT and a DS **can sit at the same base pointer at once**, kept in sync by GPU conversions.
- `m_TEX0`: base pointer, buffer width, PSM.
- `m_valid` (drawn or loaded rect) and `m_end_block`: `Target::UpdateValidity` (TC:8340), `ResizeValidity` (8326).
- Per-channel validity: `m_valid_rgb`, `m_valid_alpha_low`, `m_valid_alpha_high`.
- `m_dirty`: a list of rects where GS memory is newer. Each rect carries the writer's PSM, buffer width and RGBA channel mask.
- `m_drawn_since_read`: the region that would need readback.
- `m_alpha_min/max` and `m_alpha_range`: the tracked range of destination alpha, used heavily by blending and DATE.
- `m_rt_alpha_scale`: alpha stored doubled (see section 4).
- `m_was_dst_matched`, `m_age`, `m_last_draw`.

**Lookup order in a draw** (`GSRendererHW::Draw`, HW:2776):
1. Source texture first (~3581).
2. Then the DS (~3752/4397).
3. Then the RT (~4014).
4. Then any RT/DS whose dirty rects meet the draw rect is updated before drawing (~5148-5165).

**`TC:LookupDrawTarget` (2449)** makes two passes: the requested list, then the opposite list.
- **Exact base-pointer match** (2474-2560). Rules in the opposite-type pass:
  - the valid channels must intersect the new PSM's channel mask;
  - buffer width ≥ half the requested width;
  - same bpp, unless it is a shuffle.

  A buffer-width change throws the old target away when the new draw doesn't preserve its contents and it is old or mostly dirty.
- **Inside-target match** (2562-2744, gated by `UserHacks_TextureInsideRt`). The draw's base pointer lands inside another target at a page offset that is aligned horizontally. Width must also match, plus one of:
  - it is a shuffle;
  - it is an offset Z;
  - it is the second half of a double buffer;
  - it is the target the previous draw used.

  Rects are moved with `TranslateAlignedRectByPage` (260/493/652) under `CanTranslate` (227): same bpp → block-aligned translation is fine; different bpp → page-aligned only.
- **[MK] Z vs colour at the same address** (2747-2955). If the requested list has no hit but the opposite list has a recent target at the same base pointer with valid RGB:
  - Create a new target of the requested type.
  - Inherit the twin's valid rect, alpha flags and end block, and move its dirty list across.
  - Convert the pixels on the GPU with `StretchRectAuto` and a convert shader chosen by `GSDevice::GetConvertShader` (GSDevice.h:458): DEPTH32_TO_RGBA8 (32-bit), DEPTH32_TO_RGB8 (24-bit), or RGBA8_TO_DEPTH32/24/16 going the other way.
  - A twin that is only cleared passes on its clear value (`ConvertColorToDepth`/`ConvertDepthToColor`, TC:4373/4404).
  - A different bpp, or a fully overwritten twin, deletes the twin instead.
- **`TC:ProcessTargetAfterLookup` (2981):**
  - rescale if needed;
  - Z32 → Z24 conversion (3051);
  - 16↔32-bit reinterpretation, which only halves or doubles the valid height (3064-3165) — there is no real reswizzle;
  - refill RGB from the depth twin with an RGB-only write mask (`CopyRGBFromDepthToColor`, TC:4422), or the reverse (3169-3244);
  - drop the dirty list when the draw covers the whole valid rect and keeps nothing.

**Creation: `TC:CreateTarget` (3309) / `PreloadTarget` (3420).**
- **Preloading.** Normally there is no blind preload. It scans `m_draw_transfers`, the log of recent EE→GS uploads (up to 500 draws back), for writes that overlap the new target with compatible bits. It turns those into dirty rects in target coordinates; an upload recorded as a clear marks the target as cleared on the GPU. With `preload` set, the whole rect is marked dirty instead.
- **Reconciling older targets of the same PSM** (3572-3970):
  - fully covered ones are deleted;
  - partially covered ones are trimmed: base pointer moved forward, texture copied down;
  - an old target is split when the new one starts at its midpoint, the double-buffer case (3701-3755);
  - when the new target starts before an old one and engulfs it, the old contents are copied in with `CopyRect`/`StretchRectAutoMask` (3764-3846).
- **New DS over a colour target.** An overlapping colour target with the same width and shared bits is converted in (3856-3970).

**Growth.**
- `TC:ResizeTarget` (201) and `Target::ResizeTexture` (8357) copy the old texture into a larger one. The exposed strips become dirty rects, so they load from GS memory.
- `LookupSource` grows a target when a texture read goes past `m_valid` (1593-1640).

**Invalidation by GS uploads.** `GSRendererHW::InvalidateVideoMem` (HW:2274) calls `TC:InvalidateVideoMem` (4774).
- **Sources** (4790-4893): plain sources lose their per-page valid bits, and hash-cache ones are dropped. Sources made from a target are dropped when that target overlaps the write.
- **Targets** (4895-4977):
  - same base pointer, compatible bits and same width → `AddDirtyRectTarget(rect, psm, bw, channel mask)`;
  - otherwise, on overlap → `DirtyRectByPage` (657), which converts into target coordinates aligned to block, column or page as bpp allows;
  - if the dirty rect then covers the whole valid area (`FullRectDirty`, 115), the target is deleted.
- **`AddDirtyRectTarget` (143)** merges a new rect into an existing one when PSM, buffer width and channel mask match and the rects abut or contain each other.

**The "import" pass: `Target::Update` (8040).** It runs lazily: before a draw, on a source lookup that hits dirty rects (2272/1607/6191/6339), and before conversions.
1. Take the union of the dirty rects.
2. Deswizzle GS memory on the CPU (`ReadTexture`, CT32 even for CT24) into a temporary RGBA8 texture.
3. One `DrawMultiStretchRects` writes every dirty rect, each with its own channel write mask. For a DS the shader is RGBA8_TO_DEPTH*.

Uploads that touch only alpha or only RGB therefore keep the GPU's other channels. Your tile import should keep a per-channel mask per dirty region in the same way.

`HasValidBitsForFormat` (8270): when CT32 is read from a target with no valid alpha, the code quietly adds an alpha-only dirty rect, so alpha comes from GS memory.

**[MK] Invalidation by draws** (HW:5431-5452).
- After each draw, `InvalidateVideoMem(target=false)` drops sources overlapping the FRAME rect, and the Z rect when Z is written.
- `InvalidateVideoMemType` (TC:4714) kills the **opposite-type** target at the same address: a colour draw at FBP kills the DS there, and a Z write at ZBP kills the RT there.
- **Exception:** when only some channels were touched, the twin survives with fewer valid flags. A Z24 write keeps a CT32 RT's *alpha* valid and marks its RGB invalid. Those flags are repaired later with `CopyRGBFromDepthToColor` (the `m_was_dst_matched` path in LookupSource, ~1712-1739).

**Write-back to GS memory: `TC:Read(Target)` (7406).** It downloads through a convert shader, DEPTH32_TO_32_BITS or RTA_DECORRECTION.

Triggers:
- `InvalidateLocalMem` (TC:4982), for GS→EE downloads and local→local moves. CLUT loads are deliberately ignored ("FIXME", HW:2316).
- `ReadbackAll` (TC:69), on reset and savestate.
- PSMT4 (and 16-bit PSMT8H) textures sourced from an RT, because there is no shader for those (1751-1763).
- The software-primitive fallback (HW:9969).
- Draw-based memory copies (HW:10728).

Ageing out (`IncAge`, 6072) **never writes back**. Targets older than about 60 frames are deleted only when they are fully dirty or overlapped; otherwise their life is extended.

**[MK] The lesson** is that PCSX2 is lazy in both directions:
- GPU targets are authoritative;
- GS memory is updated only on demand;
- uploads become per-channel dirty rects that are pulled in on next use.

Your native-newer/VRAM-newer tile bitsets are the same idea at a finer grain. With no GS→EE downloads in MK:SM, you should almost never need write-back. Under PCSX2's rules, the only write-back triggers this game hits are:
- a texture reinterpretation your shaders can't do in place (for example T4 from an RT);
- savestates.

---

## 2. Texture from target

**`TC:LookupSource` (1324): search order.**
1. **Source map** (`FindSourceInMap`, 1060). The key is TBP/TBW/PSM/TW/TH, plus region and LOD. CPU-expanded paletted sources also need matching CLUT contents; 16/24-bit sources need the same TEXA.
2. **RT list, MRU order** (1412-2085). A target with valid alpha is treated as CT32, otherwise CT24.
   - *Exact base pointer:* accepted if the bits are compatible and `HasValidBitsForFormat` passes. If the needed area is outside `m_valid`, it uses a temporary source loaded from GS memory (1766-1790).
   - *Inside target* (1803-2083): allowed for ≥16bpp textures, or 8bpp over a ≥16bpp target. The offset comes from page math in `TranslateAlignedRectByPage`:
     - page index = (TBP − target TBP)/32;
     - x = (index mod TBW) × page width;
     - y = (index div TBW) × page height.

     When that fails, a block-accurate offset comes from `ComputeSurfaceOffset` (8538/8547/8585). There are special cases for a TBP behind the target plus a region-clamp offset (1999-2040). Plain 16↔32 bpp without a shuffle is rejected (1814).
3. **[MK] DS list** (2087-2160), searched for colour PSMs when no RT matched. If a recent, used, clean DS shares bits and contains the rect, the PSM is rewritten to the matching Z format (PSM | 0x30) and `LookupDepthSource` is called.

**`TC:LookupDepthSource` (1132).**
- Matches exactly or inside the DS list.
- If alpha is needed and an RT at the same base pointer and width has valid alpha, it uses that RT, after copying RGB from depth into it (1225-1254).
- It always builds a *shared* source over the DS texture: `m_target`, `m_target_direct`, `m_shared_texture`, and `m_from_target` = the DS.
- When the DS is the current FRAME or Z, the source is `m_temporary_source`: never cached, freed after the draw.

**`TC:CreateSource` with a target (6149).**
- **Offset / inside case** (6177-6316): always shares the target texture, plus a `SourceRegion` carrying the offset. There is no copy.
- **Base case** (6317-6610):
  - If the conversion is COPY (colour→colour), it shares the target texture directly, with a region when TW/TH is smaller than the target.
  - Otherwise it allocates a converted copy. **P8 from an RT** ("real 8-bit") uses `ConvertToIndexedTexture` with RGBA_TO_8I / RGB5A1_TO_8I to reswizzle the RT into an R8 index texture, unscaled by default (6505-6550).
  - P4 from an RT is not supported and goes to readback.

**Format reinterpretation** (`HW:EmulateTextureSampler`, 8079):
- **[MK] Depth sampled as colour:** `ps.depth_fmt` = 1 (32-bit) or 2 (16-bit). SH:`sample_depth` (1106) does a nearest texelFetch, multiplies float depth by 2^32 and splits it into bytes (or 5:5:5:1). Depth is never filtered bilinearly (there is a warning at HW:8188).
- **CT24/CT16 views of CT32:** handled by TEXA alpha expansion (`ps.aem_fmt`/`aem`, HW:8264-8276).
- **16-bit views of 32-bit data:** only through the texture-shuffle path (`ps.shuffle`). Real swizzle-level reinterpretation is not attempted.
- **Paletted from a target:** `ps.pal_fmt` = 1 (4HL), 2 (4HH) or 3 (8). The index is read from the texel's alpha and looked up in the palette with texelFetch (SH:889/993).

**Channel shuffle.** This is the PS2 trick of drawing 8-bit sprites over a 32-bit target to move one channel into another.
- **Detection:** `HW:IsPossibleChannelShuffle` (1630) looks for PSMT8 sprite draws that are single-page or page-aligned strips, with 8-wide or 2-high patterns, or a region clamp.
- **Channel choice:** `TestChannelShuffle`/`EmulateChannelShuffle` (6612/6622) pick it from CLAMP MINU/MAXU, the minimum UV and the FBMSK pattern.
- **Shader:** `PS_CHANNEL_FETCH` (SH:1407-1418) does a texelFetch at the fragment coordinate plus an offset. It skips the CLUT and moves the channel directly.
- **Texture shuffles** (16-bit draws over 32-bit data) go through `DetectTextureShuffle` (HW:770) / `ConvertSpriteTextureShuffle` (856). They rewrite the draw so that two 16-bit pixels are processed as one 32-bit pixel, with channel-pair write masks.

**Reading your own target: `HW:HandleTextureHazards` (8468), `CanUseTexIsFB` (8835).**
- **tex_is_fb (feedback read, no copy).** Allowed when all of these hold:
  - blend accuracy is not Minimum;
  - no texture offset, unless TBP == FBP;
  - the clamp can be emulated;
  - and **either** it is a channel or texture shuffle, **or** it is a sprite or non-overlapping draw that is **not bilinear**, where every vertex's |position − UV| < 1 texel.

  Triangles qualify only for the FBMSK=0x00FFFFFF "stencil via alpha" pattern (Jak, Ratchet, tri-Ace). The shader reads `sample_from_rt()`: a texelFetch at gl_FragCoord via the feedback-loop layout, or a `subpassLoad` input attachment (SH:670-693). It then needs one barrier, or a full barrier on overlap.
- **Sample area apart from draw area.** If the two don't intersect, the texture is the RT itself and is bound as is, with a hazard flag (HW:8550-8565). No copy is made.
- **Otherwise, copy** (HW:8696-8857). They make a texture sized min(TW/TH, target size) and copy **only the sampled coverage** (`tmm.coverage`, clipped to the target), with a 1-texel margin for bilinear. Full-target copies are kept for depth, channel shuffles and downscale.
- **DS as a texture:**
  - depth not written and `test_and_sample_depth` available (always on VK) → sample it directly while depth-testing;
  - otherwise a feedback loop, or else a full DS copy (HW:8492-8603).

**How the mechanism is chosen:**
- `DetermineBarriers` (HW:6370): framebuffer fetch → all barriers dropped; full barrier with no overlap, or a shuffle → downgraded to one barrier; a remaining full barrier → per-primitive-group drawlist.
- **Device side:**
  - VK reports `texture_barrier` from `OverrideTextureBarriers`, `framebuffer_fetch` via VK_EXT_rasterization_order_attachment_access, and feedback-loop layout via VK_EXT_attachment_feedback_loop_layout (VK:2794-2835).
  - With barriers, `SendHWDraw` (VK:6696) issues one `FeedbackBarrier`, or one per drawlist entry.
  - Without barriers (VK:6332-6375, D3D11:3315-3420), the RT is cloned, copying either the draw area plus the sample area as two separate copies or their union, whichever is fewer pixels.

**[MK] For your cases:**
- **The 6 post-FX passes.** A 1:1 nearest copy or tint of the frame (UV == XY) is tex_is_fb. In WebGPU that still needs a copy, because there is no feedback read. A bilinear or offset tap always copies the sampled rect plus a margin.

  You can do better than PCSX2 here: for a pure full-screen pass, ping-pong two textures instead of copying. Render pass N into B while sampling A, then swap which one is "the target at FBP". This is legitimate when the draw covers its whole sampled area and writes every pixel it reads. Check that against the vertex rect and texture coverage, as `CanUseTexIsFB` and the coverage code do.
- **The glow chain that aliases Z.** This becomes "DS list hit for a colour PSM" (LookupSource step 3): a shared depth source read with `depth_fmt`. Taps that read their own target follow the copy rule above.

  The Z→Z24-as-colour→CT32 chain matches the twin-target conversions in LookupDrawTarget and ProcessTargetAfterLookup. That means one GPU conversion per role switch, plus per-channel validity so that alpha survives a Z24 write.

  In your design a depth32float target can't be a colour attachment. So follow PCSX2: keep a colour twin and convert with a full-screen pass, using depth→RGBA8 bytes as in `sample_depth`, only when the role changes.

---

## 3. Plain textures

**Decode.**
- Non-target textures are always **deswizzled on the CPU** with GSLocalMemory's read-texture functions:
  - `rtx` gives RGBA8 with AEM/TEXA applied, CLUT expanded;
  - `rtxP` gives 8-bit indices.
- They are uploaded or mapped into RGBA8 or R8 textures (`TC:PreloadTexture` 9226, `Source::Flush` 7803).
- **Partial mode:** `Source::Update` (7655) keeps a per-page block-valid bitmap and uploads only the missing blocks inside the rect the draw needs, merging neighbouring blocks (7767). Uploads clear those bits per page (TC:4826-4864).

**Hash cache** (`TC:LookupHashCache` 7070, `HashCacheKey::Create` 9287, `HashTextureLevel` 9156).
- **Key:**
  - XXH3 over the texture's GS blocks (or over the expanded data for sub-block, partial-mask or region textures), plus all mip levels when LOD is used;
  - the CLUT hash, left out when palette textures are used;
  - TEX0 masked to PSM/TW/TH;
  - TEXA, for 16/24-bit non-palette formats only;
  - the region size.
- **Hits** share the texture with refcounting.
- **Ageing:** entries are aged in `AgeHashCache` (7236): 30 frames unreferenced, soft cap 800 entries. Sources expire after 3 frames (30 if preloaded).
- **Limits:** with Partial preloading, or above 1 GB of cache (HW:132-140), it falls back to per-use rehash (`Source::PreloadLevel` 7873), re-uploading only on a hash change.

**Palettes.**
- `paltex` (GPU palette conversion; TC:~6681). Used when `GPUPaletteConversion` is on and the format is paletted, or a GPU CLUT exists. It is an R8 index texture plus a shared palette texture: pal×1 RGBA8, `Palette::InitializeTexture` (8851).
- **Otherwise pre-expanded RGBA.** `FindSourceInMap` then requires the CLUT contents to match (1078-1085).
- **`PaletteMap`** (8897/8910): two maps (16 and 256 entries) keyed by the full palette contents (XXH3 plus memcmp), up to 4096 palettes. There is no CLUT "age": a new CLUT is just another palette object, attached on a source hit (2299-2302).
- **Shader:** `ps.pal_fmt`=3 (HW:8320). The CLUT is applied **before** filtering: 4 index taps, 4 palette fetches, then a manual bilinear blend (SH:`sample_color` 1257).
- **CLUT from a target in VRAM** can take a GPU CLUT path (`LookupPaletteSource` 7311, gated by `UserHacks_GPUTargetCLUTMode`).

**[MK] Palette choice for T8/T4 with a CT32 CLUT:**
- **Palette textures** cost 4 extra fetches per bilinear sample, but one index texture serves every CLUT.
- **Pre-expansion** costs one RGBA texture per (texture, CLUT) pair.

PCSX2 defaults to pre-expansion (in my recollection, GPU palette conversion is off by default), and uses palette textures when CLUTs churn. For a recompiled game with a fixed asset set, pre-expansion keyed by (data hash, CLUT hash) is the simplest correct start.

**Mipmaps.**
- `HW:Draw` (3376-3445) computes the LOD range from TEX1 K/L/LCM/MXL and the per-vertex LOD. The base level is TEX0 of the minimum LOD.
- With HW mipmapping, MIPTBP levels are uploaded per layer (`Source::UpdateLayer`, HW:4579-4610) or hashed together.
- The shader's `manual_lod` (SH:707) evaluates K − log2(|q|)·2^L, clamps it and calls textureLod.
- "Basic" mode uses automatic LOD with generated mips. Targets are never mipmapped.

**Region and clamp.**
- `SourceRegion::Create` (9084) turns REGION_CLAMP/REGION_REPEAT into a sub-rect, so the texture is only as large as the region.
- REPEAT and CLAMP use the hardware sampler.
- REGION_CLAMP (min/max) and REGION_REPEAT (`(uv & MINU) | MAXU`) are emulated in SH:`clamp_wrap_uv` (899). Both force shader-side bilinear (`ps.ltf`).
- Target regions use a clamped texelFetch (`ps.region_rect`).

---

## 4. Blending

**Where:** `GSRendererHW::EmulateBlending` (GSRendererHW.cpp:6889-7685), table `GSDevice::m_blendMap` (GSDevice.cpp:2084), flags `HWBlendFlags` / `HWBlendType` (GSDevice.h:581-665), shader `ps_blend` / `ps_color_clamp_wrap` / `ps_dither` / `ps_main` output (tfx.glsl:1461-1720, 1830-1960).

**Representation.** The GS equation ((A-B)*C>>7)+D, with A/B/D in {Cs, Cd, 0} and C in {As, Ad, FIX}, is indexed as ((A*3+B)*3+C)*3+D into an 81-entry table. Each entry gives a host blend op, src factor and dst factor, plus flags that say how far the host blender can be trusted:
- `BLEND_NO_REC`: Cd is not involved, so the whole equation runs in the shader and hardware blend is off. It costs nothing.
- `BLEND_CD`: the output is just Cd, so colour writes are turned off (`colormask.wrgba &= 8`).
- `BLEND_ACCU`: Cs*As+Cd, Cs*F+Cd, Cd-Cs*As, Cd-Cs*F. The shader computes trunc(Cs*alpha) and the blender does a ONE/ONE add or reverse-subtract. This is exact, because adding two unorm integers with saturation is the same as the GS with COLCLAMP=1.
- `BLEND_MIX1/2/3`: part hardware, part shader (see below).
- `BLEND_HW1..HW9`: special rewrites, several of them two-pass.
- `BLEND_A_MAX`: the factor can exceed 1 (for example Cs*(As+1) - Cd*As). It cannot be done on hardware.

**Rewrites before the lookup (cheap, and they remove most hard cases).** These happen in EmulateBlending, around lines 6930-7020:
- **PABE early-out.** Skip the blend if PABE is set and max alpha is below 128.
- **Cs → 0.** If the vertex colour is all zero and the texture only modulates, Cs is replaced by 0.
- **Ad → FIX when the target's alpha is constant.** The target cache tracks `rt->m_alpha_min/max` for every target in `CalculateAlphaRange` (5807). It updates them from the draw's alpha range, the write mask, FBA and full coverage. When min == max, Ad becomes the constant FIX.
- **Ad = 128 on 24-bit targets.**
- **As → FIX when the draw's alpha is constant.** The draw's alpha min and max come from the vertex trace and texture (`GetAlphaMinMax()`); when they are equal, As becomes FIX.
- **Algebraic folding.** A==B gives D. C==0 gives D. With COLCLAMP, a result that is always negative gives 0.

**The "0x80 = 1.0" problem.**
- The shader works in 0..255 float space. It sends the blend alpha to the second (dual-source) output as As/128 (`o_col1 = alpha_blend`). The SRC1_COLOR factor is therefore exactly As/128, but only up to 1.0, because unorm targets clamp blend factors to [0,1].
- DST_ALPHA reads the stored a/255, so 0x80 comes out as about 0.502 instead of 1.0.
- Ad is fixed in four ways, in order of preference:
  1. **RT alpha correction** (`Target::ScaleRTAlpha`/`UnscaleRTAlpha`, GSTextureCache.cpp:4239/4264, decided in `DetermineAlphaScaling`, GSRendererHW.cpp:5926). When the target's alpha is known to be ≤ 128, the target stores alpha doubled (128 → 255), so hardware DST_ALPHA equals Ad/128 exactly. The shader then writes `a/128` (`PS_RTA_CORRECTION`), and the DATE thresholds become 254.5/255. Any shuffle, partial alpha FBMSK or alpha above 128 undoes the scaling with a conversion pass. Feeding a scaled target to a texture sets `rta_source_correction`.
  2. **`BLEND_HW3`.** Multiply Cs by 255/128 in the shader. This is approximate once a channel is above 128.
  3. **`a_masked`.** If alpha writes are masked, the shader reads Ad from the RT and outputs it as the SRC1 factor (one barrier).
  4. **Full software blend.**
- **As > 1 ("blend mix", COLCLAMP=1 only).** The shader computes the Cs term with the alpha clamped to 1, and hardware does the Cd term.
  - `BMIX1_ALPHA_HIGH_ONE` rewrites Cs*As + Cd*(1-As) as Cs*As - Cd*(As-1), with SRC1 = As-1 and op SUBTRACT, so no factor goes negative.
  - `BMIX2_OVERFLOW` lowers the SRC1 alpha when Cs*(As+1) would overflow.
  - `BMIX1_SRC_HALF` is a deliberate cheat for Cd*(As+1) - Cs*As: it divides Cs by (1+alpha).
  - All blend-mix paths are approximations. EmulateBlending turns them off whenever software blend is already in use.
- **Blend multi-pass** (`m_conf.blend_multi_pass`, lines 7489-7640). This is used only when the device has no texture barrier and primitives do not overlap. Pass 1 computes half the result (alpha/2, or Cs = 0.5), and pass 2 blends DST_COLOR*ONE to double it. Examples are Cd*(1+As) and Cs*(1+Ad).

**When software blend is chosen.** See the `switch (GSConfig.AccurateBlendingUnit)` around line 7130, levels Minimum, Basic, Medium, High, Full and Maximum. I believe Basic is the default, but `Config.h` was not fetched, so that is not confirmed.
- **Basic** uses software blend only in these cases:
  - the blend is free (`NO_REC`, accumulation);
  - the blend is impossible (`A_MAX`);
  - a barrier is already being paid for: `prefer_sw_blend` is set for shuffles, for texture == RT with no overlap, and for one barrier with no overlap;
  - the factor exceeds 1, or Ad without RTA correction, when primitives do not overlap.
- **Medium** adds "sprites with fewer than 100 non-overlapping groups get software blend". The comment says this is aimed at post-processing.
- **Software blend** reads `sample_from_rt()` and computes trunc((A-B)*C+D) in 0..255.
- **The barrier mode follows overlap.** With no overlap (`m_prim_overlap == PRIM_OVERLAP_NO`) one barrier is enough. Otherwise a full barrier is needed, which splits the draw into non-overlapping groups (see section 7).
- **The cost ranking is stated in the code comment:** "Texture barriers > blend multi pass > texture copies".

**COLCLAMP=0 (wrap).**
- **`colclip_hw`.** Render into a temporary 16-bit-per-channel "ColorClip" texture that stores values /65535 and so holds values above 255. A `COLCLIP_RESOLVE` pass then wraps the result back into the RT. The ColorClip texture persists across consecutive wrap draws (`NextDrawColClip`).
- **Software colclip.** Use `& 0xFF` in the shader when software blend is already active.

**Rounding notes from the source.**
- The GS multiplies as (A*B)>>7 with truncation. Software paths use `trunc`, and read the RT back as `trunc(rt*255 + 0.1)` to defeat unorm round-trip error.
- Blend-mix adds or subtracts **124/256** before hardware blending, so that the GPU's rounding behaves like the GS floor. The comment cites PR #6809: 126/256 is ideal on Intel, 120/256 on AMD, and "Nvidia is a lost cause".
- Reverse-subtract sets `round_inv`, which inverts the dither sign and the 16-bit rounding.
- 16-bit targets mask to `& 0xF8`.
- The comment in `ps_color_clamp_wrap` notes that GPU blend at full precision gives 1.99 where the GS gives 1.

**How they keep blending fast:**
- most of the 81 keys collapse to plain hardware blend after the rewrites above;
- free cases never touch the RT;
- the per-target alpha range turns Ad into a constant;
- software blend is used only when a barrier is already being paid for;
- the draw is split per overlap group only when it must be;
- the second colour output is dropped when no dual-source factor is used (`no_color1`).

**Mapping to MK:SM.** Run your ~41 keys through the same index and flags once, offline. Any key whose flags are only `NO_REC`, `CD`, `ACCU` or 0 is exact in hardware. Keys with `MIX*`, `HW*` or `A_MAX`, combined with alpha above 0x80, are the ones that need a dst read.

For WebGPU, dual-source blending is an optional feature. This was not checked against wgpu-native's headers or docs in this pass, so check it before relying on it:
- the WebGPU feature is `dual-source-blending`, used through WGSL `@blend_src`;
- wgpu calls it `DUAL_SOURCE_BLENDING`.

Without it, the SRC1 tricks and the RGB_ONLY trick in section 5 fall back to dst reads.

## 5. DATE, FBMSK, alpha test, AFAIL

**DATE early-out.** `EmulateDATEEarlyFail` (6045) uses the tracked `rt->m_alpha_min/max`:
- if every pixel passes, DATE is turned off;
- if every pixel fails, the draw is dropped;
- "overlap that changes alpha" keeps DATE on.

**Method selection.** `EmulateDATESelectMethod` (6073) picks a `GSHWDrawConfig::DestinationAlphaMode`, and `EmulateDATEGetConfig` (6204) applies it. Wherever the modes below need a pre-pass, a copy or a barrier, they run once per draw.

- **Stencil.** `GSDeviceVK::SetupDATE` (GSDeviceVK.cpp:5999) ends the render pass and starts a pass with only depth-stencil bound, with stencil cleared to 0. It draws one quad over the draw's bbox that samples the RT, using the `DATM_0` or `DATM_1` convert shader. The shader discards pixels whose alpha bit 7 fails and writes stencil 1 elsewhere. The real draw then tests stencil == 1.
  - It needs a depth-stencil buffer. If the draw has none, a temporary one is created.
  - It is exact only if the draw's own alpha writes cannot flip bit 7 for a later overlapping primitive in the same draw.
- **StencilOne.** This applies when every alpha the draw writes would make DATE fail afterwards:
  - DATM=1 and source alpha max < 128;
  - DATM=0 and source alpha min ≥ 128;
  - FBA forces bit 7 on.

  The stencil op also resets the bit on pass (`depth.date_one`), so each pixel is written at most once. That is exact even with overlap. With barriers available, they instead run a one-barrier shader DATE plus the stencil.
- **PrimIDTracking.** `GSDeviceVK::SetupPrimitiveTrackingDATE` (6029):
  1. An R32 image is filled from the RT: -1 where the pixel already fails, INT_MAX elsewhere (`ps_primid_image_init_N`).
  2. A pre-pass draws all the geometry with MIN blending, outputting `gl_PrimitiveID` where the fragment would write a failing alpha (`PS_DATE 1/2`).
  3. The real draw discards any fragment whose primitive ID is above the stored minimum (`PS_DATE 3`).

  This is exact with overlap and needs no barriers. It costs one extra geometry pass and an R32 target. It conflicts with software blend, which has to split per primitive; there EmulateBlending switches it to barrier DATE (line ~7660).
- **Full (barrier / fbfetch).** The shader reads RT alpha (`PS_DATE 5/6`) and discards; the threshold is 127.5/255, or 254.5/255 when RT alpha is scaled. It is chosen when:
  - fbfetch exists;
  - the device has texture barriers and primitives do not overlap;
  - the draw is a texture shuffle;
  - the alpha test is complex;
  - a small sprite draw has fewer than 10 groups, or there are fewer than 30 indices (`tail < 30`);
  - a full barrier is already required.

  When alpha writes are masked, DATE is a pure read, so a single barrier is exact (line ~6179).

**FBMSK.** `EmulateTextureShuffleAndFbmask` (6438; the non-shuffle part is 6555-6608) works per byte:
- A channel whose byte is fully masked has its colour write mask turned off.
- A fully unmasked byte is written normally.
- A partially masked byte turns on `ps.fbmask`, which reads the RT and computes `(C & ~mask) | (RT & mask)` (tfx.glsl:1449).
  - If blending is off, or only alpha is partial, they take an "unsafe" single barrier. The reasoning is that masked bits are the same across overlapping primitives.
  - Otherwise they take a full barrier.

`CalculateAlphaRange` widens the tracked alpha range conservatively for partial masks.

**MK:SM blob shadows (DATE + FBMSK 0x7f000000).** In PCSX2 this case resolves as follows:
- RGB is written.
- The alpha byte is partially masked, so it uses software fbmask with one "unsafe" barrier.
- Because bit 31 is not masked, DATE goes to the branch that tries StencilOne first, using the draw's alpha range.

Two options for WebGPU follow. Neither is from PCSX2.
- **(a) Copy, then stencil.** Copy your r8 alpha target's bbox to a scratch texture. Do the stencil DATE set-up from it. Use StencilOne when the written bit 7 always flips the test. Under StencilOne each pixel is written at most once, so the copy's low 7 bits are the true old values and `(old & 0x7F) | (src & 0x80)` is exact.
- **(b) Fixed-function only.** This works when source alpha bit 7 is constant over the draw, which the vertex alpha range (plus the texture alpha range) tells you. DATE has already established the old bit 7 for every passing pixel. The new alpha is then old ± 128, which is a ONE/ONE add or reverse-subtract on the alpha channel. No read is needed.

**Alpha test.**
- `GetAlphaTestConfigPS` (8967) folds LESS and GREATER into LEQUAL and GEQUAL, with AREF shifted by a tiny epsilon (±1).
- `EmulateAlphaTest` (9016) first simplifies:
  - RGB_ONLY with alpha masked becomes FB_ONLY;
  - an AFAIL that changes nothing becomes ALWAYS;
  - an AFAIL that blocks every write becomes KEEP.
- `TEST.GetAFAIL(PSM)` downgrades RGB_ONLY for formats without alpha.
- KEEP is handled with `discard`.

For FB_ONLY, ZB_ONLY and RGB_ONLY there are three strategies:
1. **FEEDBACK.** The shader computes `atst_pass` and emulates partial discard:
   - colour-only discard writes back the RT value (`DISCARD_COLOR`);
   - depth-only discard uses software Z, with the depth test moved into the shader (`ConfigureDepthFeedback`);
   - RGB_ONLY rewrites alpha from the RT.

   This needs barriers. It is chosen only when a barrier or fbfetch is free, or when "accurate alpha test" is on.
2. **Two-pass, exact.** This is used when Z is independent of overlap: ZTST ALWAYS, Z writes off, no overlap, or GEQUAL with constant Z.
   - `SIMPLE_FB_ONLY`: pass 1 writes colour with Z writes off; pass 2 writes only Z, with the test discarding failures.
   - `SIMPLE_RGB_ONLY`: as above, except pass 1 uses `PS_AFAIL RGB_ONLY_DSB`. The shader puts `atst_pass` into SRC1 alpha, and the alpha channel blends SRC1_ALPHA / INV_SRC1_ALPHA. Failing pixels keep their destination alpha with no RT read (EmulateAlphaTestSecondPass, 9222-9290). In this mode stencil DATE is swapped for PrimID DATE, because stencil would go stale.
3. **PASS_THEN_FAIL.** Pass 1 discards failing fragments. Pass 2 uses the inverted test with the AFAIL write mask. This is inaccurate when primitives overlap.

**MK:SM: RGB_ONLY on CT32 maps to case 2.** It is exact, uses at most two passes and needs no barrier, provided dual-source blending is available. Without dual-source blending, the alpha-only "keep dst" for failing pixels needs a dst read, or a two-pass split: pass 1 writes RGB for all fragments with alpha masked; pass 2 writes A plus Z for passing fragments only. Because GS alpha is never blended, pass 2 writes As directly. The split is exact under the same independence conditions PCSX2 checks: Z independent of overlap, and RGB not reading Ad while primitives overlap.

---

## 6. Sprites and full-screen post-FX under upscaling

**Expansion.** `HW:SetupIA` (5557; sprite case 5664-5694).
- When the device supports vertex-shader expansion, and the draw doesn't need accurate STQ, only the 2 raw GS vertices per sprite are uploaded, as a storage buffer.
- A fixed, pre-generated index buffer supplies 6 indices per quad (`GSDevice.h`, `EXPAND_BUFFER_SIZE` 16383 quads, `GenerateExpansionIndexBuffer`).
- The vertex shader (SH:339-358) uses vertex_index/2 to pick the sprite and the low bits to pick which corner provides X/U and which provides Y/V. It unpacks the raw GS vertex itself (`load_vertex`, SH:150).
- The base vertex is kept even (`GetVertexAlignment`).
- The CPU fallback is `Lines2Sprites` (219).
- Points and lines are expanded only when upscaling, so they stay one native pixel wide.
- All paths subtract a tiny bias from 12.4 positions (about 1/320 px) to mimic the GS top-left fill rule, and subtract `TextureOffset` from UVs (SH:59-66).

This ports cleanly to WebGPU: storage-buffer vertex pulling, a static index buffer, and `vertex_index` bit tricks.

**Point vs bilinear.**
- `GSVertexTrace` keeps two flags: `IsRealLinear()`, what the PS2 does from MMAG/MMIN and LOD, and `IsLinear()`, after user overrides. The setting `Forced_But_Sprite` forces bilinear on 3D but keeps the PS2's filter for sprites, specifically to avoid upscaling artefacts.
- `EmulateTextureSampler` turns bilinear off for shuffles, paletted targets and depth. It uses shader bilinear (`ps.ltf`, hardware sampler set to point) when sampling must be emulated: paletted textures, region clamp/repeat, depth, target regions. Otherwise it uses the hardware sampler.
- Sprites never get anisotropic filtering.

**[MK] The core post-FX problem.** A bilinear tap on an upscaled RT samples upscaled texels. A blur tap offset by 1 PS2 texel therefore moves only 1/scale of the intended distance, so glows and blurs shrink and change character at high internal resolution. Sub-texel copy offsets also drift or blur.

**Fixes, and whether each is on by default.**
- **Half-pixel offset** (`UserHacks_HalfPixelOffset`, default Off; set by GameDB for some games). Applied in `DetermineVSConfig` (6294-6367):
  - **Normal:** shift vertices by half a native pixel times a per-target fudge (`GetModXYOffset`, GSRenderer.cpp:269).
  - **Special / SpecialAggressive:** texture-side nudge in `RealignTargetTextureCoordinate` (1277).
  - **Native ("Align to Native"):** positions are computed in native units with a half-native-pixel shift, so the upscaled image keeps the native sampling grid. This is the usual fix for frame-to-itself copies.
  - **NativeWTexOffset:** Native plus extra texture offsets.

  Native mode also clamps away the first row and column of downsamples.
- **Sprite fixes** (user hacks, off by default, upscale only; `Draw` ~5236-5280):
  - **Align Sprite:** +8 sub-units on X when the right edge sits on a half pixel. Closes vertical black lines.
  - **Round Sprite** (`RoundSpriteOffset`, 2652): point mode snaps UVs to whole texels; bilinear mode pulls U1/V1 in by half a texel. Fixes texel bleed and seams in 2D, HUD and font sprites.
  - **Force Even Sprite Position.**
  - **Merge Sprite** (`MergeSprite`, 1369): a batch of same-size FST sprites read from an RT ("paving") is rewritten as one big sprite. Fixes grid lines in tiled upscaled post-processing.
  - **TC offset:** a manual UV bias.
- **Always on:** `Draw` ~4636 collapses a gap-free, constant-colour sprite list covering the display framebuffer into one sprite (striped full-screen clears and blits).
- **Native scaling** (`UserHacks_NativeScaling`, default Off). `IsScalingDraw` (10840) flags two kinds of draw:
  - **Downscale draws:** output ≤0.75× the texture, linear MMAG, no mips, no gaps, and either the destination is discarded or the blend is additive with FIX=255. There is also a check for repeated equal-size additive tap sets, as in bloom or 4-tap "fake bilinear".
  - **Upscale draws:** output ≥4× the texture.

  Downscale draws render at scale 1, with the upscaled source box-filtered down (`FilteredDownsampleTexture`). Scale changes are handled in `ProcessTargetAfterLookup` (TC:3003-3041). **This is PCSX2's real fix for glow chains:** the chain runs at native resolution, so PS2 tap offsets are correct, and only the composite is upscaled.
- **Per-game HLE in GSHwHack.cpp,** enabled by GameDB:
  - `GSC_NamcoGames` (300) replaces page-rect self-copies that carry 1/16-px offsets with one realigned sprite. This is the closest analogue to MK:SM's case.
  - `GSC_BurnoutGames` (bloom from strip clears).
  - `GSC_UrbanReign` (off-by-one downsample UVs).
  - `GSC_MetalGearSolid3` (colour and depth sharing a buffer, for depth of field).
  - `OI_BlitFMV`, always on.

**What it costs per pass ([MK] the ~6 passes).**
- If it passes `CanUseTexIsFB` (1:1 nearest, |XY−UV| < 1): a feedback read of the RT at the fragment position. That needs one barrier, or in WebGPU one clone copy of the draw area.
- Otherwise: one copy of the sampled coverage rect plus a 1-texel margin, then sample the copy.

Neither is a per-primitive cost. At 3×, each pass is therefore roughly one full-screen copy plus one full-screen draw. PCSX2 does not get these passes cheaper than that, except when native scaling moves the blur chain to 1×.

## 7. Draw batching and pass management

**Fewer, bigger draws** (GSState; the local copy is an older download and includes an experimental DrawBuffering hack):
- Register writes set dirty bits only when the masked value actually changes.
- `TestDrawChanged` flushes only for changes that matter:
  - a PRIM type change within the same class doesn't flush;
  - TEX0/TEX1/CLAMP/TEXA are ignored when TME is off;
  - ALPHA/PABE are ignored when ABE is off;
  - FOGCOL is ignored when FGE is off;
  - FRAME/ZBUF changes are ignored when they can't be written.
- `FlushDraw` doesn't flush on VSYNC when the pending draw doesn't touch a displayed buffer.
- `VertexKick` culls degenerate prims and keeps a running draw rect.
- Autoflush, which splits a batch when a prim reads what earlier prims in the batch drew, is a user hack and off by default.

**Draws removed outright** (`HW:Draw`):
- Clear detection: `IsConstantDirectWriteMemClear` (10937) → `TryTargetClear` (10366) turns full-cover constant draws into `ClearRenderTarget`/`ClearDepth` with no draw.
- Split-clear coalescing (`IsStartingSplitClear`/`ContinueSplitClear`/`FinishSplitClear`, 2022-2125).
- Double-buffer clear tricks (`DetectStripedDoubleClear`, `DetectDoubleHalfClear`, `DetectRedundantBufferClear`).
- `TryGSMemClear`.
- Repeated channel-shuffle draws merged into one.
- Draws with no colour and no depth output.
- Empty scissor rects.

**Render-pass management** (VK):
- **Lazy clears.** A clear only marks the texture "Cleared". It becomes loadOp CLEAR at the next pass begin (`GetLoadOpForTexture`, 121), or `vkCmdClearAttachments` if a pass is already open. Copies carry the cleared state forward instead of copying. Stretch passes that overwrite everything use DONT_CARE.
- **What ends a pass.** `OMSetRenderTargets` ends the pass only when the attachments or feedback flags change. RenderHW keeps the previous depth or colour attachment bound even when the draw doesn't use it, so nothing restarts.
  - The main pass breaker is binding a texture that needs a layout transition, i.e. **sampling something just rendered** (`PSSetShaderResource`, 5536).
  - Copies, DATE stencil setup and colclip also break the pass.
  - `prefer_new_textures` allocates fresh textures instead of pooled ones, so a pooled texture still in use doesn't force a pass restart.
- **Pipelines.** The key is: VS key (8 bits), PS key (128 bits), depth-stencil state, blend state (with the constant as dynamic state), colour mask, topology, attachment presence and feedback flags (`UpdateHWPipelineSelector`, 6592). It is looked up in a hash map (`GetTFXPipeline`, 5222).
- **Uniforms.** VS and PS constant buffers are compared with a cached copy and re-uploaded only on change. They are streamed into 8 MB ring buffers bound with dynamic offsets on one persistent descriptor set. Textures use push descriptors, rewritten only for dirty slots. Vertex and index streams are 32/16 MB rings.
- **Barriers.** One barrier = one feedback barrier before the draw. Full barrier = one draw per group of non-overlapping primitives (`GetPrimitiveOverlapDrawlist`, bboxes padded by 1 px), each with its own barrier.

**Multi-pass draws.** Cheap ones stay inside the render pass:
- the alpha-test second pass;
- `blend_multi_pass`.

The expensive ones need a pass break or extra geometry:
- stencil DATE setup;
- PrimID DATE;
- every RT copy on the no-barrier path.

**Ranked by the reports:**
1. Lazy clears and clear-to-loadOp; dropped clear draws.
2. Keeping render passes open.
3. Flush filtering, which makes batches large.
4. Two-vertex sprites with a static index buffer.
5. Upload only dirty constants, through ring buffers.
6. Avoid full barriers: pick blend paths that need no dst read (fixed-function, accumulation, multi-pass) before software blend, and turn full barriers into one barrier wherever there is no overlap (`m_prim_overlap`).

**[MK] For WebGPU** every dst read is a pass break plus a copy. Group dst-reading draws that share the same target and bbox behind one copy where the draws in between don't write the copied area. PCSX2 does not do this; it is an extension of its rect-limited copy.

## 8. Build order for MK:SM (judged from PCSX2's architecture)

You have an exact oracle (the compute rasterizer). Build every step behind a per-draw switch and compare GS memory or targets at 1× against the compute path. PCSX2 doesn't have this; it is your biggest advantage.

1. **Target cache skeleton.**
   - Exact base-pointer matching only. Skip inside-target matching and offset translation; MK:SM's addresses are fixed.
   - Separate RT and DS lists, with twin targets at the same address converted on the GPU, as in `LookupDrawTarget` twin creation.
   - Per-channel validity (RGB vs alpha).
   - Your tile bitsets as the dirty mechanism, with lazy import before use, as in `Target::Update`.
   - Never write back unless something reads GS memory.
2. **Opaque geometry.**
   - Tristrips, plus sprites through vertex-shader expansion.
   - CT32 colour, Z24 in depth32float with hardware Z test.
   - Untextured, or T8/T4 **pre-expanded** to RGBA8 keyed by (data hash, CLUT hash).
   - Alpha test KEEP as discard; FBMSK only as whole-byte write masks.
   - Get the 1× images bit-close here.
3. **Blending, the cheap paths.**
   - Classify your 41 keys through the 81-entry table logic in section 4.
   - Implement the rewrites (constant As/Ad → FIX, Ad=128 on 24-bit), NO_REC in the shader, ACCU as ONE/ONE, and plain hardware blend.
   - Add dual-source factors if wgpu-native has the feature.
   - Use per-target alpha min/max tracking (`CalculateAlphaRange`). It is cheap, and it removes many Ad and DATE cases.
4. **The "dst read" fallback, built once and used by everything.**
   - End the pass, copy drawarea ∪ samplearea into a clone, rebind.
   - For overlapping primitives, split into non-overlap groups.
   - Route As>1, Ad>1, partial FBMSK, AFAIL feedback and self-sampling through it first, for correctness.
   - Then peel off cheaper paths: blend-mix or multi-pass, RTA-style alpha scaling, two-pass AFAIL with dual-source blending.
5. **Texture from target.**
   - RT-as-texture by sharing (no copy) when it isn't the current target.
   - Self-sampling through the clone or a ping-pong.
   - Z as texture through a depth→bytes conversion (`sample_depth` semantics).
   - Then the Z24-as-colour → CT32 chain through twins.
   - The glow chain that aliases Z falls out of 1 plus this step.
6. **DATE.** Stencil set-up from RT alpha, StencilOne when every write flips bit 7, early-out by alpha range. Then the blob-shadow FBMSK 0x7f000000 case (section 5).
7. **Upscaling.**
   - Render at N×, with Native-style half-pixel alignment for sprites.
   - Native-resolution glow chain: detect downscale draws as `IsScalingDraw` does, or hard-code it for MK:SM's known passes, since it's one game.
   - Merge or collapse full-screen strip sprites.
8. **Performance.**
   - Keep passes open and clear lazily.
   - Cache pipelines on a packed key; upload only dirty uniforms.
   - Replace full-screen self-copies with ping-pong where a pass covers everything it samples. This is the direct attack on the ~5 ms of post-FX.
