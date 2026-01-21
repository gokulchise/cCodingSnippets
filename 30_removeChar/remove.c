//remove character from string..

#include <stdio.h>

void remove_char(char* string, char r);                 //Function prototype of remove_char()..

int main(void)
{
    char s[] = "aAaBaCaDaEaFaGaHaIaJaKaLaMaNaOaPaQaRaSaTaUaVaWaXaYaZ";
    char to_remove = 'a';                       
        
    printf("\nBefore string: %s", s);                   //Output the before string characters..  

    remove_char(s, to_remove);                          //Pass/Call by reference/Pointer..

    printf("\nAfter  string: %s", s);                   //Output the aftering string character..

    return (0);                                         //Indicate successful execution..
}

void remove_char(char* string, char r)                  //Function definition of remove_char()
{
    int pos = 0;
    int new_pos = 0;

    while (string[pos] != '\0')                         //Iterate loop until end of string..
    {
        if (string[pos] == r)
        {
            new_pos = pos;
            while (string[new_pos] != '\0')             //Iterate loop until end of string..
            {
                string[new_pos] = string[new_pos + 1];  //Left shift every char by one..
                new_pos++;                              
            }
        }
        pos++;                                          //Increment the position of char in string..
    }
}
