#include <stdio.h>
#include <math.h>

int main(void)  
{
    int binaryNum, tBinary, countBinary;        //To store the binary number and digits of binary number..
    int rem;                                    //To store the disgrete binary value.
    int decimalNum;                             //To store the decimal number of binary value.

    //Prompt user for binary input:
    printf("\nInput binary number: ");
    scanf("%d",&binaryNum);                     //10101
    
    tBinary = binaryNum;                        //Move into temperoary variable..
    countBinary = 0;
    
    //Count the binary digits..
    while(tBinary)                          //10101,1010,101,10,1
    {
        ++countBinary;                      //1,2,3,4,5
        tBinary /= 10;                      //1010,101,10,1,0 -> loop ends..
    }
    
    countBinary -= 1;                       //4
    
    tBinary = binaryNum;                    //10101
    int n = 0;                              //Start from lastDigit * 2^n (n=0) 
    decimalNum = 0;                         //Ignore garbage value
    
    //Conversion from binary to decimal
    while(tBinary)                          //10101,1010,101,10,1
    {
        rem = tBinary % 10;                 //1,0,1,0,1
        decimalNum += rem * pow(2,n);       //0+1*2^0,1+0*2^1,1+1*2^2,5+0*2^3,5+1*2^4  => 21
        ++n;                                //1,2,3,4,5
        tBinary /= 10;                      //1010,101,10,1,0 -> loop ends..
    }
    
    //Display the output on the console window..
    printf("\nBinary number : %d | Decimal number : %d",binaryNum,decimalNum);
    
    return(0);                              //Indicate successful execution..
}