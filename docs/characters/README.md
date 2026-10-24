# Fighters

In the original game Reptile, Baraka, Kitana and Johnny Cage are Versus-only fighters. Their move data has no
Experience upgrades, so they never had combo extensions. This build gives them:

- the story fighters' combo extensions, ported onto their own strings;
- Reptile also gets the story boss's attacks, on R1 + L1;
- Cage also gets two moves of the story mode's Cage on R1 + L1 (branch `bm-cage`);
- Baraka gets two of the story boss Baraka's moves on R1 + L1 (branch `bm-baraka`);
- borrowed boss specials for Kitana (in progress, see her page);
- Chameleon, a fifth fighter on Reptile's cell (in progress).

| Fighter | Page |
|---|---|
| Reptile | [reptile/](reptile/README.md) |
| Baraka | [baraka/](baraka/README.md) |
| Kitana | [kitana/](kitana/README.md) |
| Johnny Cage | [cage/](cage/README.md) |
| Chameleon | [chameleon/](chameleon/README.md) (in progress, branch `cham-int`) |

All of this is a gameplay mod. It is on with `PS2_MOD=1`, which is the default in `remaster/play.sh` and in the
browser. `remaster/play.sh --original` turns it off.

## Reading the move lists

- Buttons are the PS2 pad's: square, triangle, circle, cross, L1, R1, L2, R2. The keyboard keys are in the main
  README's [Controls](../../README.md#controls) table.
- **R1 is the special button.** A special is R1 held plus a face button or R2, for example R1 + square.
- A comma separates presses: square, square, triangle is three presses in a row.
- Damage is out of 250 health, measured on Kung Lao standing still in headless Versus runs: moves from the run that
  made their clip, combo strings from the damage audit (`vsaudit.py`, the best of five press gaps). It depends on
  timing and distance, and a move that misses a standing opponent can still hit a moving one.

The game's own move list text (the `h.bin` file in `GAMEDATA.WAD`) gives most specials a name. The pages use those
names. It has none for the ported combos.

## Upgrades: story and Versus

- **Story and Ko-op.** Specials and combos are bought with Experience in the pause menu's upgrade store. Each special
  has five levels. These four fighters' specials have five level entries in the move data too, and every level plays
  the same move, so level 1 is what makes it usable. The combo extensions are the move data's Combos upgrades (gates
  C0 to C5).
- **Versus.** Round start (`0x001B90B8`) sets every special and every combo upgrade to its maximum. The original game
  already does this; the mod also turns on the platform abilities. So in Versus everything on these pages is
  available at once.
- **Store pages for Reptile, Baraka, Kitana and Cage** are being added by the Chameleon work (branch `cham-store`).
  On `cham-int`, Reptile and Chameleon buy from Scorpion's page. Upgrade levels belong to the player slot, not the
  character.

## Moves that need a direction: story and Ko-op only

Many strings start with the stick held: sideways or back plus a button. In Versus these never start. The fighter has
no lock-on target there (fighter `+0x332C` stays -1), and without a target the game strips the direction bits from
the command input (`FUN_001BFA68`). So a string whose first input has a direction cannot start from neutral in Versus.
In story and Ko-op the fighter has targets, so those strings work. Each page lists them under "Story and Ko-op only".

## Clips

Recorded headless with `remaster/charclips.sh` (list: `remaster/charclips.tsv`):

- Versus on The Rooftops, P2 Kung Lao standing still, `PS2_MOD=1`;
- the remaster look of `remaster/play.sh`: 3x6 supersampling, 16:9 widescreen, texture pack v2;
- 30 fps, 480 px wide, animated WebP.
