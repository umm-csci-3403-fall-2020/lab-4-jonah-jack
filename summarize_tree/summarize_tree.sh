#usr/bin/env bash

dirCount = $(find $1 -type d | wc -1)

regFileCount = $(find $1 -type f| wc -1)

echo "Processed all the files from <###PLACEHOLDER###>."
echo "There were ###PLACEHODLER### directories."
echo "There were ###PLACEHOLDER### files."
