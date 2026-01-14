#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    FILE *fData;                        //fData points the FILE structure in memory. to access opening, writing, reading and closing the file 
                                        //using fopen(),fprintf(),fscanf(),fread(),fgets() and fclose().

    fData = fopen("data.txt","w");      //Open data.txt in write mode.
    
    int n = 0;
    while(true)
    {
        printf("\nEnter (-1 quits): ");
        scanf("%d",&n);                 //Store user data in n variable..
        if(n == -1) break;              //break the loop if n is -1.
        else 
            fprintf(fData,"%d\n",n);    //write the user data into file using fprint()..  
    }

    fclose(fData);                      //Close the file.

    return(0);                          //Indicate successful exeuction..
}