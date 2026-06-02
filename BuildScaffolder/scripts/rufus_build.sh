#!/bin/bash
set -e
set -x

# Show initial shell state
echo "=== Shell environment at script start ==="
echo "Using shell: $(ps -p $$ -ocomm=)"
echo "PATH: $PATH"

# Go to the build directory
cd "/home/user/Desktop/CASTLE/InstrumentationScaffolder/rufus_mage/" || exit 1
echo "=== Build directory after cd ==="
pwd
ls -l bootstrap.sh configure || echo "bootstrap.sh or configure script not found"

# Run the build steps
echo "=== Running bootstrap.sh ==="
./bootstrap.sh

echo "=== Running configure ==="
#./configure --host=x86_64-w64-mingw32
./configure --host=x86_64-w64-mingw32 CFLAGS="-O0 -g -fno-lto" CXXFLAGS="-O0 -g -fno-lto" LDFLAGS="-fno-lto"

echo "=== Running make ==="
make

echo "=== Moving binary to castle build folder ==="
cp "/home/user/Desktop/CASTLE/InstrumentationScaffolder/rufus_mage/src/rufus.exe" "/home/user/Desktop/CASTLE/BuildScaffolder/rufus_mage_build/rufus.exe"


