#!/usr/bin/env bash
# ODR check of the decomp headers: one translation unit that includes every header in decomp/src and decomp/include
# must compile. Two helpers of the same name in the same namespace then fail as a redefinition here, instead of linking
# silently with one of the two bodies (an ODR violation). Compile only (-fsyntax-only), cheap enough for the laptop.
# usage: decomp/headers.sh [compiler]   (default clang++)
set -euo pipefail
cd "$(dirname "$0")/.."
tu=$(mktemp --suffix=.cpp)
trap 'rm -f "$tu"' EXIT
mapfile -t headers < <(find decomp/src decomp/include -name '*.hpp' | sort)
for h in "${headers[@]}"; do echo "#include \"$PWD/$h\""; done > "$tu"
"${1:-clang++}" -std=c++20 -fsyntax-only -Wall -Wextra -Iruntime/include -Idecomp/include "$tu"
echo "${#headers[@]} decomp headers compile together: ${headers[*]}"
