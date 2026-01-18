#include <stdio.h>
#include <stdlib.h>

#define GET_SIZE(_a)    (sizeof(_a)/sizeof(_a[0]))      //MACRO to get the size of an array..

int* array_copy(int* array, int length);                //Function prototype of array_copy()..

int main(void)
{
    int a[] = { 0,11,22,33,44,55,66,77,88,99 };         //Declare and initialize an int array.
    int len = GET_SIZE(a);                              //Store the length of an array..

    int* a_copy = array_copy(a, len);                   //Call the array_copy..

    //Output the copied array..
    for (int i = 0; i < len; i++)
        printf("\na_copy[%d] = %d", i, a_copy[i]);


    return(0);                                          //Indicate successful exeuction..
}

int* array_copy(int* array, int length)                 //Function definition of array_copy()..
{
    int* copy = malloc(length * sizeof(int));           //Create a dynamic memory allocation in heap..

    for (int i = 0; i < length; i++)
        copy[i] = array[i];                             //Get copy..

    return copy;                                        //return copy to the callee..

}