# End-game content check (FMV gallery, final battle + ending, Kontent)

Date 2026-10-16. Build: `ps2-web-recomp/build/native-mksm/ps2run` (built 2026-10-15 20:20, i.e. main before the
SQRT.S merge 470bffe). All runs headless/silent, one ps2run at a time, MemoryMax=3G scope.
Run wrapper: `logs/endgame/run.sh <name> <state|-> <frames> [frame_every] -- <ps2run args>` (output in
`logs/endgame/runs/<name>/{frames,run.log}`). Helpers in `logs/endgame/py/` (pos.py = actor positions/HP from a
state, peek_state.py, ramdiff.py, avcheck.py = audio-envelope match vs. the ffmpeg-decoded SFD, vcheck.py =
frame-vs-reference correlation, ctl2.py = closed-loop boss-fight bot, finish.py = boss finish-state check).
Paths below are relative to `$P` unless they start with `runs/`, `states/`, `py/` (= `logs/endgame/...`).

## Summary

| item | verdict | key frames / evidence |
|---|---|---|
| FMV gallery: 6 entries (ESRB+BLITZ, ESRB+GAUNTLET, OPENING, END006, END011, FINAL) + MIDWAY at boot; picture, audio, no halt, return to gallery | **PASS** (8/8 SFDs) | §1, `media/endgame-movies.png`, `media/endgame-movies-gallery.png` |
| Final battle 0x49 as Liu Kang: Shang Tsung fatality | **PASS** (real hits + real fatality input; boss HP capped to 20, God Mode via debug menu) | f14400 FINISHABLE, code accepted f14690, FATALITY f15650; `media/endgame-lk-shang-fatality.png` |
| … Kintaro fatality | **PASS** (same cheats) | FINISHABLE f23040, code accepted f23190–23280, cinematic to f25500 |
| … Shao Kahn fatality → `finalvictory` | **NOT DONE** (finish window reached at f30922, stunner missed; deadline) | §2b step 9 |
| Ending: FINAL.SFD → credits → save prompt → format/autosave → title | **PASS via flag poke** `0x4D8B88=1` (= what `finalvictory` writes); not yet from a real Kahn kill | f13594 movie, f22500 credits, f34600 save prompt, ~f37500 title |
| END movie per character | Liu Kang: FINAL.SFD (observed). All characters: FINAL.SFD (static, table 0x4D3A10/0x4D3BA0). END006/END011 are Wu-Shi story movies | §2a |
| Kung Lao final battle + ending | **NOT RUN** | — |
| Kontent galleries (Arenas 64, Concept Art 176, Photos 16, Suffering Z dialog, Kredits) | **PASS** | §3a, `media/endgame-kontent-galleries.png` |
| Versus with unlocked characters | Scorpion **PASS** (round won); Sub-Zero **PARTIAL** (fights, no round end); Kitana **PASS-functional** (combos land, round not finished in 5900 frames); Johnny Cage, Reptile, Baraka **NOT RUN** | §3b |

**Bug found (emulation, suspected black-maps instance):** on 0x49, P1 *and bosses* knocked off the dais fall through
the arena floor at most spots (§2d). For P1 that is a death (or an endless fall with the invulnerability poke); for a
boss it frees the slot and **softlocks the final battle**. With normal play this blocks finishing the game whenever a
ring-out happens. Not fixed (generic Havok ray bug, owned by `fix/black-maps`).

