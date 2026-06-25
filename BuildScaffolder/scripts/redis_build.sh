#!/bin/bash
set -e
set -x

cd /home/user/Desktop/CCastle/CCastleData/InstrumentationScaffolder/redis-8.8.0_mage/

export BUILD_TLS=yes BUILD_WITH_MODULES=yes INSTALL_RUST_TOOLCHAIN=yes DISABLE_WERRORS=yes
   make -j "$(nproc)" all IGNORE_MISSING_DEPS=1
# make -j "$(nproc)" all IGNORE_MISSING_DEPS=1 CFLAGS="-O0 -g -fno-lto" CXXFLAGS="-O0 -g -fno-lto" LDFLAGS="-fno-lto"

# Copy all binaries to the castle build folder
echo "=== Moving binaries to castle build folder ==="

target_dir="../../BuildScaffolder/redis-8.8.0_mage_build"
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
