main.bin : Hanoi.c Hanoi.h main.c
	gcc -w main.c Hanoi.c -o main.bin
