#include <stdio.h>

//USER DEFINED MACRO
#define DO_SUM(_n1,_n2)         (_n1+_n2)
#define DO_DIFF(_n1,_n2)        (_n1-_n2)
#define DO_PRODUCT(_n1,_n2)     (_n1*_n2)
#define DO_DIVISION(_n1,_n2)    (_n1/_n2)
#define DO_MODULUS(_n1,_n2)     (_n1%_n2)

int main(void)
{
    char sign;
    int num1,num2;
    
    printf("\n**********Basic Calculator**********\n");
    
    printf("\nEnter: "); 
    printf("\n\t\t + -> addition\n\t\t - -> subtraction\n\t\t * -> multiplication\n\t\t / -> division \n\t\t % -> modulus\n");
    
    //prompt user for sign to perform operation.
    printf("\nInput a sign: ");
    scanf("%c",&sign);
    
    //prompt user for inputs
    printf("\nnum1: ");
    scanf("%d",&num1);
    printf("\nnum2: ");
    scanf("%d",&num2);
    
    //Basic Calculation 
    switch(sign)
    {
        case '+':
            printf("\n%d + %d = %d",num1, num2, DO_SUM(num1,num2));
            break;
        
        case '-':
            printf("\n%d - %d = %d",num1, num2, DO_DIFF(num1,num2));
            break;
        
        case '*':
            printf("\n%d * %d = %d",num1, num2, DO_PRODUCT(num1,num2));
            break;
        
        case '/':
            printf("\n%d / %d = %d",num1, num2, DO_DIVISION(num1,num2));
            break;
        
        case '%':
            printf("\n%d %% %d = %d",num1, num2, DO_MODULUS(num1,num2));
            break;
        
        default:
            printf("\nPls enter valid input!");
            break;
    }
    
    return(0);          //Indicate successful exeuction..
}