/*!< C programme to print hollow rhombus star pattern */

/*
Enter the pattern limit: 5 [ n=5 ]
	
	c=1	c=2	c=3	c=4	c=5	c=6	c=7	c=8	c=9
r=1 				*	*	*	*	*

r=2				*				*				

r=3			*				*					

r=4		*				*						

r=5	*	*	*	*	*

 
*/

#include <stdio.h>

#define IS_HOLLOW_RHOMBUS_SPACE(_r,_c,_n) 		(_c <= (_n-_r))
#define IS_TOP_BOTTOM_ROW(_r,_c,_n)				((_r==1) || (_r==_n)) 
#define INTERMIDEATE_STAR(_r,_c,_n,_dn)			((_c == ((_n-_r)+1)) || (_c == _dn))

#define NOTHING								(0)
#define PRINT_STAR()						(printf("* "))
#define PRINT_SPACE()						(printf("  "))
#define MOVE_NEW_LINE()						(printf("\n"))

void printStar(int n) {
	
	int i;
	
	for (i = 1; i <= n; i++) 
		PRINT_STAR();
}


int main(void) {
	
	int row, col, limit, dLimit = 0;
	
	/*!< Prompt data from user */
	printf("\nInput a pattern limit: ");
	scanf("%d", &limit);
	
	dLimit = ((limit * 2)-1);
	
	for (row = 1; row <= limit; row ++) {
		
		for (col = 1; col <= dLimit; col ++) {
			
			IS_HOLLOW_RHOMBUS_SPACE(row,col,limit) ? PRINT_SPACE() : (IS_TOP_BOTTOM_ROW(row,col,limit) ? printStar(1):(INTERMIDEATE_STAR(row,col,limit,dLimit) ? PRINT_STAR() : PRINT_SPACE()));
			
		}
		dLimit--;
		MOVE_NEW_LINE();
	}
	
	
	return (0);				/*!< Indicate successful execution.. */
}