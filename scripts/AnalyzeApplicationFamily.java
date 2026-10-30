// @category XT660
// Flow-rooted analysis of the second supplied application family. No primary-address assumptions.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.data.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.lang.Register;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.util.*;
import com.google.gson.Gson;
public class AnalyzeApplicationFamily extends GhidraScript {
    PrintWriter out(File d,String n)throws Exception{return new PrintWriter(new File(d,n),StandardCharsets.UTF_8);}
    Map<String,Object> node(Varnode v){
        if(v==null)return null;
        Map<String,Object> m=new LinkedHashMap<>();
        m.put("space",v.getAddress().getAddressSpace().getName());m.put("offset",v.getOffset());m.put("size",v.getSize());
        Register r=currentProgram.getRegister(v.getAddress(),v.getSize());if(r!=null)m.put("register",r.getName());return m;
    }

    void prototype(int address,String[] names,String[] registers)throws Exception{
        Function f=getFunctionAt(toAddr(address));if(f==null)return;
        List<Parameter> pars=new ArrayList<>();
        for(int k=0;k<names.length;k++){
            Register r=currentProgram.getRegister(registers[k]);
            DataType t=r.getMinimumByteSize()==1?UnsignedCharDataType.dataType:UnsignedShortDataType.dataType;
            if(registers[k].equals("IX"))t=new PointerDataType(ByteDataType.dataType,2);
            pars.add(new ParameterImpl(names[k],t,r,currentProgram,SourceType.USER_DEFINED));
        }
        f.setCallingConvention("__asmA");
        f.setCustomVariableStorage(true);
        f.setReturn(UnsignedShortDataType.dataType,new VariableStorage(currentProgram,currentProgram.getRegister("D")),SourceType.USER_DEFINED);
        f.replaceParameters(pars,Function.FunctionUpdateType.CUSTOM_STORAGE,true,SourceType.USER_DEFINED);
    }
    void seed(int a,String name)throws Exception{
        if(a<0x4800||a>=0xf7ee)return;
        if(getInstructionContaining(toAddr(a))!=null&&getInstructionAt(toAddr(a))==null)return;
        disassemble(toAddr(a));
        if(getInstructionAt(toAddr(a))!=null&&getFunctionAt(toAddr(a))==null)createFunction(toAddr(a),name);
    }
    public void run()throws Exception{
        File d=new File(getScriptArgs()[0]);d.mkdirs();File full=new File(d,"full");full.mkdirs();
        Memory mem=currentProgram.getMemory();
        int[] cuts={0x800,0x1800,0x4800,0xf770,0xf7a0,0xf7ee,0xf800};
        for(int a:cuts)mem.split(mem.getBlock(toAddr(a)),toAddr(a));
        for(MemoryBlock b:mem.getBlocks()){
            int a=(int)b.getStart().getOffset();b.setRead(true);b.setWrite(a<0x1800);b.setVolatile(a<0x1800);
            b.setExecute(a==0x4800||a==0xf7a0);
            if(a<0x1800||a==0xf800)mem.convertToUninitialized(b);
        }
        seed(0x4800,"application_init");seed(0xf7a0,"application_entry_stub");seed(0xf7a4,"default_interrupt_loop");
        for(int a=0xf7a6;a<0xf7ee;a+=4)if((mem.getByte(toAddr(a))&255)==0x16){seed(a,String.format("dispatch_%04x",a));seed(mem.getShort(toAddr(a+1))&65535,null);}
        try(BufferedReader r=new BufferedReader(new FileReader(getScriptArgs()[1]))){String line;while((line=r.readLine())!=null){String[] f=line.split("\t");seed(Integer.parseInt(f[0],16),f[1]);}}
        Listing listing=currentProgram.getListing();
        for(int round=0;round<8;round++){
            analyzeAll(currentProgram);ArrayList<Integer> resume=new ArrayList<>();
            for(Instruction ins:listing.getInstructions(true)){
                long a=ins.getAddress().getOffset();
                if(ins.getMnemonicString().equals("NOP")&&a+1<0xf770&&getInstructionAt(toAddr(a+1))==null)resume.add((int)a+1);
                if(ins.getFlowType().isCall())for(Address t:ins.getFlows())if(t.getOffset()>=0x4800&&t.getOffset()<0xf770&&getFunctionAt(t)==null)resume.add((int)t.getOffset());
            }
            for(int a:resume){disassemble(toAddr(a));if(getFunctionContaining(toAddr(a))==null&&getInstructionAt(toAddr(a))!=null)createFunction(toAddr(a),null);}
            if(resume.isEmpty())break;
        }
        // Additional reviewed seeds / embedded data spans may be supplied after first-pass inspection.
        if(getScriptArgs().length>2)try(BufferedReader r=new BufferedReader(new FileReader(getScriptArgs()[2]))){String line;while((line=r.readLine())!=null){String[] f=line.split("\t");int a=Integer.parseInt(f[0],16);if(f[1].equals("data")){int n=Integer.parseInt(f[2]);clearListing(toAddr(a),toAddr(a+n-1));}else seed(a,f[1]);}}
        analyzeAll(currentProgram);
        prototype(0xbbaa,new String[]{"input_raw","table"},new String[]{"A","IX"});
        prototype(0xbbb8,new String[]{"index_q8","table"},new String[]{"D","IX"});
        prototype(0xbbcf,new String[]{"input_raw","table"},new String[]{"D","IX"});
        prototype(0xbbf9,new String[]{"value","scale_address"},new String[]{"IY","IX"});
        prototype(0xbc04,new String[]{"value","scale_address"},new String[]{"IY","IX"});
        prototype(0xbc20,new String[]{"value","factor"},new String[]{"D","IY"});
        prototype(0xbcc4,new String[]{"table_bias","columns"},new String[]{"IX","B"});
        prototype(0xbd09,new String[]{"fraction","table_bias"},new String[]{"A","IX"});
        prototype(0xbd79,new String[]{"fraction","table_bias"},new String[]{"D","IX"});
        prototype(0xbe30,new String[]{"table_bias","columns","row_index"},new String[]{"IX","A","B"});
        prototype(0xbe73,new String[]{"table_bias","columns"},new String[]{"IX","B"});
        prototype(0xbeb8,new String[]{"fraction","table_bias"},new String[]{"A","IX"});
        prototype(0xc122,new String[]{"count"},new String[]{"A"});
        prototype(0xc1c2,new String[]{"count"},new String[]{"A"});
        Gson gson=new Gson();
        try(PrintWriter p=out(full,"instructions.jsonl");PrintWriter t=out(d,"disassembly.tsv");PrintWriter refs=out(d,"references.tsv")){
            t.println("address\tbytes\tinstruction\tfunction");refs.println("from\tto\ttype\tfunction");
            for(Instruction ins:listing.getInstructions(true)){
                Map<String,Object> row=new LinkedHashMap<>();long a=ins.getAddress().getOffset();
                Function f=getFunctionContaining(ins.getAddress());String fn=f==null?"":f.getName();
                StringBuilder bytes=new StringBuilder();for(byte b:ins.getBytes())bytes.append(String.format("%02x",b&255));
                row.put("address",a);row.put("bytes",bytes.toString());row.put("assembly",ins.toString());row.put("function",fn);
                row.put("function_entry",f==null?null:f.getEntryPoint().getOffset());
                ArrayList<Long> flows=new ArrayList<>();for(Address target:ins.getFlows())flows.add(target.getOffset());row.put("flows",flows);
                row.put("flow_type",ins.getFlowType().toString());row.put("fallthrough",ins.getFallThrough()==null?null:ins.getFallThrough().getOffset());
                ArrayList<Map<String,Object>> ops=new ArrayList<>();
                for(PcodeOp op:ins.getPcode()){
                    Map<String,Object> o=new LinkedHashMap<>();o.put("op",op.getMnemonic());o.put("output",node(op.getOutput()));
                    ArrayList<Object> inputs=new ArrayList<>();for(Varnode v:op.getInputs())inputs.add(node(v));o.put("inputs",inputs);
                    if(op.getOpcode()==PcodeOp.CALLOTHER)o.put("userop",currentProgram.getLanguage().getUserDefinedOpName((int)op.getInput(0).getOffset()));
                    if(op.getOpcode()==PcodeOp.LOAD||op.getOpcode()==PcodeOp.STORE)o.put("memory_space",currentProgram.getAddressFactory().getAddressSpace((int)op.getInput(0).getOffset()).getName());
                    ops.add(o);
                }
                row.put("pcode",ops);p.println(gson.toJson(row));
                t.println(ins.getAddress()+"\t"+bytes+"\t"+ins+"\t"+fn);
                for(Reference ref:ins.getReferencesFrom())refs.println(ins.getAddress()+"\t"+ref.getToAddress()+"\t"+ref.getReferenceType()+"\t"+fn);
            }
        }

        DecompileOptions options=new DecompileOptions();options.grabFromProgram(currentProgram);options.setEliminateUnreachable(false);options.setRespectReadOnly(false);
        DecompInterface dec=new DecompInterface();dec.setOptions(options);dec.openProgram(currentProgram);
        try(PrintWriter c=out(d,"decompiled.c");PrintWriter f=out(d,"functions.tsv");PrintWriter w=out(full,"decompiler_warnings.tsv")){
            c.println("/* Approximate CPU12 pseudocode, not original source. See raw p-code and unresolved ranges. */");
            f.println("entry\tname\tbody_bytes\tstatus\tmessage");w.println("entry\tfunction\twarning");
            for(Function fun:currentProgram.getFunctionManager().getFunctions(true)){
                if(getInstructionAt(fun.getEntryPoint())==null){f.println(fun.getEntryPoint()+"\t"+fun.getName()+"\t0\tunavailable\tNo supplied executable bytes");continue;}
                var result=dec.decompileFunction(fun,60,monitor);String msg=result.getErrorMessage().replace('\n',' ').replace('\t',' ');
                f.println(fun.getEntryPoint()+"\t"+fun.getName()+"\t"+fun.getBody().getNumAddresses()+"\t"+(result.decompileCompleted()?"ok":"failed")+"\t"+msg);
                if(result.decompileCompleted()){String code="/* Entry "+fun.getEntryPoint()+" */\n"+result.getDecompiledFunction().getC();c.println(code);for(String line:code.split("\n"))if(line.contains("WARNING:"))w.println(fun.getEntryPoint()+"\t"+fun.getName()+"\t"+line.trim());}
            }
        }finally{dec.dispose();}
        try(PrintWriter p=out(d,"undefined_code_ranges.tsv")){
            p.println("start\tend_inclusive\tbytes");int start=-1;
            for(int a=0x4800;a<=0xf770;a++){boolean unknown=a<0xf770&&getInstructionContaining(toAddr(a))==null;if(unknown&&start<0)start=a;if(!unknown&&start>=0){p.printf("%04x\t%04x\t%d%n",start,a-1,a-start);start=-1;}}
        }
    }
}
