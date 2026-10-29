// @category XT660
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.*;
import ghidra.program.model.lang.Register;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.util.*;
import com.google.gson.Gson;

public class RefineXT660 extends GhidraScript {
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
    public void run()throws Exception{
        File d=new File(getScriptArgs()[0]);File full=new File(d,"full");full.mkdirs();
        Listing listing=currentProgram.getListing();
        Function main=getFunctionAt(toAddr(0x5000));AddressSet body=new AddressSet(main.getBody());body.addRange(toAddr(0x52d0),toAddr(0x54ef));main.setBody(body);
        // Preserve asynchronous shared RAM accesses conservatively in the structured decompile.
        currentProgram.getMemory().getBlock(toAddr(0x800)).setVolatile(true);
        // CPU12 routines are hand-written register interfaces, not ordinary stack-argument C.
        prototype(0xc1cd,new String[]{"input_raw","table"},new String[]{"A","IX"});
        prototype(0xc1db,new String[]{"index_q8","table"},new String[]{"D","IX"});
        prototype(0xc1f2,new String[]{"input_raw","table"},new String[]{"D","IX"});
        prototype(0xc21c,new String[]{"value","scale_address"},new String[]{"IY","IX"});
        prototype(0xc227,new String[]{"value","scale_address"},new String[]{"IY","IX"});
        prototype(0xc243,new String[]{"value","factor"},new String[]{"D","IY"});
        prototype(0xc32d,new String[]{"table_bias","columns"},new String[]{"IX","B"});
        prototype(0xc372,new String[]{"fraction","table_bias"},new String[]{"A","IX"});
        prototype(0xc3e2,new String[]{"fraction","table_bias"},new String[]{"D","IX"});
        prototype(0xc499,new String[]{"table_bias","columns","row_index"},new String[]{"IX","A","B"});
        prototype(0xc4dc,new String[]{"table_bias","columns"},new String[]{"IX","B"});
        prototype(0xc521,new String[]{"fraction","table_bias"},new String[]{"A","IX"});
        prototype(0xc9a9,new String[]{"count"},new String[]{"A"});
        prototype(0xca49,new String[]{"count"},new String[]{"A"});
        // Typed embedded data: these byte ranges are not instructions.
        for(int[] r:new int[][]{{0x56cb,5},{0x6947,1},{0x6948,48},{0xb8e4,28},{0xc255,19},{0xf779,39},{0xf7ee,18}}){
            clearListing(toAddr(r[0]),toAddr(r[0]+r[1]-1));
            createData(toAddr(r[0]),new ArrayDataType(ByteDataType.dataType,r[1],1));
        }
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
        DecompileOptions options=new DecompileOptions();options.grabFromProgram(currentProgram);
        options.setEliminateUnreachable(false);options.setRespectReadOnly(false);
        DecompInterface decomp=new DecompInterface();decomp.setOptions(options);decomp.openProgram(currentProgram);
        File functions=new File(d,"functions");int done=0,unavailable=0,failed=0;
        try(PrintWriter all=out(d,"decompiled.c");PrintWriter idx=out(d,"functions.tsv");PrintWriter warnings=out(full,"decompiler_warnings.tsv")){
            all.println("/* Whole supplied application: approximate structured C; raw instruction semantics in full/instructions.jsonl. */");
            idx.println("entry\tname\tbody_bytes\tstatus\tmessage");warnings.println("entry\tfunction\twarning");
            for(Function f:currentProgram.getFunctionManager().getFunctions(true)){
                if(listing.getInstructionAt(f.getEntryPoint())==null){unavailable++;idx.println(f.getEntryPoint()+"\t"+f.getName()+"\t0\tunavailable\tNo supplied executable bytes");continue;}
                DecompileResults result=decomp.decompileFunction(f,120,monitor);
                String msg=result.getErrorMessage().replace('\n',' ').replace('\t',' ');
                idx.println(f.getEntryPoint()+"\t"+f.getName()+"\t"+f.getBody().getNumAddresses()+"\t"+(result.decompileCompleted()?"ok":"failed")+"\t"+msg);
                if(!result.decompileCompleted()){failed++;continue;}
                done++;String code="/* Entry "+f.getEntryPoint()+" */\n"+result.getDecompiledFunction().getC();all.println(code);
                try(PrintWriter one=out(functions,f.getEntryPoint()+"_"+f.getName()+".c")){one.println(code);}
                for(String line:code.split("\n"))if(line.contains("WARNING:"))warnings.println(f.getEntryPoint()+"\t"+f.getName()+"\t"+line.trim());
            }
        }finally{decomp.dispose();}
        println("Whole application refined: "+done+" C functions; "+failed+" failures; "+unavailable+" unavailable targets.");
    }
}
