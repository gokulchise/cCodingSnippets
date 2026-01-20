//Dot product
//v1 = {1,3,5,7}
//v2 = {2,4,6,8}
//r  = (1*2)+(3*4)+(5*6)+(7*8) => 2 + 12 + 30 + 56 => 100

#include <stdio.h>

#define GET_LEN(_x)     (sizeof(_x)/sizeof(_x[0]))

int dot_product(int v1[], int v2[], int lenght);    //Function prototype of dot_product()..

int main(void)
{
    int v1[] = { 1,3,5,7 };                         //Initialize v1[]..
    int v2[] = { 2,4,6,8 };                         //Initialize v2[]..

    int len = GET_LEN(v1);                          //get lenght of an array..

    int result = dot_product(v1, v2, len);          //get result from dot_product()..

    //Output on console window.
    printf("\nDot product: %d", result);

    return(0);                                      //Indicate successful execution..
}

int dot_product(int v1[], int v2[], int length)     //Function definition of dot_product()..
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += (v1[i] * v2[i]);
    }

    return sum;                                     //return the result to the callee..

}

