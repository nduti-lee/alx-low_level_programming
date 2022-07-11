#!/bin/bash
gcc *.c -c -fPIC
gcc *.O -shared -o liball.so 
