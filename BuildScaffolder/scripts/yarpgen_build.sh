#!/bin/sh
# Usage: ./script.sh <unused> <source_file> <output_file>

input1="$1"
input2="$2"
input3="$3"

echo "=== Changing directories ==="
cd "$input1" || { echo "Failed to change directory"; exit 1; }

# Get the parent directory and its base name
parent_dir="$(dirname "$input3")"
exec_name="$(basename "$input3")"

# Safety check: if input3 is a single-level dir like "output", 
# parent_dir becomes "." and exec_name becomes ".", which is invalid.
if [ "$exec_name" = "." ] || [ "$exec_name" = "/" ] || [ -z "$exec_name" ]; then
    echo "Error: input3 must have at least one parent directory level (e.g., ./build/output)."
    exit 1
fi

mkdir -p "$parent_dir" || { echo "Failed to create parent directory"; exit 1; }

echo "Compiling to: $parent_dir/$exec_name"
clang -mcmodel=large driver.c func.c "$input2" "$parent_dir/$exec_name"
