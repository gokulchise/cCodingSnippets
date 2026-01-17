#include <stdio.h>

void store_mem(int arr[], int length);                  //Function prototype of store_mem()..
void rev_array(int arr[], int length);                  //Function prototype of rev_array()..
void print_array(int arr[], int length);                //Function prototype of print_array()..

int main(void)
{
    int array[50];
    int len = 0;

    //Prompt user for length: 
    printf("\narray length(<50): ");
    scanf("%d",&len);

    //Store the array members.
    store_mem(array,len);

    //Reverse an array.
    rev_array(array,len);

    //Print the array..
    print_array(array,len);

    return(0);                                          //Indicate successful exeuction..
}

void store_mem(int arr[], int length)                   //Function definition of store_mem()..
{
    for(int i=0; i<length; i++)
    {
        printf("\narr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}

void rev_array(int arr[], int length)                   //for example: length = 10
{
    int temp = 0;

    for(int i=0; i<(length/2); i++)                     //Iterate loop upto mid of the array(5)..
    {
        temp                = arr[i];                   //temp      = arr[0]
        arr[i]              = arr[length - i - 1];      //arr[0]    = arr[9]
        arr[length - i - 1] = temp;                     //arr[9]    = temp
    }
}

void print_array(int arr[], int length)                 //Function definition of print_array()..
{
    for(int i=0; i<length; i++)
        printf("\narr[%d] = %d",i,arr[i]);              //Print the members of an array..
    
}