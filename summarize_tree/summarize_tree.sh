#!/usr/bin/env bash

TARG_DIR="$1"

cd "$TARG_DIR" || exit

DIR_COUNT=$(find . -type d | wc -l)

REG_FILE_COUNT=$(find . -type f| wc -l)

echo "There were $DIR_COUNT directories."
echo "There were $REG_FILE_COUNT regular files."
