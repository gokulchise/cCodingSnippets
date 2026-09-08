/*!<C programme to print reverse pyramid star pattern*/


/*
Enter the pyramid limit: 10 [n=10]

		c=1	c=2	c=3	c=4	c=5	c=6	c=7	c=8	c=9	10	11	12	13	14	15	16	17	18	19		star	space
r=1		*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*		19		0

r=2			*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*			17		1

r=3				*	*	*	*	*	*	*	*	*	*	*	*	*	*	*				15		2

r=4					*	*	*	*	*	*	*	*	*	*	*	*	*					13		3

r=5						*	*	*	*	*	*	*	*	*	*	*						11		4

r=6							*	*	*	*	*	*	*	*	*							9		5

r=7								*	*	*	*	*	*	*								7		6

r=8									*	*	*	*	*									5		7

r=9										*	*	*										3		8

r=10										*											1		9


Logic:
	1. print ("* ")			-> (((n-r)*2)+1)	-> r=1 [(((10-1)*2)+1) -> 19], r=5 [(((10-5)*2)+1) -> 11], r=10 [(((10-10)*2)+1) -> 1]
	2. print ("  ")			-> (r-1)			-> r=7 [(7-1) -> 6], r=10 [(10-1) -> 9]

*/

#define IS_SPACE(_r)		(_r - 1)
#define IS_STAR(_n, _r)		(((_n - _r) * 2) + 1)

#define PRINT_SPACE()		printf("  ")
#define PRINT_STAR()		printf("* ")
#define PRINT_NEW_LINE()	printf("\n")


#include <stdio.h>

int main(void) {
	
	int row, col1, col2, limit = 0;
	
	/*!<Prompt data from user*/
	printf("\nInput a pyramid limit: ");
	scanf("%d", &limit);
	
	
	for (row = 1; row <= limit; row++) {
		
		for (col1 = 1; col1 <= IS_SPACE(row) ; col1 ++) {
			
			PRINT_SPACE();
		}
		
		for (col2 = 1; col2 <= IS_STAR(limit, row); col2 ++) {
			
			PRINT_STAR();
			
		}
		
		PRINT_NEW_LINE();
		
	}
	
	return (0);					/*!<Indicate successful execution..*/
}