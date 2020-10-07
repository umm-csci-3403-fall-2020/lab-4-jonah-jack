#/usr/bin/env bash

TARG_DIR="$1"

DIR_COUNT="$(find $1 -type d | wc -l)"

REG_FILE_COUNT="$(find $1 -type f| wc -l)"

echo "Processed all the files from $TARG_DIR."
echo "There were $DIR_COUNT directories."
echo "There were $REG_FILE_COUNT files."
