// Exports recompiler seed entry points from an analyzed PS2 EE (R5900) program.
// Usage (headless): -postScript ExportEntries.java <outputDir>
//
// Writes (lowercase hex, no 0x, sorted unique unless noted):
//   functions.txt        non-external, non-thunk function entries in [TEXT_LO, TEXT_HI)
//   thunks.txt           thunk function entries in the same range (excluded above)
//   dataptrs.txt         aligned words in initialized non-exec blocks pointing at decoded instructions
//   dataptrs_refs.txt    "<location> <target>" for every dataptrs hit (sorted by location)
//   dataptrs_nocode.txt  aligned .text-range values in data whose target is NOT a decoded instruction
//   syscalls.txt         "<addr> <num>" per syscall instruction in .text (num hex, '-' if negative, '?' unknown)
//   syscalls_summary.txt "<num> <count>"
//   jr_unresolved.txt    addresses of computed jumps (jr not ra) Ghidra left without flow refs
//   analysis_options.txt analysis options in effect
//   stats.txt            counts, undefined .text gaps, computed-jump resolution
//@category PS2

import java.nio.file.*;
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;

public class ExportEntries extends GhidraScript {

	private static final long TEXT_LO = 0x100000L;
	private static final long TEXT_HI = 0x49a708L; // exclusive

	private static String hex(long v) {
		return Long.toHexString(v);
	}

	private static String signedHex(int v) {
		return v < 0 ? "-" + Integer.toHexString(-v) : Integer.toHexString(v);
	}

	private static int le32(byte[] b, int i) {
		return (b[i] & 0xff) | (b[i + 1] & 0xff) << 8 | (b[i + 2] & 0xff) << 16 |
			(b[i + 3] & 0xff) << 24;
	}

	private static boolean writesBase(Instruction ins, Register reg) {
		if (reg == null) {
			return false;
		}
		Register base = reg.getBaseRegister();
		for (Object o : ins.getResultObjects()) {
			if (o instanceof Register r && r.getBaseRegister().equals(base)) {
				return true;
			}
		}
		return false;
	}

	private static List<String> hexLines(Collection<Long> vals) {
		List<String> out = new ArrayList<>(vals.size());
		for (long v : vals) {
			out.add(hex(v));
		}
		return out;
	}

	@Override
	public void run() throws Exception {
		String[] args = getScriptArgs();
		if (args.length < 1) {
			throw new IllegalArgumentException("usage: ExportEntries.java <outputDir>");
		}
		Path out = Paths.get(args[0]);
		Files.createDirectories(out);

		Memory mem = currentProgram.getMemory();
		Listing listing = currentProgram.getListing();
		ReferenceManager rm = currentProgram.getReferenceManager();
		AddressSpace space = currentProgram.getAddressFactory().getDefaultAddressSpace();
		if (mem.isBigEndian()) {
			throw new IllegalStateException("expected little-endian program");
		}
		MemoryBlock text = mem.getBlock(".text");
		if (text == null) {
			text = mem.getBlock(space.getAddress(TEXT_LO));
		}
		long textLo = text.getStart().getOffset();
		long textEndEx = text.getEnd().getOffset() + 1;
		AddressSet textSet = new AddressSet(text.getStart(), text.getEnd());
		List<String> stats = new ArrayList<>();
		stats.add("program=" + currentProgram.getName() + " language=" +
			currentProgram.getLanguageID() + " compiler=" +
			currentProgram.getCompilerSpec().getCompilerSpecID());
		stats.add(String.format(".text block=%s [%x,%x) size=0x%x", text.getName(), textLo,
			textEndEx, textEndEx - textLo));

		// Memory map
		stats.add("");
		stats.add("== memory blocks (name start end size perms init loaded) ==");
		for (MemoryBlock b : mem.getBlocks()) {
			stats.add(String.format("%-24s %s %s 0x%x %s%s%s %s %s", b.getName(), b.getStart(),
				b.getEnd(), b.getSize(), b.isRead() ? "r" : "-", b.isWrite() ? "w" : "-",
				b.isExecute() ? "x" : "-", b.isInitialized() ? "init" : "uninit",
				b.isLoaded() ? "loaded" : "notloaded"));
		}

		// ---- functions ----
		monitor.setMessage("ExportEntries: functions");
		TreeSet<Long> funcs = new TreeSet<>();
		TreeSet<Long> thunks = new TreeSet<>();
		long fnTotal = 0, fnOutOfRange = 0;
		for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
			monitor.checkCancelled();
			fnTotal++;
			if (f.isExternal() || !f.getEntryPoint().isMemoryAddress()) {
				continue;
			}
			long e = f.getEntryPoint().getOffset();
			if (e < TEXT_LO || e >= TEXT_HI) {
				fnOutOfRange++;
				continue;
			}
			(f.isThunk() ? thunks : funcs).add(e);
		}
		Files.write(out.resolve("functions.txt"), hexLines(funcs));
		Files.write(out.resolve("thunks.txt"), hexLines(thunks));

