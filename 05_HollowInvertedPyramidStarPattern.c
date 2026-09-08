/*!<C programme to print hollow inverted pyramid star pattern */


/*

Enter the limit of pattern: 10 [n=10]

		c=1	c=2	c=3	c=4	c=5	c=6	c=7	c=8	c=9	10	11	12	13	14	15	16	17	18	19		star	space
r=1		*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*		19		0+0

r=2			*																*			2		1+15

r=3				*														*				2		2+13

r=4					*												*					2		3+11

r=5						*										*						2		4+9

r=6							*								*							2		5+7

r=7								*						*								2		6+5

r=8									*				*									2		7+3

r=9										*		*										2		8+1

r=10										*											2		9+0


Logic:
	printf ("* ")	-> (row == 1) || (col == row) || (col == ((limit*2)-row))


*/

#include <stdio.h>

#define IS_REVERSED_HOLLOW_STAR(_n,_r,_c)	((_r == 1) || (_c == _r) || (_c == ((_n*2)-_r)))
#define PRINT_STAR()						printf("* ")
#define PRINT_SPACE()						printf("  ")
#define MOVE_NEW_LINE()						printf("\n")

int main(void) {
	
	int row, col, limit = 0;
	
	/*!<Prompt data from user*/
	printf("\nInput a pattern limit: ");
	scanf("%d", &limit);
	
	for (row = 1; row <= limit; row ++) {
		
		for (col = 1; col <= ((limit * 2) - 1); col ++) {
			
			(IS_REVERSED_HOLLOW_STAR(limit, row, col)) ? PRINT_STAR() : PRINT_SPACE();
		}
		
		MOVE_NEW_LINE();
		
	}
	
	
	return (0);				/*!<Indicate successful execution..*/
}