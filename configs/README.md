# Note
Currently headers are not included yet, which will lead to (fatal) error and warning message. Use the redirectNull option to hide messages.
This currently effects the resolution of semantics, but the AST syntactical elements will still be parsed.

## Evaluation Pipeline


```
1. Codebase -> 2. Instrumentation -> 3. Build -> 4. Decompilation -> 5. Evaluation -> 6. Analysis

```

## Scaffolder Configs
The scaffolder use two config files:
1. *s_config.json
For storing specific data pertaining to a scaffolder run, e.g. last time executed.
This config is currently relatively barren, but can be customized as required. 

Scaffolder Config format.


```
	{
		"timestamp":0,																	// Is used to timestamp a scaffolder run, this timestamp will only update if save_on_exit is enabled
		"version":0,																	// Is used to version the scaffolder pipeline if necessary (currently unused).
		"outputDir":"/home/user/Desktop/CCastle/CCastleData/BuildScaffolder/", // Determines/specifies output folder of scaffolder run. 
		"output_ext":"",																// Determines output extension of files within certain scaffolder runs.
		"update_metadata": false,													// Was planned to update statistics on the scaffolder itself (currently unused).
		"save_on_exit":false,															// Determines if generated (metadata) should be saved or discarded.
		"backup_before_save":false,													// Creates backup of this configuration file before overwriting the data. 
		"dry_run":false																// Outputs which tasks it plans to run without actually running it (currently unused). 
	}
```

2. *t_config.json
For specifying tasks to be run.

Tool Config Format.

```
Pipeline phase 1 follows the following json format:
	{
	    "binPath": "/usr/bin/csmith",	// Some binary or shellscript to execute.
		"run_bin_as_shell":false,       // If the binPath is a shellscript (e.g. '.sh') then this needs to be set to true.   
	    "name": "csmith",					// Name representing the pipeline item, this name will be appended mandatory formatting further down the pipeline.
	    "outputFlag": "--output",		// Set the outputflag that the script or binary recognizes, oftentimes "-o" or "--output".
		"static_pre_flags":[],			// Set the options that occur before the first argument pass.
		"static_options":[],				// Set the options that occur before the output argument.
		"redirectNull": false,			// Suppress messages by redirecting these to null.
	    "seedFlag": "--seed",			// For a codegenerators, a seed option or something similar is assumed. Used to deterministically generate code.
	    "timestamp": 1777658365,			// Timestamp of last tool completion.
		"active": false,					// Determines if an item is marked for procession, if false; task will not be enqueued.
		"continue_checkpoint":true,		// For some tasks, this option can determine if a task were to have been completed in the past and skips it.
		"run_per_file":true,				// If the dir of a task contains multiple files, process each file as their own entity.
		"run_per_dir":false,				// If the dir of a task contains multiple directory, process each directory as their own entity.
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
		"name":"csmith_mage_clang",								// codebase name and the other phases appended with _ as their own id's.
		"tgtDir":"...",											// the dir that will be used as input.
		"binPath":"/usr/bin/clang",								// the binary/script that will perform its procedures on the tgtDir.
		"run_bin_as_shell":false,								// if the binPath is a shellscript, then this should be enabled.
		"static_pre_flags":[],									// Set the options that occur before the first argument pass.
		"static_options":[],										// Set the options that occur before the output argument.
		"redirectNull": true,										// Suppress messages by redirecting these to null.
		"outputFlag":"-o",										// Set the outputflag that the script or binary recognizes, oftentimes "-o" or "--output".
		"active":false,											// Determines if an item is marked for procession, if false; task will not be enqueued.
		"continue_checkpoint":false,								// For some tasks, this option can determine if a task were have been completed in the past and skips it.
		"run_per_file":true,										// If the dir of a task contains multiple files, process each file as their own entity.
		"run_per_dir":false,										// If the dir of a task contains multiple directory, process each directory as their own entity.
		"run_as_it": true,										// Treats files in the task directory as iteration instances, name of file or dir has to be an it-integer.
		"it_begin": 0,												// Starting (inclusive) integer for enqueuement if run_as_it is specified, otherwise will be ignored.
		"it_end": 1000,											// Ending (exclusive) integer for enqueuement if run_as_it is specified, otherwise will be ignored.
		"it_ext":".c",												// Will enqueue the iteration file if it has a certain extensions.
		"comments":"it_ext should be 'c' to allow iteration"	// Comment entry, will be ignored but is for the pipeline user.
	},
```

## Future work
The validation scaffolder is setup for future work, currently unimplemented.


