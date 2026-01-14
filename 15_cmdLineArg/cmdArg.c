#include <stdio.h>
#include <stdlib.h>             //use atoi() -> to convert string into integer..

int main(int argc, char* argv[])
{
    char* directory = argv[0];                  //argv[0] is store the working directory of ur programme.

    //Convert string into integer using atoi()
    int lower       = atoi(argv[1]);            //argv[1] -> 1st input follows working directory you entered (ur directory -> D:\demo 5 ) 5 is argv[1]
    int higher      = atoi(argv[2]);            //argv[2] -> 2nd input follow working director you entered (D:\demo 5 10) 10 is argv[2]..

    printf("\nargc      : %d",argc);            //Store the no of arguments entered..
    printf("\nDirectory : %s",directory);
    printf("\nlower     : %d",lower);
    printf("\nhigher    : %d\n",higher);

    printf("\nExecute the for loop w.r.t input arguments: ");
    for(int i=lower; i<=higher; i++)
    {
        printf("\n%d",i);
    }

    return(0);                  //Indicate successful execution..
}