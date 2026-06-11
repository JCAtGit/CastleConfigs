#!/bin/bash
set -x  # keep tracing, but remove 'set -e' for explicit handling

# Show initial shell state
echo "=== Shell environment at script start ==="
echo "Using shell: $(ps -p $$ -ocomm=)"
echo "PATH: $PATH"

# Go to the build directory
cd "/home/user/Desktop/CCastle/CCastleData/InstrumentationScaffolder/git-2.54.0_mage/" || exit 1

echo "=== Running make ==="
make configure
./configure --prefix=/usr CFLAGS="-g -O0"
make all



# Copy binary
echo "=== Moving binary to castle build folder ==="
if cp "./hashcat" "../../BuildScaffolder/hashcat-7.1.2_mage_build/hashcat"; then
    echo "[OK] Binary copied successfully"
else
    echo "[FAIL] Failed to copy binary"
    exit 1
fi

echo "=== All steps completed successfully ==="
exit 0 

make configure
./configure --prefix=/usr
make all doc info
