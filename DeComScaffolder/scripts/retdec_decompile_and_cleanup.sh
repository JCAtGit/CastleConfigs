#!/bin/bash
# Wrapper for retdec-decompiler that cleans up the output directory.
# Usage: ./retdec_wrapper.sh [retdec-options] [--dry-run] [--yes]
# The --dry-run flag only affects cleanup; it does not change retdec behaviour.
# The --yes flag suppresses all prompts (cleanup runs automatically).

set -euo pipefail

# ----- Path to retdec-decompiler (update if needed) -----
RETDEC_BIN="/home/user/Desktop/CCastle/CCastleData/DeComScaffolder/Decompilers/RetDec-v5.0-Linux-Release/bin/retdec-decompiler"

# ----- Defaults -----
CLEANUP_DIR="."
DRY_RUN=false
AUTO_YES=false
retdec_args=()

# ----- Usage -----
usage() {
    cat <<EOF
Usage: $0 [retdec-options] [--dry-run] [--yes]

This wrapper runs retdec-decompiler with all provided arguments, then cleans up
the output directory, keeping only:
  - Files ending with .c
  - Files with no dot (no extension)

All other regular files (including hidden files, versioned binaries, etc.)
are DELETED without asking (use --dry-run to preview).

Options:
  --dry-run    Only preview what would be deleted (does not affect retdec run).
  --yes        Suppress confirmation prompt (run cleanup automatically).
  -h, --help   Show this help.

All other arguments are passed directly to retdec-decompiler.
EOF
    exit 1
}

# ----- Parse arguments -----
while [[ $# -gt 0 ]]; do
    case "$1" in
        --dry-run)
            DRY_RUN=true
            shift
            ;;
        --yes)
            AUTO_YES=true
            shift
            ;;
        -h|--help)
            usage
            ;;
        -o|--output)
            if [[ $# -lt 2 ]]; then
                echo "Error: -o/--output requires an argument" >&2
                exit 1
            fi
            OUTPUT_PATH="$2"
            CLEANUP_DIR="$(dirname "$OUTPUT_PATH")"
            [[ "$CLEANUP_DIR" == "." ]] && CLEANUP_DIR="$(pwd)"
            retdec_args+=("$1" "$2")
            shift 2
            ;;
        *)
            retdec_args+=("$1")
            shift
            ;;
    esac
done

# ----- Validate cleanup directory -----
if [[ ! -d "$CLEANUP_DIR" ]]; then
    echo "Error: Cleanup directory '$CLEANUP_DIR' does not exist." >&2
    exit 1
fi

if [[ "$CLEANUP_DIR" == "/" || "$CLEANUP_DIR" == "/home" ]]; then
    echo "Error: Refusing to run on '$CLEANUP_DIR' for safety." >&2
    exit 1
fi

cd "$CLEANUP_DIR"
CLEANUP_DIR="$(pwd)"
echo "Cleanup will be performed in: $CLEANUP_DIR"

# ----- Run retdec-decompiler -----
echo "Running: $RETDEC_BIN ${retdec_args[@]}"
"$RETDEC_BIN" "${retdec_args[@]}"
retdec_exit=$?
if [[ $retdec_exit -ne 0 ]]; then
    echo "Warning: retdec-decompiler exited with code $retdec_exit. Continuing with cleanup anyway."
fi

# ----- Cleanup phase (no interactive prompt) -----
if [[ "$DRY_RUN" == true ]]; then
    echo "--- DRY RUN: Files that would be DELETED ---"
    find "$CLEANUP_DIR" -maxdepth 1 -type f \( -not -name "*.c" -a -name "*.*" \) -print
    echo "--- End of dry run ---"
else
    if [[ "$AUTO_YES" == false ]]; then
        echo "NOTE: Running without --yes. Cleanup will proceed automatically after 5 seconds."
        echo "Press Ctrl+C to abort."
        sleep 5
    fi

    find "$CLEANUP_DIR" -maxdepth 1 -type f \( -not -name "*.c" -a -name "*.*" \) -delete
    echo "Deletion complete."
    echo "Remaining files:"
    find "$CLEANUP_DIR" -maxdepth 1 -type f -printf "%f\n" | sort
fi

exit 0
