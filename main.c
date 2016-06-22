#include <stdio.h>
#include <string.h>
#include "Hanoi.h"

int main(void)
{
	unsigned int DiscsNumber  = 0 ;
	int moves,i = 0;
	printf("Enter the number of discs\n");
	scanf("%u",&DiscsNumber);
	Tower tower1,tower2,tower3; // 1 -> init , 2 -> aux , 3 -> dest
	
	tower1.element = (int *)malloc( DiscsNumber * sizeof(int));
	tower2.element = (int *)malloc( DiscsNumber * sizeof(int));
	tower3.element = (int *)malloc( DiscsNumber * sizeof(int));
	strcpy(tower1.name,"tower1");
	strcpy(tower2.name,"tower2");
	strcpy(tower3.name,"tower3");
	
	printf("name %s %s %s \n",tower1.name ,tower2.name ,tower3.name );

	for(i = DiscsNumber-1 ; i >= 0 ; i-- ) // fill the tower
	{
		(tower1.element)[i] = i+1;  // fill the tower  n >> n-1 >> n-2 >> ... ->1
	}
	tower1.top = DiscsNumber  ;
	tower2.top = 0 ;
	tower3.top = 0 ;

	moves  = SolveTower(DiscsNumber,tower1,tower2,tower3);
	printf("Destination tower \n");
	for(i = 0 ; i < DiscsNumber ; i++) printf("%u \n",(tower3.element)[i]);
	printf("Number of moves = %d\n",moves);
}

