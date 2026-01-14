#include <stdio.h>

int main(void)
{
    FILE *fData;                            //fData points the FILE structure in memory. to access opening, writing, reading and closing the file 
                                            //using fopen(),fprintf(),fscanf(),fread(),fgets() and fclose().
    
    fData = fopen("data.txt","r");          //Open data.txt in readMode..

    int input[50];                          //Integer array to store the file readed numbers..
    int rData = 0;                          //To store the readedData of particular line.
    int lines = 0;                          //To store the no.of lines in the file.
    while(fscanf(fData,"%d",&rData)!=EOF)   //read until End_Of_File using sprintf()..
    {
        input[lines]=rData;                 //Store in array.
        //printf("\nline %d = %d",lines,rData);
        lines++;                            //Increment the lineCount.
    }

    //Output the console window file readed data..
    printf("\ntxt data: ");
    for(int lData=0; lData<lines; lData++)
    {
        printf("\n\tline %d: %d",lData,input[lData]);
    }

    fclose(fData);                          //Close the file

    return(0);                              //Indicate successful exeuction..
}