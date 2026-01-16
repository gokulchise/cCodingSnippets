#include <stdio.h>

void store_members(int array[], int length);                      //Function prototype of store_members()..
int Occurances(int array[], int length, int key);                  //Function prototype of Occurances()..

int main(void)
{
    int myarray[50];
    int to_find = 0;
    size_t len  = 0;

    //Prompt user for input:
    printf("\nTo find value : ");
    scanf("%d",&to_find);
    printf("\narray len(<50): ");
    scanf("%d",&len);

    store_members(myarray,len);                                //Call and store the members of an array..

    int occur   = Occurances(myarray, len, to_find);            //Call and get the count of occurances..

    printf("\n# of %ds found is %d\n",to_find,occur);           //Display the occurances on the console window..

    return (0);                                                 //Indicate successful exeuction..
}

void store_members(int array[], int length)                    //Function definition of store_members().
{
    for(int i=0; i<length; i++)                                 //store the members's value upto entered length..
    {
        printf("\narray[%d] = ",i);                             
        scanf("%d",&array[i]);
    }
}

int Occurances(int array[], int length, int key)                //Function definition of occurances.
{
    int count = 0;

    for(int i=0; i<length; i++)                                 //Iterate the loop upto length of array.
        if(array[i] == key)  count++;                           //If key/to_find found -> increment count variable..

    return (count);                                             //Return the count..
}