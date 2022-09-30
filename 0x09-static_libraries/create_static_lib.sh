#!/bin/bash
gcc -wall -werror -wextra -pendatic -c *.c
ar - rc liball.a *.o
ranlib liball.a
