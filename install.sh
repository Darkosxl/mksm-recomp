#!/usr/bin/env bash
# Install Mortal Kombat: Shaolin Monks (NTSC-U, SLUS_210.87) on Linux from your own disc image: checks what the build
# needs, builds build/native-mksm/ps2run with mksm/build.sh, then says how to play (or starts the game with --play).
# usage: ./install.sh /path/to/your.iso [--jobs N] [--play]
#   --jobs N   parallel compile jobs (default 4; fewer if the machine runs out of memory)
#   --play     start the remaster (remaster/play.sh) when the build is done
set -euo pipefail
ROOT="$(cd "$(dirname "$0")" && pwd)"

usage() { echo "usage: ./install.sh /path/to/your.iso [--jobs N] [--play]" >&2; exit 2; }
fail() { printf '\nerror: %s\n' "$1" >&2; exit 1; }

iso=""; jobs=4; play=0
while [ $# -gt 0 ]; do
  case "$1" in
    --jobs) [ $# -ge 2 ] || usage; jobs=$2; shift ;;
    --play) play=1 ;;
    -h|--help) usage ;;
    -*) echo "unknown option $1" >&2; usage ;;
    *) [ -z "$iso" ] || usage; iso=$1 ;;
  esac
  shift
done
[ -n "$iso" ] || usage
case "$jobs" in ''|*[!0-9]*|0) fail "--jobs needs a positive number" ;; esac

echo "== checking what the build needs"
[ "$(uname -s)" = Linux ] || fail "this installer builds the Linux desktop version only; on other systems play in the browser (see README.md)"

missing=()
for tool in cmake ninja python3 curl unzip; do
  command -v "$tool" > /dev/null || missing+=("$tool")
done
[ ${#missing[@]} -eq 0 ] || fail "missing tools: ${missing[*]}. Install them with your distribution's package manager and run ./install.sh again."

# a C++20 compiler with <format> (clang 17+ or GCC 13+); scripts/cxx.sh picks one and stops with a message if none
. "$ROOT/scripts/cxx.sh"
for flag in "${cxx_flags[@]}"; do
  case "$flag" in
    -DCMAKE_CXX_COMPILER=*) export CXX="${flag#-DCMAKE_CXX_COMPILER=}" ;;
    -DCMAKE_CXX_FLAGS=*) export CXXFLAGS="${CXXFLAGS:+$CXXFLAGS }${flag#-DCMAKE_CXX_FLAGS=}" ;;
  esac
done
echo "   C++ compiler: $CXX${CXXFLAGS:+ ($CXXFLAGS)}"

# the game window, sound and controllers come from SDL2; without its development files ps2run has no window
if ! { command -v pkg-config > /dev/null && pkg-config --exists sdl2; } && ! command -v sdl2-config > /dev/null; then
  fail "SDL2 development files not found (the package is usually called libsdl2-dev, SDL2-devel or sdl2). Install them and run ./install.sh again."
fi

# the renderer draws through Vulkan at run time; the build itself does not need it
libs=$(ldconfig -p 2> /dev/null || /sbin/ldconfig -p 2> /dev/null || true)
if [ -n "$libs" ] && ! grep -q 'libvulkan\.so\.1' <<< "$libs"; then
  echo "   warning: no Vulkan loader (libvulkan.so.1) found; the game needs Vulkan and a GPU driver for it to run"
fi

[ -f "$iso" ] && [ -r "$iso" ] || fail "cannot read the disc image '$iso'"
files=$(python3 -I "$ROOT/scripts/disc.py" list "$iso" 2> /dev/null) || fail "'$iso' is not a readable PS2 disc image"
grep -q 'SLUS_210\.87' <<< "$files" || fail "'$iso' is not a Mortal Kombat: Shaolin Monks NTSC-U disc image (no SLUS_210.87 on it)"
echo "   disc image: $iso"

# mksm/build.sh fetches wgpu-native (the GPU renderer) only on its first run; fetch it here if a later run lost it
if [ -x "$ROOT/build/tools/eerecomp" ] && [ ! -f "$ROOT/third_party/wgpu-native/lib/libwgpu_native.a" ]; then
  "$ROOT/scripts/fetch_wgpu.sh"
fi

echo "== building (this takes a while)"
"$ROOT/mksm/build.sh" "$iso" --jobs "$jobs"
[ -x "$ROOT/build/native-mksm/ps2run" ] || fail "the build finished without build/native-mksm/ps2run"

cat << 'EOF'

== done. To play:
   remaster/play.sh               the remaster (3x6, widescreen, HD textures if you have a pack)
   remaster/play.sh --original    the original look
   remaster/play.sh --pad2        the same, with the keyboard as player 2 (local co-op)
Saves go to games/mksm/card.ps2. Controls: see README.md.
EOF
if [ "$play" = 1 ]; then
  exec "$ROOT/remaster/play.sh"
fi
