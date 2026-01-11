#include <stdio.h>
#include <stddef.h>

int getSecondLowest(int min_arr[], int min_l);                          //Function prototype -> getSecondLowest()
int getSecondHighest(int max_arr[], int max_l);                         //Function prototype -> getSecondHighest() 

int main(void)                                                          //Program starts from main()
{
    int numArray[]= {21,11,2,12,4,18,6,15,1};                           //Declare and initilize an integer array..
    size_t len;                                                         //Declare len to store the array length.
    int secondMin, secondMax;                                           //Declare varaible to store the min2,max2 values..
    
    //Compute specified array length.
    len = sizeof(numArray)/sizeof(numArray[0]);
    
    secondMin = getSecondLowest(numArray,len);                          //Call getSecondLowest() -> To know about secondMin.
    secondMax = getSecondHighest(numArray,len);                         //Call getSecondHighest()-> To know about secondMax.     
    
    //Display the console window required results..
    printf("\nSecond Lowest : %d", secondMin);      
    printf("\nSecond highest: %d", secondMax);
    
    return(0);                                                          //Indicate successful execution..
}

int getSecondLowest(int min_arr[], int min_l)                           //Function definition -> getSecondLowest()
{
    int min1, min2;                                                     //To store min1, min2 values of an array.
    
    if(min_arr[1] > min_arr[0])                                         //Find min1, min2 based on [0] & [1] index of an array.
    {
        min1 = min_arr[0];
        min2 = min_arr[1];
    }
    else
    {
        min1 = min_arr[1];
        min2 = min_arr[0];
    }
    
    for(int i=2; i<min_l; i++)                                          //Iterate loop to find the actual min1 & min2 of an array.
    {
        if(min1 > min_arr[i])
        {
            min2 = min1;
            min1 = min_arr[i];
        }
        else if(min_arr[i] < min2 && min_arr[i] > min1)
        {
            min2 = min_arr[i];
        }
    }
    
    return min2;                                                        //return the min2 value to the calling function.
    
}

int getSecondHighest(int max_arr[], int max_l)                          //Function definition -> getSecondHighest()
{
    int max1, max2;                                                     //To store max1, max2 values of an array.
    
    if(max_arr[0] > max_arr[1])                                         //Find max1, max2 based on [0] & [1] index of an array.
    {
        max1 = max_arr[0];
        max2 = max_arr[1];
    }
    else
    {
        max1 = max_arr[1];
        max2 = max_arr[0];
    }
    
    for(int i=2; i<max_l; i++)                                          //Iterate loop to find the actual max1 & max2 of an array.
    {
        if(max_arr[i] > max1)
        {
            max2 = max1;
            max1 = max_arr[i];
        }
        else if(max_arr[i] > max2 && max_arr[i] < max1)
        {
            max2 = max_arr[i];
        }
    }
    
    return max2;                                                        //return the max2 value to the calling function.
}

