#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
gcc -c 0-main.c
gcc -o 0-main 0-main.o liball.so 
sudo ldconfig
