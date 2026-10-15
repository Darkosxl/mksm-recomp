# MK: Shaolin Monks (SLUS_210.87) — debug & cheat facilities (for M5 full-content coverage)

Tags: **[code]** = read from the decompiled or disassembled retail ELF. **[recomp]** = additionally run-tested in our
native `ps2run` from `logs/spr/f6900.state`. **[web]** = from TCRF, GameHacking or cheat sites, not checked in code.
**[inferred]** = my reading, not directly confirmed.

Evidence: `analysis/exports/debug/*.txt` (decompiles), `analysis/exports/debug/map_table.txt` (map id → descriptor),
`analysis/exports/debug/text_table_en.txt` (all 1751 localized strings, dumped from PCSX2 savestate RAM),
`analysis/exports/web-cheats-mksm.txt` (web sweep, 3.4k lines). Tooling: `tools/ghidra-scripts/XrefDecomp.java` +
`run-xd.sh` (headless xrefs/decompile), `tools/scripts/poke_state.py` (EE-RAM pokes into a ps2run `.state` file).

PS2 button bits used by the game internally (big-endian libpad word) [code]: L2 0001, R2 0002, L1 0004, R1 0008,
△ 0010, ○ 0020, × 0040, □ 0080, SELECT 0100, L3 0200, R3 0400, START 0800, Up 1000, Right 2000, Down 4000, Left 8000.

---------------------------------------------------------------------------------------------------------------
## 0. TL;DR poke recipes (all are DATA pokes — they work in the static recomp)

| # | Purpose | Poke(s) (32-bit unless noted) | When | Confidence |
|---|---------|-------------------------------|------|-----------|
| 1 | **Warp to any map** | `004D8C04=<mapId>`, `004D8C08=1`, `004B0D9C=0`, then `004D8BFC=1` | any gameplay frame (not paused) | **high [code+recomp]**: 0xC0 and 0x0F loaded |
| 2 | **P1 takes no damage** | `004FEE68=1` (P2: `=2`) | any time; nothing in the game writes it | **high [code+recomp]**: same boss fight, HP bar untouched vs. damaged baseline |
| 3 | **Retail debug menu** in SELECT pause menu ("Options" → "Debug Menu") | `004C6FE0=0000019F`, `004C6FE4=001AAE80` | any time before pressing SELECT | **high [web+code+recomp]**: menu and Map Select render |
| 4 | Unlock Scorpion / Sub-Zero (story) / MK II | `005D82B8=1` / `005D82B4=1` / `005D82B0=1` | after memcard load (main menu or later) | high [code] (cheat callbacks write exactly these) |
| 5 | Unlock all Vs characters | `005D8288 \|= 071C0000` (bits 0x52-54 Scorpion/Baraka/Reptile, 0x58-5A Sub-Zero/Kitana/Johnny Cage) | after memcard load | high [code] |
| 6 | "Unlock everything" (replays dev routine 0x1C13A8) | OR: `5D8288\|=F71C0000 5D828C\|=FFFFFFEF 5D8290=FFFFFFFF 5D8294\|=FFFFFFDF 5D8298..5D82A4=FFFFFFFF 5D82A8\|=FFBFFFFF 5D82AC\|=007FFF7F`, plus `5D82B4=1 5D82B8=1 5D82BC=1` | after memcard load | medium-high [code]; the routine is dead code, so its exact effect on Kontent screens has not been seen |
| 7 | Start a new game directly in map X | `005E2FC4=X` and `006427B0=X` after Story/Ko-op is confirmed but before the level loads | narrow window | medium [code]; untested. Recipe 1 is easier |
| ✗ | `004C7778=1` ("gGodMode") | — | — | **does nothing useful** [code]: only the debug-menu label and toggle read it; state 4 resets it to 0 |
| ✗ | Code-patch cheats (inf. health `201EB0B0…`, energy `20169514…`, MK2 debug `00213968`, all hook/master codes) | — | — | **N/A in the recomp**: they write .text, which is compiled C here |

