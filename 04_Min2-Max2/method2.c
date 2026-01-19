//Find 2nd minimum and max in an array.

#include <stdio.h>

#define GET_LEN(_a)     (sizeof(_a)/sizeof(_a[0]))

void find_min(int array[], int length, int* min1, int* min2);  //Function prototype of find_min()..
void find_max(int array[], int length, int* max1, int* max2);  //Function prototype of find_max()..     

int main(void)
{
    int a[] = { 99,2,22,10,55,87,39,4,7 };

    int len = GET_LEN(a);               //get the length of an array..

    int min1, min2;
    int max1, max2;

    find_min(a, len, &min1, &min2);     //Pass by reference | pass by pointer..
    find_max(a, len, &max1, &max2);

    //Display the output on the console window..
    printf("\nMin1 : %-2d | Min2 : %-2d", min1, min2);          //left aligned output..
    printf("\nMax1 : %-2d | Max2 : %-2d", max1, max2);

    return(0);                          //Indicate successful execution..
}

void find_min(int array[], int length, int* min1, int* min2)
{
    *min1 = array[0];
    *min2 = array[1];

    if (*min1 > *min2)
    {
        *min1 = array[1];
        *min2 = array[0];
    }

    for (int i = 2; i < length; i++)
    {
        if (*min1 > array[i])
        {
            *min2 = *min1;
            *min1 = array[i];
        }
        else if (array[i] > *min1 && array[i] < *min2)
            *min2 = array[i];
    }

}

void find_max(int array[], int length, int* max1, int* max2)
{
    *max1 = array[0];
    *max2 = array[1];

    if (*max1 < *max2)
    {
        *max1 = array[1];
        *max2 = array[0];
    }

    for (int i = 2; i < length; i++)
    {
        if (*max1 < array[i])
        {
            *max2 = *max1;
            *max1 = array[i];
        }
        else if (array[i] < *max1 && array[i] > *max2)
            *max2 = array[i];
    }
}