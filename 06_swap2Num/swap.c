#include <stdio.h>

#define METHOD_1                                       
//#define METHOD_2                  //Un-comment METHOD_2 & comment METHOD_1 MACRO to use METHOD_2 commutation.

int main(void)
{
    int n1,n2;                      //To store two numbers.
    
    //Prompt user for input:
    printf("\nInput a num1: ");
    scanf("%d",&n1);                //n1 = 5
    printf("\nInput a num2: ");
    scanf("%d",&n2);                //n2 = 7
    
    
    //Before swapping:
    printf("\nBefore swap -> n1:%d | n2:%d", n1,n2);
    
    //Swap between n1 and n2 without 3rd variable
    #ifdef METHOD_1
    n1 = n1 + n2;                   //n1 =  5 + 7 -> n1 = 12
    n2 = n1 - n2;                   //n2 = 12 - 7 -> n2 = 5
    n1 = n1 - n2;                   //n1 = 12 - 5 -> n1 = 7
    #endif
    
    #ifdef METHOD_2
    n1 = n1 * n2;                   //n1 =  5 * 7 -> n1 = 35
    n2 = n1 / n2;                   //n2 = 35 / 7 -> n2 = 5
    n1 = n1 / n2;                   //n1 = 35 / 5 -> n1 = 7
    #endif
    
    //After swapping:
    printf("\nAfter  swap -> n1:%d | n2:%d", n1,n2);
    
    return(0);                      //Indicate successful execution..
}