Apply pokes to a ps2run state, then resume:
```
python3 tools/scripts/poke_state.py logs/spr/f6900.state /tmp/w.state 4d8c04=c0 4d8c08=1 4b0d9c=0 4d8bfc=1 4fee68=1
ps2run SLUS_210.87 --disc disc.iso --load-state /tmp/w.state --frames 8000 ...
```
The state file holds EE RAM raw at file offset 0x5B4. The tool finds it by signature, so offsets need not be hard-coded.
In-run pokes need a host feature (`--poke frame:addr=val`), which ps2-web-recomp does not have yet. Patching the state
file works today.

---------------------------------------------------------------------------------------------------------------
## 1. Debug menus in the retail ELF

### 1a. In-game "Debug Menu" (reachable with poke #3) [code+recomp]
- The SELECT pause menu is built by `FUN_001a9698`, which `FUN_0019ea70` calls when pad bit 0x100 (SELECT) is pressed.
  The menu window is "Select Button Menu" (def 0x4C71C0) → list "Select List". On every open it is filled from
  the table `{int textId; void(*fn)()}` at **0x4C6FD8**: Continue `{1A4, 1AA6F0}`, **Options `{1A5, 1AA630}` @0x4C6FE0**,
  Exit Game `{1A7, 1AA708}`, terminated by -1. "Message History" (1A3) is inserted only when history exists.
- `FUN_001aae80` (DebugMenuSetup) opens window "Debug Menu" (def 0x4C73A0) → "Debug List" (0x4C7258), whose items
  table is at **0x4C7218**:

  | text id | label | handler | effect [code] |
  |---|---|---|---|
  | 18B | Reload Level | 1AA678 | restore checkpoint snapshot, `4B0D90=1 4D8BFC=1 4B0D9C=1 4D8C08=1 4D8C04=save->map` |
  | 19D | Map Select | 1AA518 | sets `gMenuSystem+0x6AC` (0x5D248C)=1; after the menu closes, `FUN_001a9c88` builds the level list (8 banks, text 0x172+i) and the room list, and `FUN_001a9f50` calls `FUN_001e15a0(0x5E2FC0, mapId)` |
  | 1A0 | Save Menu | 1AA538 | `0x5D2490=1` → `FUN_001a5320` save UI |
  | 666/667 | God Mode On/Off | 1AAAD8 | toggles 0x4C7778. ON → `FUN_001bae60`: every move unlocked for both players (table 0x4CC448), `save+0xE0=4`, P1 health refilled to max, fatality level 3 for P1/P2, fatality meter filled. OFF → `FUN_001bb7a8` resets. **No invulnerability.** |
  | 660/661 | P1/P2 Fatality Level | 1AACF0/1AAD80 | sub-menu 0x4C7568 → `FUN_001bb718(0..3)` |
  | 1A6 | Warp Player | 1A8788 | lists "Warp Position 1..15" (entrances that exist in the current map) |

  Nothing in retail code references DebugMenuSetup (0x1AAE80); its only reference is the .eh_frame FDE. The TCRF
  poke is the intended way in. All handlers, including 0x1AA518 and 0x1AA538, which Ghidra does not mark as
  functions, are present in `games/mksm/entries.txt`, so the recomp dispatches them [recomp].
- Map Select UI: it opens on the **room list of the current level** ("Press × To Select Room"). Back (△) goes to the
  level list (Tombs, Wasteland, Foundry, Wu-Shi, Forest, Netherrealm, Evil Monastery, Extra). A level entry whose
  maps all have `valid=0` is greyed out [code].
- Screenshot of the poke working in ps2run: `notes/media/debug-menu-recomp.png`.