**Invulnerability (`4FEE68=1`) is unusable for this fight**: it does not stop grabs/throws, and thrown P1 falls
through the floor (prior agent's fb0–fb3 attempts). The previous ending states were reached by poking `0x4D8B88=1`.

New states in `logs/states/`: `final49-lk-godmode-mortal-f14100`, `final49-lk-shang-finishable-f14400`,
`final49-lk-kintaro-fight-f21000`, `final49-lk-kahn-finishable-f30922`, `versus-csel-unlocked-f1890`
(plus the prior agent's `final49-lk-invuln-f13500`, `lk-ending-credits-f22500`, `lk-ending-saveprompt-f34600`,
`lk-after-ending-title-f38400`, `menu-unlock-f1600`, `kontent-unlock-f1940`, `movies-gallery-f2290`,
`kunglao-story-f7700`, `scorpion-story-f7600-paused`).

## 1. FMV gallery (Kontent → Movies) — PASS

Setup (all unlocks = debug-facilities poke #6, applied to the main-menu state):
```
python3 tools/scripts/poke_state.py logs/states/menu-f1600.state logs/states/menu-unlock-f1600.state \
  5d8288=f71c0000 5d828c=ffffffef 5d8290=ffffffff 5d8294=ffffffdf 5d8298=ffffffff 5d829c=ffffffff \
  5d82a0=ffffffff 5d82a4=ffffffff 5d82a8=ffffffff 5d82ac=007fff7f 5d82b0=1 5d82b4=1 5d82b8=1 5d82bc=1
# main menu -> Kontent (state saved at 1940) -> Movies (state saved at 2290)
run.sh k1 logs/states/menu-unlock-f1600.state 2300 25 -- --press 1620:down:4 --press 1650:down:4 --press 1680:down:4 \
  --press 1710:down:4 --press 1740:down:4 --press 1800:cross:4 --save-state 1940:logs/states/kontent-unlock-f1940.state
run.sh k2 logs/states/kontent-unlock-f1940.state 2300 -- --press 1950:down:4 --press 1980:down:4 --press 2040:cross:4 \
  --save-state 2290:logs/states/movies-gallery-f2290.state
```
The gallery shows **6 entries** ("Movies -- n / 6"; the 7th/8th frames stay empty even with every unlock bit set).
Per entry (memcard `logs/endgame/mc/mc-gallery.ps2`, copied per run):
```
PS2_DUMP_AUDIO=mvN.wav MC_FROM=logs/endgame/mc/mc-gallery.ps2 run.sh mvN logs/states/movies-gallery-f2290.state 17300 60 -- <nav>
  slot 1: --press 2310:cross:4                        slot 4: --press 2310:right:4 --press 2330:right:4 --press 2350:right:4 --press 2390:cross:4
  slot 2: --press 2310:right:4 --press 2350:cross:4   slot 5: --press 2310:down:4 --press 2350:cross:4
  slot 3: --press 2310:right:4 --press 2330:right:4 --press 2370:cross:4    slot 6: --press 2310:down:4 --press 2330:right:4 --press 2370:cross:4
```
MIDWAY is not a gallery entry: it is the boot logo (`run.sh boot - 1500 20 -- --press 200:cross:4 --press 400:cross:4`).
ESRB is the "rating pending" card the game plays in front of each of the two trailers.

Verification: picture = 128×96 grey-level correlation of emulator frames (every 10 s, movie rectangle cropped) against
the same SFD decoded by ffmpeg (`vcheck.py`), plus side-by-side stills; audio = log-RMS envelope match against the
ffmpeg-decoded SFD audio (`avcheck.py`, 20 ms hops) and RMS inside the matched window. "Back" = first sampled frame
where the gallery is on screen again with the cursor on the same entry (60-frame sampling). No run halted (all
`[ee] halted: frame limit reached`, exit 0).

| SFD | reached via | movie frames (audio match) | picture corr (median) | audio corr | RMS run / ref (dBFS) | back in gallery | verdict |
|---|---|---|---|---|---|---|---|
| MIDWAY | boot logo | 127–427 | 0.998 | 0.982 | −17.2 / −17.6 | → title (boot flow) | PASS |
| ESRB | slot 1 + slot 2 prefix | 2366–2585 (slot 1) | 0.999 | 0.977 | −18.3 / −18.8 | (continues into trailer) | PASS |
| BLITZ | slot 1 | 2663–8130 (91.1 s) | 0.998 | 0.940 | −17.8 / −18.0 | f8160, cursor 1/6 | PASS |
| GAUNTLET | slot 2 | 2703–5661 (49.3 s) | 0.998 | 0.948 | −23.7 / −24.1 | f5700, cursor 2/6 | PASS |
| OPENING | slot 3 | 2420–16205 (229.8 s) | 0.999 | 0.987 | −18.5 / −18.8 | f16260, cursor 3/6 | PASS |
| END006 | slot 4 | 2440–~16380 (see note) | 0.996 | 0.906 | −18.5 / −18.9 | f16440, cursor 4/6 | PASS |
| END011 | slot 5 | 2399–8127 (95.5 s) | 0.998 | 0.970 | −19.0 / −19.5 | f8220, cursor 5/6 | PASS |
| FINAL | slot 6 | 2421–11112 (144.9 s) | 0.997 | 0.959 | −21.9 / −22.4 | f11160, cursor 6/6 | PASS |

Note END006: the gallery returns ~6 s before the SFD's nominal end. The SFD's last ~8 s (t ≥ 232 s) are black video and
silent audio (ref RMS −54…−65 dBFS from t = 232 s), and the game leaves 1 s into that tail. All content plays. Not
compared with PCSX2; low priority.

Evidence: `notes/media/endgame-movies.png` (recomp frame vs ffmpeg frame, 2 per movie),
`notes/media/endgame-movies-gallery.png` (per slot: start, two mid frames, last frame, gallery with cursor back on the
slot). Raw logs: `logs/endgame/prior/{boot,mv1..mv6,k1,k2}/run.log`, `logs/endgame/vcheck-summary.txt`.
(These runs were made by the previous agent on the same binary; I re-derived every number above from its frames/WAVs.)

## 2. Final battle (map 0x49) and ending

### 2a. How the end is triggered (static RE, subagent; addresses verified against the states)
- Everything happens on map 0x49 (no map change). Script order: `_d_intro` (Shang Tsung intro) → Shang Tsung fight
  (he morphs into Sub-Zero 0x45, Johnny Cage 0x47, Reptile 0x3B; the forms share his stats) → **fatality on Shang**
  (`_d_shangfatal` → `_d_shngfat1`: Kintaro 0x3A spawns) → **fatality on Kintaro** (`_d_kintarofatal` → `_d_kinfat1`:
  Shao Kahn intro) → Shao Kahn 0x40 (phase-2 cinematic `_d_k_1to2`) → **fatality on Kahn** → trigger `_d_shaokahnfata`
  (`fatalitystream` && `charactertype==0x40`) → script action `finalvictory` (Execute FUN_001dd900:
  `0x4D8B88 = 1`, `FUN_0037a868(0x5E0FC8, 3, 0)`) → top-level state 0x13 (FUN_001d3430: ending FMV + unlocks) → 0x14
  (credits). So the ending needs a **fatality**, not just a KO. Char 0x48 seen in the arena is Raiden (cutscene actor).
- Boss fatality: when the boss is in its finish state (HP > 0, "FINISH HIM"), any fatality-start move opens a
  200-frame window; the last 5 new D-pad/face presses must equal the boss's code (same for Liu Kang and Kung Lao,
  no meter/level needed): Shang Tsung `← ↑ ↑ ↓ ○`, Kintaro `↓ ← ↓ → ○`, Shao Kahn `→ ← ↑ ↑ ○`. × cancels, shoulder
  buttons clear the buffer.
- Ending movie: FMV table 0x4D3A10 (0 MIDWAY, 1 OPENING, 2 FINAL, 3 END006, 4 END011, 5 ESRB, 6 BLITZ, 7 GAUNTLET);
  the ending record plays **FINAL.SFD for every character**. END006/END011 are *not* endings: FUN_001e1390 plays
  END006 on the first move 0x65→0x67 and END011 on 0x6A→0x6B (Wu-Shi rooms 6 and 11).
- FUN_001d3430 also unlocks: Liu Kang → Scorpion story flag 0x5D82B8; Kung Lao → Sub-Zero story flag 0x5D82B4;
  Scorpion/Sub-Zero → 0x5D82BC; all → unlock bit 0x61.

## 3. Other Kontent

### 3a. Galleries — PASS
From `logs/states/kontent-unlock-f1940.state` (Kontent menu, every unlock set), memcard `mc-gallery.ps2`. Each run
opens the gallery, views item 1, steps right and views item 2, pages with R1 and views item 9, then backs out with △.
```
nav: Arenas = (none), Concept Art = down×1, Photos = down×3, Suffering Z Demo = down×4, Kredits = down×6 (30-frame steps from 1950, cross 20 later)
run.sh ko-<g> logs/states/kontent-unlock-f1940.state 3400 25 -- <nav> --press 2250:cross:4 --press 2400:triangle:4 \
  --press 2470:right:4 --press 2520:cross:4 --press 2670:triangle:4 --press 2750:r1:4 --press 2850:cross:4 \
  --press 3000:triangle:4 --press 3100:triangle:4          # Arenas used the same pattern 50 frames earlier
run.sh ko-kredits logs/states/kontent-unlock-f1940.state 6000 50 -- <down×6> <cross>
```
| item | result | frames |
|---|---|---|
| Arenas | grid "Arenas -- 1/64", items 1, 2, 9 shown full screen, back to Kontent | 2050 grid, 2250/2500/2850 items, 3150 Kontent |
| Concept Art | "Concept -- 1/176", items 1, 2, 9 render (parchment sketches) | 2100, 2300/2550/2900 |
| Photos | "Photos -- 1/16", items 1, 2, 9 render | 2150, 2300/2550/2900 |
| Suffering Z Demo | "Play Game Demo? No/Yes" dialog; No returns (Yes not tried: it would load another executable) | 2150 |
| Kredits | scrolling credits render and scroll for 4000+ frames | 2250–6000 |
| Mortal Kombat II | not re-tested here (covered by the modes work: `notes/media/modes-mk2-*.png`) | — |
| Movies | §1 | — |
No halts (exit 0, frame limit). Evidence: `notes/media/endgame-kontent-galleries.png`. Logs: `logs/endgame/runs/ko-*/`.

### 2b. Liu Kang run (real fight, shortened) — PARTIAL: Shang Tsung + Kintaro fatalities PASS, Shao Kahn fatality NOT reached, ending NOT re-verified from a real Kahn kill

Chain (all states and frames under `logs/endgame/`; `run.sh` = `logs/endgame/run.sh`):
1. `logs/states/final49-lk-invuln-f13500.state` (prior agent: `g7600.state` + `4d8bfc=1 4d8c04=49 4fee68=1`, run to 13500).
2. **Invulnerability off** (`4fee68=ffffffff`, see 2d for why) → `states/final49-lk-mortal-f13500.state`; no input to
   13680 → `states/c0.state`.
3. **God Mode via the retail debug menu** (poke #3 `4c6fe0=19f 4c6fe4=1aae80` → `states/gm0-f13680.state`), then
   `run.sh gm1 states/gm0-f13680.state 14101 10 -- --press 13690:select:4 --press 13740:down:4 --press 13770:cross:4
   --press 13800:down:4 --press 13820:down:4 --press 13840:down:4 --press 13870:cross:4 --press 13920:triangle:4
   --press 13970:triangle:4 --save-state 14100:states/gm1-f14100.state` (God Mode = all moves, health level 4,
   fatality level 3; HUD icon turns red).
4. **Shortening cheat:** Shang Tsung (both actor HPs) set to 20: `c098e8=14 c093a8=14` → `states/gm1lo-f14100.state`.
5. Real hits: `run.sh fh3 states/gm1lo-f14100.state 14401 10 -- <stick 128,255:2 + square/square/triangle/square/
   triangle/circle every 13 frames, 14103–14230> --save-state 14400:states/fh3.state` → the Sub-Zero form is KO'd
   (3 hits), Shang reverts and the script puts him in near-death: `py/finish.py states/fh3.state` →
   `s3 c0x3e hp1 fl0x400400 anim0x85/nd0x85 st6 FINISHABLE`.
6. **Shang Tsung fatality — PASS:** `run.sh ft2 states/fh3.state 15601 10 -- --stick 14402:128,255:22 --press 14426:l1:5
   --press 14560:left:4 --press 14572:up:4 --press 14584:up:4 --press 14596:down:4 --press 14608:circle:4
   --save-state 15600:states/ft2.state` → "FINISH HIM" + input icons (f14570), code accepted (f14690),
   `0x4ADFEC = 0x3E`, fatality cinematic f14730–15700 ("FATALITY" f15650). (Same input 130 frames earlier, before the
   prompt appears, is ignored and Shang recovers with HP 212 = max/4 — `runs/ft1`.)
7. No input 15600→21000 (`runs/k0,k1,k2`): Shao Kahn throne cutscene, Kintaro intro, Kintaro fight starts f20700
   (`states/k2-f21000.state`). EXP now 1500.
8. **Kintaro fatality — PASS:** bot `py/ctl2.py kin runs/kin/states/f21000.state 200 --boss-hp 20` (Kintaro capped at 20 HP,
   P1 HP refilled per 120-frame chunk; hits/knockback/finish are real). Kintaro FINISHABLE at f23040; L1 at 23049,
   ↓ ← ↓ → ○ accepted (FINISH HIM + icons f23190–23280), `0x4ADFEC = 0x3A`, fatality cinematic f23325–25500.
9. Shao Kahn intro cutscene f25500–~29900 (Raiden 0x48, Johnny Cage 0x47, 0x41 present), fight starts ~f30000
   (`runs/kahn`, Kahn capped at 20 HP). Kahn reached HP 1 / state 6 / near-death flag at f30922 (FINISHABLE by the
   static criteria; state saved as `logs/states/final49-lk-kahn-finishable-f30922.state`), but L1 at distance ~640 +
   → ← ↑ ↑ ○ did **not** open the fatality prompt (frames `runs/kahn/c30922-a0`): the stunner did not connect, and P1's
   slot+0x70 was 0x100 at that moment (the fatality-start check FUN_00121b28 wants 0). The window then expired and
   Kahn recovered to HP 307 ≈ max/4 (f31365), exactly like Shang in `runs/ft1`. Not retried before the deadline.
   **Shao Kahn fatality, `finalvictory` and the ending from a real kill: NOT RUN.**
Evidence: `notes/media/endgame-lk-shang-fatality.png` (stunner hit, FINISH HIM prompt + accepted code, cinematic,
FATALITY, Kintaro intro, Kintaro fight).

### 2c. Ending sequence (FINAL.SFD → credits → save prompt → title) — PASS, but entered via the flag poke
The previous agent reached the ending by poking `0x4D8B88 = 1` into `fb-lk-f13500` (`logs/states/final49-lk-invuln-f13500`
+ `4d8b88=1`, no fight). That is exactly what `finalvictory` does (`0x4D8B88=1` + op 3), so it exercises the real
ending code path (state 0x13 → FINAL.SFD + unlocks → 0x14 credits) but not the Kahn fight.
- FINAL.SFD plays from f13594 (audio match corr 0.958, RMS −21.9 vs −22.4 dBFS ref), ends ~f22285 (`prior/e1`).
- Credits roll f22300–~34000 (`logs/states/lk-ending-credits-f22500.state`).
- Save prompt "No MKSM save data … create save data?" at f34600 (`logs/states/lk-ending-saveprompt-f34600.state`); Yes →
  format → "Autosaving" → **title "Press START"** at ~f37500 (`logs/states/lk-after-ending-title-f38400.state`).
  The written card `logs/endgame/mc/mc-lk-completed.ps2` holds BASLUS-21087 (icon.sys, game.icn, 198876-byte save).
- Repro: `run.sh e1 <fb-lk-victory = final49-lk-invuln-f13500 + 4d8b88=1> 45000 -- --save-state 22500:…`;
  `run.sh e3 logs/states/lk-ending-saveprompt-f34600.state 38500 -- --press 34900:down:4 --press 34960:cross:4
  --press 35200:down:4 --press 35260:cross:4 --press 35500:down:4 --press 35560:cross:4 --press 36600:cross:4
  --press 37200:cross:4 --save-state 38400:…` (logs: `logs/endgame/prior/e1..e3/run.log`).
- Which END movie per character: **static answer — every character gets FINAL.SFD** (END006/END011 are Wu-Shi story
  movies). Liu Kang observed: FINAL.SFD. **Kung Lao run: NOT RUN** (deadline).

### 2d. BUG (emulation, suspected black-maps instance): falling off the 0x49 dais falls through the arena floor
- Walking off the dais from `states/c0.state` (`--stick 13690:<dir>:200`, save 14000): south/north/east → P1 falls
  through the visible floor to y ≈ +20058 and dies (HP 0); west → stands on the lower floor at y = −2739. During fights
  P1 lands on the floor at some spots (y −1959 at (4567,−8688)) and falls at others ((5225,−7003), (1297,−13246), …).
- Same for bosses: in `runs/fbE` a hit launched Shang Tsung (HP 15) off the dais at f15750; he fell through the floor,
  his slot was freed, and the fight **softlocked** (no boss, no prompt, P1 idles; `runs/sl1` 17180→19200, START
  does nothing useful).
- With the debug invulnerability poke (`4FEE68=1`) P1 also gets thrown off and falls forever (y → 5–7 million; camera
  shows the arena from below: `notes/media/endgame-49-ringout-fall.png`); the invulnerability does not prevent throws.
  This is why the prior invulnerable runs never finished the fight.
- Fits notes/black-maps.md (position-dependent Havok ground-ray misses; 0x48 is already on that list). Not PCSX2-checked
  here. Workaround used: P1 HP refills + retry a chunk whenever P1 or a boss falls.

### 2e. Kung Lao — NOT RUN (deadline). `logs/states/kunglao-story-f7700.state` + warp pokes is the starting point.

### 3b. Versus with unlocked characters
State `logs/states/versus-csel-unlocked-f1890.state` (menu-unlock → `--pad2` down, down, cross → Character Select,
P1 cursor on Liu Kang). P1 roster order with Right: Liu Kang, Scorpion (1), Johnny Cage (2), Reptile (3), Baraka (4),
Kitana (5), Sub-Zero (6), Kung Lao (7). Script `logs/endgame/vs.sh <name> <rights> <end>`: P1 picks, P2 accepts Kung
Lao, default arena (The Rooftops), P1 walks right and mashes □ every 14 frames, P2 idle.
| character | result | frames |
|---|---|---|
| Scorpion | PASS (`media/endgame-versus.png`): loads arena, "ROUND 1" f3500, fight, "SCORPION WINS" f5700, round 2 starts f6100; no halt | `runs/vs-scorpion` |
| Sub-Zero | PARTIAL: selected, intro, "FIGHT!" f3700, Sub-Zero moves/attacks with ice effects, timer runs; the blind mash did not connect, so no round end by f5900; no halt | `runs/vs-subzero` |
| Kitana | PASS-functional: selected, intro, fight, multi-hit combos land (3/8/5 hits), Kung Lao's bar into red by f5900; round end not reached in the 5900-frame run; no halt | `runs/vs-kitana` |
| Johnny Cage, Reptile, Baraka | NOT RUN (deadline); same command with 2 / 3 / 4 rights | — |
Rooftops f4500 (Scorpion run): camera inside a green awning for a few frames — looks like authentic camera clipping,
not checked against PCSX2.

### 2d addendum (2026-10-16 12:06): fixed by the VU0 MAC-flag fix
The runs above used the pre-fix build (`build/native-mksm`, 10-15). Re-run on the fixed build (`wt/black`, = main d9b856e)
from `logs/endgame/states/c0.state` with `--stick 13690:<dir>:200` to 14600, PS2_WATCH as in black-maps.md: south, north
and east all stay grounded (g1, root y −4093) through 14600; none falls through to y ≈ +20058. Watch logs in
`logs/endgame/fixcheck/{south,north,east}.w`. The boss fall/softlock (Shang Tsung launched off the dais) is the same
raycast path and should be gone too, but was not re-run.
