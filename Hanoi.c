#include "Hanoi.h"

int SolveTower(unsigned int DiscsNumber, Tower *tower1,Tower *tower2, Tower *tower3)
{
	unsigned long int MinMoves = 0 ;
	int i = 0 ;
	static int moves = 0; 
	if(DiscsNumber == 1)  //base case, 1 element move from source to destination
	{
		tower3->element[tower3->top++] = tower1->element[--tower1->top]; //top destination elmenent is the top of the source element
		tower1->element[tower1->top + 1] = 0 ; //remove it from source 
		printf("Move from %s to %s \n",tower1->name , tower3->name);  //print the move
		return ++moves ;  //increment number of moves
	}
	SolveTower(DiscsNumber-1,tower1,tower3,tower2); //move from source to auxiliary except the last
	SolveTower(1,tower1,tower2,tower3);            // move the last to the destination 
	SolveTower(DiscsNumber-1,tower2,tower1,tower3); //move the tower in auxailiry to to destination

}
