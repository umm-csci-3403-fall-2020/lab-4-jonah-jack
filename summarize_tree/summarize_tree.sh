#usr/bin/env bash

PWD = $1

dirCount = $(find $1 -type d | wc -l)

regFileCount = $(find $1 -type f| wc -l)

echo "Processed all the files from $PWD."
echo "There were $dirCount directories."
echo "There were $regFileCount files."
