/*!< C program to print mirrored half diamond star pattern */

/*

Enter the pattern limit = 10 [ n= 10 ] 

		c=1	c=2	c=3	c=4	c=5	c=6	c=7	c=8	c=9	10		Star	Space
r=1											*		1		9

r=2										*	*		2		8

r=3									*	*	*		3		7

r=4								*	*	*	*		4		6

r=5							*	*	*	*	*		5		5

r=6						*	*	*	*	*	*		6		4

r=7					*	*	*	*	*	*	*		7		3

r=8				*	*	*	*	*	*	*	*		8		2

r=9			*	*	*	*	*	*	*	*	*		9		1

r=10	*	*	*	*	*	*	*	*	*	*		10		0

r=11		*	*	*	*	*	*	*	*	*		9		1

r=12			*	*	*	*	*	*	*	*		8		2

r=13				*	*	*	*	*	*	*		7		3

r=14					*	*	*	*	*	*		6		4

r=15						*	*	*	*	*		5		5

r=16							*	*	*	*		4		6

r=17								*	*	*		3		7

r=18									*	*		2		8

r=19										*		1		9



*/

#include <stdio.h>

int main(void) {
	
	int row, space, star, limit = 0;
	int starVal, spaceVal = 0;
	
	/*!< Prompt data from user*/
	printf("\nInput a pattern limit: ");
	scanf("%d", &limit);					// 10
	
	spaceVal = limit;
	starVal = 1;
	
	for (row = 1; row <= ((limit * 2) - 1); row ++) {
		
		for (space = 1; space <= spaceVal; space ++) {
			
			printf("  ");
		}
		
		for (star = 1; star <= starVal; star ++) {
			
			printf("* ");
		}
		
		(row < limit) ? (spaceVal --) : (spaceVal ++);
		(row < limit) ? (starVal ++ ) : (starVal --);
		
		printf("\n");
		
	}
	
	
	return (0);				/*!<Indicate successful execution..*/
}