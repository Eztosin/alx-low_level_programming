#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
export export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
