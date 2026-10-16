# Finishers and game options check (MK:SM recomp)

Date 2026-10-16. Binary: `ps2-web-recomp/build/native-mksm/ps2run` (built 2026-10-15 20:20; lacks the VU0 MAC-flag fix
and has no `PS2_WATCH`). All runs headless and silent, one at a time, inside `systemd-run --scope MemoryMax=3G`.
Run wrapper: `logs/fo/run.sh <name> <state|-> <frames> [every] -- <ps2run args>`. Output goes to
`logs/fo/runs/<name>/{frames,run.log}`. Env vars pass through (`PS2_DUMP_AUDIO`, `PS2_DUMP_STEMS`, `PS2_PEEK`, `MC_FROM`).
Helpers: `logs/fo/mont.sh` (labelled montage), `logs/fo/py/wavcmp.py` (L/R RMS, correlation, max|L-R|),
`logs/fo/py/stems.py` (L/R identity per `PS2_DUMP_STEMS` pair), `logs/fo/py/negcorr.py` (phase-inverted windows).
Static RE came from two subagents. Their scratch is in `/tmp/claude-fo-re/` (finishers) and `/tmp/claude-fo-opt/` (options).

## Summary

| Item | Verdict | Evidence |
|---|---|---|
| Pause menu Moves list renders (MAIN/MOVES tabs, 7 categories) | PASS | `media/fo-moves-list.png`, run `pm2` f7780 |
| Fatalities page of the Moves list | PASS (renders); every entry reads "???" even after God Mode, see F3 | `god2` f8460 |
| Debug God Mode (fills fatality meter, level 3) | PASS | `god1` f7920 / f8060: the meter medallion turns red |
| Fatality stunner (L1) animation | PASS (plays, no halt) | `fat1` f7840–7860, `fat2` f8140–8460, `media/fo-stunner-attempts.png` |
| Fatality / Multality / Brutality per code, LK and KL | **NOT RUN / UNVERIFIED** (deadline). Codes were decoded statically (below) and match the web exactly. 3 scripted attempts fired no finisher (`0x5C3C98`=0): no enemy in range, then a tutorial box froze play on map 0x60 | `fat1`–`fat3` |
| Versus-mode fatality | NOT RUN | static notes only (§F2) |
| Widescreen 16:9 | **N/A**: the retail game has no widescreen option (strings unused). The host always presents 4:3 | §O1 |
| Audio Output Mono | **PASS**: every dry/ADMA stem is bit-identical L=R; only the reverb return differs, which real SPU2 reverb also does | §O2 |
| Audio Output Stereo / Surround / Digital | PASS (selectable, applied, no break). Surround phase-inversion is UNVERIFIED: no rear-panned voice in the test scene. Digital affects only movies (AC3) | §O2 |
| Music volume slider | **PASS**: music = core-1 ADMA stem; 0 → silent | §O3 |
| SFX volume slider | PASS: core-1 dry −5.3 dB, core-1 reverb −4.9 dB at 0; other voices unchanged | §O3 |
| Speech volume | NOT RUN (no speech in the test scene) | |
| Camera Control Normal/Inverted | PASS (menu toggles; persisted). Feel → human | `opt3` f2440 |
| Vibration | **N/A as an option**: the game has none. In gameplay the game itself disables rumble (see §O4). The host does forward rumble to SDL. Headless run not possible on this build | §O4 |
| Controller config / remap | **N/A**: not present in the retail menus ("Controller Config" text is unused) | §O1 |
| Options saved to memory card and reloaded on boot | **PASS** | `media/fo-options-persist.png`, §O5 |

## Finishers

### F1. How they work (static RE, [code] unless noted; not run-verified)
- **Stunner = L1** (move id 41 in the LK/KL move trees). It is allowed only when:
  - `0x4AD590 == 0`;
  - a finishable enemy is near (HP > 0 and `enemy+0xE6 == 0`);
  - the meter has at least 1 bar (400 of 1200), unless `0x513A00 == 0`.
