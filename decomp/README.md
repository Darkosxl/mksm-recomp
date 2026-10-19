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

## Commands for the AWS box (w1)

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
decomp/gate.sh
remaster/check.sh                          # PS2_DECOMP unset (= off): the hooked build still matches golden.json
PS2_DECOMP=all remaster/check.sh           # and with the decompiled code on

# 4. lockstep co-op with the decompiled code on both peers: expect "identical N/N ... first divergent frame None"
remaster/coop/test.sh pair $D/decomp-coop 3000 $D/states/koop.state PS2_DECOMP=all -- PS2_DECOMP=all
# PS2_DECOMP is part of the lockstep identity, so mismatched peers are refused: expect a "refused" line
remaster/coop/test.sh pair $D/decomp-coop-mixed 600 $D/states/koop.state PS2_DECOMP=all -- PS2_DECOMP=off

rm -rf $D/difftest/ctx-*                   # contexts are ~32 MB each
```

**If `remaster/check.sh` fails with `PS2_DECOMP` unset, `golden.json` is behind this branch's base (5ba7f84), and
the decomp is not the cause.** `decomp/gate.sh` compares the two settings on the same build, so it does not depend
on `golden.json`.

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
