#include <stdio.h>
#include <stdlib.h>

int find_min(int array[], int length);               //Function prototype of find_min()
int find_max(int array[], int length);               //Function prototype of find_max()

int main(void)
{
    int myarray1[] = {4,6,9,3,8,10,5};
    int myarray2[] = {18,5,7,2,8,3,10,15,1};

    //Find the length of the array:
    size_t len1 = sizeof(myarray1) / sizeof(myarray1[0]);
    size_t len2 = sizeof(myarray2) / sizeof(myarray2[0]);

    //Find minimum in an array
    int min1 = find_min(myarray1, len1);
    int min2 = find_min(myarray2, len2);

    //Find maximum in an array
    int max1 = find_max(myarray1, len1);
    int max2 = find_max(myarray2, len2);

    //Output the value on the console window:
    printf("\nMin1 = %2d",min1);
    printf("\nMin2 = %2d",min2);
    printf("\nMax1 = %2d",max1);
    printf("\nMax2 = %2d",max2);

    return(0);                      //Indicate  successful exeuction..
}

int find_min(int array[],int length)                //Function definition of find_min().   
{
    int min = array[0];                             //Put [0]th index of the array into min.

    for(int i=1; i<length; i++)                     //Iterate the loop from [1]st index upto length of the array..
    {
        if(min > array[i])                          //If any value of the array less than min
            min = array[i];                         //Consider that value is minimum..
    }

    return min;                                     //Return the value to the calling function..

}

int find_max(int array[],int length)                //Function prototype of find_max()
{
    int max = array[0];                             //Put  [0]th index of the array into max.

    for(int i=1; i<length; i++)                     //Iterate the loop from [1]st index upto length of the array.
    {
        if(max < array[i])                          //If any value of the array greater than max.
            max = array[i];                         //Consider that value is maximum..
    }

    return max;                                     //Return the value to the calling fucntin..

}