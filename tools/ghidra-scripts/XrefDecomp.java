// Cross-reference and decompile helper for headless use.
// Usage: -postScript XrefDecomp.java <outFile> <tok> [<tok> ...]
//   x:<hex>   list references to <hex> (with containing function) and decompile each containing function
//   r:<hex>   list references to <hex> only
//   d:<hex>   decompile the function containing <hex>
//   c:<hex>   list callers of the function containing <hex> (references to its entry)
//@category PS2

import java.io.*;
import java.util.*;

import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

public class XrefDecomp extends GhidraScript {
	private DecompInterface ifc;
	private Set<Address> done = new HashSet<>();
	private PrintWriter out;

	@Override
	protected void run() throws Exception {
		String[] args = getScriptArgs();
		out = new PrintWriter(new FileWriter(args[0]));
		ifc = new DecompInterface();
		ifc.openProgram(currentProgram);
		for (int i = 1; i < args.length; i++) {
			String t = args[i];
			char mode = t.charAt(0);
			Address a = toAddr(Long.parseLong(t.substring(2), 16));
			if (mode == 'x' || mode == 'r') {
				out.println("=== refs to " + a);
				List<Function> fs = new ArrayList<>();
				for (Reference r : getReferencesTo(a)) {
					Function f = getFunctionContaining(r.getFromAddress());
					out.println("  " + r.getFromAddress() + " " + r.getReferenceType() + " in "
						+ (f == null ? "?" : f.getName() + "@" + f.getEntryPoint()));
					if (f != null && !fs.contains(f)) fs.add(f);
				}
				if (mode == 'x') for (Function f : fs) decomp(f);
			} else if (mode == 'd') {
				Function f = getFunctionContaining(a);
				if (f == null) { out.println("=== no function at " + a); continue; }
				decomp(f);
			} else if (mode == 'c') {
				Function f = getFunctionContaining(a);
				if (f == null) { out.println("=== no function at " + a); continue; }
				out.println("=== callers of " + f.getName() + "@" + f.getEntryPoint());
				for (Reference r : getReferencesTo(f.getEntryPoint())) {
					Function g = getFunctionContaining(r.getFromAddress());
					out.println("  " + r.getFromAddress() + " " + r.getReferenceType() + " in "
						+ (g == null ? "?" : g.getName() + "@" + g.getEntryPoint()));
				}
			}
		}
		out.close();
	}

	private void decomp(Function f) {
		if (!done.add(f.getEntryPoint())) { out.println("=== (already) " + f.getName()); return; }
		DecompileResults res = ifc.decompileFunction(f, 120, monitor);
		out.println("=== decomp " + f.getName() + " @ " + f.getEntryPoint() + " size=" + f.getBody().getNumAddresses());
		if (res != null && res.decompileCompleted()) out.println(res.getDecompiledFunction().getC());
		else out.println("  (decompile failed: " + (res == null ? "null" : res.getErrorMessage()) + ")");
	}
}
