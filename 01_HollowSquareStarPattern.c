/*!<C program to print hollow square star pattern */
/*
n = 5 [pattern limit]

	c=1 c=2 c=3 c=4 c=5
r=1	*   *   *   *   * 

r=2	*				*

r=3	*				*

r=4	*				*

r=5	* 	* 	* 	* 	* 

Logic:
	print '*' -> (r==1) || (c==1) || (r==5) || (c==5) 

*/

#include <stdio.h>

#define IS_HOLLOW(_r, _c, _n)		((_r == 1) || (_c == 1) || (_r == _n) || (_c == _n)) 
#define NEW_LINE()					printf("\n")

int main(void) {
	
	int row, col, limit = 0;
	
	/*!<Prompt user data */
	printf("\nInput a limit: ");
	scanf("%d", &limit);
	
	for (row = 1; row <= limit; row ++) {
		
		for (col = 1; col <= limit; col ++) {
			
			IS_HOLLOW(row, col, limit) ? printf("* ") : printf("  ");
		}
		NEW_LINE();
	}
	
	
	return (0);				/*!<Indicate successful execution..*/
}