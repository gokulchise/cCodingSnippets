/*!< C programme to print 8 star pattern >*/

/*
Enter the pattern limit: 5 [ n=5 ]
	c=1	c=2	c=3	c=4	c=5
r=1 	*	*	*

r=2	*				*

r=3	*				*

r=4	*				*

r=5		*	*	*

r=6	*				*

r=7	*				*

r=8	*				*

r=9		*	*	*

*/

#include <stdio.h>

#define SET_LIMIT(_n)					((_n * 2) - 1)
#define TOP_COND(_r,_c,_n)				((_c != 1) && (_r == 1) && (_c != _n))
#define MID_COND(_r,_c,_n)				((_c != 1) && (_r == _n) && (_c != _n))
#define BOT_COND(_r,_c,_n,_rn)			((_c != 1) && (_r == _rn) && (_c != _n)) 
#define LEFT_COND(_r,_c,_n,_rn)			((_c == 1) && (_r != 1) && (_r != _rn) && (_r != _n))
#define RIGHT_COND(_r,_c,_n,_rn)		((_c == _n) && (_r != 1) && (_r != _rn) && (_r != _n))
#define IS_EIGHT_STAR(_r,_c,_n,_rn)		(TOP_COND(_r,_c,_n) || MID_COND(_r,_c,_n) || BOT_COND(_r,_c,_n,_rn) || LEFT_COND(_r,_c,_n,_rn) || RIGHT_COND(_r,_c,_n,_rn))
#define PRINT_STAR()					(printf("* "))
#define PRINT_SPACE()					(printf("  "))
#define MOVE_NEW_LINE()					(printf("\n"))

int main(void) {
	
	int row, col, limit = 0;
	
	/*!< Prompt data from user */
	printf("\nInput a pattern limit: ");
	scanf("%d", &limit);
	
	int rLimit, cLimit = 0;
	
	rLimit = SET_LIMIT(limit);
	
	for (row = 1; row <= rLimit; row ++) {
		
		for (col = 1; col <= limit; col ++) {
			
			IS_EIGHT_STAR(row,col,limit,rLimit) ? PRINT_STAR() : PRINT_SPACE();
		}
		MOVE_NEW_LINE();
	}
	
	return (0);				/*!< Indicate successful execution.. >*/
}