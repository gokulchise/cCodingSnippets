//String append with DMA..

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* string_append(char* s1, char* s2);            //Function prototype of string_append()..

int main(void)
{
    char s1[50];
    char s2[50];

    //Prompt user for input:
    printf("\nInput string s1: ");
    fgets(s1, sizeof(s1), stdin);
    printf("\nInput string s2: ");
    fgets(s2, sizeof(s2), stdin);

    string_append(s1, s2);                           //Call string_append()..

    printf("\nString concatenation completed!");

    return(0);                                      //Indicate successful exeuction..

}

char* string_append(char* s1, char* s2)
{
    int s1_len = strlen(s1);                        //3+'\n'(CR\LF) -> after s1 we press 'enter key'    -> 4
    int s2_len = strlen(s2);                        //4
    int s_len = s1_len + s2_len + 1;                //4+4+'\0' => 9

    char* s = calloc(s_len, sizeof(char));          //Allocate memory in heap using clear allocation()..

    for (int i = 0; i < s1_len; i++)                //iterate loop upto 2
        s[i] = s1[i];                               //s[0]=s1[0],s[1]=s1[1],s[2]=s1[2]

    s1_len -= 1;                                    //Ignore 'CR\LF-> Carriage return\Line Feed'

    for (int i = 0; i < s2_len; i++)                //iterate loop uoto 3
        s[s1_len + i] = s2[i];                      //s[3]=s2[0],s[4]=s2[1],s[5]=s2[2],s[6]=s2[3]..

    s[s_len-1] = '\0';                              //s[7] = '\0'

    fputs(s,stdout);                                //Print the concatenated string..

    free(s);                                        //free the allocated memory in heap, to avoid memory leaks..

}