//Check leap year..

#include <stdio.h>
#include <stdbool.h>

bool is_leapYear(int year);                     //Function prototype of is_leapYear()..

int main(void)
{
    for (int year = 1900; year <= 2026; year++)  //Iterate loop upto 2026..
    {
        if (is_leapYear(year))
            printf("\n%d is LEAP YEAR", year);
        else
            printf("\n%d", year);
    }

    return(0);                                  //Indicate successful execution..
}

bool is_leapYear(int year)                      //Fucntion definition of is_leapYear()..
{
    if (year % 4 != 0)           return false;
    else if (year % 100 != 0)    return true;
    else if (year % 400 != 0)    return false;
    else                         return true;
}

