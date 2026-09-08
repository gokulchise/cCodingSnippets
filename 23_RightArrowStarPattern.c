/*!< C programme to print right arrow star pattern >*/

/*
Enter the pattern limit: 5 [ n=5 ]
	c=1	c=2	c=3	c=4	c=5	c=6	c=7	c=8	c=9		space	star	limit 
r=1	*	*	*	*	*						0		5		5

r=2			*	*	*	*					2		4		6

r=3					*	*	*				4		3		7

r=4							*	*			6		2		8

r=5									*		8		1		9

r=6							*	*			6		2		8

r=7					*	*	*				4		3		7

r=8			*	*	*	*					2		4		6

r=9 *	*	*	*	*						0		5		5


*/

#include <stdio.h>

#define SET_LIMIT(_n)						((_n * 2)-1)

#define IS_FORM_RIGHT_ARROW(_r,_n)			(_r < _n)
#define ALLOCATE_SPACE_1ST_HALF(_c,_r)		(_c <= (_r * 2)-2)
#define ALLOCATE_SPACE_2ND_HALF(_c,_r,_n)  (_c <= (((_n * 2)-_r)-1)*2)


#define INCREASE_COL_LIMIT(_cn)				(_cn += 1)
#define DECREASE_COL_LIMIT(_cn)				(_cn -= 1)
#define ADJUST_COL_LIMIT(_r,_n,_cn)			((_r < _n) ? INCREASE_COL_LIMIT(_cn) : DECREASE_COL_LIMIT(_cn))

#define PRINT_SPACE()						(printf("  "))
#define PRINT_STAR()						(printf("* "))
#define MOVE_NEW_LINE()						(printf("\n"))

int main(void) {
	
	int row, col, limit, rLimit, cLimit = 0;
	
	/*!< Prompt data from user >*/
	printf("\nInput a pattern limit: ");
	scanf("%d", &limit);
	
	rLimit = SET_LIMIT(limit);
	cLimit = limit;
	
	for (row = 1; row <= rLimit; row ++) {
		
		for (col = 1; col <= cLimit; col ++) {
			
			if(IS_FORM_RIGHT_ARROW(row,limit)) {
				ALLOCATE_SPACE_1ST_HALF(col,row) ? PRINT_SPACE() : PRINT_STAR();
			} else {
				ALLOCATE_SPACE_2ND_HALF(col,row,limit) ? PRINT_SPACE() : PRINT_STAR();
			}			
		}
		ADJUST_COL_LIMIT(row,limit,cLimit);
		MOVE_NEW_LINE();
	}
	
	
	return (0);			/*!< Indicate successful execution.. >*/
}