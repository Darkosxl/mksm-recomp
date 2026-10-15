#!/bin/bash
# run-xd.sh <outFile> <tok>...   (XrefDecomp headless wrapper)
P=/home/darkwarro/Documents/Twitter/PS2_REA
exec $P/tools/ghidra_12.1.4_PUBLIC/support/analyzeHeadless $P/analysis/ghidra-proj MKSM -process SLUS_210.87 -noanalysis -readOnly -scriptPath $P/tools/ghidra-scripts -postScript XrefDecomp.java "$@" > /tmp/claude-1000/-home-darkwarro-Documents-Twitter-PS2-REA/f382b8a9-6dae-4c2f-8653-3ff02033685f/scratchpad/ghidra.log 2>&1
