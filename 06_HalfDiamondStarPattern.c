/*!< C program to print half diamond star pattern */

/*

Enter the pyramid limit: 10 [n=10]

		c=1	c=2	c=3	c=4	c=5	c=6	c=7	c=8	c=9	10			Star	Space
r=1		*												1		9				

r=2		*	*											2		8

r=3		*	*	*										3		7

r=4		*	*	*	*									4		6

r=5		*	*	*	*	*								5		5

r=6		*	*	*	*	*	*							6		4  

r=7		*	*	*	*	*	*	*						7		3

r=8		*	*	*	*	*	*	*	*					8		2

r=9		*	*	*	*	*	*	*	*	*				9		1

r=10	*	*	*	*	*	*	*	*	*	*			10		0

r=11	*	*	*	*	*	*	*	*	*				9		1

r=12	*	*	*	*	*	*	*	*					8		2

r=13	*	*	*	*	*	*	*						7		3

r=14	*	*	*	*	*	*							6		4

r=15	*	*	*	*	*								5		5

r=16	*	*	*	*									4		6

r=17	*	*	*										3		7

r=18	*	*											2		8

r=19	*												1		9


Logic:
	Printf("* ") upto r=10: -> ( col <= row )							=> r=7 	[col <= 7]
	printf(*  ") from r=11: -> col <= (row - (( row - limit) * 2))	=> r=14	[col <= (14 - ((14 - 10) * 2)) -> col <= (14 - 8) -> col <= 6]


*/

#include <stdio.h>

#define ROW_LIMIT(_n)				((_n * 2) - 1)
#define COL1_LIMIT(_c, _r)			(_c <= _r)
#define COL2_LIMIT(_c, _r, _n)		(_c <= (_r - ((_r - _n)) * 2))
#define PRINT_STAR()				(printf("* "))
#define MOVE_NEW_LINE()				(printf("\n"))


int main(void) {
	
	int row, col, limit = 0;
	
	/*!< Prompt data from user*/
	printf("\nInput a pattern limit: ");
	scanf("%d", &limit);
	
	for (row = 1; row <= ROW_LIMIT(limit); row ++) {
		
		if (row <= limit) {
			
			for (col = 1; COL1_LIMIT(col, row); col ++) {
				
				PRINT_STAR();
			}
			
		} else {
			
			for (col = 1; COL2_LIMIT(col, row, limit); col ++) {
				
				PRINT_STAR();
			}
			
		}
		
		MOVE_NEW_LINE();
		
	}
	
	return (0);					/*!<Indicate successful execution..*/
	
}