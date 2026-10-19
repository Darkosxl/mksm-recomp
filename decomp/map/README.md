# MK:SM function map

The map the functional decomp works from. It covers Mortal Kombat: Shaolin Monks, NTSC-U SLUS_210.87, as dumped:
the unlock-all mod with the Ko-op byte patched. Every recompiled function will be replaced by clean C++ and
checked against its recompiled twin. This directory says what the functions are, where they start and end, who
calls whom, and which library or source file each comes from.

## Files

| File | Contents |
|---|---|
| `functions.tsv` | One row per function, sorted by address. Columns are described below. |
| `callgraph.tsv` | `caller, callee, kind, count, first_site, target_if_not_start`, one row per distinct (caller, callee, kind). `kind` is `jal` (direct call, including `bgezal`), `tail` (a `j` or branch leaving the function) or `jalr-resolved` (register call whose target is a `lui/addiu` constant). |
| `boundaries.tsv` | Every start candidate from any source, whether it was accepted, and why. |
| `boundaries.md` | How the recompiler's starts, Ghidra's starts and the eh_frame FDEs were reconciled, with the disagreements. |
| `names.tsv` | Every name claim from every source, and whether it was used. Conflicts are visible here. |
| `render-layer.md`, `render-layer.tsv` | The 0x211000-0x276000 layer: bottom-up order, the VU1 draw site, VIF/GIF/DMA chain builders, and the first decompile batch. |
| `stats.json` | The numbers below, as written by the last run. |
| `inputs/` | Everything the tools read besides the ELF and `mksm/entries.txt`. See "Regenerate". |

### functions.tsv columns

| Column | Meaning |
|---|---|
| `addr`, `end`, `size` | Start, exclusive end, bytes. Hex has no `0x`. |
| `name` | Best known name, else `fn_<addr>`. A name that occurs twice gets `_<addr>` appended, e.g. `kCopy_486088` (static functions, or library code linked twice). |
| `name_source` | One of:<br>`verified-symbols`: OGmidway's prototype-map transfer, body-checked;<br>`sce-db`: exact SCE library match;<br>`syscall`: EE kernel syscall stub, named from `mksm/tools/scripts/ee_syscall_names.json`;<br>`notes`: our own notes, via `inputs/notes-names.tsv`;<br>`proto-candidate`: OGmidway's unverified candidates, used only when the size matches exactly;<br>`string-xref`: the function's own strings;<br>`none`.<br>`sce-db`, `syscall` and `proto-candidate` go beyond the four sources the brief named. |
| `module` | One of:<br>`gamecode` (Mka/Source/Gamecode);<br>`ps2render` (the whole c:/Projects/Ps2 platform layer: renderer, Cri wrappers, FileIODrv, MemoryCard, Sony shellPad);<br>`paradox:<sub>` (Paradox/<Sub>/, lower-cased; `paradox:core` for files directly in Paradox/);<br>`havok` (including the bundled qhull);<br>`cri`;<br>`sony` (SCE libraries, kernel stubs);<br>`libc` (libc, libm, libgcc);<br>`unknown`.<br>Two extra values for c:/Projects trees that are neither Mka nor Paradox: `utility` (c:/Projects/Utility: util_GameMem, util_MemoryManager, util_New, util_ArrayManager, util_zlib) and `platform` (c:/Projects/Platform/Common: pfmc_BoneCollision, pfmc_Water). `paradox:unknown` means the object sits between two Paradox objects of different subdirectories, and the call graph did not decide. |
| `source_file` | `c:/Projects/` path from an assert string in the function or in another function of the same object file. Only `.cpp`/`.c` files are used; headers are inlined everywhere. Empty when not attributable. |
| `leaf` | 1 if the function makes no call at all: no `jal`, no `jalr`, no tail jump. |
| `n_callees`, `n_callers` | Distinct functions, from `callgraph.tsv`. Calls through registers are not counted, so a virtual method can show 0 callers; see `n_data_refs`. |
| `recomp_unit` | `unit_XXXX` = (addr - 0x100000) / 0x4000, the 16 KB unit in `mksm/generated/` whose switch has this address as an entry. 221 functions continue into the next unit. |
| `name_confidence` | `exact` (verified / library hash / syscall), `named` (a real name quoted in our notes or the hook sources), `role` (a descriptive name from our own analysis), `candidate`, `derived` (string-xref). |
| `start_evidence` | Which sources agree on the start: `fde`, `ghidra`, `jal`, `tail-j`, `lib`, `entry`; or `recomp+linear[+dataptr]` for starts only the recompiler's seeds had. |
| `end_source` | `fde` (eh_frame size), `lib-size` (SCE symbol size) or `next-start` (next start minus zero padding). |
| `object` | Index of the eh_frame CIE group, i.e. the translation unit, in link order. |
| `module_source` | How the module was decided; tiers are listed below. |
| `n_jalr_unresolved` | Register calls in the function. |
| `n_data_refs` | Words in `.data`/`.rodata` that point at the start (vtables, callback tables). |

