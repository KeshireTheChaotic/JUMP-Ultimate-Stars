// Read-only Ghidra script: candidate JUS mission/evolution readers by path literal.
// Ghidra Script Manager: add this folder, run with an ARM9 program loaded at
// 0x02000000. Optional script argument: path for the evidence text report.
// This does not identify reward field offsets by guesswork.
// @category JUS.Progression

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.Locale;
import java.util.Map;
import java.util.Set;

public class TraceJUSProgression extends GhidraScript {
    private static final String[] TERMS = {
        "koma", "kshape", "mission", "stage", "piece", "jpower", "event", "evol", "unlock", "reward", "clear"
    };

    private boolean interesting(String text) {
        String s = text.toLowerCase(Locale.ROOT);
        for (String t: TERMS) if (s.contains(t)) return true;
        return false;
    }

    private void noteFunction(Function f, LinkedHashMap<Address, Function> result) {
        if (f != null) result.put(f.getEntryPoint(), f);
    }

    @Override
    public void run() throws Exception {
        if (currentProgram == null) throw new IllegalStateException("Open an ARM9 program first.");
        String[] arguments = getScriptArgs();
        File output = arguments.length > 0 ? new File(arguments[0]) : askFile("Progression trace report", "Save");
        Memory mem = currentProgram.getMemory();
        LinkedHashMap<Address, String> literals = new LinkedHashMap<>();
        for (MemoryBlock block : mem.getBlocks()) {
            if (!block.isInitialized() || !block.isRead()) continue;
            int length = (int) Math.min(block.getSize(), 8L * 1024 * 1024);
            if (length <= 0) continue;
            byte[] buf = new byte[length];
            mem.getBytes(block.getStart(), buf);
            for (int at = 0; at < length; ) {
                int end = at;
                while (end < length && (buf[end] & 0xff) >= 32 && (buf[end] & 0xff) <= 126) end++;
                if (end - at >= 5 && end - at <= 112) {
                    String value = new String(buf, at, end - at, "US-ASCII");
                    if (interesting(value)) literals.put(block.getStart().add(at), value);
                }
                at = end > at ? end + 1 : at + 1;
            }
        }
        LinkedHashMap<Address, Function> functions = new LinkedHashMap<>();
        ArrayList<String> lines = new ArrayList<>();
        lines.add("JUS progression trace — filename/string consumers; NOT verified mission semantics");
        lines.add("Program: " + currentProgram.getName() + "; literal candidates: " + literals.size());
        int consumed = 0;
        for (Map.Entry<Address, String> candidate : literals.entrySet()) {
            if (monitor.isCancelled()) break;
            Address target = candidate.getKey();
            lines.add("\nSTRING " + target + " " + candidate.getValue());
            ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(target);
            while (refs.hasNext()) {
                Reference ref = refs.next();
                lines.add("  direct-xref " + ref.getFromAddress() + " " + ref.getReferenceType());
                noteFunction(currentProgram.getFunctionManager().getFunctionContaining(ref.getFromAddress()), functions);
            }
            // Ghidra may not have defined ARM literal pool references, so search
            // for words equal to the string's address. Words alone are *not* xrefs.
            long needle = target.getOffset();
            int n = 0;
            for (MemoryBlock block : mem.getBlocks()) {
                if (!block.isInitialized() || !block.isRead()) continue;
                long size = Math.min(block.getSize(), 8L * 1024 * 1024);
                for (long at = 0; at + 4 <= size; at += 4) {
                    Address loc = block.getStart().add(at);
                    long value;
                    try { value = Integer.toUnsignedLong(mem.getInt(loc)); }
                    catch (Exception e) { continue; }
                    if (value != needle) continue;
                    lines.add("  possible-literal-word " + loc + " (may be data, not executable)");
                    ReferenceIterator uses = currentProgram.getReferenceManager().getReferencesTo(loc);
                    while (uses.hasNext()) {
                        Reference use = uses.next();
                        lines.add("    literal-use " + use.getFromAddress());
                        noteFunction(currentProgram.getFunctionManager().getFunctionContaining(use.getFromAddress()), functions);
                    }
                    if (++n >= 30) break;
                }
                if (n >= 30) break;
            }
            if (++consumed >= 150) {
                lines.add("Limit reached (150 strings); narrow TERMS for more.");
                break;
            }
        }
        lines.add("\nCANDIDATE FUNCTIONS (string consumers, not proven progression routines): " + functions.size());
        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);
        int count = 0;
        for (Function function : functions.values()) {
            if (monitor.isCancelled()) break;
            lines.add("\n---- " + function.getName() + " @ " + function.getEntryPoint() + " ----");
            if (function.isExternal()) continue;
            if (++count > 45) { lines.add("Decompiler cap reached (45)."); break; }
            DecompileResults result = dec.decompileFunction(function, 20, monitor);
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                lines.add(result.getDecompiledFunction().getC());
            } else {
                lines.add("Decompilation unavailable: " + (result == null ? "null" : result.getErrorMessage()));
            }
        }
        dec.dispose();
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(output))) {
            for (String line : lines) { writer.write(line); writer.newLine(); }
        }
        println("Progression candidate trace saved to " + output.getAbsolutePath());
        println("No reward offsets or mission semantics have been asserted by this script.");
    }
}
