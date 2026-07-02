#!/bin/bash
set -x  # keep tracing, but remove 'set -e' for explicit handling

# Show initial shell state
echo "=== Shell environment at script start ==="
echo "Using shell: $(ps -p $$ -ocomm=)"
echo "PATH: $PATH"

# Go to the build directory
cd "/home/user/Desktop/CCastle/CCastleData/InstrumentationScaffolder/radare2-6.1.8_mage/" || exit 1

echo "=== Running make ==="
make purge
make clean
make configure
./configure
make -j 4
# Copy all binaries to the castle build folder
echo "=== Moving binaries to castle build folder ==="

target_dir="../../BuildScaffolder/radare2-6.1.8_mage_build"
mkdir -p "$target_dir" || { echo "Failed to create target directory"; exit 1; }

# Find all regular files with executable permission (binaries/scripts) and copy them
# If you only want true ELF binaries, replace '-executable' with a `file` test.
find . -type f -executable -exec sh -c 'file "$1" | grep -q "ELF"' _ {} \; -exec cp -p {} "$target_dir/" \;

# Check if any files were copied
if [ "$(find . -type f -executable | wc -l)" -eq 0 ]; then
    echo "Warning: No executable files found to copy."
else
    echo "Copied executables to $target_dir"
fi

echo "=== All steps completed successfully ==="
exit 0
