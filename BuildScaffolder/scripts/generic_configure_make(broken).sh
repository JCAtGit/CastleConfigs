#!/bin/bash
set -e
set -x

# ---------- Argument Handling ----------
if [ $# -ne 2 ]; then
    echo "Usage: $0 <input_directory> <output_directory>"
    echo "Example: $0 /path/to/source /path/to/destination"
    exit 1
fi

input_dir="$1"
output_dir="$2"

# Validate input directory
if [ ! -d "$input_dir" ]; then
    echo "Error: Input directory '$input_dir' does not exist or is not a directory."
    exit 1
fi

# ---------- Main Script ----------
cd "$input_dir" || exit 1
./configure
make

# Copy all binaries to the castle build folder
echo "=== Moving binaries to castle build folder ==="

target_dir="$output_dir"
mkdir -p "$target_dir" || { echo "Failed to create target directory"; exit 1; }

# Find all regular files with executable permission (binaries/scripts) and copy them.
# This stores the list of found files to avoid running 'find' twice.
executables=$(find . -type f -executable -exec sh -c 'file "$1" | grep -q "ELF"' _ {} \; -print)

if [ -z "$executables" ]; then
    echo "Warning: No executable files found to copy."
else
    # Copy the found files
    echo "$executables" | while IFS= read -r file; do
        cp -p "$file" "$target_dir/"
    done
    echo "Copied executables to $target_dir"
fi

echo "=== All steps completed successfully ==="
exit 0
