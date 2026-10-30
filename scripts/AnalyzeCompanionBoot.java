// @category XT660
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.AddressSet;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

public class AnalyzeCompanionBoot extends GhidraScript {
    void seed(int a, String name) throws Exception {
        disassemble(toAddr(a));
        if (getFunctionAt(toAddr(a)) == null) createFunction(toAddr(a), name);
    }
    public void run() throws Exception {
        File out = new File(getScriptArgs()[0]); out.mkdirs();
        // Import the short BIN at 0x1800. IO/RAM must not be invented ROM bytes.
        currentProgram.getMemory().createUninitializedBlock("IO_RAM", toAddr(0), 0x1800, false);
        currentProgram.getMemory().split(currentProgram.getMemory().getBlock(toAddr(0)),toAddr(0x800));
        currentProgram.getMemory().getBlock(toAddr(0)).setVolatile(true);
        seed(0x5000, "companion_application_entry");
        seed(0xf7a0, "application_handoff_stub");
        seed(0xfd92, "boot_periodic_service");
        seed(0xf800, "boot_reset"); seed(0xf8a0, "boot_service_poll");
        seed(0xfdc3, "boot_sci0_interrupt"); seed(0xfe9a, "boot_default_interrupt");
        seed(0xfc5d, "flash_ram_template_a"); seed(0xfcc0, "flash_ram_template_b");
        for (int a=0xff30; a<0xff50; a+=2) seed(currentProgram.getMemory().getShort(toAddr(a)) & 65535, null);
        for (int pass=0;pass<3;pass++) {
            ArrayList<Integer> targets=new ArrayList<>();
            for (Instruction i:currentProgram.getListing().getInstructions(toAddr(0xf800),true)) {
                if(i.getFlowType().isCall()) for(var a:i.getFlows()) if(a.getOffset()>=0xf800) targets.add((int)a.getOffset());
            }
            for(int a:targets) seed(a,null);
        }
        AddressSet bootRange=new AddressSet(toAddr(0xf800),toAddr(0xffff));
        for(Function fun:currentProgram.getFunctionManager().getFunctions(toAddr(0xf800),true))
            fun.setBody(fun.getBody().intersect(bootRange));
        DecompInterface dec=new DecompInterface(); dec.openProgram(currentProgram);
        try(PrintWriter t=new PrintWriter(new File(out,"disassembly.tsv"),StandardCharsets.UTF_8);
            PrintWriter c=new PrintWriter(new File(out,"decompiled.c"),StandardCharsets.UTF_8);
            PrintWriter f=new PrintWriter(new File(out,"functions.tsv"),StandardCharsets.UTF_8);
            PrintWriter all=new PrintWriter(new File(out,"boot_bytes.asm"),StandardCharsets.UTF_8)) {
            t.println("address\tbytes\tinstruction"); f.println("address\tname\tdecompiled");
            c.println("/* Functions rooted in companion boot; Ghidra may expand application handoff. Not original or buildable source. */");
            for(int a=0xf800;a<0x10000;) {
                Instruction i=getInstructionAt(toAddr(a));
                if(i!=null) {
                    String bytes=HexFormat.of().formatHex(i.getBytes());
                    t.printf("%04X\t%s\t%s%n",a,bytes,i.toString());
                    all.printf("%04X  %-12s %s%n",a,bytes,i.toString()); a+=i.getLength();
                } else { all.printf("%04X  %02x           .byte%n",a,currentProgram.getMemory().getByte(toAddr(a))&255);a++; }
            }
            for(Function fun:currentProgram.getFunctionManager().getFunctions(toAddr(0xf800),true)) {
                var r=dec.decompileFunction(fun,30,monitor);
                f.printf("%04X\t%s\t%s%n",fun.getEntryPoint().getOffset(),fun.getName(),r.decompileCompleted());
                c.printf("\n/* %04X %s */\n",fun.getEntryPoint().getOffset(),fun.getName());
                if(r.decompileCompleted()) c.println(r.getDecompiledFunction().getC()); else c.println("/* "+r.getErrorMessage()+" */");
            }
        } finally { dec.dispose(); }
    }
}
