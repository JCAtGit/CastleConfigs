#!/bin/bash
set -e
set -x

# Show initial shell state
echo "=== Shell environment at script start ==="
echo "Using shell: $(ps -p $$ -ocomm=)"
echo "PATH: $PATH"

cd "/home/user/Desktop/CCastle/CCastleData/InstrumentationScaffolder/AvdanOSImager_mage/" || exit 1
echo "=== Build directory after cd ==="
rm -rf build
mkdir -p build
cd build
cmake ..
cmake --build .

echo "=== binary to castle build folder ==="
cp "imager" "../../../BuildScaffolder/AvdanOSImager_mage_build/imager"
cp "imager-gui" "../../../BuildScaffolder/AvdanOSImager_mage_build/imager-gui"
