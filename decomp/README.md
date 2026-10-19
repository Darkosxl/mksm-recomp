# Decomp: hand-written C++ for Mortal Kombat: Shaolin Monks

A functional (non-matching) decompilation on top of the static recompilation. Recompiled functions are replaced
one at a time by clean C++ that is verified against its recompiled twin. Recompiled and decompiled code mix freely,
and the game stays playable at every commit.

| Path | What |
|---|---|
| `decomp/src/**.cpp` | Decompiled functions, one `PS2_DECOMP(<addr>, name) { ... }` each (`decomp/src/libc/strlen.cpp`) |
| `decomp/overrides.txt` | Entry addresses that get the decomp hook in the generated code (first column, hex) |
| `decomp/difftest/` | Replay harness: recorded call vs. recompiled twin |
| `decomp/gate.sh` | Scene gate: `PS2_DECOMP=all` vs `off`, state hash on every frame |
| `decomp/map/` | Function list (separate work) |
| `runtime/include/ps2/decomp.hpp` | Authoring API: `PS2_DECOMP`, `call`/`tail`, `tick`/`poll`, typed memory, `StackFrame`, contexts |
| `runtime/include/ps2/psf.hpp` | `psf`: EE COP1 float with the recompiled code's exact arithmetic |
| `runtime/src/decomp/` | Registry, `PS2_DECOMP` switches, entry hook, call helpers, context files |

## How the hook works

`eerecomp --overrides decomp/overrides.txt` adds one line at each listed function's entry label:

```cpp
L_00474EDC:
    if (::decomp::hook_00474EDC.on) [[unlikely]] { if (decomp_enter(c, ::decomp::hook_00474EDC, depth)) return; }
```

- **The hook sits on the label, not in `dispatch()`.** A direct `jal` compiles to `unit_00DD(c, 75u, depth + 1u)`,
  which enters through the unit's `switch`. A jump into the unit, a `jr` through the entry table and a resume after
  an unwind also enter through the `switch`. A tail jump inside the unit is a `goto` to the label. All of these pass
  the hook, so direct calls, indirect calls (`jalr` → `dispatch` → `switch`) and tail calls (`j`/`jr`, same `depth`,
  `ra` untouched) are all covered.
- **A branch back to the entry from inside the function** is a tail call of the same function with the current
  registers. The C++ is a function of the registers the code at the entry reads, so running it there is still correct.
- **`decomp_enter`** runs the body at the caller's `depth`, then does the `jr ra` (`c.pc = ra`), unless control left
  the function first. In that case `c.pc` already holds the resume point. When the function is off, `decomp_enter`
  returns false and the recompiled body runs unchanged.
- **Overrides must already be entries** (`eerecomp` refuses otherwise). A new entry would renumber the unit's entry
  ids and change every caller.
- **Units without an override regenerate byte-identical.** With an empty overrides file no file is rewritten, so
  ninja rebuilds only the units that gained a hook.
- **Switching at run time:** `PS2_DECOMP=off|all|<hex,hex,...>`, default `off`. Bisect a divergence by enabling
  half the list, then half again.

## The exactness contract

The state hash (`PS2_HASH_LOG`, `check.sh`) and lockstep co-op cover the whole machine. On return the C++ must leave
exactly what the recompiled function leaves. That includes:

- every GPR including the upper 64 bits and dead temporaries (thread contexts and interrupt frames save them);
- HI/LO, FPRs, FACC, FCR31, VU0;
- the stack frame bytes below `sp`;
- `c.budget`, which is the EE clock: `now()` is derived from it.

The tools for this:

- **`tick(c, n)`** charges what the recompiled blocks charge (their `c.budget -= n` lines).
- **`poll(c, loop_head)`** goes where a recompiled loop's backward branch checks `if (c.budget < 0 && preempt(c))`.
  At that point the registers must hold what the recompiled code has there. If `poll` returns true, return at once:
  the machine unwinds and later resumes in the recompiled loop.
  - The cheap pattern is to keep loop state in locals and write it to the registers only inside
    `if (c.budget < 0) { ...; if (poll(...)) return; }`. `strlen` does this.
  - Re-read memory after a poll that returns false: interrupt handlers may have run.
- **`call(c, target, Ra{jal_pc + 8})`** is the original `jal`: same `ra`, same `depth` rules, `c.pc` untouched.
  - If the callee does not come back (a thread switch unwinds the host stack, or the depth trampoline fires), it
    returns false. The function must then return, and the machine finishes it in the recompiled caller from the
    return address. So the state at a call must be the recompiled state at that `jal`: arguments, saved registers,
    and the stack frame (`StackFrame`).
  - Related helpers: `call_ptr` (`jalr`), `tail`/`tail_ptr` (`j`/`jr` tail calls), and `call(c, target)` for new code
    with no original call site (not state-exact).
