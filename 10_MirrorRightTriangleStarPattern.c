/*!< C programme to print mirrord right triangle star pattern */

/*
Enter the pattern limit: 5 [ n=5 ]

	c=1	c=2	c=3	c=4	c=5
r=1					*

r=2				*	*	

r=3			*	*	*

r=4		*	*	*	*

r=5	*	*	*	*	*


*/

#include <stdio.h>

#define IS_MIRROR_RIGHT_TRIANGLE(_r,_c,_n)	(_c <= (_n-_r))

#define PRINT_SPACE()						((printf("  ")))
#define PRINT_STAR()						((printf("* ")))
#define MOVE_NEW_LINE()						((printf("\n")))

int main(void) {
	
	int row, col, limit = 0;
	
	/*!< Prompt data from user */
	printf("\nInput a pattern limit: ");
	scanf("%d", &limit);
	
	for (row = 1; row <= limit; row ++) {
		
		for (col = 1; col <= limit; col ++) {
			
			(IS_MIRROR_RIGHT_TRIANGLE(row,col,limit)) ? PRINT_SPACE() : PRINT_STAR();
		}
		
		MOVE_NEW_LINE();
	}
	
	
	
	return (0);		/*!< Indicate successful execution.. */
}