# MMS
Micro Mouse Simulator code for solving the maze with different algorithms :D


NOTE for compiling the code, for some reason it doesn't work proberly, so I compiled them to assembly first
like this
gcc -c main.c -o main.o
gcc -c API.c -o API.o
gcc -c solver.c -o solver.o
gcc main.c API.c solver.c -o main.exe