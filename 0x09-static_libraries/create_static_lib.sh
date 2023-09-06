#!/bin/bash

# Compile all .c files into .o object files
gcc -c *.c

# Create the static library liball.a from the generated .o files
ar -rc liball.a *.o

# Index the static library
ranlib liball.a

