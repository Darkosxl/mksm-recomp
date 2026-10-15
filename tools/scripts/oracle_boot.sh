#!/usr/bin/env bash
# Reproduce the PCSX2 oracle boot-capture run for MK: Shaolin Monks (SLUS_210.87).
# Uses the isolated data dir (never touches ~/.config/PCSX2).
#
# Usage: oracle_boot.sh [TIMEOUT_SECONDS=150] [LOGFILE=$P/logs/pcsx2-boot.log] [extra pcsx2-qt args...]
#   e.g. oracle_boot.sh 300 /path/run2.log -state 1
# While it runs: python3 tools/scripts/pine.py status|version|read32 0x100000 4|savestate 1
# Exit code 124 = timeout ended the run (expected).
set -u
P="$(cd "$(dirname "$0")/../.." && pwd)"
TIMEOUT="${1:-150}"
LOG="${2:-$P/logs/pcsx2-boot.log}"
shift $(( $# > 2 ? 2 : $# ))
DATA="$P/oracle/pcsx2-data"
ISO="$P/iso/mksm.iso"

[ -f "$DATA/inis/PCSX2.ini" ] || { echo "missing $DATA/inis/PCSX2.ini" >&2; exit 2; }
[ -e "$ISO" ] || { echo "missing $ISO" >&2; exit 2; }
if pgrep -f '[p]csx2-qt' >/dev/null; then
  echo "warning: another pcsx2-qt is running; PINE socket (slot 28011) may collide" >&2
fi
mkdir -p "$(dirname "$LOG")" "$P/oracle/states" "$P/oracle/memcards"
rm -f "$LOG"

echo "[oracle_boot] $(date -Is) timeout=${TIMEOUT}s log=$LOG" >&2
timeout -k 15 "$TIMEOUT" pcsx2-qt -datapath "$DATA" -nogui -fastboot -earlyconsolelog \
  -logfile "$LOG" "$@" -- "$ISO" > "${LOG%.log}.stdout" 2>&1
rc=$?
echo "[oracle_boot] exit=$rc ($( [ $rc -eq 124 ] && echo timeout || echo other))" >&2
exit $rc
