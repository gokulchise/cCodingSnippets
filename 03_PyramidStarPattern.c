/*!<C program to print pyramid star pattern/equilateral star pattern */

/*

n=5 [pattern limit]

	c=1	c=2	c=3	c=4	c=5	c=6	c=7	c=8	c=9
	
r=1					*

r=2				*	*	*

r=3			*	*	*	*	*

r=4		*	*	*	*	*	*	*

r=5	*	*	*	*	*	*	*	*	*

Logic:
	print ' '	-> (c <= (n-r))			=> r=1 -> (c <= (5-1))=4 space, r=2 -> (c <= (5-2))=3 space, r=3 -> (c <= (5-3))=2 space
	print '*'	-> (c <= (r+(r-1))		=> r=1 -> (c == (1+(0))=1 star, r=2 -> (c == (2+1))=3 star,  r=3 -> (c == (3+2))=5 star 

*/

#include <stdio.h>

#define IS_SPACE(_r, _c, _n)	(_c <= (_n - _r))
#define IS_STAR(_r, _c, _n)		(_c <= (_r + (_r - 1)))

#define PRINT_STAR()			printf("* ")
#define PRINT_SPACE()			printf("  ")

int main(void) {
	
	int row, col_1, col_2, limit = 0;
	
	/*!<Prompt user input*/
	printf("\nInput a pattern limit: ");
	scanf("%d", &limit);
	
	for (row = 1; row <= limit; row ++) {
		
		for (col_1 = 1; (IS_SPACE(row, col_1, limit)); col_1++) {
				
				PRINT_SPACE();
		
			}
		for (col_2 = 1; (IS_STAR(row, col_2, limit)); col_2++) {	
		
				PRINT_STAR();
				
			}
		
		printf("\n");
	}
	
	
	return (0);				/*!<Indicate successful execution..*/
}
