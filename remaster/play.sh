#!/usr/bin/env bash
# Play Shaolin Monks Remastered (faithful mode): 1440p-class supersampling (PS2_SCALE 3x6), 16:9 widescreen (game
# patch; HUD and movies stay 4:3), the upscaled texture pack and the fixed glow. Saves use the same memory card as
# the original game. --original plays the unmodified game with the same build and card.
# --coop (old name --pad2) is local co-op: the keyboard is player 1 and the first controller player 2.
# usage: remaster/play.sh [--original] [ps2run args, e.g. --fullscreen, --coop]   env: PS2_SCALE (default 3x6; 2x4 is faster), PS2_GS_HW
set -euo pipefail
here=$(cd "$(dirname "$0")/.." && pwd)
D=$(cd "$here/../.." && pwd)/remaster-data
G=$here/games/mksm
if [ "${1:-}" = --original ]; then
  shift
  unset PS2_SCALE PS2_PNACH PS2_ASPECT PS2_TEX_PACK PS2_FIELD_FLAG
else
  export PS2_SCALE=${PS2_SCALE:-3x6} PS2_PNACH=$here/mksm/patches/widescreen.pnach PS2_ASPECT=16:9
  export PS2_FIELD_FLAG=4F4D68,66189C,67B758  # game field flag + 3D-offset conditions: fields line up exactly (gs.cpp field_spec)
  [ -d "$D/textures/pack-v2" ] && export PS2_TEX_PACK=$D/textures/pack-v2
fi
export PS2_GS_HW=${PS2_GS_HW:-1}  # the hardware GS renderer: 60 fps at 3x6 on a laptop RTX 4050 (PS2_GS_HW=0: the compute one)
export __NV_PRIME_RENDER_OFFLOAD=1 __VK_LAYER_NV_optimus=NVIDIA_only  # the NVIDIA GPU on hybrid laptops
exec "$here/build/native-mksm/ps2run" "$G/disc/SLUS_210.87" --disc "$G/disc.iso" --window --memcard "$G/card.ps2" "$@"
