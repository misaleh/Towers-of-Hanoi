#include <stdio.h>
#include <string.h>
#include "Hanoi.h"

int main(void)
{
	unsigned int DiscsNumber  = 0 ; // number of discs entered by user
	int moves,i = 0;                      // number of moves and loop counter
	printf("Enter the number of discs\n"); 
	scanf("%u",&DiscsNumber);        //scan number of discs from user
	Tower tower1,tower2,tower3; // 1 -> init , 2 -> aux , 3 -> dest
	
	tower1.element = (int *)malloc( DiscsNumber * sizeof(int));  //reserve a place in memory
	tower2.element = (int *)malloc( DiscsNumber * sizeof(int));
	tower3.element = (int *)malloc( DiscsNumber * sizeof(int));
	strcpy(tower1.name,"tower1");   // name of tower, used for printing
	strcpy(tower2.name,"tower2");
	strcpy(tower3.name,"tower3");

	for(i = DiscsNumber-1 ; i >= 0 ; i-- ) // fill the tower
	{
		(tower1.element)[i] = i+1;  // fill the tower  n >> n-1 >> n-2 >> ... >> 2 >> >>1
	}
	tower1.top = DiscsNumber  ;
	tower2.top = 0 ;
	tower3.top = 0 ;

	moves  = SolveTower(DiscsNumber,&tower1,&tower2,&tower3); //solve the game returning number of moves

	printf("Destination tower \n");
	for(i = 0 ; i < DiscsNumber ; i++) printf("%u \n",(tower3.element)[i]); //print the destination tower after changing
	printf("Number of moves = %d\n",moves); //print number of moves
}

