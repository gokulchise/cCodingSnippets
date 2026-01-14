#include <stdio.h>
#include <string.h>

int main(void)
{
    char binary[20];                        //Used to store the binary value into string format.
    int length      = 0;                    //Used to store the string(binary) length. 
    int n           = 1;                    
    int decimalNum  = 0;                    //Used to store the converted decimal value..

    //Prompt user for input:
    printf("\nInput binary number: ");
    gets(binary);

    length = strlen(binary);                //get length of the binary number.

    for(int i=(length-1); i>=0; i--)        //Iterate the count down for loop..
    {
        if(binary[i]=='1')                  
            decimalNum += n * (binary[i]-48);   //'1','0' -> 49,48 ASCII code. so,49-48 -> 1, 48-48 -> 0 to get actual binary number..

        n *= 2;                                 //Every iteration multiply the place value of binary from 2..
    }

    //Output the console window required values..
    printf("\nBinary number : %s",binary);
    printf("\nDecimal number: %d",decimalNum);

    return(0);              //Indicate successful exeuction..
}