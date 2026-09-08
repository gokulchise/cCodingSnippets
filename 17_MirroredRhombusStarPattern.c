/*!< C programme to print mirrored rhombus star pattern */

/*
Enter the pattern limit: 5 [ n=5 ]

	c=1	c=2	c=3	c=4	c=5	c=6	c=7	c=8	c=9
r=1	*	*	*	*	*

r=2		*	*	*	*	*

r=3			*	*	*	*	*

r=4				*	*	*	*	*

r=5					*	*	*	*	*


*/

#include <stdio.h>

#define IS_MIRRORED_RHOMBUS_SPACE(_r,_c,_n)	(_c <= (_r-1))
#define IS_MIRRORED_RHOMBUS_STAR(_r,_c,_n)		(_c <= (_n+(_r-1)))

#define PRINT_STAR()							(printf("* "))
#define PRINT_SPACE()							(printf("  "))
#define MOVE_NEW_LINE()							(printf("\n"))

int main(void) {
	
	int row, col, limit = 0;
	
	/*!< Prompt data from user */
	printf("\nInput a pattern limit: ");
	scanf("%d", &limit);
	
	for (row = 1; row <= limit; row ++) {
		
		for (col = 1; col <= ((limit*2)-1); col ++) {
			
			IS_MIRRORED_RHOMBUS_SPACE(row, col, limit) ? PRINT_SPACE() : (IS_MIRRORED_RHOMBUS_STAR(row, col, limit) ? PRINT_STAR() : PRINT_SPACE());
		}
		
		MOVE_NEW_LINE();
		
	}
	
	
	return (0);				/*!< Indicate successful execution.. */
}