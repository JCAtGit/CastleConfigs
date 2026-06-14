#!/bin/bash
# Script: keep_c_and_noext.sh
# Usage: ./keep_c_and_noext.sh [DIR] [--dry-run]
# Keeps only .c files and files with no dot (no extension) in DIR.
# Deletes all other files (including hidden files, versioned binaries like foo-1.2.3)

set -euo pipefail

# ----- Helper functions -----
usage() {
    cat <<EOF
Usage: $0 [DIR] [--dry-run]

Keep only .c files and files with no dot (no extension) in DIR.
All other regular files are DELETED.

Options:
  DIR          Target directory (default: current directory)
  --dry-run    Print files that would be deleted without actually deleting
EOF
    exit 1
}

# ----- Parse arguments -----
TARGET_DIR="."
DRY_RUN=false

while [[ $# -gt 0 ]]; do
    case "$1" in
        --dry-run)
            DRY_RUN=true
            shift
            ;;
        -h|--help)
            usage
            ;;
        *)
            TARGET_DIR="$1"
            shift
            ;;
    esac
done

# ----- Validate directory -----
if [[ ! -d "$TARGET_DIR" ]]; then
    echo "Error: Directory '$TARGET_DIR' does not exist." >&2
    exit 1
fi

# Safety: refuse to run on root or /home (destructive)
if [[ "$TARGET_DIR" == "/" || "$TARGET_DIR" == "/home" ]]; then
    echo "Error: Refusing to run on '$TARGET_DIR' for safety." >&2
    exit 1
fi

# Convert to absolute path for clearer output
cd "$TARGET_DIR"
TARGET_DIR="$(pwd)"

echo "Working in: $TARGET_DIR"
if [[ "$DRY_RUN" == true ]]; then
    echo "DRY RUN mode - no files will actually be deleted"
else
    echo "WARNING: This will DELETE files. Use --dry-run to preview."
    read -p "Are you sure you want to continue? (y/N) " -n 1 -r
    echo
    if [[ ! $REPLY =~ ^[Yy]$ ]]; then
        echo "Aborted."
        exit 0
    fi
fi

# ----- Build find command -----
# Keep:
#   - Files ending with .c
#   - Files whose basename contains NO dot (i.e., no extension)
#
# Delete everything else: any regular file that has a dot AND is not a .c file.
# That includes files with multiple dots (e.g., "a.b.c"), hidden files (".bashrc"),
# and versioned binaries ("git-2.54.0").

# Use find's -delete action, but with dry‑run we just print.
if [[ "$DRY_RUN" == true ]]; then
    echo "Files that would be DELETED:"
    find "$TARGET_DIR" -maxdepth 1 -type f \( -not -name "*.c" -a -name "*.*" \) -print
    echo "--- End of dry run ---"
else
    find "$TARGET_DIR" -maxdepth 1 -type f \( -not -name "*.c" -a -name "*.*" \) -delete
    echo "Deletion complete."
    echo "Remaining files:"
    find "$TARGET_DIR" -maxdepth 1 -type f -printf "%f\n" | sort
fi

exit 0
