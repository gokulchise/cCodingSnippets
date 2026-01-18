#include <stdio.h>

#define GET_SIZE(_a)    (sizeof(_a)/sizeof(_a[0]))

int main(void)
{
    int a[] = { 1,2,3,4,5,6,7,8,9,10 };       //Declare and initialize an int array..

    int* a_copy;                            //Declare a integer pointer variable.

    a_copy = a;                             //Point the base address of array "a[]"..

    int len = GET_SIZE(a);                  //Find the length of an array..

    //Output the console window of copied array value..
    for (int i = 0; i < len; i++)
    {
        printf("\na_copy[%d] = %d", i, a_copy[i]);
    }

    return(0);              //Indicate successful execution..
}