# M5 — full map sweep (108-map table, warp + mash)

Date 2026-10-15. Binary `sweep/ps2run.v2` = mksm **d192b5f** (DVD timing model merged; no GS mipmap/bloom or DIV.S
rounding fixes), NVIDIA wgpu GS, laptop only (2 parallel). The Raspberry Pi leg did not run: the session's permission
classifier refused running workloads on `platform-pi`. Tools and the warp state were copied to
`~/mksm/runs/sweep/` there, unused.

**Result: 107/107 maps load and play to the frame limit. 0 halts, 0 missing-code, 0 unmapped, 0 unhandled. 0 new
coverage misses (`sweep/new_entries.txt` is empty). 12 new VU1 programs (53 recorded in total).**
16 maps go dark mid-run ("dark-fade", unresolved, see triage). 3 global rendering bugs found (menu font glyphs/atlas,
particle sprites as square blocks, doubled LOADING title).

![16 maps](media/m5-maps-montage.png)

## Method
- Warp source: `sweep/states/g7600.state` (level-1 gameplay, frame 7600; made from `logs/audio/f6900-g2.state` +
  `story.args`). Per map: `poke_state.py … 4d8c04=<id> 4d8c08=1 4b0d9c=0 4d8bfc=1 4fee68=1`, then
  `ps2run --frames 7600+N --frame-every 100 --misses sweep/misses/<id>.txt`, with `PS2_VU_RECORD=sweep/vu1-per-map/<id>` and a
  separate memcard per map.
- N = 7200 for the bosses (6C 90 C3 0F 2F A0 49) and level starts (67 C0 1E 80). N = 3600 for everything else.
  107 ids = the 108 valid ids minus E0 (skipped; reported to crash on retail). 61 and B8 are valid=0.
- Input: `tools/scripts/gen_mash.py <first> <N> <seed=id>`. It holds 8 directions, mixes in attacks, jumps and double
  jumps, L1/R1+face specials and L2/R2, starts with ✕ taps, and sends START + △△ every 300–450 frames (START opens
  the game menu, and △ is its Exit). Pass 1 (32 maps) wrongly used ○ to close the menu. 18 of those maps were rerun
  with △; 14 keep pass-1 data (`mash=p1`).
- In-engine cutscenes can't be skipped (START/SELECT/✕ tested), so boss maps spend 1–2k frames in cutscenes.
- Runner: `sweep/run_map.sh` (one map → one CSV row), `sweep/worker.sh` (flock queue), `sweep/build_report.py`.
  Speed: 30–100 fps per process on the RTX 4050, ~210 MB RSS. Whole sweep ≈ 105 min of wall time with 2 parallel.

## Findings (details + repro in `sweep/triage.md`)
1. **No crashes or coverage gaps.** Across 125 runs (529k emulated frames) nothing was outside .text and nothing was
   missing. The static recomp + entries.txt cover all 107 maps' code under this input.
