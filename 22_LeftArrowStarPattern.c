/*!< C programme to print left arrow star pattern */

/*
Enter the pattern limit: 5 [ n=5 ]

	c=1	c=2	c=3	c=4	c=5	c=6	c=7	c=8	c=9		Space	Star	Limit
r=1					*	*	*	*	*		4		5		9
	
r=2				*	*	*	*				3		4		7

r=3			*	*	*						2		3		5

r=4		*	*								1		2		3

r=5	*										0		1		1

r=6		*	*								1		2		3

r=7			*	*	*						2		3		5

r=8				*	*	*	*				3		4		7

r=9					*	*	*	*	*		4		5		9


*/

#include <stdio.h>

#define IS_LEFT_ARROW_SPACE(_r,_c,_n)		((_r <= _n) ? (_c <= (_n - _r)) : (_c <= (_r - _n)))
#define IS_FORM_LEFT_ARROW(_r,_n)			(_r < _n)
#define REDUCE_LIMIT(_cn)					(_cn -= 2)
#define INCREASE_LIMIT(_cn)					(_cn += 2)

#define PRINT_STAR()						(printf("* "))
#define PRINT_SPACE()						(printf("  "))
#define MOVE_NEW_LINE()						(printf("\n"))
#define SET_LIMIT(_n)						((_n * 2) -1)

int main(void) {
	
	int row, col, limit, rLimit, cLimit = 0;
	
	/*!< Prompt data from user */
	printf("\nInput a pattern limit: ");
	scanf("%d", &limit);
	
	rLimit = SET_LIMIT(limit);
	cLimit = SET_LIMIT(limit);
	
	for (row = 1; row <= rLimit; row++) {
		
		for (col = 1; col <= cLimit; col++) {
			
			IS_LEFT_ARROW_SPACE(row,col,limit) ? PRINT_SPACE() : PRINT_STAR();
		}
		
		IS_FORM_LEFT_ARROW(row, limit) ? REDUCE_LIMIT(cLimit) : INCREASE_LIMIT(cLimit);
		MOVE_NEW_LINE();
	}
	
	return (0);					/*!< Indicate successful execution.. */
}