#!/bin/bash
set -e
set -x

# Show initial shell state
echo "=== Shell environment at script start ==="
echo "Using shell: $(ps -p $$ -ocomm=)"
echo "PATH: $PATH"

# Go to the build directory
cd "/home/user/Desktop/CCastle/CCastleData/InstrumentationScaffolder/hashcat-7.1.2_mage/" || exit 1

pyenv local 3.12.11
# TODO add in noopt?
make clean && make

echo "=== Moving binary to castle build folder ==="
cp "./hashcat" "../../BuildScaffolder/hashcat-7.1.2_mage_build/hashcat"

