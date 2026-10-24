# Kitana: story NPC moves in Versus

Versus Kitana gets the one usable move from the story NPC groups: kitana_npc (group 65), Mileena (66) and Jade (67).
Hold Special (R1) and L1, then tap the button. Her own R1 + button specials do not change.

| Input | Move | Damage |
|---|---|---|
| R1 + L1 + square | Mileena's `d20_cntr` (state 1762): low sweep that launches | 3 |

Clip inputs (from a Versus fight-start state of Kitana vs Kung Lao, fight start frame 3720; `remaster/vsrun.sh raw`
press syntax `frame:button:frames held`):

| Move | Presses | State 1762 plays | Back in stance |
|---|---|---|---|
| R1 + L1 + square | `3728:r1:30 3732:l1:26 3740:square:4` | frames 3741-3794 (54) | 2684 (`a00_stnd`) from frame 3795 |

Why nothing else is ported (the full list is `DROPPED` in `mksm/tools/scripts/vsboss_kitana.py`):

- Most attacks in these groups keep their travel in the clip's root bone. She stays in place for the whole move, then snaps to the end position.
- Others are story poses or cinematics that do not hit.
- Some end stuck airborne.
- kitana_npc's `d20_cntr` and `l20_sp_q` are counters. They never hit, even with P2 attacking.

The loader is `decomp/src/mod/versus_boss_moves.cpp` (port 1) and the command nodes come from `vsboss_kitana.py`.
