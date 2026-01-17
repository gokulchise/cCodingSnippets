#include <stdio.h>

enum
{
    Celsius,
    Faren
};

void conv_Celsius(int sTemp, int eTemp, int sValue);                        //Function prototype of conv_Celsius()..
void conv_Farenheit(int sTemp, int eTemp, int sValue);                      //Function prototype of conv_Farenheit()..

int main(void)
{
    int tConv;
    int start, end, step = 0;

    //Prompt user for input:
    printf("\n0 for F2C | 1 for C2F: ");
    scanf("%d",&tConv);

    printf("\nInput start temp: ");
    scanf("%d",&start);
    printf("\nInput end temp: ");
    scanf("%d",&end);
    printf("\nInput step value: " );
    scanf("%d",&step);

    switch(tConv)
    {
        case Celsius:
            conv_Celsius(start, end, step);
            break;

        case Faren:
            conv_Farenheit(start, end, step);
            break;
        
        default:
            printf("\nInvalid input!, pls enter valid input..");
            break;
    }


    return(0);                      //Indicate successful exeuction..
}

void conv_Celsius(int sTemp, int eTemp, int sValue)                                 //Function definition of conv_Celsius()..
{
    double F = 0.0;
    double C = 0.0;

    printf("\n%8c   %8c\n",'F','C');                                                //Tabular heading..
    for(int i=0; i<25; i++) printf("*");                                            //'*' to seperate Tabular heading to tabular value..
    for(F=sTemp; F<=eTemp; F+=sValue)                                               //Iterate the loop upto end temperature value..
    {
        C = ((F - 32) * 5/9);                                                       //Convert Farenheit to Celsius..
        printf("\n%10.2lf %10.2lf",F,C);                                            //Right align representation in table..
    }

}

void conv_Farenheit(int sTemp, int eTemp, int sValue)                               //Function definition of conv_Farenheit()..
{
    double C = 0.0;
    double F = 0.0;

    printf("\n%8c   %8c\n",'C','F');                                                //Tabular heading..
    for(int i=0; i<25; i++) printf("*");                                            //'*' to seperate Tabular heading to tabular value..
    for(C=sTemp; C<=eTemp; C+=sValue)                                               //Iterate the loop upto end temperature value..
    {
        F = ((C * 9/5) + 32);                                                       //Convert Celsius to Farenheit..
        printf("\n%10.2lf %10.2lf",C,F);                                            //Right align representation in table..
    }
}