		// ---- instruction walk over .text: gaps, syscalls, computed jumps ----
		monitor.setMessage("ExportEntries: instructions");
		Register v1 = currentProgram.getRegister("v1");
		long instCount = 0, jrTotal = 0, jrResolved = 0, jrTargets = 0;
		long jalrTotal = 0, jalrResolved = 0;
		List<Long> jrUnresolved = new ArrayList<>();
		List<long[]> gaps = new ArrayList<>();
		List<String> sysLines = new ArrayList<>();
		TreeMap<String, Integer> sysHist = new TreeMap<>();
		long cursor = textLo;
		for (Instruction ins : listing.getInstructions(textSet, true)) {
			monitor.checkCancelled();
			instCount++;
			long a = ins.getMinAddress().getOffset();
			if (a > cursor) {
				gaps.add(new long[] { cursor, a });
			}
			long end = ins.getMaxAddress().getOffset() + 1;
			if (end > cursor) {
				cursor = end;
			}
			if (ins.getLength() != 4) {
				continue;
			}
			int w = le32(ins.getBytes(), 0);
			int op = w >>> 26, funct = w & 0x3f, rs = (w >>> 21) & 31;
			if (op != 0) {
				continue;
			}
			if (funct == 0x0c) { // syscall
				String num = "?";
				for (int k = 1; k <= 4; k++) {
					Instruction p = listing.getInstructionAt(ins.getMinAddress().subtract(4L * k));
					if (p == null || p.getLength() != 4) {
						break;
					}
					int pw = le32(p.getBytes(), 0);
					int pop = pw >>> 26, prs = (pw >>> 21) & 31, prt = (pw >>> 16) & 31;
					if (prs == 0 && prt == 3 &&
						(pop == 0x09 || pop == 0x19 || pop == 0x08 || pop == 0x18)) {
						num = signedHex((short) (pw & 0xffff)); // addiu/daddiu/addi v1,zero,N
						break;
					}
					if (prs == 0 && prt == 3 && pop == 0x0d) {
						num = Integer.toHexString(pw & 0xffff); // ori v1,zero,N
						break;
					}
					if (writesBase(p, v1)) {
						break;
					}
				}
				sysLines.add(hex(a) + " " + num);
				sysHist.merge(num, 1, Integer::sum);
			}
			else if (funct == 0x08 || funct == 0x09) { // jr / jalr
				boolean isJr = funct == 0x08;
				if (isJr && rs == 31) {
					continue; // jr ra = return
				}
				int flows = 0;
				for (Reference r : rm.getReferencesFrom(ins.getMinAddress())) {
					RefType t = r.getReferenceType();
					if (t.isFlow() && !t.isFallthrough()) {
						flows++;
					}
				}
				if (isJr) {
					jrTotal++;
					if (flows > 0) {
						jrResolved++;
						jrTargets += flows;
					}
					else {
						jrUnresolved.add(a);
					}
				}
				else {
					jalrTotal++;
					if (flows > 0) {
						jalrResolved++;
					}
				}
			}
		}
		if (cursor < textEndEx) {
			gaps.add(new long[] { cursor, textEndEx });
		}
		Files.write(out.resolve("syscalls.txt"), sysLines);
		List<String> sysSummary = new ArrayList<>();
		for (Map.Entry<String, Integer> e : sysHist.entrySet()) {
			sysSummary.add(e.getKey() + " " + e.getValue());
		}
		Files.write(out.resolve("syscalls_summary.txt"), sysSummary);
		Files.write(out.resolve("jr_unresolved.txt"), hexLines(jrUnresolved));

