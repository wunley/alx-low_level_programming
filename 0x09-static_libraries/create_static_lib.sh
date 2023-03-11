#!/bin/bash
gcc -c *.c
gcc *.o -L. -lall
