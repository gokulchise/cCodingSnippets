/*!< C programme to print plus star pattern >*/

/*
Enter the pattern limit: 5 [ n=5 ] 

	c=1	c=2	c=3	c=4	c=5	c=6	c=7	c=8	c=9		Space Star
r=1 				*						4		1	

r=2					*						4		1
	
r=3					*

r=4					*

r=5	*	*	*	*	*	*	*	*	*		0		9	

r=6					*

r=7					*

r=8					*						4		1
	
r=9					*						4		1



*/

#include <stdio.h>

#define SET_LIMIT(_n)				((_n*2)-1)
#define IS_PLUS_STAR(_r,_c,_n)		((_r == _n) || (_c == _n))
#define PRINT_STAR()				(printf("* "))
#define PRINT_SPACE()				(printf("  "))
#define MOVE_NEW_LINE()				(printf("\n"))

int main(void) {
	
	int row, col, limit = 0;
	
	/*!< Prompt data from user >*/
	printf("\nInput a pattern limit: ");
	scanf("%d", &limit);
	
	int rLimit, cLimit = 0;
	rLimit = SET_LIMIT(limit);
	cLimit = SET_LIMIT(limit);
	
	for (row = 1; row <= rLimit; row++) {
		
		for (col = 1; col <= cLimit; col ++) {
			
			IS_PLUS_STAR(row, col, limit) ? PRINT_STAR() : PRINT_SPACE();
			
		}
		
		MOVE_NEW_LINE();
		
	}
	
	return (0);				/*!< Indicate successful execution.. >*/
}