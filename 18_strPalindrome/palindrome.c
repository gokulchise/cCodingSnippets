#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void rev_string(char str[]);                            //Function prototype of rev_string()..

int main(void)
{
    char string[50];
    char revString[50];
    bool is_Palindrome;

    //prompt user for an string:
    printf("\ninput string: ");
    gets(string);

    //Copy the string into revString.
    strcpy(revString,string);

    //Reverse a entered string..
    rev_string(revString);

    //Compare is palindrome or not.
    is_Palindrome = strcmp(string,revString);

    if(!(is_Palindrome))
        printf("\n%s\n- is Palindrome",string);
    else    
        printf("\n%s\n- is not Palindrome",string);

    return (0);                                     //Indicate successful exeuction..
}

void rev_string(char str[])                         //Function definition of rev_string()..
{
    int len     = strlen(str);
    int middle  = len / 2;
    int temp    = 0;

    for(int i=0; i<middle; i++)
    {
        temp                = str[i];
        str[i]              = str[len-i-1];
        str[len-i-1]        = temp;
    }

}
