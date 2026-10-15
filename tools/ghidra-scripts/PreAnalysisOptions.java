// Pre-analysis script: dumps the analyzers/options available for the current
// program and turns on aggressive code discovery for the stripped PS2 EE ELF.
// Usage (headless): -preScript PreAnalysisOptions.java [dumpFile]
//@category PS2

import java.io.PrintWriter;
import java.nio.file.*;
import java.util.*;

import ghidra.app.script.GhidraScript;

public class PreAnalysisOptions extends GhidraScript {

	// option name -> value. Missing options are reported, not fatal.
	private static final String[][] WANT = {
		{ "Aggressive Instruction Finder", "true" },
		{ "MIPS-R5900 Constant Reference Analyzer.Attempt to recover switch tables", "true" },
		{ "MIPS-R5900 Constant Reference Analyzer.Max Threads", "4" },
		{ "Decompiler Switch Analysis", "true" },
	};

	@Override
	public void run() throws Exception {
		Map<String, String> opts = new TreeMap<>(getCurrentAnalysisOptionsAndValues(currentProgram));
		String[] args = getScriptArgs();
		PrintWriter dump = null;
		if (args.length > 0) {
			Path p = Paths.get(args[0]);
			if (p.getParent() != null) {
				Files.createDirectories(p.getParent());
			}
			dump = new PrintWriter(Files.newBufferedWriter(p));
		}
		println("language=" + currentProgram.getLanguageID() + " compiler=" +
			currentProgram.getCompilerSpec().getCompilerSpecID() + " options=" + opts.size());
		for (Map.Entry<String, String> e : opts.entrySet()) {
			if (dump != null) {
				dump.println(e.getKey() + " = " + e.getValue());
			}
		}
		for (String[] kv : WANT) {
			if (opts.containsKey(kv[0])) {
				setAnalysisOption(currentProgram, kv[0], kv[1]);
				println("SET " + kv[0] + " = " + kv[1] + " (was " + opts.get(kv[0]) + ")");
			}
			else {
				println("MISSING analysis option: " + kv[0]);
			}
		}
		if (dump != null) {
			dump.close();
		}
	}
}
