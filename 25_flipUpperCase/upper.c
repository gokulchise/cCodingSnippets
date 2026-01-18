#include <stdio.h>
#include <string.h>
#include <ctype.h>

void flip_upper(char* str);                         //Function prototype of flip_upper()..

int main(void)
{
    char s[50];

    //Prompt user for input:
    printf("\nInput lowerCase string: ");
    fgets(s, sizeof(s), stdin);

    flip_upper(s);                    //Call by reference the flip_upper()..

    printf("\nUpper case : %s", s);      //Output the value..

    return(0);                          //Indicate successful exeuction..
}

void flip_upper(char* str)              //Function definition of flip_upper()..
{
    int len = 0;
    len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (islower(str[i]))             //check if lower case letter..
            str[i] = toupper(str[i]);     //Flip into upper case letter..
    }
}