- **`psf`** is for floats. Never compute with host `float`: the EE has no Inf/NaN/denormals, ADD/SUB/MUL chop,
  DIV/SQRT round to nearest, CVT.S.W chops. See `psf.hpp` for the mapping of each COP1 instruction.
  - `div(c, a, b)` takes the Cpu because a zero divisor sets FCR31 bits.
  - `fpu_compare(c, a < b)` reproduces the condition bit that a `C.cond.S` leaves.

## Writing one

1. Read the function in `mksm/generated/unit_XXXX.cpp`, from its `L_<addr>:` to its `jr ra`.
2. Write `decomp/src/<area>/<name>.cpp` with `PS2_DECOMP(<ADDR>, name) { ... }`.
3. Add `<ADDR>` to `decomp/overrides.txt`, then retranslate:
   ```
   build/tools/eerecomp games/mksm/disc/SLUS_210.87 --entries mksm/entries.txt --overrides decomp/overrides.txt --out mksm/generated
   ```
   (`mksm/build.sh --retranslate` does the same). Only the hooked unit should change.
4. Build. Record contexts, replay them with `difftest`, then run the scene gate (commands below).

## Shared helpers

One header per subsystem. A helper that is missing goes into the header that owns it, never into a second copy: two
inline functions or structs of one name with different bodies are an ODR violation, and the linker keeps one silently.
`decomp/headers.sh` (step 0 of `decomp/ci.sh`, cheap enough for the laptop) compiles every header in one translation
unit, so a clash fails as a redefinition.