- The stunner animation event 0x1ED opens a **200-frame input window** (`FUN_00127208`) and plays "Finish Him".
- Only newly pressed buttons count. × cancels (−0.25 bar). L1/L2/R1/R2 clear the buffer.
- Each code is 4 directions + 1 face button, on the absolute D-pad. A face button that matches nothing ends the window.
- Level gate: Fatality = 1 bar, Multality = 2, Brutality = 3.

| Char | Name | Kind | Code |
|---|---|---|---|
| LK | Shaolin Soccer (tutorial) | Fatality | ↓ ← ↑ → □ |
| LK | Bonebreak Combo | Fatality | ← ↑ ↑ → □ |
| LK | Fire/Kick Combo | Fatality | ← → ↓ ↓ □ |
| LK | Head Clap | Fatality | → ↑ → ↑ □ |
| LK | Giant Stomp | Fatality | ← ← ← ↑ □ |
| LK | Flipping Uppercut | Fatality | ↑ → ↓ ← □ |
| LK | Dragon | Fatality | ↓ → ← ← □ |
| LK | Arm Beating | Fatality | ↓ ← → ↑ □ (menu text 0x4A3 says ↓ → ↓ → □; the code table wins) |
| LK | Fire Trails | Multality | ↑ ↓ ↑ ↓ △ |
| LK | Dragons Fury | Multality | ← → ↑ ↑ △ |
| LK | Rage Mode | Brutality | → ↑ ↓ ↓ ○ |
| KL | Body Slice (tutorial) | Fatality | → → → → □ |
| KL | Mid Air Slice | Fatality | ↑ ↑ ↑ → □ |
| KL | Friendly Rabbit | Fatality | ↑ ↑ ↑ ↓ □ |
| KL | Arm Cutter | Fatality | ← → ← ↓ □ |
| KL | Head Toss | Fatality | ← → ← ← □ |
| KL | Many Chops | Fatality | ↑ ↑ ← ↑ □ |
| KL | Headache | Fatality | ↑ ↓ ↑ → □ |
| KL | Buzzsaw | Fatality | → → ↑ ↑ □ |
| KL | Rabbit Attack | Fatality | ← ↑ → → □ |
| KL | Tornado | Multality | ↑ → ↓ ← △ |
| KL | Hat Control | Multality (lvl 2) | ← → → ← △ |
| KL | Razor Edge | Brutality | ← ← ↑ ↑ ○ |

- Boss codes (any character):
  - Shang Tsung 0x3E: ← ↑ ↑ ↓ ○
  - Kintaro 0x3A: ↓ ← ↓ → ○
  - Shao Kahn 0x40: → ← ↑ ↑ ○
  - Others are in the subagent report: 0x34, 0x36–0x39, 0x3B, 0x42, 0x44.
- Tables are built at runtime: LK `0x5BB2B8`, KL `0x5BB8C8`. Records are 0x3C bytes at +0x30, buttons at +0x1C, length at +0x38.
- Menu glyphs: `{` ↑, `}` ↓, `<` ←, `>` →, `*` □, `~` △, `|` ○.

### F2. Pokes and RAM to verify (for the next run)
- Pokes. Re-poke between finishers: each success consumes bars, and death sets the meter to 0.
  - P1 level 3: `c2e260=3`
  - P1 meter full: `c2e238=44960000`
  - Any level, no meter needed: `513a00=0`
  - P2 versions: `c2e2c0`, `c2e298`
  - Ready-made states: `logs/states/fo-lk-fatpoke-g7600.state` (g7600 + these pokes + invulnerability) and
    `logs/states/fo-lk-godmode-meterfull-f8000.state` (debug God Mode applied).
