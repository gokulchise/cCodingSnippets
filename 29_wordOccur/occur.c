//Number of occurances of word in a string..

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int word_count(char* string, char* word);                   //Function prototype of word_count()..

int main(void)
{
    char s[] = "Have a good day, good to see you again!";   //Sentence
    char w[] = "good";                                      //To find "good"

    int count = word_count(s, w);                            //get count of "good"

    printf("\nWord count is %d", count);                     //Display the output.

    return (0);                                             //Indicate successful execution..
}

int word_count(char* string, char* word)                    //Function definition of word_count()..
{
    int slen = strlen(string);                              //get string length..
    int wlen = strlen(word);                                //get word length..
    bool word_found;
    int wcount = 0;

    for (int i = 0; i < slen; i++)                          //iterate th outer loop upto string_length..
    {
        word_found = true;
        for (int j = 0; j < wlen; j++)                      //iterate the inner loop upto word_length..
        {
            if (word[j] != string[i + j])                   //if any one of the char mismatch, stop the iteration. put false in result..
            {
                word_found = false;
                break;
            }
        }
        if (word_found)                                     //if all char match, increment word count by one..
            wcount++;
    }

    return (wcount);                                        //return the word count to the callee..
}

