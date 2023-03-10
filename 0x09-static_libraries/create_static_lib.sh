#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic
gcc -c *.c
ar -rcs liball.a *.o