### 1b. Front-end debug menu ("FE Menu": Level Select / Room Select / …) — dead code [code]
- Strings 0x573A30.. (TCRF's "unused text at file 0x474A30") belong to a dev front end at 0x13E040–0x142030.
  The title table is at 0x4B0DA0, indexed by page `0x5D249C`: 1 Level Select, 2 Room Select, 3 Player Select,
  4 Difficulty, 5/7 P1 Select, 6 P2 Select, 8 Versus Arena, 9 Focus Group, 10 Load Game.
- Root items (0x4B1270): Single Player, Ko-op, Load Game, Options, Kontent, Versus, Practice Mode, Mortal Kombat2.
  Level Select (FUN_00140390) lists "Game Events" (boss list) plus the 8 level banks. Room Select lists
  `map = bank*32 + room`. Choosing a room sets `5E2FC4 = 6427B0 = map` and `4D8C08 = 1`.
- Boss/shortcut table 0x4B0DD0 (verified dev anchors): Ermac Battle **0x6C**, Reptile Battle **0x90**, KMJ
  (Kitana/Mileena/Jade) Battle **0xC3**, Baraka Battle **0x0F**, Goro Battle **0x2F**, Scorpion Battle **0xA0**,
  Final Battle **0x49**, Start WuShi **0x67**, Start Evil Monastery **0xC0**, Start Tombs **0x1E**, Start Forest **0x80**.
- Entry `FUN_001417d8` (creates "FE Menu" 0x573B78) has **no code or data references** except .eh_frame, so no
  input reaches it. Getting there would need a function-pointer swap; that was not attempted. Poke #1 and #3 already
  cover everything it offers.

### 1c. Other dead dev code [code]
- `0x1C13A8`: an unlock-everything routine with no references. Its effect is poke #6.
- `0x4FEE68` (init 0xFFFFFFFF, read-only in code): "invulnerable player index" that the damage entry `FUN_00284fe0`
  checks: `if (actor->owner->playerIdx(+0x68) == [0x4FEE68]) return;`. P1 slot 0x5E6B40 has idx 1 (0x5E6BA8=1 in
  the state) and P2 slot 0x5E9F00 has idx 2. This gives poke #2.
- Global "nobody dies" switch: `*(0x501F6C)+0x340 != 0` clamps every actor at 1 HP. This includes enemies, so
  progress would block. Not recommended.

---------------------------------------------------------------------------------------------------------------
## 2. How a level is chosen and started [code]

- Map id = `bank*32 + room` (bank = id>>5). The descriptor pointer table is at **0x4E0F90** (256 slots; `*(0x5E2FC8)`),
  and descriptors are 0xB8 bytes at 0x4DC080..: +0 valid, +0x1C name, +0x20 desc, +0x24 resource id, +0x48 id.
  Lookup is `FUN_002f8438(0x5E2FC0, id)`.
- Globals: **0x5E2FC4** = current map, **0x6427B0** = requested/next map, **0x4D8C08** = entrance index for spawn
  (1 = map start; `FUN_001e2878(entrance,…)`), **0x4B0D9C** = 1 restores the checkpoint position instead,
  **0x4D8BFC/0x4D8C04** = pending map-change flag and map, **`*(0x4D8B80)`** = profile/save block
  (+0x88 game type 0/1/2, +0xC8 checkpoint map, +0xCC/+0xD0 P1/P2 char, +0xD4 difficulty).
- New game from the retail front end: `FUN_00131050` (single player: map 0x60, type 0) and `FUN_0012fe18`
  (Ko-op: map 0x60, type 1) set `5E2FC4=6427B0=0x60, 4D8C08=1`. State 9 entry `FUN_001d4800` then reads 0x5E2FC4
  and calls `FUN_001dee38(0x5E2FC0, map)`.
- In gameplay, the per-frame `FUN_001d6808` runs `if (*0x4D8BFC==1) { FUN_001e15a0(0x5E2FC0, *0x4D8C04); *0x4D8BFC=0; }`.
  `FUN_001e15a0` is the full in-place map loader that the debug Map Select also uses, so poke #1 equals the dev
  Map Select. Run-tested: 0xC0 shows the Evil Monastery intro cutscene within ~100 frames, and 0x0F shows the
  Baraka boss cutscene and then the fight (`notes/media/warp-c0-recomp.png`).
- Avoid ids that have no descriptor (empty slots), plus 0x61 and 0xB8 (`valid=0`) and 0xE0 ("Extra Map 1 crashes" [web]).
  Map 0x49 has special handling in the loader (final battle).

---------------------------------------------------------------------------------------------------------------
## 3. Level list (static table 0x4E0F90; 108 valid ids) [code]

Bank names come from the in-game text table (0x172+bank) [code]. The human/story names are [web/inferred].

| bank | text | ids present (hex) | dev anchors | human name (story) [web/inferred] |
|---|---|---|---|---|
| 0 | Tombs | 00-08, 0C, 0F, 11, 13, 14, 18, 19, 1E | start 1E, Baraka 0F | Soul Tombs ("Lost Tombs") |
| 1 | Wasteland | 21, 29, 2C-30 | Goro 2F | Wastelands |
| 2 | Foundry | 40-45, 47-4A | Final Battle 49 | (Kahn's) Foundry |
| 3 | Wu-Shi | 60, (61 invalid), 62-68, 6A-6C, 6E | new-game 60, start 67, Ermac 6C | Wu Shi Academy (60-66 = opening section [inferred]) |
| 4 | Forest | 80-82, 84, 87-89, 8E-90, 92, 93 | start 80, Reptile 90 | Living Forest |
| 5 | Netherrealm | A0; A1-A9 Survival 2-7/Vs 8/Practice 9/Survival 10; AA The Wastelands, AB Kombat Crag, AC The Pit, AD Dead Pool, AE Kombat Tomb, AF The Portal, B0 Goro's Lair, B1 The Tower, B2 Living Forest, B3 Warrior Shrine, B4 Rooftops, B5 Ice Falls, B6 Kahn's Arena, B7 Wu-shi Arena, (B8 Shokan Shrine invalid), B9 The Armory, BA-BC/BE/BF Survival 27-32 | Scorpion A0 | Netherealm (A0) and the Versus/Survival arenas (AA-B9) |
| 6 | Evil Monastery | C0-C7 | start C0, KMJ C3 | Evil Monastery |
| 7 | Extra | E0-EB | — | dev test maps (TCRF: E0 crashes, E8 has an exit to Soul Tombs) |

Story order [web/inferred, unverified]: opening (0x60) → Wu Shi Academy (0x67…, Ermac) → Evil Monastery (C0…, Kitana/Mileena/Jade C3)
→ Living Forest (80…, Reptile 90) → Soul Tombs (1E…, Baraka 0F) → Wastelands (21…, Goro 2F) → Netherealm (A0 Scorpion)
→ Foundry / final battle (49) and Kahn's Arena. The web list also names Forest 8A-8D, which are **not in the retail
table**; those were probably invented by its author. Full dump: `analysis/exports/debug/map_table.txt`.

---------------------------------------------------------------------------------------------------------------
## 4. Unlocks and the cheat-code system [code]

- Unlock bitmap: **0x5D8280-0x5D82BF**, bit n = byte 0x5D8280+n/8, bit n%8 (mask table 0x4D9828 is 1<<i).
  - bits 0x00-0x5A: characters (id = text 0x67C+id; e.g. 52 Scorpion, 53 Baraka, 54 Reptile, 58 Sub-Zero, 59 Kitana,
    5A Johnny Cage; default 0,1 = Liu Kang, Kung Lao).
  - 0x5C+i (i<8, `FUN_001c1a70`; game completion sets i=5), 0x65+i (i<0x40), 0xA6+i (i<0xB0, `FUN_001c1b20`),
    0x157+i (i<0x10, `FUN_001c1b78`), 0x168+i (i<0xF, Versus arenas; 0-5 unlocked by default). Script commands
    unlockmap/char/movie/artwork/photos map onto these setters (0x1DDF90/0x1DDFC8/0x1DE000/0x1DE038/0x1DE070)
    [inferred from registration order].
  - Flags: **0x5D82B0** MK II arcade, **0x5D82B4** Sub-Zero story, **0x5D82B8** Scorpion story, **0x5D82BC** set
    when the game is finished as Scorpion/Sub-Zero (`FUN_001d3430`; read by the front end, exact meaning unknown).
  - Bitmap contents observed in f6900.state: 5D8280=3, 5D8288=30000000, 5D828C=C (the defaults from `FUN_001c15f0`).
- **PxCheats** (`FUN_00316f58` InitSystem(0x6FA600, 3 cheats, 10-entry buffer, 60-frame timeout, hold-mask 0x0001=L2)).
  It runs in `FUN_00129180` while the top front-end screen is 0x5CA278 (main menu [web]). Hold **L2**, then press 7
  buttons with gaps under 60 frames. The cheat fires on the 7th press, with a confirmation sound:

  | cheat | sequence (seq table) | callback | effect |
  |---|---|---|---|
  | Scorpion | □ Up L1 R1 Left Right □ (0x4D98B8) | 0x1D98D8 | unlock char 0x52 + `5D82B8=1` |
  | Sub-Zero | □ Down Up L1 L1 Up □ (0x4D98C8) | 0x1D9908 | unlock char 0x58 + `5D82B4=1` |
  | MK II | □ Up Down **Right Left** R2 □ (0x4D98D8) | 0x1C1BD0 | `5D82B0=1` |

  The decoded sequences settle the web's Up/Down and Left/Right disagreements (code: Down-before-Up for Sub-Zero,
  Right-before-Left for MK II). Not run-tested yet.

---------------------------------------------------------------------------------------------------------------
## 5. Suggested input scripts (ps2run `--press frame:btn[+btn][:frames]`; overlapping presses are OR'd)

**A. Debug menu → Map Select from a gameplay state** [recomp-tested from f6900.state + poke #3]:
```
--press 7300:select        # pause menu: Continue / Debug Menu / Exit Game
--press 7360:down
--press 7400:cross         # Debug Menu: Reload Level, Map Select, Save Menu, God Mode On, P1/P2 Fatality, Warp Player
--press 7480:down
--press 7520:cross         # Map Select → room list of current level (△ = back to level list)
```
In f6900 the pause menu had no "Message History" entry. If it is present, add one more `down` before the first `cross`.
△ to get from the room list back to the level list comes from reading the code; it has not been run-tested.

**B. Cheat codes at the main menu** (M = first frame the main menu accepts input; read it from `--frames-dir`):
```
--press M:l2:150
--press M+15:square --press M+30:up --press M+45:l1 --press M+60:r1 --press M+75:left --press M+90:right --press M+105:square   # Scorpion
```
For Sub-Zero use square, down, up, l1, l1, up, square. For MK II use square, up, down, right, left, r2, square.
Each needs its own L2 hold.

**C. Coverage loop per map (preferred for M5):** start from the gameplay state, apply `poke_state.py <state> <out>
4d8c04=<id> 4d8c08=1 4b0d9c=0 4d8bfc=1 4fee68=1`, then run `explore_from.sh <out> mash.args <frames>`. Repeat for every
id in §3. Entrance n of a map: `4d8c08=n` (the debug Warp Player list shows which n exist).

---------------------------------------------------------------------------------------------------------------
## 6. Web facts not re-verified
- TCRF debug-menu code `204C6FE0 0000019F / 204C6FE4 001AAE80`. Verified in code and the recomp (§1a).
- MKSMHook (ermaccer) uses entry[0] (0x4C6FD8, Continue) for the same trick. OGmidway/mksm-recomp has a
  prototype-map-derived symbol set (e.g. DebugMenuUpdate 0x1A88D8, gMenuSystem 0x5D1DE0); every one I checked matches.
- TCRF: debug Extra maps 1-12 descriptions, the hidden Survival mode via Foundry barrels, MK II debug byte (a code
  patch, so N/A here).
- PCSX2 CRC: the web lists 455DD546, and our PCSX2 savestate name says 5C8A2D7F. The addresses match our ELF
  byte-for-byte (0x4C6FE0 held {1A5, 1AA630} as TCRF expects), so it is the same build.
