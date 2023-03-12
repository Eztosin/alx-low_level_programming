#!/bin/bash
# Find all .c files in the current directory
c_files=$(find . -maxdepth 1 -name "*.c")
# Compile each .c file into an object file
for c_file in $c_files; do
object_file=${c_file%.c}.o
gcc -c $c_file -o $object_file
