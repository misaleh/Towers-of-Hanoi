#include "Hanoi.h"

int SolveTower(unsigned int DiscsNumber, Tower tower1,Tower tower2, Tower tower3)
{
	unsigned long int MinMoves = 0 ;
	int i = 0 ;
	static int moves = 0;
	
	if(DiscsNumber == 1)
	{
		printf("%d %d ",tower3.top, tower1.top);
		tower3.element[tower3.top++] = tower1.element[--tower1.top];
		//tower3.top++;
		printf("Move from %s to %s \n",tower1.name , tower3.name);
		return ++moves ;
	}
	SolveTower(DiscsNumber-1,tower1,tower3,tower2);
	SolveTower(1,tower1,tower2,tower3);
	SolveTower(DiscsNumber-1,tower2,tower1,tower3);

}