		// Raw syscall encodings in .text not covered by a decoded instruction
		long rawSyscallUndecoded = 0;
		long gapBytes = 0, gapZeroBytes = 0;
		List<long[]> gapInfo = new ArrayList<>(); // start, end, zeroBytes
		for (long[] g : gaps) {
			long len = g[1] - g[0];
			gapBytes += len;
			byte[] buf = new byte[(int) len];
			mem.getBytes(space.getAddress(g[0]), buf);
			long z = 0;
			for (byte b : buf) {
				if (b == 0) {
					z++;
				}
			}
			gapZeroBytes += z;
			for (long a = (g[0] + 3) & ~3L; a + 4 <= g[1]; a += 4) {
				int w = le32(buf, (int) (a - g[0]));
				if ((w & 0xfc00003f) == 0x0000000c) {
					rawSyscallUndecoded++;
				}
			}
			gapInfo.add(new long[] { g[0], g[1], z });
		}
		// all gaps in address order + size histogram
		List<String> gapLines = new ArrayList<>();
		String[] bucketNames = { "4", "8", "12", "16", "20-64", "68-256", ">256" };
		long[] bucketN = new long[7], bucketZeroOnly = new long[7], bucketBytes = new long[7];
		for (long[] g : gapInfo) {
			long len = g[1] - g[0];
			gapLines.add(String.format("%x %x %d %d", g[0], g[1], len, g[2]));
			int bk = len <= 4 ? 0 : len <= 8 ? 1 : len <= 12 ? 2 : len <= 16 ? 3
					: len <= 64 ? 4 : len <= 256 ? 5 : 6;
			bucketN[bk]++;
			bucketBytes[bk] += len;
			if (g[2] == len) {
				bucketZeroOnly[bk]++;
			}
		}
		Files.write(out.resolve("gaps.txt"), gapLines);
		gapInfo.sort((x, y) -> Long.compare(y[1] - y[0], x[1] - x[0]));
		long definedDataInText = 0;
		for (Data d : listing.getDefinedData(textSet, true)) {
			definedDataInText += d.getLength();
		}

		// ---- data pointers ----
		monitor.setMessage("ExportEntries: data pointers");
		TreeSet<Long> dptr = new TreeSet<>();
		TreeSet<Long> nocode = new TreeSet<>();
		List<String> drefs = new ArrayList<>();
		List<String> blockPtrStats = new ArrayList<>();
		for (MemoryBlock b : mem.getBlocks()) {
			String n = b.getName();
			if (!b.isInitialized() || !b.isLoaded() || b.isExecute() ||
				!b.getStart().isMemoryAddress() || n.startsWith(".text") ||
				n.startsWith(".vutext")) {
				continue;
			}
			long start = b.getStart().getOffset();
			long size = b.getSize();
			byte[] buf = new byte[(int) size];
			b.getBytes(b.getStart(), buf);
			AddressSpace bs = b.getStart().getAddressSpace();
			long hits = 0, miss = 0;
			for (long a = (start + 3) & ~3L; a + 4 <= start + size; a += 4) {
				long v = le32(buf, (int) (a - start)) & 0xffffffffL;
				if ((v & 3) != 0 || v < TEXT_LO || v >= TEXT_HI) {
					continue;
				}
				if (listing.getInstructionAt(space.getAddress(v)) != null) {
					dptr.add(v);
					drefs.add((bs == space ? "" : bs.getName() + "::") + hex(a) + " " + hex(v));
					hits++;
				}
				else {
					nocode.add(v);
					miss++;
				}
			}
			blockPtrStats.add(String.format("%-24s hits=%d nocode=%d", n, hits, miss));
		}
		Files.write(out.resolve("dataptrs.txt"), hexLines(dptr));
		Files.write(out.resolve("dataptrs_refs.txt"), drefs);
		Files.write(out.resolve("dataptrs_nocode.txt"), hexLines(nocode));

