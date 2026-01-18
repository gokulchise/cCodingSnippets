#include <stdio.h>
#include <string.h>
#include <ctype.h>

void flip_lower(char* str);                 //Function prototype of flip_lower()..

int main(void)
{
    char s[50];

    //Prompt user for input:
    printf("\nInput upperCase string: ");
    fgets(s, sizeof(s), stdin);

    flip_lower(s);                          //Call by reference the flip_lower()..

    printf("\nLowerCase string: %s", s);         //Output the value..

    return(0);                              //Indicate successful exeuction..
}

void flip_lower(char* str)                  //Function definition of flip_lower()..
{
    int len = 0;
    len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (isupper(str[i]))                //check if upper case letter..
            str[i] = tolower(str[i]);       //Flip into lower case letter..
    }
}