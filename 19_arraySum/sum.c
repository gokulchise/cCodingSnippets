#include <stdio.h>

#define GET_LEN(_a)     (sizeof(_a)/sizeof(_a[0]))              //MACRO to find the length of an array..

int sum(int array[], int length);                               //Functino prototype for sum().

int main(void)
{
    //Declare and initialize integer arrray and utility variables..
    int a1[] = {1,2,3,4,5,6,7,8,9,10};
    int a2[] = {11,13,15,17,19};
    int a3[] = {22,44,66};
    int len1, len2, len3 = 0;

    //get the length of an array..
    len1 = GET_LEN(a1);
    len2 = GET_LEN(a2);
    len3 = GET_LEN(a3);

    //Get sum of an array and display on console window..
    printf("\nSum of a1 : %d", sum(a1, len1));
    printf("\nSum of a2 : %d", sum(a2, len2));
    printf("\nSum of a3 : %d", sum(a3, len3));

    return(0);              //Indicate successful exeuction..
}

int sum(int array[], int length)                                //Function definition of sum()..
{
    int sumValue = 0;

    for(int i=0; i<length; i++)
    {
        sumValue += array[i];
    }

    return sumValue;                                            //Return the sum value to the callee..
}