		// ---- analysis options ----
		List<String> optLines = new ArrayList<>();
		for (Map.Entry<String, String> e : new TreeMap<>(
			getCurrentAnalysisOptionsAndValues(currentProgram)).entrySet()) {
			optLines.add(e.getKey() + " = " + e.getValue());
		}
		Files.write(out.resolve("analysis_options.txt"), optLines);

		// ---- stats ----
		long allInst = currentProgram.getListing().getNumInstructions();
		stats.add(0, "");
		List<String> head = new ArrayList<>();
		head.add("== summary ==");
		head.add("functions (non-ext, non-thunk, in range) = " + funcs.size());
		head.add("thunk functions in range = " + thunks.size());
		head.add("functions total (FunctionManager) = " + fnTotal + ", out of range = " +
			fnOutOfRange);
		head.add("instructions in .text = " + instCount + " (program total " + allInst + ")");
		head.add(String.format(".text bytes covered by instructions = %d / %d (%.2f%%)",
			(textEndEx - textLo) - gapBytes, textEndEx - textLo,
			100.0 * ((textEndEx - textLo) - gapBytes) / (textEndEx - textLo)));
		head.add("undefined (non-instruction) bytes in .text = " + gapBytes + " in " +
			gaps.size() + " gaps; zero bytes among them = " + gapZeroBytes +
			"; non-zero = " + (gapBytes - gapZeroBytes));
		head.add("defined data bytes inside .text = " + definedDataInText);
		head.add("raw syscall encodings in undecoded .text = " + rawSyscallUndecoded);
		head.add("computed jumps (jr not ra) = " + jrTotal + ": resolved = " + jrResolved +
			" (" + jrTargets + " targets), unresolved = " + (jrTotal - jrResolved));
		head.add("computed calls (jalr) = " + jalrTotal + ": with flow refs = " + jalrResolved +
			", without = " + (jalrTotal - jalrResolved));
		head.add("syscall instructions = " + sysLines.size());
		head.add("dataptrs (unique targets) = " + dptr.size() + " from " + drefs.size() +
			" locations; nocode candidates (unique) = " + nocode.size());
		stats.addAll(0, head);

		stats.add("");
		stats.add("== syscall histogram (num count) ==");
		stats.addAll(sysSummary);
		stats.add("");
		stats.add("== dataptr hits per block ==");
		stats.addAll(blockPtrStats);
		stats.add("");
		stats.add("== undefined .text gap size histogram (bytes: gaps, all-zero gaps, total bytes) ==");
		for (int i = 0; i < bucketNames.length; i++) {
			stats.add(String.format("%-7s %6d %6d %8d", bucketNames[i], bucketN[i],
				bucketZeroOnly[i], bucketBytes[i]));
		}
		stats.add("");
		stats.add("== largest 50 undefined gaps in .text (start end len zero_bytes) ==");
		for (int i = 0; i < Math.min(50, gapInfo.size()); i++) {
			long[] g = gapInfo.get(i);
			stats.add(String.format("%x %x %d %d", g[0], g[1], g[1] - g[0], g[2]));
		}
		Files.write(out.resolve("stats.txt"), stats);

		println(String.format(
			"ExportEntries done: functions=%d thunks=%d dataptrs=%d syscalls=%d insts=%d gaps=%d/%dB jr=%d/%d resolved -> %s",
			funcs.size(), thunks.size(), dptr.size(), sysLines.size(), instCount, gaps.size(),
			gapBytes, jrResolved, jrTotal, out));
	}
}
