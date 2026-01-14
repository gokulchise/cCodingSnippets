#include <stdio.h>

int main(void) 
{
    int min, minIndex;          //To store the min value & index of an array.
    int max, maxIndex;          //To store the max value & index of an array.
    size_t len;                 //To store the length of a members in an array.
    int inLen;                  //To store the size of an array.
    
    //Prompt user for input:
    printf("\nInput array size: ");     
    scanf("%d",&inLen);                 

    int numArray[inLen];        //To fix a array size based on user input..
    
    len = sizeof(numArray)/sizeof(numArray[0]); //Find members length of an array.. (This context its Optional -> inLen == len, but fixed len array its useful)
    
    for(int i=0; i<(len);i++)   //Iterate loop to get the user entered members value.
    {
        printf("\nnumArray[%d] = ",i);
        scanf("%d",&numArray[i]);
    }
    
    min = numArray[0];          //Set minimum value to initial index's value.
    minIndex = 0;               //Set minimum index to initial index.
    max = numArray[0];          //Set maximum value to initial index's value.
    maxIndex = 0;               //Set maxmimum index to initial index.
    
    for(int i=1; i<(len); i++)  //Iterate loop to findout min and max..
    {
        if(min > numArray[i])
        {
            min = numArray[i];
            minIndex = i;
        }
        if(max < numArray[i])
        {
            max = numArray[i];
            maxIndex = i;
        }
    }
    
    //Output the console window appropriate values.
    printf("\nMin : numArray[%d] = %d",minIndex, min);  
    printf("\nMax : numArray[%d] = %d",maxIndex, max);
    
    return(0);          //Indicate successful exeuction..
}

