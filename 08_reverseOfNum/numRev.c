#include <stdio.h>

int main(void)  
{
    int num, tNum = 0;                      //To store the user input number..                
    int rem = 0;                            //rem -> used to store the remainder of every iteration.
    int rev = 0;                            //rev ->used to store the reverse of a given number..
    
    //Prompt user for input: 
    printf("\nInput a number to reverse it: ");
    scanf("%d",&num);                       //num = 12345
    
    tNum = num;                             //move num into tempNum variable..
    
    while(tNum)                             //12345,1234,123,12,1
    {
        rem = tNum % 10;                    //5,4,3,2,1
        rev = rem + rev * 10;               //5,54,543,5432,54321
        tNum /= 10;                         //1234,123,12,1,0 -> loop fail..
    }
    
    //Display the output on console window:
    printf("\nReverse of %d is %d",num,rev);
    
    return(0);                              //Indicate successful execution..
}