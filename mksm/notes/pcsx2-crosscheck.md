# PCSX2 cross-check: memory-card round trip and the two open [?] visual items (2026-10-16)

Oracle: PCSX2 2.9.45, headless (Xvfb :79, software GS = Renderer 13, SPU2 Backend Null + muted), isolated copy of
`oracle/pcsx2-data` in `logs/xc/pcsx2-cfg` (its own memcards, savestates, snaps; PINE slot 28079). `~/.config/PCSX2`
was not touched. Recomp: `wt/black/build/native-mksm/ps2run` (c496f55 = main + VU0 flags + SQRT fixes), headless, silent.
Run artifacts: `logs/xc/` (cards, run logs, PCSX2 logs, raw screenshots).

## Verdicts

| Item | Verdict | Evidence |
|---|---|---|
| 1a recomp save → PCSX2 load | **PASS** | `media/xc-save-recomp-to-pcsx2.png` |
| 1b PCSX2 save → recomp load | **PASS** | `media/xc-recomp-loads-pcsx2-save.png`, `media/xc-pcsx2-save-c0.png` |
| 1c structural card diff | **identical layout**; one PCSX2-side quirk (page 1, see below) | `logs/xc/cards/*.ps2mc.txt` |
| 2a map 0x14 pause panel shows the font sheet | **INCONCLUSIVE**: not reproduced in PCSX2, and the recomp trigger is not the input I replayed (see below) | `media/xc-m14-recomp-fontsheet.png`, `media/xc-m14-pcsx2-tabs.png`, `media/xc-m14-pcsx2-togglemap.png` |
| 2b Netherrealm double "LOADING" | **NOT RUN** (out of time) | — |
| 3 gameplay frames side by side (lighting/bloom, fog, particles, HUD) | **NOT RUN** (out of time) | — |

No emulation bug found, so there is no fix branch.

## 1a. Recomp save → PCSX2

- The recomp save was made from `logs/states/savemenu-f8690.state`, with a card copied from `logs/modes/cards/golden-boot.ps2`
  (the card that state was made with), plus `--press 8700:cross`. Slot 1 = "LIU KANG / GORO'S LAIR / 0% / 0H 0M".
- The card was copied to `logs/xc/pcsx2-cfg/memcards/xc-recomp.ps2`, and `Slot1_Filename = xc-recomp.ps2` was set in the isolated ini only.
- PCSX2 was cold-booted (BIOS + fastboot). Autosave notice → ✕ → "Loading data" (it read the recomp profile; the brightness
  screen is skipped, as on the recomp) → title → Start → Load Game. The list shows **LIU KANG, Goro's Lair, 0%, 0H 0M** → Yes.
- **Result:** both emulators start the story intro FMV on map 0x60 with identical RAM. PINE showed map `0x60`, P1 pos
  (−2196, −929, 472), profile ptr `0xC29680`. The recomp loading the same card (`PS2_WATCH`) showed `5E2FC4=0x60`, pos
  `C5093E66 C46853D7 43EC2A40` = (−2195.9, −929.3, 472.3), `4D8B80=0xC29680`.
  A 0%-progress save restarts the story in both emulators.

## 1b. PCSX2 save → recomp

- In PCSX2: state `logs/black/pcsx2/pc_0c.p2s`, with slot 1 = a fresh **unformatted** card `xc-pcsx2.ps2`. PINE pokes
  `4fee68=1 4c6fe0=19f 4c6fe4=1aae80 4d8c04=c0 4d8c08=1 4b0d9c=0 4d8bfc=1` (warp to C0 + debug menu). After the C0 intro
  cutscene, the inputs were: Select → Debug Menu → Save Menu.
  - "No MKSM save data … create?" → Yes;
  - "unformatted, format?" → Yes → Yes → "Format Successful";
  - Save Game slot 1 = **LIU KANG / MONASTERY / 1% / 0H 5M**.
- The recomp then booted from power-on with a copy of that card, using the load4 input script. Load Game lists **LIU KANG, Monastery, 1%, 0H 5M**.
  After Yes, it is in C0 gameplay (`5E2FC4=0xC0`, frame counter running) at the brazier spot where PCSX2 saved.
- Card copy: `logs/xc/cards/pc-c0.ps2` (not committed).

## 1c. Structural diff (`ps2mc.py -v --extract`)

