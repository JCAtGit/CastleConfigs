
import java.io.File;        // File class for handling file paths
import java.util.ArrayList; // ArrayList for creating a resizable list of options
import java.util.List;      // List interface for declaring the options list

import ghidra.app.script.GhidraScript;        // Base class for all Ghidra scripts
import ghidra.app.util.Option;                // Option class used to configure exporters
import ghidra.app.util.exporter.CppExporter;  // CppExporter class that exports the program as C/C++ source

public class ghidra_postscript extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outputFile = new File(args[0]);

        CppExporter exporter = new CppExporter();
        List<Option> opts = new ArrayList<>();
        opts.add(new Option(CppExporter.CREATE_HEADER_FILE, false));

        exporter.setOptions(opts);
        exporter.setExporterServiceProvider(state.getTool());
        exporter.export(outputFile, currentProgram, null, monitor);
    }
}

