# Baraka: moves borrowed from the story boss Baraka

Versus Baraka gets two moves from the story mode's boss Baraka (baraka_npc, group 56: the same skeleton as Versus
Baraka). Like Reptile's boss moves, they need the `PS2_MOD` gameplay mods.

Hold **R1** (Special) and **L1**, then tap the button. L1 does nothing else in Versus, so this layer does not take any
of his own moves: R1 + button is still his own special. Each move uses the level and upgrade requirements of the
special on the same button.

| Input | Move | Damage |
|---|---|---|
| R1 + L1 + square | Blade slash (`t02_misc`, state 1507, 46 frames): steps back while slashing, then returns to stance | 20 in range, 0 from the fight-start distance |
| R1 + L1 + triangle | Leaping blade counter (`d30_cntr`, state 1480, 61 frames), played as an attack: leaps in blade first, lands, returns to stance | 30 |

Damage is the opponent's health loss (of 250) in headless Versus runs of Baraka vs Baraka. The slash hits on frames
14-19 while he steps back, so it hits only a close opponent: 20 when it starts 9 frames earlier from the same spacing,
0 with the inputs below. The leap does 30 from the fight-start distance (10 when P2 does it, 52 from closer).

Clip inputs (from a Versus fight-start state of Baraka vs Baraka, fight start frame 3720; `remaster/vsrun.sh raw`
press syntax `frame:button:frames held`):

| Move | Presses | Boss state plays | Back in stance |
|---|---|---|---|
| R1 + L1 + square | `3728:r1:30 3732:l1:26 3740:square:4` | 1507, frames 3741-3786 (46) | 2161 (`a00_stnd`) from frame 3787 |
| R1 + L1 + triangle | `3728:r1:30 3732:l1:26 3740:triangle:4` | 1480, frames 3741-3801 (61), then landing (common state 7) for 28 | 2161 (`a00_stnd`) from frame 3830 |

R1 + L1 + circle and R1 + L1 + R2 stay free: they play his own R1 + circle and R1 + R2 specials, as before.

Why nothing else is ported (the full list is `DROPPED` in `mksm/tools/scripts/vsboss_baraka.py`):

- Most of the boss's specials keep their travel in the clip's root bone (leaps and dashes across the arena). He stays
  in place for the whole move, then snaps 1500-9000 units on the last frame.
- His spark volleys (`s40_sp_n`, `s50_sp_n`) play in place but spawn no projectile on Versus Baraka, so they never hit.
- His grabs (`t05_misc`, `t06_misc`) need a reaction state the opponent does not have; alone they whiff.
- `sg80_sst` is a long stance and `a20_srun` a run cycle, not attacks.

The loader is `decomp/src/mod/versus_boss_moves.cpp` (port 1) and the command nodes come from `vsboss_baraka.py`.
