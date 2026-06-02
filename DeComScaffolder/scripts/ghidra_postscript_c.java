import java.io.File;
import java.util.ArrayList;
import java.util.List;

import ghidra.app.script.GhidraScript;
import ghidra.app.util.Option;
import ghidra.app.util.exporter.CExporter; 

public class ExportToC extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outputFile = new File(args[0]);

        CExporter exporter = new CExporter();
        List<Option> opts = new ArrayList<>();
        exporter.setOptions(opts);
        exporter.setExporterServiceProvider(state.getTool());
        exporter.export(outputFile, currentProgram, null, monitor);
    }
}
