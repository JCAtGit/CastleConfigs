#!/bin/bash
set -e
set -x

cd /home/user/Desktop/CCastle/CCastleData/InstrumentationScaffolder/sqlite-amalgamation-3530300_mage/

clang shell.c sqlite3.c -lpthread -ldl -lm -o sqlite3 -w

target_dir="../../BuildScaffolder/sqlite-amalgamation-3530300_mage_build"
mkdir -p "$target_dir" || { echo "Failed to create target directory"; exit 1; }

# Copy all binaries to the castle build folder
echo "=== Moving binaries to castle build folder ==="

cp sqlite3 -p "$target_dir/"

echo "=== All steps completed successfully ==="
exit 0
