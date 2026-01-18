//Count the vowels in a string:
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_vowels(char* s);                      //Function prototype of count_vowels()..

int main(void)
{
    char s1[50];

    //Prompt user for input:
    printf("\nInput string (<50_char): ");
    fgets(s1, sizeof(s1), stdin);                 //alternative for unsafe gets()..

    //Output the value on the console window..
    printf("\nVolwels count : %d", count_vowels(s1));

    return(0);              //Indicate successful exeuction..
}

int count_vowels(char* s)                   //Function definition of count_vowels()..
{
    int count = 0;
    int len = 0;
    len = strlen(s);                        //get length of the string..           
    for (int i = 0; i < len; i++)
    {
        switch (toupper(s[i]))               //change upper case on each char..
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;                   //Increment the count using Fall Through Logic (FTL).
        }
    }

    return (count);                         //Return the value to the callee..
}