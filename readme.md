
### CASTLE Pipeline
The general outline of the pipeline is as follows:

```
1. Codebase -> 2. Instrumentation -> 3. Build -> 4. Decompilation -> 5. Evaluation -> 6. Analysis
```

1. Codebase.

The codebase directory holds the unaltered codebase of a repository or the generated code of a code generator.
The instrumentation process/scaffolder targets collections of code in this directory and outputs newly instrumented code along with any related files to the instrumentation dir. 

2. Instrumentation.

The instrumentation directory holds the instrumented codebase. Collections within this directory are targeted by the build processor/scaffolder and outputs, or should output, any resulting binary to its corresponding directory in the decompilation directory.

3. Build.

Automated building happens in this phase using a (self-written) script that facilites the automation or the use of some binary.
The build scaffolder inputs the paths from the instrumentation directory as instructed by the configurations and output the compiled files in their corresponding paths within the pipeline build directory.

4. Decompilation.

The decompilation phase takes the files from the pipeline build directory and outputs the results to corresponding path inside the decom directory.

5. Evaluation.

Evaluation input consists of files taken from the instrumentation directory (oracle) to use as oracle and the decompilation directory to evaluate.
This phase produces generalized and rudimentary observation results, that are intended to be used for further analysis.
These results are split into 3 parts:
- findings,	simply reports what is found with regards to markers in both the oracle and decom result.
- eval,		rudimentary comparison of findings are found here
- dev, 		anything that could be of potential interest to dev

6. Analysis

The analysis phase uses the files from the evaluation phases.
Odds are calulcated and a z-test for proportions can be made here for various sets. 

### Pipeline configuration
The pipeline configuration consists of 2 types of files:
1. Scaffolder configuration file.
2. Tool       configuration file.

#### Tool Config Format.

```
Pipeline phase 1 follows the following json format:
	{
	    "binPath": "/usr/bin/csmith",	// Some binary or shellscript to execute
		"run_bin_as_shell":false,       // If the binPath is a shellscript (e.g. '.sh') then this needs to be set to true.   
	    "name": "csmith",					// Name representing the pipeline item, this name will be appended mandatory formatting further down the pipeline.
	    "outputFlag": "--output",		// Set the outputflag that the script or binary recognizes, oftentimes "-o" or "--output".
		"static_pre_flags":[],			// Set the options that occur before the first argument pass
		"static_options":[],				// Set the options that occur before the output argument
		"redirectNull": false,			// Suppress messages by redirecting these to null
	    "seedFlag": "--seed",			// For a codegenerators, a seed option or something similar is assumed. Used to deterministically generate code.
	    "timestamp": 1777658365,			// Timestamp of last tool completion
		"active": false,					// Determines if an item is marked for procession, if false; task will not be enqueued
		"continue_checkpoint":true,		// For some tasks, this option can determine if a task were deemed to have been completed in the past and skips it
		"run_per_file":true,				// If the dir of a task contains multiple files, process each file as their own entity
		"run_per_dir":false,				// If the dir of a task contains multiple directory, process each directory as their own entity
		"run_as_it": true,				// Treats each file in the task directory as an iteration instance, name of file or dir has to be an it-integer.
		"it_begin": 1000,					// Starting (inclusive) integer for enqueuement if run_as_it is specified, otherwise will be ignored.
	    "it_end": 1000,					// Ending (exclusive) integer for enqueuement if run_as_it is specified, otherwise will be ignored.
		"it_ext":".c",						// Will enqueue the iteration file if it has a certain extensions, useful for codegens that also generate other files beside source.
		"output_arg":true,				// Determines if the outputflag + outputDir + fileName should be included in the task command. 
	}
```


```
All the other pipeline phases follow:
	{
		"name":"csmith_mage_clang",																			// 
		"tgtDir":"/home/user/Desktop/CCastle/CCastleData/InstrumentationScaffolder/csmith_mage/",	// 
		"binPath":"/usr/bin/clang",																			//
		"run_bin_as_shell":false,																			//
		"static_pre_flags":[],																				//
		"static_options":[],																					//
		"redirectNull": true,																					//
		"outputFlag":"-o",																					//
		"active":false,																						//
		"continue_checkpoint":false,																			//
		"run_per_file":true,																					//
		"run_per_dir":false,																					//
		"run_as_it": true,																					//
		"it_begin": 0,																							//
		"it_end": 1000,																						//
		"it_ext":".c",																							//
		"comments":"it_ext should be 'c' to allow iteration"												//
	},
```

#### Scaffolder Config format.

```
	{
		"timestamp":0,
		"version":0,
		"outputDir":"/home/user/Desktop/CCastle/CCastleData/BuildScaffolder/",
		"output_ext":"",
		"update_metadata": false,
		"save_on_exit":false,
		"backup_before_save":false,
		"dry_run":false
	}
```


#### Marker config format (example at CCastleData/configs/CCastlePipeline/formats.json).
```
	{
		"name": "mage_alpha",
		"counter": 0,
		"keyword": "static ",
		"functionType": "void ",
		"definitionFileName": "MageAlpha",
		"paramSignature": "(int id)",
		"definition": "volatile int dummy = id; __asm__ volatile(\"\"::\"r\"(id):\"memory\");",
		"pragma_once": "#pragma once\n",
		"headerInclusionDirective":"#include ",
		"inclusionDirectiveInclGuard": "MAGE",
		"inclusionDirectiveIFNDEF":"#ifndef",
		"inclusionDirectiveDEF":"#define",
		"inclusionDirectiveENDIF":"#endif",
		"noOptAttributes":"__attribute__((noinline, used, noipa, optnone, optimize(\"-O0\")))",
		"noOptPragmaAlt":"#if defined(__clang__)\n#pragma clang optimize off\n#elif defined(__GNUC__)\n#pragma GCC push_options\n#pragma GCC optimize (\"O0\")\n#endif\n",
		"noOptPragma":"#if defined(__clang__)\n#pragma clang optimize off\n#elif defined(__GNUC__)\n#pragma GCC optimize (\"O0\")\n#elif defined(_MSC_VER)\n#pragma optimize(\"\", off)\n#endif",
		"memBarrier": "__asm__ volatile(\"\" ::: \"memory\");\n"
	}
```
