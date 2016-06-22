#ifndef HANOI_H
#define HANOI_H

typedef struct {
int top;
char name[7] ;
int *element ;
} Tower;

int SolveTower(unsigned int,Tower,Tower, Tower); // returns number of minimum moves , (number of discs , from , aux , dest)


#endif
