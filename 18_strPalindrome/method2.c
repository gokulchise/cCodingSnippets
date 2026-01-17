#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_Palindrome(char *str);                           //Function prototype of is_Palindrome().

int main(void)
{
    char string[50];

    //prompt user for string:
    printf("\nInput string: ");
    gets(string);

    if(is_Palindrome(string))                            //Check is the string is palindrome?
        printf("\n%s \n-is Palindrome!",string);
    else   
        printf("\n%s \n-is not a Palindrome!",string);

    return(0);                                          //Indicate successful execution..
}

bool is_Palindrome(char *str)                           //Function definition of is_Palindrome().
{
    int len     = strlen(str);
    int middle  = len / 2;

    for(int i=0; i<middle; i++)
    {
        if(str[i] != str[len-i-1])                      //Compare 1st and last char of string, like wise 2nd and 2nd last char and so on..
            return false;                               //If something mismatch -> return false to the callee..
    }

    return true;                                        //If everything match   -> return true to the callee.. 
}