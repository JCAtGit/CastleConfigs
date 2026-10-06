#!/bin/bash

BINARY="$1"
OUTPUT="$2"

/home/user/.pyenv/shims/angr decompile "$BINARY" > "$OUTPUT"
