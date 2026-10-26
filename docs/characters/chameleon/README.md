# Chameleon

> [!NOTE]
> **In progress.** Chameleon is on branch `cham-int`, not on the release branch yet. This page describes that branch
> and what is still being built. Clips are TODO until his build is merged.

Chameleon is a fifth fighter for story and Ko-op. He lives on Reptile's cell and plays as a Reptile whose colour mode
picks whose specials he uses: Reptile's own, Scorpion's or Sub-Zero's.

<!-- CLIPS TODO: record once cham-int is merged (remaster/charclips.sh; he needs a story or Ko-op state, not Versus) -->

## Picking him

- **Story and Ko-op.** On the character select, put the cursor on Reptile's cell and press **L1** (or L3). That switches the
  cell between Reptile and Chameleon. The name then reads CHAMELEON on the select screen, the HUD and the menus.
  - In Ko-op each player switches with their own L1.
  - The choice lasts until you quit the game. Reptile is the default.
- **Versus.** Not available. Reptile's cell stays Reptile, and L1 / L3 do nothing on the Versus select screen.
- It is part of the gameplay mod: `PS2_MOD=1`, the default in `remaster/play.sh` and in the browser.
- The announcer says "Chameleon" (MKA's line) when the mod data file `vo_name.adx` is installed. The browser has it.
  Without it you hear Reptile's name.

## Look

- **Model:** for now Reptile's story alt costume. MKA's Chameleon model is coming (branch `cham-model`).
- **Colour:** the rainbow cycle is always on. It runs MKA's Chameleon colour gradient over the costume.

## Colour modes (L3 in a fight)

L3 (V on the keyboard, the left stick's click on a controller) during a fight cycles the modes. The modes change only his special moves and his stance:

| Mode | Specials | Stance |
|---|---|---|
| Rainbow (default) | Reptile's, plus the story boss's on R1 + L1 | Reptile's |
| Yellow | Scorpion's | Scorpion's |
| Blue | Sub-Zero's | Sub-Zero's |
| Green | Reptile's, plus the story boss's on R1 + L1 | Reptile's |

The order is rainbow, yellow, blue, green, then rainbow again. The mode is kept between fights.
The per-mode stance is still being finished. Yellow and blue use the donor's standing and lock-on stance, and his
walk and run stay Reptile's.

## Special moves

Hold R1 and press the button. Move names are from the game's move list.

### Rainbow and green: Reptile's

The same specials as [Reptile](../reptile/README.md#special-moves): Acid Spit (R1 + square), Slide Attack
(R1 + triangle), Force Ball (R1 + circle) and Dragon Grapple (R1 + R2). The boss layer is on too:

| Input | Move |
|---|---|
| R1 + L1 + triangle | The boss's invisibility (press again to reappear) |
| R1 + L1 + R2 | The boss's counter |

### Yellow: Scorpion's

| Input | Move |
|---|---|
| R1 + square | Flame Port: sets the opponent on fire |
| R1 + triangle | Uppercut. At special level 3, R2 after it adds Hellfire Fist |
| R1 + circle | Spear Throw: the spear pulls the opponent in. From level 2, holding circle charges it |
| R1 + R2 | Enemy Manipulation |

### Blue: Sub-Zero's

| Input | Move |
|---|---|
| R1 + square | Freeze Blast: holds the opponent in ice |
| R1 + triangle | Slide Attack. From level 2, triangle after it adds Slide Uppercut, and at level 3 circle adds Slide Grenade |
| R1 + circle | Ground Freeze. Holding circle charges it into Winter's Flurry and Blizzard Ring |
| R1 + R2 | Dragon Grapple |

The borrowed moves bring their own fire and ice effects and their sounds: Chameleon loads Scorpion's and Sub-Zero's
effects and the 9 sound cues those moves use.

## Combos

In every mode he has Reptile's strings and Reptile's ported combo extensions. See
[Reptile: combos](../reptile/README.md#combos). The yellow and blue modes add the donor's specials with their
follow-ups, not the donor's normal combos.

## Upgrades

His four specials are at their top level from the moment he loads: a new story, Ko-op, a loaded save. There is
nothing to buy; the store (Scorpion's page for his cell) shows them owned. The levels are per player slot, so the
same four cover Reptile's, Scorpion's and Sub-Zero's specials in every mode, with their level 2+ extras (charged
spear, Hellfire Fist, Winter's Flurry). Combos and the platform abilities come from the story as for everyone.

## Known gaps

- Scorpion's spear pulls without its rope.
- Three follow-ups did not fit his clip slots, so those moves end in his stance: Scorpion's uppercut follow-up
  (g31), Scorpion's follow-up after Flame Port (v00) and a follow-up of Sub-Zero's grapple (r20).
- His walk and run stay Reptile's in every mode.
