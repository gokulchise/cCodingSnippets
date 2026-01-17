#include <stdio.h>

#define GET_LEN(_a)     (sizeof(_a)/sizeof(_a[0]))

double avg(double array[], int length);                         //Function prototype of avg()..

int main(void)
{
    double a1[] = {8.7,3.3,9.2,6.6};
    double a2[] = {1.1,2.2,3.3,4.4,5.5,6.6};
    double a3[] = {-2.1,2.1,4.2,-4.2};

    int len1, len2, len3 = 0;

    //get length of an array..
    len1 = GET_LEN(a1);
    len2 = GET_LEN(a2);
    len3 = GET_LEN(a3);

    //Display the average of an array on the console window..
    printf("\nAvg of a1 : %0.4lf", avg(a1, len1));
    printf("\nAvg of a2 : %0.4lf", avg(a2, len2));
    printf("\nAvg of a3 : %0.4lf", avg(a3, len3));

    return(0);              //Indicate successful execution..
}

double avg(double array[], int length)                          //Function definition of avg()..
{
    double sum = 0;

    for(int i=0; i<length; i++)
        sum += array[i];

    return (sum / length);                                      //Computes the avg and return to its callee..

}