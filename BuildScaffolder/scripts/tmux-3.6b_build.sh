#!/bin/bash
set -e
set -x

# Show initial shell state
echo "=== Shell environment at script start ==="
echo "Using shell: $(ps -p $$ -ocomm=)"
echo "PATH: $PATH"

# Go to the build directory
cd "/home/user/Desktop/CCastle/CCastleData/InstrumentationScaffolder/tmux-3.6b_mage/" || exit 1
./autogen.sh
./configure CFLAGS="-O0 -g -fno-lto" CXXFLAGS="-O0 -g -fno-lto" LDFLAGS="-fno-lto" 
make -j 4

echo "=== Moving binary to castle build folder ==="
cp "./tmux" "../../BuildScaffolder/tmux-3.6b_mage_build/tmux"

