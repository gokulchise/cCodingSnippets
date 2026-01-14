//absolute_value in c:
#include <stdio.h>
#include <stdlib.h>                             //The abs() is in the stdlib.h, so we must include it.
#include <math.h>                               //The fabs() is in the math.h, so we must include it.

int main(void)
{
    int num ,abs_num;
    double fNum, abs_fNum;
    
    //Purpose of the program
    printf("\nTo get absolute value of entered value: ");
    
    //Prompt user for input:
    printf("\nInput integer number: ");
    scanf("%d",&num);                           //-7
    
    printf("\nInput floating point number: ");
    scanf("%lf",&fNum);                         //-3.14
    
    abs_num = abs(num);                         //|-7|      => 7
    abs_fNum = fabs(fNum);                      //|-3.14|   => 3.14
    
    printf("\nAbsolute of %-5d is %-5d",num,abs_num);
    printf("\nAbsolute of %-5.2f is %-5.2f",fNum,abs_fNum);
    
    return(0);                                  //Indicate successful execution..
}