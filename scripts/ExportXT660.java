// @category XT660
import ghidra.app.script.GhidraScript;
import ghidra.app.util.exporter.GzfExporter;
import java.io.File;
public class ExportXT660 extends GhidraScript {
    public void run() throws Exception {
        File target=new File(getScriptArgs()[0],"XT660X-2005.gzf");
        GzfExporter exporter=new GzfExporter();
        boolean ok=exporter.export(target,currentProgram.getDomainFile(),monitor);
        if(!ok || !target.isFile() || target.length()==0)
            throw new Exception("GZF export failed: "+exporter.getMessageLog());
        println("Verified GZF export: "+target.length()+" bytes");
    }
}