2. **Dark-fade, 16 maps** (0C 40 47 48 62 92 93 A2 A4 A5 A6 A7 BC E3 E9 EB): the scene fades to black after the player
   moves for a while. HUD, menus and automap stay alive, so it is not a hang. On 0x40 it is identical without the
   invulnerability poke and on the older v1 binary, so it is caused by neither of them. Still open: game-side
   (out-of-level/respawn waiting on a checkpoint the warp didn't set) vs. emulation (collision/FPU). Next step: same
   poke and input on the PCSX2 oracle.
3. **0x2F Goro: benign.** The black screen is a pit death that the P1 no-damage poke can't let finish. Without the
   poke: FINISH HIM → fatality → GAME OVER → Continue → reload, all fine.
4. **GS bugs (all maps):** menu font glyphs substituted (EXPERIENCE → "EXIKE MENCE", HUD EXP digits → ""). On 0x14
   the START-menu map panel shows the whole font atlas, which points to font/map texture aliasing. Particle sprites
   (fire/ice/magic) are drawn as hard square blocks (0x13, 0x29, 0x2C, 0x43, 0x6A). The Netherrealm loading screens
   draw a doubled "LOADING" title.
5. VU1: 53 programs recorded (`sweep/vu1/`). 41 are the known set in `games/mksm/vu1`, which still falls back. 12 are
   new (`sweep/vu1-new-vs-games.txt`).

## Files
`sweep/results.csv` (one row per map, with a `visual` verdict), `sweep/results-all-runs.csv` (125 runs),
`sweep/triage.md`, `sweep/new_entries.txt` (empty), `sweep/logs/<id>.log`, `sweep/frames/<id>/` (every 600th frame + last,
plus `brightness.txt`), `sweep/pass1/` (pass-1 data of the 32 rerun-eligible maps), `sweep/vu1/`, contact sheets
`sweep/sheets*/`, repro outputs `sweep/mortal/`, `sweep/v1cmp/`.

## Per-map table
| map | name | frames | halt | miss | VU1 rec | dark | wall s | mash | visual |
|---|---|---|---|---|---|---|---|---|---|
| 0x00 | Tombs - Map 1 | 11200/11200 | limit | 0/0 | 30 | 0/31 | 135 | p2 | ok |
| 0x01 | Tombs - Map 2 | 11200/11200 | limit | 0/0 | 43 | 1/31 | 85 | p2 | ok |
| 0x02 | Tombs - Map 3 | 11200/11200 | limit | 0/0 | 41 | 1/31 | 124 | p2 | ok |
| 0x03 | Tombs - Map 4 | 11200/11200 | limit | 0/0 | 42 | 0/31 | 134 | p2 | ok |
| 0x04 | Tombs - Map 5 | 11200/11200 | limit | 0/0 | 34 | 3/31 | 129 | p2 | ok |
| 0x05 | Tombs - Map 6 | 11200/11200 | limit | 0/0 | 38 | 1/31 | 122 | p2 | ok |
| 0x06 | Tombs - Map 7 | 11200/11200 | limit | 0/0 | 43 | 4/31 | 94 | p2 | ok |
| 0x07 | Tombs - Map 8 | 11200/11200 | limit | 0/0 | 41 | 0/31 | 58 | p1 | ok |
| 0x08 | Tombs - Map 9 | 11200/11200 | limit | 0/0 | 45 | 0/31 | 81 | p1 | ok |
| 0x0c | Tombs - Map 13 | 11200/11200 | limit | 0/0 | 34 | 12/31 | 56 | p1 | **dark-fade** |
| 0x0f | Tombs - Map 16 | 14800/14800 | limit | 0/0 | 50 | 3/67 | 202 | p2 | ok |
| 0x11 | Tombs - Map 18 | 11200/11200 | limit | 0/0 | 41 | 0/31 | 106 | p1 | ok |
| 0x13 | Tombs - Map 20 | 11200/11200 | limit | 0/0 | 41 | 0/31 | 100 | p1 | ok; particle blocks |
| 0x14 | Tombs - Map 21 | 11200/11200 | limit | 0/0 | 41 | 0/31 | 75 | p1 | ok; menu map shows font atlas |
| 0x18 | Tombs - Map 25 | 11200/11200 | limit | 0/0 | 41 | 1/31 | 99 | p1 | ok |
| 0x19 | Tombs - Map 26 | 11200/11200 | limit | 0/0 | 40 | 1/31 | 77 | p1 | ok |
| 0x1e | Tombs - Map 31 | 14800/14800 | limit | 0/0 | 41 | 1/67 | 238 | p2 | ok |
| 0x21 | Wasteland - Map 2 | 11200/11200 | limit | 0/0 | 47 | 1/31 | 79 | p1 | ok |
| 0x29 | Wasteland - Map 10 | 11200/11200 | limit | 0/0 | 39 | 6/31 | 83 | p1 | ok; particle blocks |
| 0x2c | Wasteland - Map 13 | 11200/11200 | limit | 0/0 | 35 | 0/31 | 122 | p1 | ok; particle blocks |
| 0x2d | Wasteland - Map 14 | 11200/11200 | limit | 0/0 | 38 | 7/31 | 89 | p1 | ok |
| 0x2e | Wasteland - Map 15 | 11200/11200 | limit | 0/0 | 41 | 0/31 | 82 | p1 | ok |
| 0x2f | Wasteland - Map 16 | 14800/14800 | limit | 0/0 | 27 | 42/67 | 138 | p2 | dark late = pit death blocked by invuln (benign) |
| 0x30 | Wasteland - Map 17 | 11200/11200 | limit | 0/0 | 34 | 0/31 | 61 | p1 | ok |
| 0x40 | Foundry - Map 1 | 11200/11200 | limit | 0/0 | 26 | 25/31 | 30 | p2 | **dark-fade** |
| 0x41 | Foundry - Map 2 | 11200/11200 | limit | 0/0 | 43 | 1/31 | 105 | p2 | ok |
| 0x42 | Foundry - Map 3 | 11200/11200 | limit | 0/0 | 44 | 2/31 | 71 | p2 | ok |
| 0x43 | Foundry - Map 4 | 11200/11200 | limit | 0/0 | 48 | 0/31 | 129 | p2 | ok; particle blocks |
| 0x44 | Foundry - Map 5 | 11200/11200 | limit | 0/0 | 44 | 1/31 | 107 | p2 | ok |
| 0x45 | Foundry - Map 6 | 11200/11200 | limit | 0/0 | 44 | 1/31 | 88 | p2 | ok |
| 0x47 | Foundry - Map 8 | 11200/11200 | limit | 0/0 | 29 | 7/31 | 101 | p2 | **dark-fade** |
| 0x48 | Foundry - Map 9 | 11200/11200 | limit | 0/0 | 39 | 22/31 | 84 | p2 | **dark-fade** |
| 0x49 | Foundry - Map 10 | 14800/14800 | limit | 0/0 | 31 | 2/67 | 205 | p2 | ok |
| 0x4a | Foundry - Map 11 | 11200/11200 | limit | 0/0 | 41 | 1/31 | 197 | p2 | ok |
| 0x60 | Wu Shi - Map 01 | 11200/11200 | limit | 0/0 | 41 | 1/31 | 139 | p2 | ok |
| 0x62 | Wu Shi - Map 03 | 11200/11200 | limit | 0/0 | 49 | 9/31 | 101 | p2 | **dark-fade** |
| 0x63 | Wu Shi - Map 04 | 11200/11200 | limit | 0/0 | 41 | 3/31 | 124 | p2 | ok |
| 0x64 | Wu Shi - Map 05 | 11200/11200 | limit | 0/0 | 44 | 4/31 | 89 | p2 | ok |
| 0x65 | Wu Shi - Map 06 | 11200/11200 | limit | 0/0 | 46 | 1/31 | 93 | p2 | ok |
| 0x66 | Wu Shi - Map 07 | 11200/11200 | limit | 0/0 | 43 | 1/31 | 117 | p2 | ok |
| 0x67 | Wu Shi - Map 08 | 14800/14800 | limit | 0/0 | 42 | 1/67 | 72 | p2 | ok |
| 0x68 | Wu Shi - Map 09 | 11200/11200 | limit | 0/0 | 39 | 5/31 | 118 | p2 | ok |
| 0x6a | Wu Shi - Map 11 | 11200/11200 | limit | 0/0 | 40 | 2/31 | 94 | p2 | ok; particle blocks |
| 0x6b | Wu Shi - Map 12 | 11200/11200 | limit | 0/0 | 41 | 3/31 | 82 | p2 | ok |
| 0x6c | Wu Shi - Map 13 | 14800/14800 | limit | 0/0 | 41 | 1/67 | 150 | p2 | ok |
| 0x6e | Wu Shi - Map 15 | 11200/11200 | limit | 0/0 | 34 | 0/31 | 94 | p2 | ok |
| 0x80 | Forest - Map 1 | 14800/14800 | limit | 0/0 | 35 | 1/67 | 112 | p2 | ok |
| 0x81 | Forest - Map 2 | 11200/11200 | limit | 0/0 | 34 | 0/31 | 84 | p2 | ok |
| 0x82 | Forest - Map 3 | 11200/11200 | limit | 0/0 | 35 | 1/31 | 97 | p2 | ok |
| 0x84 | Forest - Map 5 | 11200/11200 | limit | 0/0 | 40 | 0/31 | 73 | p2 | ok |
| 0x87 | Forest - Map 8 | 11200/11200 | limit | 0/0 | 35 | 0/31 | 107 | p2 | ok |
| 0x88 | Forest - Map 9 | 11200/11200 | limit | 0/0 | 43 | 0/31 | 85 | p2 | ok |
| 0x89 | Forest - Map 10 | 11200/11200 | limit | 0/0 | 37 | 3/31 | 110 | p2 | ok |
| 0x8e | Forest - Map 15 | 11200/11200 | limit | 0/0 | 33 | 1/31 | 46 | p2 | ok |
| 0x8f | Forest - Map 16 | 11200/11200 | limit | 0/0 | 30 | 1/31 | 59 | p2 | ok |
| 0x90 | Forest - Map 17 | 14800/14800 | limit | 0/0 | 36 | 8/67 | 209 | p2 | ok |
| 0x92 | Forest - Map 19 | 11200/11200 | limit | 0/0 | 27 | 24/31 | 47 | p2 | **dark-fade** |
| 0x93 | Forest - Map 20 | 11200/11200 | limit | 0/0 | 35 | 11/31 | 58 | p2 | **dark-fade** |
| 0xa0 | Netherealm - Map 1 | 14800/14800 | limit | 0/0 | 43 | 9/67 | 248 | p2 | ok |
| 0xa1 | Survival 2 - | 11200/11200 | limit | 0/0 | 35 | 2/31 | 99 | p2 | ok |
| 0xa2 | Survival 3 - | 11200/11200 | limit | 0/0 | 37 | 5/31 | 93 | p2 | **dark-fade** |
| 0xa3 | Survival 4 - | 11200/11200 | limit | 0/0 | 40 | 1/31 | 90 | p2 | ok |
| 0xa4 | Survival 5 - | 11200/11200 | limit | 0/0 | 41 | 11/31 | 71 | p2 | **dark-fade** |
| 0xa5 | Survival 6 - | 11200/11200 | limit | 0/0 | 35 | 20/31 | 56 | p2 | **dark-fade** |
| 0xa6 | Survival 7 - | 11200/11200 | limit | 0/0 | 42 | 20/31 | 51 | p2 | **dark-fade** |
| 0xa7 | Vs 8 - | 11200/11200 | limit | 0/0 | 26 | 22/31 | 32 | p2 | **dark-fade** |
| 0xa8 | Practice Map 9 - | 11200/11200 | limit | 0/0 | 38 | 0/31 | 76 | p2 | ok |
| 0xa9 | Survival 10 - | 11200/11200 | limit | 0/0 | 38 | 2/31 | 102 | p2 | ok |
| 0xaa | The Wastelands | 11200/11200 | limit | 0/0 | 31 | 0/31 | 83 | p2 | ok |
| 0xab | The Kombat Crag | 11200/11200 | limit | 0/0 | 33 | 0/31 | 67 | p2 | ok |
| 0xac | The Pit | 11200/11200 | limit | 0/0 | 34 | 0/31 | 53 | p2 | ok |
| 0xad | The Dead Pool | 11200/11200 | limit | 0/0 | 29 | 1/31 | 58 | p2 | ok |
| 0xae | Kombat Tomb | 11200/11200 | limit | 0/0 | 30 | 0/31 | 73 | p2 | ok |
| 0xaf | The Portal | 11200/11200 | limit | 0/0 | 30 | 0/31 | 66 | p2 | ok |
| 0xb0 | Goro's Lair | 11200/11200 | limit | 0/0 | 34 | 0/31 | 82 | p2 | ok |
| 0xb1 | The Tower | 11200/11200 | limit | 0/0 | 27 | 0/31 | 83 | p2 | ok |
| 0xb2 | The Living Forest | 11200/11200 | limit | 0/0 | 33 | 1/31 | 96 | p2 | ok |
| 0xb3 | Warrior Shrine | 11200/11200 | limit | 0/0 | 29 | 0/31 | 86 | p2 | ok |
| 0xb4 | Rooftops | 11200/11200 | limit | 0/0 | 30 | 2/31 | 117 | p2 | ok |
| 0xb5 | The Ice Falls | 11200/11200 | limit | 0/0 | 30 | 0/31 | 113 | p2 | ok |
| 0xb6 | Kahn's Arena | 11200/11200 | limit | 0/0 | 31 | 3/31 | 69 | p2 | ok |
| 0xb7 | Wu-shi Arena | 11200/11200 | limit | 0/0 | 33 | 0/31 | 69 | p2 | ok |
| 0xb9 | The Armory | 11200/11200 | limit | 0/0 | 35 | 3/31 | 83 | p2 | ok |
| 0xba | Survival 27 - | 11200/11200 | limit | 0/0 | 35 | 1/31 | 70 | p2 | ok |
| 0xbb | Survival 28 - | 11200/11200 | limit | 0/0 | 44 | 0/31 | 58 | p2 | ok |
| 0xbc | Survival 29 - | 11200/11200 | limit | 0/0 | 33 | 25/31 | 37 | p2 | **dark-fade** |
| 0xbe | Survival 31 - | 11200/11200 | limit | 0/0 | 29 | 0/31 | 122 | p2 | ok |
| 0xbf | Survival 32 - | 11200/11200 | limit | 0/0 | 31 | 0/31 | 67 | p2 | ok |
| 0xc0 | Evil Monastery - Map 1 | 14800/14800 | limit | 0/0 | 42 | 2/67 | 181 | p2 | ok |
| 0xc1 | Evil Monastery - Map 2 | 11200/11200 | limit | 0/0 | 38 | 1/31 | 119 | p2 | ok; map exit -> loading |
| 0xc2 | Evil Monastery - Map 3 | 11200/11200 | limit | 0/0 | 37 | 1/31 | 57 | p2 | ok |
| 0xc3 | Evil Monastery - Map 4 | 14800/14800 | limit | 0/0 | 37 | 1/67 | 207 | p2 | ok |
| 0xc4 | Evil Monastery - Map 5 | 11200/11200 | limit | 0/0 | 36 | 3/31 | 86 | p2 | ok |
| 0xc5 | Evil Monastery - Map 6 | 11200/11200 | limit | 0/0 | 27 | 3/31 | 48 | p2 | ok |
| 0xc6 | Evil Monastery - Map 7 | 11200/11200 | limit | 0/0 | 40 | 0/31 | 117 | p2 | ok |
| 0xc7 | Evil Monastery - Map 8 | 11200/11200 | limit | 0/0 | 39 | 0/31 | 105 | p2 | ok |
| 0xe1 | Extra Map - Map 2 | 11200/11200 | limit | 0/0 | 39 | 0/31 | 65 | p2 | ok (dev checkerboard) |
| 0xe2 | Extra Map - Map 3 | 11200/11200 | limit | 0/0 | 37 | 0/31 | 47 | p2 | ok (dev checkerboard) |
| 0xe3 | Extra Map - Map 4 | 11200/11200 | limit | 0/0 | 37 | 15/31 | 50 | p2 | **dark-fade** |
| 0xe4 | Extra Map - Map 5 | 11200/11200 | limit | 0/0 | 33 | 1/31 | 79 | p2 | ok (dev checkerboard) |
| 0xe5 | Extra Map - Map 6 | 11200/11200 | limit | 0/0 | 40 | 1/31 | 49 | p2 | ok (dev checkerboard) |
| 0xe6 | Extra Map - Map 7 | 11200/11200 | limit | 0/0 | 33 | 0/31 | 60 | p2 | ok (dev checkerboard) |
| 0xe7 | Extra Map - Map 8 | 11200/11200 | limit | 0/0 | 27 | 2/31 | 65 | p2 | ok (dev checkerboard) |
| 0xe8 | Extra Map - Map 9 | 11200/11200 | limit | 0/0 | 32 | 1/31 | 40 | p2 | ok (dev checkerboard) |
| 0xe9 | Extra Map - Map 10 | 11200/11200 | limit | 0/0 | 29 | 20/31 | 32 | p2 | **dark-fade** |
| 0xea | Extra Map - Map 11 | 11200/11200 | limit | 0/0 | 29 | 0/31 | 64 | p2 | ok (dev checkerboard) |
| 0xeb | Extra Map - Map 12 | 11200/11200 | limit | 0/0 | 41 | 17/31 | 48 | p2 | **dark-fade** |
