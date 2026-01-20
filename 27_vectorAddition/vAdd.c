//Vector addition..
//v1 = {1,3,5}
//v2 = {2,4,6}
//r  = {3,7,11} -> result..

#include <stdio.h>

#define GET_LEN(_x)     (sizeof(_x)/sizeof(_x[0]))

void vector_add(float vector1[], float vector2[], float result[], int length);

int main(void)
{
    float v1[] = { 1,3,5,7,9,11,13,15 };        //Initialize vector 1..
    float v2[] = { 2,4,6,8,10,12,14,16 };       //Initialize vector 2..
    float r[] = { 0,0,0,0,0,0,0,0 };            //Initialize result with zero..

    int len = GET_LEN(v1);                      //get length of an array..

    vector_add(v1, v2, r, len);                 //Call the vector_add()..

    //Output the addition of vector in the console window..
    for (int i = 0; i < len; i++)
        printf("\nr[%d] = %5.2f", i, r[i]);

    return(0);                                  //Indicate successful exeuction..
}

void vector_add(float vector1[], float vector2[], float result[], int length)
{
    for (int i = 0; i < length; i++)
        result[i] = vector1[i] + vector2[i];
}
