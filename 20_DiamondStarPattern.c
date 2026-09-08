/*!< C programme to print Diamond star pattern */

/*
Enter the pattern limit: 5 [ n=5 ] 

	c=1	c=2	c=3	c=4	c=5	c=6	c=7	c=8	c=9
r=1					*

r=2				*	*	*

r=3			*	*	*	*	*

r=4		*	*	*	*	*	*	*

r=5	*	*	*	*	*	*	*	*	*

r=6		*	*	*	*	*	*	*	

r=7			*	*	*	*	*

r=8				*	*	*

r=9					*


*/

#include <stdio.h>

#define IS_DIAMOND_STAR(_r,_c,_n)			((_c <= (_n - _r)) || (_c <= (_r - _n)))
#define ROW_LIMIT(_n)						((_n*2)-1)
#define FORM_A_DIAMOND(_r,_n,_dn)			((_r < _n) ? _dn ++ : _dn --)
#define PRINT_STAR()						(printf("* "))
#define PRINT_SPACE()						(printf("  "))
#define MOVE_NEW_LINE()						(printf("\n"))

int main(void) {
	
	int row, col, limit, dLimit = 0;
	
	/*!< Prompt data from user */
	printf("\nInput a pattern limit: ");
	scanf("%d", &limit);
	
	dLimit = limit;
	
	for (row = 1; row <= ROW_LIMIT(limit); row ++) {
		
		for (col = 1; col <= dLimit; col ++) {
			
			IS_DIAMOND_STAR(row, col, limit) ? PRINT_SPACE() : PRINT_STAR();
		}
		
		FORM_A_DIAMOND(row, limit, dLimit);
		
		MOVE_NEW_LINE();
		
	}
	
	return (0);				/*!< Indicate successful execution.. */
}