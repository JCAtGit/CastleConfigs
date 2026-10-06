# Decompiler Scripts
Decompiler scripts are made when a decompiler headless script does not possess the following signature for decompilation necessary for bath processing:
./decompiler <inputPathBinary> <outputFlag (optional)> <outputPathDecompiledC>

A script is then written as a wrapper to implement enable such a signature. 

## TODO
- scripts currently use hardcoded locations for the binaries, redesign when iterating further.
- Find a better location for decompilers and their scripts