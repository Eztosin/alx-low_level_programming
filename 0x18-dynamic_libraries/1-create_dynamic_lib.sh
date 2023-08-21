#!/bin/bash
gcc -Wextra -Wall -Werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
