// @category XT660
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.app.util.exporter.GzfExporter;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.scalar.Scalar;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

public class AnalyzeXT660 extends GhidraScript {
    PrintWriter out(File d, String n) throws Exception { return new PrintWriter(new File(d,n), StandardCharsets.UTF_8); }
    void seed(int a, String name) throws Exception {
        disassemble(toAddr(a));
        if (getFunctionAt(toAddr(a)) == null) createFunction(toAddr(a), name);
        else if (name != null) getFunctionAt(toAddr(a)).setName(name, SourceType.USER_DEFINED);
        currentProgram.getSymbolTable().addExternalEntryPoint(toAddr(a));
    }
    public void run() throws Exception {
        File d = new File(getScriptArgs()[0]); d.mkdirs();
        Memory mem = currentProgram.getMemory();
        // This T64 application uses fixed 16-bit addresses; avoid the generic S12C paged model.
        MemoryBlock block = mem.getBlock(toAddr(0));
        mem.split(block,toAddr(0x800)); mem.split(mem.getBlock(toAddr(0x800)),toAddr(0x1800));
        mem.split(mem.getBlock(toAddr(0x1800)),toAddr(0x5000));
        mem.split(mem.getBlock(toAddr(0x5000)),toAddr(0xf779));
        mem.split(mem.getBlock(toAddr(0xf779)),toAddr(0xf7a0));
        mem.split(mem.getBlock(toAddr(0xf7a0)),toAddr(0xf7ee));
        mem.split(mem.getBlock(toAddr(0xf7ee)),toAddr(0xf800));
        String[] names={"IO_FILE_FF_PLACEHOLDER","RAM_FILE_FF_PLACEHOLDER","CALIBRATION_ROM","APPLICATION_CODE","BUILD_METADATA","APPLICATION_DISPATCH","TRAILER","MISSING_BOOT_FF"};
        int idx=0;
        for(MemoryBlock b:mem.getBlocks()) {
            b.setName(names[idx++]); b.setRead(true);
            b.setWrite(b.getStart().getOffset()<0x1800);
            b.setExecute(b.getStart().getOffset()==0x5000 || b.getStart().getOffset()==0xf7a0);
            if(b.getStart().getOffset()<0x800) b.setVolatile(true);
        }
        // File FF bytes at IO/RAM addresses do not describe runtime contents.
        mem.convertToUninitialized(mem.getBlock(toAddr(0)));
        mem.convertToUninitialized(mem.getBlock(toAddr(0x800)));
        clearListing(toAddr(0xf800),toAddr(0xffff));
        mem.convertToUninitialized(mem.getBlock(toAddr(0xf800)));
        seed(0x5000,"application_init");
        // Ghidra stops after long runs of NOPs; these are observed continuations, not new functions.
        disassemble(toAddr(0x52d0));
        disassemble(toAddr(0x5724));
        seed(0xf7a0,"application_entry_stub");
        seed(0xf7a4,"default_interrupt_loop");
        for(int a=0xf7a6;a<0xf7ee;a+=4) {
            if((mem.getByte(toAddr(a))&255)==0x16) {
                int dest=mem.getShort(toAddr(a+1))&65535;
                seed(a,String.format("dispatch_stub_%04x",a));
                seed(dest,null);
            }
        }
        // Computed ADC dispatch: LDX #$6968; channel*2; LDX 0,X; JSR 0,X at $68e7.
        for(int a=0x6968;a<0x6978;a+=2) seed(mem.getShort(toAddr(a))&65535,null);
        // The adjacent earlier table has the same valid function-pointer layout.
        for(int a=0x6948;a<0x6968;a+=2) seed(mem.getShort(toAddr(a))&65535,null);
        analyzeAll(currentProgram);
        Listing listing=currentProgram.getListing();
        for(int round=0;round<8;round++) {
            ArrayList<Address> continuations=new ArrayList<>();
            for(Instruction ins:listing.getInstructions(true)) {
                Address next=ins.getMaxAddress().next();
                if(ins.getMnemonicString().equals("NOP") && next!=null && next.getOffset()<0xf779 && listing.getInstructionAt(next)==null)
                    continuations.add(next);
            }
            if(continuations.isEmpty())break;
            for(Address a:continuations)disassemble(a);
            analyzeAll(currentProgram);
        }
        // Unreferenced but structurally coherent routines/alternate blocks, manually inspected.
        // Entry points are candidates, not proof these paths execute in this calibration.
        int[] recovered={0x5b68,0x6927,0x7208,0x96f7,0x96fd,0x9973,0x99f8,0xc268,0xc2e8,0xc386,0xc3c0,0xc422,0xcaea,0xcb8b,0xdc39,0xe294,0xedc2,0xee18};
        for(int a:recovered) {
            if(listing.getInstructionContaining(toAddr(a))==null) {
                disassemble(toAddr(a));
                if(getFunctionContaining(toAddr(a))==null) createFunction(toAddr(a),String.format("candidate_unreferenced_%04x",a));
                setEOLComment(toAddr(a),"Structurally decoded unreferenced code; execution/entry status unconfirmed.");
            }
        }
        analyzeAll(currentProgram);
        // Pick up genuine direct JSR targets missed by function creation, never raw-byte guesses.
        for(int round=0;round<2;round++) {
            for(Instruction ins:listing.getInstructions(true)) if(ins.getFlowType().isCall())
                for(Address target:ins.getFlows()) if(target.getOffset()>=0x5000 && target.getOffset()<0xf779 && getFunctionAt(target)==null)
                    createFunction(target,null);
            analyzeAll(currentProgram);
        }
        int[] helpers={0xc1cd,0xc1db,0xc1f2,0xc21c,0xc227,0xc243,0xc28d,0xc32d,0xc372,0xc3e2,0xc499,0xc4dc,0xc521,0xc9a9,0xca49};
        String[] helperNames={"lookup_u8_uniform_axis","interp_u8_q8_index","lookup_u8_uniform_u16_axis","scale_u16_by_u8","scale_u16_by_u8_rounded","multiply_u16_shift8_saturate","lookup_u8_grid_special","bilinear_u8_grid","interp_u8_q8_fraction","interp_u16_q16_fraction","bilinear_u16_grid","bilinear_modulo24_grid","interp_modulo24","axis_index_u8_ascending","axis_index_u16_ascending"};
        for(int k=0;k<helpers.length;k++) {
            Function f=getFunctionAt(toAddr(helpers[k]));
            if(f!=null)f.setName(helperNames[k],SourceType.USER_DEFINED);
        }
        File annotations=new File(d,"ghidra_labels.tsv");
        if(annotations.exists())try(BufferedReader reader=new BufferedReader(new FileReader(annotations,StandardCharsets.UTF_8))) {
            String line;
            while((line=reader.readLine())!=null) {
                String[] fields=line.split("\t",3);Address a=toAddr(Long.parseLong(fields[0],16));
                createLabel(a,fields[1],true);setEOLComment(a,fields[2]);
            }
        }
        int instructionBytes=0;
        try(PrintWriter p=out(d,"disassembly.tsv"); PrintWriter refs=out(d,"references.tsv");PrintWriter ops=out(d,"operands.tsv")) {
            p.println("address\tbytes\tinstruction\tfunction");refs.println("from\tto\ttype\tfunction");ops.println("address\tmnemonic\toperand\tvalue\tfunction");
            for(Instruction ins:listing.getInstructions(true)) {
                Function f=getFunctionContaining(ins.getAddress()); String fn=f==null?"":f.getName();
                StringBuilder bytes=new StringBuilder();for(byte v:ins.getBytes()) bytes.append(String.format("%02x",v&255));
                instructionBytes+=ins.getLength();p.println(ins.getAddress()+"\t"+bytes+"\t"+ins+"\t"+fn);
                for(Reference ref:ins.getReferencesFrom()) refs.println(ins.getAddress()+"\t"+ref.getToAddress()+"\t"+ref.getReferenceType()+"\t"+fn);
                for(int i=0;i<ins.getNumOperands();i++) for(Object obj:ins.getOpObjects(i)) {
                    if(obj instanceof Scalar) ops.println(ins.getAddress()+"\t"+ins.getMnemonicString()+"\t"+i+"\t"+((Scalar)obj).getUnsignedValue()+"\t"+fn);
                    else if(obj instanceof Address) ops.println(ins.getAddress()+"\t"+ins.getMnemonicString()+"\t"+i+"\t"+((Address)obj).getOffset()+"\t"+fn);
                }
            }
        }
        DecompInterface decomp=new DecompInterface();decomp.openProgram(currentProgram);
        File funcs=new File(d,"functions");funcs.mkdirs();int success=0,failed=0,unavailable=0;
        try(PrintWriter p=out(d,"decompiled.c");PrintWriter index=out(d,"functions.tsv")) {
            p.println("/* Ghidra approximate pseudocode, not original or buildable source. HC12 flat CPU12 model. */");
            index.println("entry\tname\tbody_bytes\tstatus\tmessage");
            for(Function f:currentProgram.getFunctionManager().getFunctions(true)) {
                if(listing.getInstructionAt(f.getEntryPoint())==null) {
                    unavailable++;index.println(f.getEntryPoint()+"\t"+f.getName()+"\t0\tunavailable\tNo supplied executable bytes at target");
                    p.println("/* UNAVAILABLE: "+f.getName()+" at "+f.getEntryPoint()+" - target outside supplied application code. */");continue;
                }
                DecompileResults result=decomp.decompileFunction(f,60,monitor);
                String status=result.decompileCompleted()?"ok":"failed";
                String msg=result.getErrorMessage().replace('\n',' ').replace('\t',' ');
                index.println(f.getEntryPoint()+"\t"+f.getName()+"\t"+f.getBody().getNumAddresses()+"\t"+status+"\t"+msg);
                if(result.decompileCompleted()) {
                    success++;String code="/* Entry "+f.getEntryPoint()+" */\n"+result.getDecompiledFunction().getC();p.println(code);
                    try(PrintWriter one=out(funcs,f.getEntryPoint()+"_"+f.getName()+".c")){one.println(code);}
                } else {failed++;p.println("/* FAILED "+f.getName()+": "+msg+" */");}
            }
        } finally {decomp.dispose();}
        try(PrintWriter p=out(d,"undefined_code_ranges.tsv")) {
            p.println("start\tend_inclusive\tbytes");int start=-1;
            for(int a=0x5000;a<=0xf779;a++) {
                boolean unknown=a<0xf779 && listing.getInstructionContaining(toAddr(a))==null;
                if(unknown && start<0)start=a;
                if(!unknown && start>=0){p.printf("%04x\t%04x\t%d%n",start,a-1,a-start);start=-1;}
            }
        }
        try(PrintWriter p=out(d,"summary.txt")) {
            p.println("Language: "+currentProgram.getLanguageID());p.println("Instruction bytes: "+instructionBytes);
            p.println("Functions decompiled: "+success);p.println("Functions failed: "+failed);
            p.println("Unavailable external/boot targets: "+unavailable);
            p.println("No original source names or calibration engineering units are claimed.");
        }
        // Export the saved database in a separate headless process (ExportXT660.java).
        // Packing an unsaved program during this transaction is not supported.
        println("XT660 export done: "+success+" decompiled, "+failed+" failed, "+instructionBytes+" instruction bytes");
    }
}