| Header | Namespace | What |
|---|---|---|
| `runtime/include/ps2/decomp.hpp` | `ps2` | `gptr<T>` (a guest pointer), `Field<T>` (a member of a guest struct view: reading it is a load, assigning it a store), `StackFrame`, `call`/`tail`, `tick`/`poll` |
| `runtime/include/ps2/decomp_vu0.hpp` | `ps2::vu0` | VU0 macro mode, one helper per COP2 instruction; `gather4`, the compiler's float4 gather (PEXTLW, PEXTLW, PCPYLD into t0) before a QMTC2 |
| `decomp/src/render/vif.hpp` | `decomp::render` | The VIF1 chain: `vif::`, `dma::` (also `TagWord`, `Addr`, `qwords_after` for the writers that store a tag word by word), `gs::` (with `Prim`), `gif::` encoders (constexpr, unmasked as the game composes them), `Qword`/`Ad`/`put_ad`, the `Packet` cursor, `Chain` (the sceVif1Packet at 0x65E300; `Chain{0x006783E0u}` is TextureManager's upload packet) with the inlined OpenUnpack/CloseUnpack, through the write pointer or at a cursor. The DMA controller's toSPR registers (`dmac::`), the EE segments, the VU1 images (`vu1::`), the packet templates in ps2render's data, and the inlined packet-library sequences with the registers each call site leaves: `pad_register_to_qword`, `pad_through_pointer`, `close_gif_tag_regs`, `direct_size`, `unpack_matrix`, `open_flush_tag` |
| `decomp/src/render/instance.hpp` | `decomp::render` | The instance draws' struct model: `Model` (the instance: bones, segments, light rig, texture set), `Bone`, `Segment`, `Light`/`LightRig`, `RenderNode`, `GameObject`, `RenderSettings` (0x4F4B40), the per-frame light globals (`frame::`), the fighter draw's `FighterDrawArgs` and programs (`fighter::`) |
| `decomp/src/texture/texture_manager.hpp` | `decomp::texture` | `TextureManager` (`kInstance`: the global pointer at 0x4EFE94), `TextureSlot` (links A/B/C), `Psm`, the MULT that indexes the slots |
| `decomp/src/render/ps2render/lights.hpp` | `decomp::render::lights` | The per-node lighting globals |
| `decomp/include/screen_buffers.hpp` | `decomp` | The frame-buffer setup at 0x67B758 (offset layout, `guest.hpp`) |

Headers in `decomp/src` and `decomp/include` both count towards the lockstep build id (`cmake/build_id.cmake`).

## Commands for the AWS box

Never run these on the laptop. They assume the laptop's layout, with `P` the folder that holds `wt/`:

- `$P/wt/decomp`: this branch;
- `$P/remaster-data/states/*.state` (+ `.json`);
- `$P/.venv-remaster` (Pillow);
- `$P/logs/`;
- `games/mksm/disc/SLUS_210.87`: the patched ELF, sha256 `78fc013f869ea278929a6643ef8c9b179b23d8a32f980d99cdc23b906b3c76a6`;
- `games/mksm/disc.iso`;
- `server/node_modules` for co-op.

```bash
cd $P/wt/decomp
D=$P/remaster-data
mkdir -p $P/logs

# 0. build (full: every unit, the runtime, ps2run and difftest)
[ -f third_party/wgpu-native/lib/libwgpu_native.a ] || scripts/fetch_wgpu.sh
cmake -S . -B build/native-mksm -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_COMPILER=clang++ -DPS2_GENERATED=$PWD/mksm/generated
ninja -j32 -C build/native-mksm ps2run difftest

# 0b. (optional) the generated code is what eerecomp makes from the overrides: expect no diff
cmake -S . -B build/tools -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_COMPILER=clang++ && ninja -C build/tools eerecomp
build/tools/eerecomp games/mksm/disc/SLUS_210.87 --entries mksm/entries.txt --overrides decomp/overrides.txt --out mksm/generated
git status --short mksm/generated          # empty

# 1. record: up to 32 calls per decompiled function (every 7th entry), ~32 MB per context
PS2_DIFFTEST_RECORD=$D/difftest/ctx-boot    PS2_DIFFTEST_COUNT=32 PS2_DIFFTEST_EVERY=7 remaster/run.sh $D/difftest/run-boot 1500 -
PS2_DIFFTEST_RECORD=$D/difftest/ctx-charsel PS2_DIFFTEST_COUNT=32 PS2_DIFFTEST_EVERY=7 remaster/capture.sh charsel $D/difftest/run-charsel
PS2_DIFFTEST_RECORD=$D/difftest/ctx-koop    PS2_DIFFTEST_COUNT=32 PS2_DIFFTEST_EVERY=7 remaster/capture.sh koop $D/difftest/run-koop
ls $D/difftest/ctx-* | head; grep -h difftest $D/difftest/run-*/run.log

# 2. replay: recompiled vs decompiled on every context; expect "N passed, 0 failed"
build/native-mksm/difftest --keep-going $D/difftest/ctx-boot $D/difftest/ctx-charsel $D/difftest/ctx-koop

# 3. scene gate: every reference scene with PS2_DECOMP=off and =all, the state hash of every frame must match
decomp/gate.sh $D/gate                    # all scenes, off and all, in parallel (PS2_GS=soft): every frame's state hash
remaster/statecheck.sh $D/sc-off           # PS2_DECOMP unset (= off): the hooked build still matches golden.json
PS2_DECOMP=all remaster/statecheck.sh $D/sc-all   # and with the decompiled code on

# 4. lockstep co-op with the decompiled code on both peers: expect "identical N/N ... first divergent frame None"
remaster/coop/test.sh pair $D/decomp-coop 3000 $D/states/koop.state PS2_DECOMP=all -- PS2_DECOMP=all
# PS2_DECOMP is part of the lockstep identity, so mismatched peers are refused: expect a "refused" line
remaster/coop/test.sh pair $D/decomp-coop-mixed 600 $D/states/koop.state PS2_DECOMP=all -- PS2_DECOMP=off

rm -rf $D/difftest/ctx-*                   # contexts are ~32 MB each
```

**If `remaster/check.sh` fails with `PS2_DECOMP` unset, `golden.json` is behind this branch's base (5ba7f84), and
the decomp is not the cause.** `decomp/gate.sh` compares the two settings on the same build, so it does not depend
on `golden.json`.

## Synthetic contexts

For functions the recorded scenes reach rarely or never. `decomp/difftest/synth.py` is the shared core (`Ctx`, helpers,
the `PS2DIFF1` writer); `decomp/difftest/synth/batch_*.py` hold one generator per function. On the AWS box, with a
built tree:

```bash
decomp/synth.sh $P/logs/synth               # every function that has a generator, and every real function
decomp/synth.sh $P/logs/synth 23d2f0,26de50 # only these
```

- Writes, replays (`difftest --keep-going`) and deletes the contexts under `$P/logs`. Reports: `synth-counts.txt`
  (contexts per function, `real` or `synth`, and result), `synth-replay.log`, `synth-real.log`, `synth-labels.txt`
  (the generators' label per file) and `synth-stderr.log`. Exit status 1 on any failure.
- Env: `COUNT` (contexts per function; default the generator's), `SEED`, `BASE=<ctx>`, `BATCH` (16), `SCENES`
  (`scene[:end frame]`, default `koop raiden goro pause academy forest nether kahn foundry charsel:6300`), `SEEDCOUNT`
  (20: the fighters are in 9 of the 10 scenes), `TIMEOUT` (120).
- Every replay has a time limit (`TIMEOUT` s plus 1 s per context). A batch that hits it, or crashes, is replayed one
  file at a time; a file that hits `TIMEOUT` is a `TIMEOUT` failure. Synthetic data can make a recompiled callee loop.
- **Zero machine** (default): memory is all zero except what the generator writes, so files are sparse (KB each). Every
  GPR (128 bits), HI/LO, the FPRs, FACC and FCR31 are random.
- **Base snapshot** (`base=True`): a recorded context is the machine, so callees see a running game. Each file is
  ~33 MB, written and replayed `BATCH` at a time. The snapshot is `BASE`, or the script records one: the first call of
  `screen_page_this_field` (0x00275260) in ci.sh's koop run.
- **Seed** (`seed=0xADDR`, or a tuple of addresses): a recorded call of the seed function is the machine, retargeted to
  the generated function. Context i takes seed i mod the number of seeds (`pick=` chooses otherwise), so the result
  does not depend on `BATCH`. The Ctx gives `i`, `seed_fn`, `seed_index`, `nseeds` and `seed_path`; `c.variant(k)`
  spreads k variants so that with count >= k x seeds every seed gets each one. Writes may go to RAM, the scratchpad
  and VU0 memory. ~33 MB per file, `BATCH` at a time.
- **Real functions** (`real(0xADDR)` in a batch module) and the seed functions: the script records them first in
  `SCENES`, in parallel (`SEEDCOUNT` per function and scene, every 7th entry). A scene that stops before its frame
  limit fails the job. Every recorded context is replayed as a real one, then they are the seeds.
- `python3 -I decomp/difftest/synth.py --list`: every generator, its machine (`zero`, `base`, `seed:<hex>[,<hex>]`)
  and its default count, then the `real` functions. `--record [hex,...]`: the functions to record for a selection.
- `python3 -I decomp/difftest/synth/batch_i.py --classify <dir>`: the PackSegment branches each context takes.

To add a function, register a generator in its batch's module (a new `synth/*.py` file is picked up). It sets the
arguments and the memory the function reads so that every branch comes up:

```python
from synth import A0, float_bits, gen, ram_addr, scramble

@gen(0x00326140)                   # base=True: on the snapshot (call scramble() first); count=N (default 64/32)
def ground_y(c, rng):              # c: a fresh Ctx (random registers), rng: its random.Random
    o = ram_addr(rng, 0x100, 4)
    c.set_ptr(A0, o)               # also set_reg/set_sext/set_arg/set_low/set_f, write/wr/w16/w32/w64/words, rd/low
    c.w32(o + 0xf4, float_bits(rng))

@gen(0x00246918, seed=0x00244368, count=40)  # on recorded calls of 0x00244368
def instance_constants(c, rng):
    inst = c.low(A0, 32)           # the recorded call's a0
    scramble(c, rng, ())
    c.set_arg(A0, inst)
```

## Environment

| Variable | Meaning |
|---|---|
| `PS2_DECOMP` | `off` (default), `all`, or `<hex,hex,...>`: which hooked functions run their C++ |
| `PS2_DIFFTEST_RECORD` | Directory: record call contexts at hooked entries (`<ADDR>_<n>.ctx`) |
| `PS2_DIFFTEST_FUNCS` | `all` (default) or `<hex,...>`: which functions to record |
| `PS2_DIFFTEST_COUNT` | Contexts per function (default 8) |
| `PS2_DIFFTEST_EVERY` | Record every n-th entry (default 1) |
| `PS2_DIFFTEST_SKIP` | Ignore the first n entries (default 0) |

### What the replay does not check

`difftest` starts each run with a large budget, so it does not exercise `poll()` placement. Calls into the kernel or
hardware would see an unbooted machine. The scene gate covers both.

## Status

| Item | Result |
|---|---|
| Regeneration with an empty overrides file | No file rewritten, `git diff --stat` empty |
| Regeneration with `decomp/overrides.txt` | Only `unit_00DD.cpp` changes (+6 lines) |
| `strlen` (0x00474EDC), replay of 212 synthetic contexts on the laptop | All pass: strings at every alignment, lengths 0-3000, high-bit bytes, random register upper halves. Checks registers, cycles and memory |
| Deliberately broken copy of `strlen` (negative control) | Fails, as expected |
| Record, replay of real contexts, scene gate, co-op | Waiting for w1 |