## Method

1. **Starts and ends.** See `boundaries.md`. The key find: the linker left GCC's per-object `eh_frame` in
   `.data`. That gives 9,573 functions with compiler-exact start and size, and groups them into 453 translation
   units in link order. Around these: Ghidra's 12,352 starts, jal targets, tail-call `j` targets and exact SCE
   library matches are strong starts. A recompiler seed (17,769 functions in its sense) is accepted only when
   control flow shows it is not inside another function.
2. **Call graph.** Direct `jal`/`bgezal` targets read from the instruction encodings. `j` or branches that
   leave the function are tail calls. `jalr` is resolved only when its register is a `lui/addiu` constant.
3. **Library identification.** The public sce-symbol-scanner database ships as
   `ps2xAnalyzer/include/ps2recomp/sce_symbol_database_data.h` in OGmidway/mksm-recomp: 9,218 Sony/GCC library
   functions as relocation-masked SHA-1. Its match tree was run over every `.text` word, with the same
   acceptance rule as their scanner: at least 256 fixed bits and a single identity per address. This gave 464
   matches; 15 were isolated duplicates and were dropped (see `boundaries.md`). The matches also fix the library
   address ranges:
   - libgcc/libgraph/libpad/libm at 0x201108-0x20a15c;
   - libvu0 at 0x213e08;
   - libsdr/libgraph/libdma/libdev/libpkt/libvu0/libcdvd/libmc at 0x3829c0-0x3876dc;
   - libm/libscf at 0x40a860-0x40c8c0;
   - libcdvd/libmpeg/libipu at 0x467940-0x46f768;
   - libm/libc at 0x470b38-0x47f340;
   - libkernl at 0x47fa40-0x487cf4;
   - libgcc at 0x487d20-0x4898dc.
4. **Names.** Highest priority first:
   1. verified-symbols, the retail column. Body sha256 checked against `retail-symbols.json`; all 24 match our ELF.
   2. sce-db.
   3. notes (`named` before `role`).
   4. syscall stubs.
   5. proto-candidates.
   6. string-xref.

   String-derived names come from strings like `"E0040701:...(adxf_GetPtStat)"`, `"PS2RNA_SetupVoice: ..."`,
   `"... failed in PS2RNA_Init."`, `"qh_settemp: ..."` and `"TthkShapeCollection::castRay"`. Such a name is
   used only if it points to a single function and that function has no competing name.
5. **Modules and source files.** In order of trust (the `module_source` column):
   1. `sce-db`
   2. `assert-path`: the object has a `c:/Projects/...` assert string.
   3. `object-neighbours`: the attributed objects on both sides in link order agree.
   4. `object-callgraph`: they disagree, and callers and callees favour one side 2:1.
   5. `object-between-paradox`
   6. `range`: an address range from `inputs/module-ranges.json`, each with its string evidence; used only for
      code without eh_frame.
   7. `callgraph`: majority (two thirds or more) of a function's callers and callees.
   8. `neighbours`: a run under 2 KB between two functions of the same module.

## Coverage

