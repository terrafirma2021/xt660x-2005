// @category XT660
import ghidra.app.script.GhidraScript;
import java.nio.file.*;
import java.util.Arrays;
public class VerifyGhidraArchive extends GhidraScript {
    public void run() throws Exception {
        byte[] input=Files.readAllBytes(Path.of(getScriptArgs()[0]));
        byte[] stored=new byte[0xf800-0x1800];
        currentProgram.getMemory().getBytes(toAddr(0x1800),stored);
        if(!Arrays.equals(stored,Arrays.copyOfRange(input,0x1800,0xf800)))throw new Exception("Archived ROM differs from original");
        if(!currentProgram.getLanguageID().toString().equals("XT660-CPU12:BE:16:default"))throw new Exception("Wrong language");
        if(getFunctionAt(toAddr(0x5000))==null || getInstructionAt(toAddr(0xf778))==null)throw new Exception("Missing recovered code");
        if(currentProgram.getSymbolTable().getGlobalSymbol("cal_main_quantity_A",toAddr(0x1b66))==null)throw new Exception("Missing map label");
        println("GZF round-trip verified: ROM bytes, processor model, code, and calibration labels retained.");
    }
}
