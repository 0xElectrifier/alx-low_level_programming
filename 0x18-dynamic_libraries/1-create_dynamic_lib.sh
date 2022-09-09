#!/usr/bin/bash
gcc -c -fPIC *.c && gcc -L -shared *.o -o liball.so
