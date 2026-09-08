/*!< C programme to print hollow right triangle star pattern */


/*
Enter the pattern limit: 10 [ n = 10 ]

	c=1	c=2	c=3	c=4	c=5	c=6	c=7	c=8	c=9	10
r=1	*

r=2	*	*

r=3	*		*

r=4	*			*

r=5	*				*

r=6	*					*

r=7	*						*

r=8	*							*

r=9	*								*

r=10*	*	*	*	*	*	*	*	*	*




*/

#include <stdio.h>

#define IS_HOLLOW_RTRIANGLE(_r,_c,_n)	((_c == 1) || (_c == _r) || (_r == _n))
#define PRINT_STAR()					((printf("* ")))
#define PRINT_SPACE()					((printf("  ")))
#define MOVE_NEW_LINE()					((printf("\n")))

int main(void) {
	
	int row, col, limit = 0;
	
	
	/*!< Prompt data from user */
	printf("\nInput a pattern limit: ");
	scanf("%d", &limit);
	
	for (row = 1; row <= limit; row ++) {
		
		for (col = 1; col <= limit; col ++) {
			
			(IS_HOLLOW_RTRIANGLE(row, col, limit)) ? PRINT_STAR() : PRINT_SPACE();
		}
		
		MOVE_NEW_LINE();
		
	}
	
	
	
	return (0);				/*!< Indicate successful execution.. */
}