The cards are `logs/xc/cards/rc-save.ps2` (recomp-formatted) and `logs/xc/cards/pc-c0.ps2` (formatted by the game's MCMAN on PCSX2).

- **Identical:**
  - superblock: v1.2.0.0, 8192 clusters, alloc_offset 41, alloc_end 8135, ifc [8], backup blocks 1023/1022, type 2, flags 0x2b;
  - FAT: indirect cluster 8, FAT clusters 9–40, 275 allocated, 5 chain ends;
  - directory tree: `BASLUS-21087/` mode 0x8427, with three files of mode 0x8497 at the same clusters:
    - `icon.sys` 964 B at cluster 4;
    - `game.icn` 75736 B at clusters 5–78;
    - `BASLUS-21087` 198876 B at clusters 80–274;
  - 656 written pages.
- **icon.sys and game.icn are byte-identical** (sha1 `98719299…` and `b539acc0…`). The icon.sys title is "Mortal Kombat / Shaolin Monks", and its list, copy and delete icons all point to game.icn.
- **Differences:**
  - Timestamps. The recomp uses host time in JST (PS2 convention); PCSX2 uses the RTC from the savestate.
  - The save payload, because they are different saves.
  - **PCSX2 card, page 1:** it has 8 bytes `4b ab 47 22 1f 64 f7 ba` at offset 0 with stale ECC (stored = ECC of an erased
    chunk), so `ps2mc.py` reports 1 ECC error. The recomp card's page 1 is all 0xFF with valid ECC. The PCSX2 side writes
    this page raw, bypassing MCMAN's ECC. It is harmless: the recomp's LLE MCMAN loaded that card without complaint.
    It is not a recomp issue.

## 2a. Map 0x14 pause panel: font sheet

**Recomp** (`logs/states/m14-f11100.state` + `sweep/pass1/inputs/14.args`, every frame 11101–11260):
- L1 at 11127 shows Main at once, with the old Soul Tombs map image but the label "Goro's Lair".
- R1 at 11161 goes to Moves.
- **L1 at 11176: the panel shows the font atlas from ≈11179 to ≈11207 (≈28 frames).** After that a *different* map image
  appears: the Goro's Lair area map.

So the font sheet shows while the game swaps the panel's level-map texture: the panel quad is drawn with the TEX0 of
the slot that the new map is still streaming into.

**PCSX2** (0x14 warp from pc_0c, Liu Kang, label "Soul Tombs"):
- R1→L1 15 frames apart, captured at 60 fps;
- L1/R1/L1 with the recomp's spacing;
- ✕ Toggle Map.

In all three the map draws within 1–2 frames and the font sheet never appears. **But in PCSX2 the label already matched
the resident map, so no map-texture reload happened, and the recomp trigger was not reproduced.** The recomp state is
in a different profile state ("Goro's Lair" label from the g7600 lineage), which made the swap happen.

Still needed for a verdict: put PCSX2 into the same condition. Either get PCSX2's profile to "Goro's Lair" (load the 1a
recomp card, then warp to 0x14), or transplant `m14-f11100` RAM via PCSX2 pokes. Then do the R1/L1 sequence and take a
GS dump (Shift+F8) on the font frames to compare TEX0.TBP0.

Likely AUTHENTIC, since the game writes that TEX0 itself, but this is not verified.

## Commands

```
X=$P/logs/xc   # helper scripts there: pcsx2_xc.sh (Xvfb :79 + isolated cfg), rrun.sh (headless ps2run in systemd scope), shot.sh
# 1a recomp save
cp logs/modes/cards/golden-boot.ps2 $X/cards/rc-save.ps2
$X/rrun.sh save-rc logs/states/savemenu-f8690.state $X/cards/rc-save.ps2 9400 50 --press 8700:cross
# PCSX2 load (Slot1_Filename = xc-recomp.ps2 in $X/pcsx2-cfg/data/PCSX2/inis/PCSX2.ini)
systemd-run --user --scope -p MemoryMax=3G -p MemorySwapMax=0 -- $X/pcsx2_xc.sh &
DISPLAY=:79 xkey key k 150; … Return; Down Down Down; k; k; Down; k     # notice, title, Load Game, slot 1, Yes
# recomp reference / 1b load (load4 inputs)
PS2_WATCH="5E2FC4,4;5E0800,4;5E6BC0,C;4D8B80,4" PS2_WATCH_OUT=$X/runs/load-rc.w PS2_WATCH_EVERY=50 \
  $X/rrun.sh load-rc - <card copy> 5200 20 --press 200:cross --press 400:cross --press 700:cross --press 1400:start \
  --press 1620:down --press 1660:down --press 1700:down --press 1760:cross --press 2400:cross --press 2500:down --press 2560:cross
# 1b PCSX2 save: Slot1 = fresh copy of oracle/memcards/Mcd001.ps2; -statefile logs/black/pcsx2/pc_0c.p2s; PINE_SLOT=28079 pine.py write32 …
# 1c
python3 -I tools/scripts/ps2mc.py $X/cards/{rc-save,pc-c0}.ps2 -v --extract /tmp/xc/ex-…
# 2a recomp
$X/rrun.sh m14 logs/states/m14-f11100.state <unformatted card> 11260 1 $(cat sweep/pass1/inputs/14.args)
# 2a PCSX2: warp 4d8c04=14 4d8c08=1 4b0d9c=0 4d8bfc=1 via PINE, savestate slot 3, START, then
ffmpeg -f x11grab -framerate 60 -video_size 640x480 -i :79 -t 3 -c:v ffv1 cap.mkv & xkey key e 100; sleep .15; xkey key q 100
```
