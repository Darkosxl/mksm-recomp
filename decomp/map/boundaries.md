# Function boundaries: where the sources disagree and how it was resolved

Every candidate start and its fate is in `boundaries.tsv` (addr, accepted, reason, evidence). This file explains
the rules and the disagreements.

## Sources

| Source | Starts | What it is |
|---|---|---|
| eh_frame FDEs | 9,573 in 453 objects | GCC 2.9x left each object file's `eh_frame` in `.data` (registered at run time with `__register_frame_info`). Each FDE gives a compiler-emitted start **and size**. One CIE per object, so a CIE group = one translation unit, in link order (all 453 groups are in increasing `.text` order). Only C++ code built with exceptions has them: gamecode, Utility, Ps2, Platform, Paradox and libgcc, up to 0x382898. Havok, CRI, the Sony libraries and libc have none. |
| Ghidra (our project) | 12,352 | `analysis/exports/functions.txt`, copied to `inputs/ghidra-functions.txt`. Starts only, no ends. |
| Recompiler | 17,769 | ELF entry + the 17,589 seeds of `mksm/entries.txt` + every `jal` target. This reproduces the `functions 17769` line of `logs/e9/genp.log` exactly. The seeds are the union of `seed_scan.py`'s sets: jal targets, "linear" starts (after `jr ra` + nop padding, or a prologue after a terminator), `.gcc_except_table` words and every `.data`/`.rodata` word that points into `.text`. The recompiler only needs entry points, so it over-approximates on purpose. |
| Direct `jal` targets | 8,863 | From every `.text` word. |
| `j` tail calls | 30 extra | `j` targets outside the jumping function's window that nothing else found. Checks: of all `j` instructions, 1,035 land on a function start and 36 are local jumps inside one function; none land in the middle of another function. |
| SCE library matches | 449 (464 found, 15 dropped) | Exact masked-hash matches against the public sce-symbol-scanner database (see README). They give names and exact sizes. Dropped: 15 matches whose name occurs again and that have no other match from the same library within 8 KB: `eh_context_free` 6× in CRI code, `_$_9type_info` 8× in Havok, `_sceCd_Poff_Intr` once in CRI. Identical small bodies under other names. |
| Public Ghidra export | 12,348 | `OGmidway/mksm-recomp` `ghidra/functions.csv`, made from the retail ELF. Used only as a cross-check and not committed. All 12,348 of its starts are starts here. |

## Rules (in `build_map.py: resolve_starts`)

1. **Strong starts** are the union of FDE starts, Ghidra starts, jal targets, tail-call `j` targets, library
   matches and the ELF entry: 14,381 of them. Each keeps a window up to the next strong start, and its body is
   what local control flow reaches inside that window. Local flow means branches, `b`, in-window `j`, and the
   232 jump tables resolved from `lui/addiu + lw + jr` patterns (2,307 case labels).
2. **Every other candidate** (recompiler seeds, linear starts) becomes a start only if all of these hold:
   - it is not an EH landing pad;
   - it is not a jump-table case label;
   - it is not inside an FDE or library-symbol range;
   - it is not padding;
   - no earlier body reaches it, and no earlier body continues past it;
   - it does not just fall into the next start (unless something in `.data` points at it).

   631 pass. Nearly all are in the non-eh_frame libraries:
   - Havok: 411, of which 311 are reached only through `.data` pointers (vtables, callback tables);
   - CRI: 120;
   - Sony syscall stubs: 93.
3. **Ends:**
   - FDE size, when the FDE stops before the next start: 9,571 functions;
   - else the library symbol size: 407;
   - else the next start, minus trailing zero padding that no flow from the function reaches: 5,032 (+2, see below).

   Check: every non-zero byte of `.text` falls inside some function. The 0.8 % outside is all zero padding.

## Where they disagree

| Disagreement | Count | Resolution |
|---|---|---|
| Recompiler start that is an EH landing pad (`.gcc_except_table`) | 1,044 (933 inside an FDE + 111 elsewhere) | Not a function; the landing pad belongs to the function whose FDE or body contains it. |
| Recompiler start that is a linear label inside a function (code after an early `jr ra`) | 990 inside an FDE + 176 reached by a body | Not a function. |
| Recompiler start that is a jump-table case label | 154 (115 inside an FDE + 39 by table) | Not a function. |
| Recompiler start that is a stray 8-40 byte epilogue fragment (`addiu sp,sp,N; nop`, `sw; nop`) after a `jr ra`, which runs into the next start | 340 | Not a function. It stays with the previous function, or in a gap when that function's FDE ends earlier. |
| Recompiler start inside a library symbol's range | 80 | Not a function. |
| FDE start that Ghidra missed | 1,957 | Kept, since the FDE is compiler output. Mostly virtual methods and callbacks that only `.data` references, so no `jal` reaches them. |
| Function Ghidra and the recompiler both missed | 631 (rule 2) plus 30 tail-call targets | Kept (see above). |
| Ghidra start the recompiler lacks | 17 | Kept. They are real functions, e.g. `scePadInfoAct` 0x206be0 and `scePadInfoMode` 0x206d00 (SCE matches) and CRI functions reached only through pointers. The recompiler reaches them by flow from a neighbour, so they are entries but not "functions" for it. |
| Ghidra merges functions across a tail `j` | e.g. 0x42df68 (public export: one function to 0x42e7a8) | Split. 0x42df80, 0x42df98, 0x42e7a0 and 0x42e7a8 are separate functions; the last two are `jr ra; sw` leaves reached only by `j`. |
| FDE range that contains other starts (jal targets) | 2: 0x13b578-0x13bb30, 0x13cd80-0x13e03c | **This is the unlock-all mod.** Our dump is the modded ELF, not retail (public retail sha256 b1ed99d8…, ours 862e4a25… before the Ko-op byte). The mod overwrote 0x13b730..0x13b888 with a preload routine (`patch_koop.py`), and that routine `jal`s two helpers it placed at 0x13d2d0 and 0x13d2ec, inside the original function 0x13cd80. The split was kept because it is what the recompiled ELF contains. The ends of 0x13b578 and 0x13cd80 come from the next start, and 0x13d2ec's range (0x13d2ec-0x13e038) is mod helper + the tail of the original 0x13cd80. In retail these are two whole functions, 0x13b578-0x13bb30 and 0x13cd80-0x13e03c. |
| Size disagreement with verified-symbols.tsv | 1: `GetAsyncFileSize` 0x211878 | 700 here (FDE and the public Ghidra export agree), 704 in the prototype map (it counts the alignment word). |

## Known weak spots

- **Non-eh_frame code** (Havok, CRI, Sony, libc, 0x3876e0-0x49a708) has no compiler sizes except the 407
  library matches. Ends there are "next start", so a function only reached through a pointer that nothing
  references can still be glued to the function before it.
- **Jump tables.** Unresolved computed jumps outside FDE ranges, 21 per Ghidra, could leave case blocks
  unreachable. Rule 2 still rejects most of them because the body before them continues past them.
- **Calls through registers.** 3,587 `jalr` sites are not resolved: vtables and callbacks. Only 3 resolve to a
  `lui/addiu` constant. Functions reached only that way show `n_callers = 0`; the `n_data_refs` column says
  whether `.data`/`.rodata` points at them.
