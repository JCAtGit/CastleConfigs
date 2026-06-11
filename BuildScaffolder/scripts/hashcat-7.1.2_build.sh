#!/bin/bash
set -x  # keep tracing, but remove 'set -e' for explicit handling

# Show initial shell state
echo "=== Shell environment at script start ==="
echo "Using shell: $(ps -p $$ -ocomm=)"
echo "PATH: $PATH"

# Go to the build directory
cd "/home/user/Desktop/CCastle/CCastleData/InstrumentationScaffolder/hashcat-7.1.2_mage/" || exit 1

pyenv local 3.12.11

# Clean step
echo "=== Running make clean ==="
if make clean; then
    echo "[OK] make clean succeeded"
else
    echo "[FAIL] make clean failed"
    exit 1
fi

# Build step with debug flags
echo "=== Running make EXTRA_CFLAGS=\"-g -O0\" ==="
if make DEBUG=1; then
    echo "[OK] Build succeeded"
else
    echo "[FAIL] Build failed"
    exit 1
fi

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