| | |
|---|---|
| Functions | **15,012**. 3,748,164 of 3,778,312 `.text` bytes (99.2 %) are inside a function; the rest is zero padding, and no non-zero byte is outside a function. |
| Ends | 9,571 from eh_frame, 407 from library symbol sizes, 5,034 from the next start. |
| Named | **822 (5.5 %)**: 449 sce-db, 146 syscall, 116 notes, 69 string-xref, 24 verified-symbols, 18 proto-candidate. 619 of them are exact. 14,190 are `fn_<addr>`. |
| Module attributed | **14,819 (98.7 %)**; 193 `unknown`. Direct evidence (assert path or library hash): 3,693. Link-order or call-graph inference over eh_frame objects: 6,026, of which 1,283 are only `paradox:unknown`. Address ranges: 4,836. Function-level call graph or neighbours: 264. |
| Per module (functions) | gamecode 3,623 · paradox 4,437 (1,289 of them `paradox:unknown`) · cri 2,485 · havok 2,092 · ps2render 1,095 · sony 565 · libc 269 · utility 145 · platform 108 · unknown 193 |
| Source file | 3,244 functions in 77 `.cpp/.c` files. Asserts were found in 216 functions, which are spread over 74 objects. |
| Call graph | 30,421 distinct edges: 29,455 jal, 963 tail, 3 jalr-resolved. 3,587 register-call sites unresolved. 5,019 leaf functions. |
| Recompiler cross-check | 17,769 recompiler functions reproduced exactly from `entries.txt` + jal targets. Of them, 2,784 are not functions: EH landing pads, internal labels, case labels, epilogue fragments, and starts inside library symbols. All 12,352 Ghidra starts are kept. |

## Caveats

- **Modded ELF.** The disc ELF is the unlock-all mod, not retail. Public symbols were made on retail
  (sha256 b1ed99d8…); the 24 verified bodies match ours byte for byte, so the code addresses agree. The mod
  rewrote 0x13b730..0x13b888 and put helpers at 0x13d2d0/0x13d2ec, inside the original 0x13cd80. The map shows
  the modded layout, which is what the recompiled twins contain (`boundaries.md`).
- **Inferred modules are inferences.** Treat `object-callgraph`, `range`, `callgraph` and `neighbours` as
  likely, not proven. `range` is coarse where no strings exist:
  - 0x3876e0-0x392000 is called Havok because of what is around it;
  - 0x45d000-0x467940 has no strings and mostly stays `unknown`.
- **Role names are ours.** `name_confidence = role` names (87 in use, all from the notes) describe what a function seemed
  to do in one investigation. Rename freely when decompiling.
- **Register calls.** Only 3 of 3,590 `jalr` sites resolve statically. Most virtual methods therefore have no
  callers here. `n_data_refs` shows they are referenced. Vtable reconstruction (RTTI type names are in
  `.rodata`) would name and connect them; it was not done.
- **Leaf** means no call at all, including through registers. A function that only tail-jumps is not a leaf.
- **Library code linked twice.** Some library functions appear twice under the same name, e.g. `kCopy` five
  times and `sceVu0TransposeMatrix` at 0x213e88 and 0x3853f0. They get `_<addr>` suffixes.
- **No heavy compute was used.** Everything here is static analysis of the ELF in Python, about 2 s per run.
  A useful later job for AWS (not needed for this map) is a headless Ghidra pass that imports
  `functions.tsv` as the function list and exports per-function pseudo-C and parameter guesses, as a starting
  point for each rewrite.

## Regenerate

```sh
python3 -I decomp/tools/build_map.py        # functions/callgraph/boundaries/names/stats (~2 s)
python3 -I decomp/tools/render_layer.py     # render-layer.md/.tsv (needs functions.tsv)
```

Both read `games/mksm/disc/SLUS_210.87` (your own dump, Ko-op-patched by `mksm/build.sh`, never committed) and
`mksm/entries.txt`. The other inputs are in `inputs/`:

| File | Origin |
|---|---|
| `ghidra-functions.txt` | Copy of `analysis/exports/functions.txt` (outside the repo). |
| `sce-matches.tsv` | Output of the SCE scan. To redo it, fetch `ps2xAnalyzer/include/ps2recomp/sce_symbol_database_data.h` from github.com/OGmidway/mksm-recomp (11.5 MB, not committed) and run `build_map.py --sce-db <that file>`. |
| `public/verified-symbols.tsv`, `public/retail-symbols.json`, `public/reversing-symbol-candidates.json`, `public/bloom-candidates.json` | Copied unchanged from OGmidway/mksm-recomp `games/mk-shaolin-monks/ghidra/`. |
| `notes-names.tsv` | Function names harvested from `mksm/notes/*.md` and `analysis/exports/web-cheats-mksm.txt`, with file:line and a quote for each row. Rows of kind `site` are instruction addresses (e.g. the VU1 draw site), not function starts, and are not used as names. |
| `module-ranges.json` | Hand-written address ranges for code without eh_frame, each with its evidence. |

To add a name, add a row to `notes-names.tsv` (or a new source to `build_map.py`'s claims) and rerun. The
brief's estimated library ranges were refined into `module-ranges.json` and the SCE matches above.