- Success RAM:
  - `0x5C3C98`: successful-finisher count, +1 each
  - `0x5C3C9C[]` / `0x5C42DC`: distinct names performed and their count
  - `0x4AD584`: state (0 idle, 1 window, 2 Multality/Brutality move, 3 cinematic Fatality, 5 boss)
  - `0x5BB0C8`: level of the last finisher
  - EXP at `save+0x4BA4` = `0xC2E224`
  - enemy HP at `slot+0x210 → +0x398` (`logs/endgame/py/actors.py`)
- Versus: at "Do Fatality" the loser is dizzy at HP 1 and the winner's meter is set to 1 bar. So only level-1
  Fatalities are possible there: L1 stunner, then the same codes. Whether a CPU opponent is allowed was not determined.
- Repro of the one attempt: `logs/fo/run.sh fat1 logs/states/fo-lk-fatpoke-g7600.state 9800 20 -- $(cat logs/fo/fat1.args)`.
  - The stunner glow plays at f7840.
  - No enemy was near, so no window opened, and the D-pad toggled the minimap (f7900).
  - The stick then walked LK through a wall and out of the level (f8400+ black). That is the known
    ground-raycast/black-map bug fixed on main by the VU0 MAC-flag merge; this build predates it.
  - Next: use `wt/black` ps2run or a newer main build, warp to an enemy room, approach, L1, then the code.
- Attempts 2 and 3 warped to the Wu-Shi opening map 0x60, where enemies are present. State:
  `/tmp/claude-fo-fat60.state` = g7600 + `4d8c04=60 4d8c08=1 4b0d9c=0 4d8bfc=1 4fee68=1 c2e260=3 c2e238=44960000 513a00=0`.
  Args are in `logs/fo/fat2.args` and `fat3.args`.
  - The map loads ("Enemy Manipulation" loading tip). Enemies with glowing eyes walk in. The L1 stunner animation plays
    repeatedly with no halt (`fat2` f8140–8460).
  - Then a Raiden tutorial cutscene plays, and a tutorial box ("□ quick / △ launching / ○ power / R2 throws") stays up
    from about f9600 (`fat2`) / f11000 (`fat3`) to the end of the run, with LK frozen in place. My × presses did not
    dismiss it. It probably waits for the attacks it names to land on an enemy. Not triaged.
  - `0x5C3C98` stayed 0, so no finisher fired.
  - Saved state `logs/states/fo-lk-wushi60-fatpoke-f9400.state` is map 0x60 with the pokes, before the tutorial.
  - A better source for the next attempt is a mid-game room without tutorials (e.g. Evil Monastery 0xC1/0xC2), or
    `final49-lk-invuln-f13500.state` for the boss codes.
