#!/bin/bash
gcc -fpic -c *.c
gcc *.o -shared -o liball.so
