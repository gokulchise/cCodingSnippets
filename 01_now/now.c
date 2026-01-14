#include <stdio.h>
#include <time.h>

#define UTC2IST_CONV(_t)    (_t+19800)  

int main(void)  
{
    time_t raw;                         //This variable used to store the time and data of now..                    
    struct tm *info;                    //This pointer variable used to store/point the members of tm..[like: "%H:%M:%S %Y:%m:%d"]
    char buf[64];                       //This buffer used to store the "formatted time format"..

    time(&raw);                         //Fetch the present time & date..
    raw = UTC2IST_CONV(raw);            //IST is +5:30 hours ahead from UTC..
    info = gmtime(&raw);                //Store the present global time & data into info..

    strftime(buf, sizeof(buf), "%d-%m-%Y  %I:%M:%S %p",info);   //Store the formatted time format into buffer..
    printf("\nNow: %s",buf);                                    //Output the console window of now [Now: 10-01-2026  06:55:14 AM]..

    return(0);                          //Indicate successful exeuction..
}
