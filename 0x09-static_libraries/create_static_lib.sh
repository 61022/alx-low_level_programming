#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
gcc -c *c
ar -rcs liball.a *.o
ranlib liball.a