- Web cross-check (GameFAQs 39094/39113/39743, the PS2 manual, TCRF; raw material in `/tmp/claude-fo-web/`):
  - All 11 LK and 12 KL codes match the RAM tables.
  - Arm Beating (web "Arm Rip") and Rabbit Attack (web "Very Unfriendly Rabbit") are hidden fatalities.
  - The manual confirms L1 = Fatality attack / stunner. The finishing face button sets the tier: □ 1, △ 2, ○ 3.
  - Tiers are learned from story koins (Goro's Lair chandelier, Evil Monastery, Living Forest).

### F3. "???" in the Fatalities list
After God Mode the Moves → Fatalities page lists 8+ rows, all "???" with "???" descriptions (`god2` f8460–f9280).
- The list probably reveals a row only after that finisher has been performed (`0x5C3C9C[]` distinct-name list) or
  bought. In that case "???" is correct for a fresh save. [inferred]
- It is **not** the known font-substitution bug: the other menu text on the same page renders correctly.
- Human check: perform one finisher, then reopen the page; that row should show its name and code images.

## Options

### O1. What exists
| Menu | Items |
|---|---|
| Main menu → Options (Down ×4, ×) | Brightness (calibration screen); Audio: Music Volume, Sound Effects, Speech Volume, Mode (Mono/Stereo/Surround/Digital); Gameplay: Vs Rounds, Vs Match Time, Camera Control |
| In-game SELECT → Options | Music Volume, Sound Effects, Speech Volume, Audio Output, Brightness, Camera Control. × accepts and applies; △ reverts |
| START menu | MAIN (map + stats) / MOVES (L1/R1 switch tabs). No options |

- The unused strings are never referenced: Video Config, Widescreen, Progressive, Position, Contrast, Controller Config.
  The game has no vibration option and no remap. [code] Screenshot: `media/fo-options-menus.png`.
- So **widescreen cannot be tested**: the game has no 16:9 mode. A widescreen hack would need a projection patch.
  The host's display is fixed 4:3 (`gpu.cpp:930/1787`, `host/window.cpp:237`).

### O2. Audio Output (Mono / Stereo / Surround / Digital)
Repro (pause Options → Audio Output; base = no change; mono = Left):
```
MENU="--press 7620:select:4 --press 7680:down:4 --press 7720:cross:4 --press 7800:down:4 --press 7860:down:4 --press 7920:down:4 --press 8060:cross:4"
ATK=$(for f in $(seq 8200 40 9600); do printf -- '--press %d:square:4 ' $f; done)
PS2_DUMP_AUDIO=$PWD/a.wav PS2_DUMP_STEMS=$PWD/s.wav logs/fo/run.sh au-smono logs/states/g7600.state 9700 50 -- $MENU --press 7980:left:4 $ATK
```
Surround = `--press 7980:right:4`; Digital = two rights. The label crops are in `media/fo-audio-labels.png`.

| Mode | Main WAV L/R corr (10–35 s) | Dry stems c0/c1 identical L=R | Reverb stems |
|---|---|---|---|
| Stereo (`au-sbase`) | +0.71 | 52% / 46% (corr 0.88 / 0.96) | independent |
| **Mono** (`au-smono`) | +0.94, L and R RMS equal to 0.1 dB | **100% / 100%; ADMA stems 100% too** | independent (corr −0.03) |
| Surround (`au-ssurr`) | +0.69 | 46% / 52%, no anti-phase windows | — |
| Digital (`au-sdig`) | +0.69 | same as stereo | — |

- Mono is applied by the game's IOP driver SNDFI, which sets L = R = (L+R)/2 per voice and centres the pan. The dump
  shows exactly that.
- The remaining L≠R in the main WAV is the SPU2 reverb return. On hardware it is also stereo, because the reverb
  algorithm has separate L/R taps. So "mono ≠ identical WAV channels" is expected, not a bug.
- Surround negates channel volumes only for rear-panned voices. The test scene had none, so it is unverified.
- Digital only switches movies to AC3 over S/PDIF (not emulated).
- The assertion "mono = identical L/R" holds for every voice and stream.
- Do the volume and mode choices apply only on × (Accept)? Yes: with △ they were reverted (`au-r1/r2/l1` showed no change).

### O3. Volume sliders (pause Options, 10 × Left then ×)
| Run | Change vs `au-sbase` |
|---|---|
| `au-mus0` (Music 0) | core-1 ADMA (music stream) **silent**; total −1 dB |
| `au-sfx0` (SFX 0) | core-1 dry RMS 1222 → 673 (−5.2 dB), core-1 reverb 1830 → 1040; core-0 voices and music unchanged |

- In the pause menu the sliders draw as 8 dashes (`- - - - - - - -`), and fewer dashes at lower values.
- The FE Audio page draws them as dragon icons.
- Whether the dash look is the real art or the known menu-font substitution should be checked against PCSX2.
  Cosmetic either way.

### O4. Vibration / rumble
- Host: `host/window.cpp:124-139` already forwards to SDL with `SDL_GameControllerRumble`.
  - Big motor 0–255 → low-frequency motor (sqrt curve); small on/off → high-frequency motor; 200 ms, refreshed every 100 ms.
  - The SIO2 pad emulation decodes command 0x42 with the 0x4D actuator mapping (`runtime/src/iop/sio2.cpp:111-153`).
  - So the fear that the host never forwards rumble is **false**.
- Game [code, not run]:
  - libpad `SetActDirect` is called from a per-frame motor task (`FUN_002126D8`). It is gated by the port mask `0x651EC4`.
  - Boot sets the mask to 3. Gameplay entry `FUN_001D4800` clears it (at `0x1D4844`). Its only setter, `FUN_00212CC8`, has no callers.
  - So retail MK:SM sends **no rumble in gameplay**, even though hit and animation code requests it.
    The same would happen on PCSX2 and real hardware.
  - Enabling it for testing: poke `651ec4=3` (and `651ec0=1` for the big motor).
- Headless observation was not possible: this build has no `PS2_WATCH` and no pad trace, and SDL needs a window.
  The two runs `rb0` (no poke) and `rb1` (poke) ran clean to f9000.
- A `PS2_TRACE_PAD` patch sketch (not applied, not built) is in `/tmp/claude-fo-opt/b/rumble-trace.diff`.
- **Human:** with a real pad and `--window`, confirm there is no rumble in normal play; optionally confirm rumble with the poke.

### O5. Persistence to memory card — PASS
1. `MC=logs/fo/mc/mc-opt-saved.ps2 MC_FROM=logs/fo/mc/mc-lk.ps2 logs/fo/run.sh mc2 logs/states/menu-f1600.state 4800 20 -- $(cat logs/fo/mc2.args) --press 3560:down:4 --press 3620:cross:4`
   - Main menu Options: Music −3 steps, Mode → Mono, Camera → Inverted.
   - △ brings up "Save option setting to memory card?". Choose Yes; then "Data has changed. Overwrite?" Yes. Saving at f3700.
2. The save file `BASLUS-21087` has the options block at file +0x44 (the same layout as RAM 0x5C3C80).
   - Before: music 0.75, output 1, camera 0.
   - After: music 0.45 (`6566e63e`), output **0 (Mono)**, camera **1**.
3. Power-on boot with that card:
   `MC_FROM=logs/fo/mc/mc-opt-saved.ps2 logs/fo/run.sh boot2 - 2900 20 -- --press 200:cross:4 --press 400:cross:4 --press 700:cross:4 --press 1450:start:4 --press 1700:down:4 --press 1730:down:4 --press 1760:down:4 --press 1790:down:4 --press 1850:cross:4 --press 1960:down:4 --press 2020:cross:4 --press 2200:triangle:4 --press 2300:down:4 --press 2360:cross:4`
   - Autoload runs at f800–1100.
   - `PS2_PEEK` shows `5C3C84=3EE66665`, `5C3C90=00`, `5C3C93=01`, and the sound driver mode `67868C=0`.
   - The menu shows Mode **Mono** (f2100) and Camera **Inverted** (f2600).
- Pause-menu changes are written only at the next save (Exit Game or the save UI). [code]

## What still needs a human (or the next scripted session)
1. **All finishers** (not run): every LK/KL Fatality, Multality and Brutality with an enemy in range.
   - Use the codes in F1 and the pokes in F2, on a build with the VU0 MAC fix.
   - Check the animation, the enemy death/explosion, the counter `0x5C3C98`, and no garbled effects (the particle-block GS bug is known).
2. **Versus fatality**: needs 2 pads (Versus requires two DUALSHOCK2s). Win a round, then at "Finish Him" L1 + a level-1 code.
3. **Feel and timing**: whether the 200-frame code window feels right at real speed, input latency, and camera invert direction.
4. Surround on a Pro Logic receiver, and Digital (AC3) movie audio.
5. Rumble with a real pad (expect none in gameplay, by design).
6. Moves → Fatalities page after a finisher is learned or performed: "???" should turn into the name.
