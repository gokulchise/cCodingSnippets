/*!< C programme to print X star pattern >*/
/*
Enter the pattern limit: 5 [ n=5 ]
	c=1	c=2	c=3	c=4	c=5	c=6	c=7	c=8	c=9
r=1	*								*	

r=2		*						*

r=3			*				*

r=4				*		*

r=5					*

r=6				*		*

r=7			*				*
	
r=8		*						*

r=9	*								*


*/



#include <stdio.h>

#define IS_X_STAR(_r,_c,_n)		((_c == _r) || (_c == (_n-_r)))
#define SET_LIMIT(_n,_v)		((_n * 2) - _v)
#define PRINT_STAR()			(printf("* "))
#define PRINT_SPACE()			(printf("  "))
#define MOVE_NEW_LINE()			(printf("\n"))

int main(void) {
	
	int row, col, limit = 0;
	
	/*!< Prompt data from user >*/
	printf("\nInput a pattern limit: ");
	scanf("%d", &limit);
	
	int rLimit, cLimit, fLimit = 0;
	
	rLimit = SET_LIMIT(limit,1);
	cLimit = SET_LIMIT(limit,1);
	fLimit = SET_LIMIT(limit,0);
	
	
	for (row = 1; row <= rLimit; row ++) {
		
		for (col = 1; col <= cLimit; col ++) {
			
			IS_X_STAR(row, col, fLimit) ? PRINT_STAR() : PRINT_SPACE();
		}
		
		MOVE_NEW_LINE();
	}
	
	
	
	return (0);				/*!< Indicate successful execution.. >*/
}