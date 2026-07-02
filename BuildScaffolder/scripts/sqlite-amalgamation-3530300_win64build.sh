#!/bin/bash
set -e
set -x

cd /home/user/Desktop/CCastle/CCastleData/InstrumentationScaffolder/sqlite-amalgamation-3530300_mage/

x86_64-w64-mingw32-gcc -w shell.c sqlite3.c -o sqlite3_win64

target_dir="../../BuildScaffolder/sqlite-amalgamation-3530300_mage_win64build"
mkdir -p "$target_dir" || { echo "Failed to create target directory"; exit 1; }

# Copy all binaries to the castle build folder
echo "=== Moving binaries to castle build folder ==="
cp sqlite3_win64.exe -p "$target_dir/"

echo "=== All steps completed successfully ==="
exit 0
