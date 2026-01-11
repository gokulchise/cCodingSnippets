#include <stdio.h>
#include <stdbool.h>

#define ISLEAP(_y)  ((_y%4==0)?((_y%100!=0)?true:           \
                        ((_y%400==0)?true:false))           \
                        :false)
typedef enum
{
    nonLeap,
    leap
}CHECK_LEAP;                                    //Enum members for leap and nonLeap identification..
CHECK_LEAP chLeapYear;                          

int main(void)  
{
    int year;                                   //To store user entered year.
    bool isLeap;                                //To store status of leap year.
    
    //Prompt user for input:
    printf("\nInput year: ");
    scanf("%d",&year);
    
    isLeap = 0;                             
    
    chLeapYear = isLeap = ISLEAP(year);         //Check if the year is leap or not..
        
    switch(chLeapYear)                          //Navigate case w.r.t leap year computation..
    {
        default:
        case nonLeap:
        printf("\n%d is non leap year..",year); 
        break;
        
        case leap:
        printf("\n%d is a leap year!.",year);   //Output the string on the console window..
        break;
    }
    
    return(0);                                  //Indicate successful execution..
}