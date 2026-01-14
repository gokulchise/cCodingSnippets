#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(void)
{
    char s[] = {"atyEilOecuoYQmcdE"};       
    int len = strlen(s);                    //Get the length of the string..

    int vCount = 0;                         //To store the count of the vowels in th string..

    for(int i=0; i<len; i++)                //Iterate the for loop until string length..
    {
        switch(toupper(s[i]))               //Change lowerCase character into upperCase character..
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vCount ++;                  //Count the vowels by "Fall through logic"
                break;
        }
    }

    printf("\nVowel count is %d",vCount);   //Display the vowel count on the console window.

    return (0);                              //Indicate successful exeuction..
}