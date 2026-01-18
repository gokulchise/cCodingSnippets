//Fibonacci Sequence: Created by sum of previous two numbers, starting with 0 & 1. Like : (0,1,1,2,3,5,8,13,21,...,and so on)..
//Iterative Solution: Gives fast computation, when the sequence length go > 40
//Recursive solution: Gives slow computation, when the sequence length go > 40, but it resembles the mathematical expression.[Fibn = Fib(n-1) + Fib(n-2)]..

#include <stdio.h>

int fibn(int n);                                //Function prototype of recursive fibn()..

int main(void)
{
    int n0 = 0;
    int n1 = 1;
    int fib = 0;
    int seqLen = 0;

    //Prompt user for input:
    do {
        printf("\nInput sequence length: ");
        scanf("%d", &seqLen);                    //7
        if (seqLen < 3)
            printf("\n-!sequence length must be >= 3\n");
    } while (seqLen < 3);

    //Print fibonacci sequence:
    printf("\n\tIterative Solution: ");
    printf("\nFibonacci sequence: ");
    printf("%d, %d, ", n0, n1);

    for (int i = 2; i < seqLen; i++)         //Iterate loop from n2 upto len-1.
    {
        fib = n0 + n1;                  //fib=0+1,1+1,1+2,2+3,3+5,...
        printf("%d", fib);               //1,2,3,5,...
        n0 = n1;                       //n0=1,1,2,3,...
        n1 = fib;                      //n1=1,2,3,5,...
        if (i != (seqLen - 1))
            printf(", ");               //Print "comma" delimeter..
        else
            printf("\n");               //Move cursor into new line..
    }

    printf("\n\tRecursive Solution: ");
    printf("\nFibonacci sequence: ");
    for (int i = 0; i < seqLen; i++)         //Iterate loop from n0 upto len-1.
    {
        printf("%d", fibn(i));           //Print the recursive output..
        if (i != (seqLen - 1))
            printf(", ");               //Print "," delimeter..
        else
            printf("\n");               //Move the cursor into new line..
    }

    return(0);                          //Indicate successful exeuction..
}


int fibn(int n)                         //Function definition of recursive fibn()..
{
    if (n > 1) return (fibn(n - 1) + fibn(n - 2));
    else if (n == 1) return 1;
    else if (n == 0) return 0;
    else
    {
        printf("\nError!");             //If something, put error..
        return -1;
    }
}