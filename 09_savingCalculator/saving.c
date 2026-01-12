#include <stdio.h>

int main(void) 
{
    double startBalance;
    double endBalance;
    double annualContribution;
    double rateOfReturn;
    int totalYears;
    
    printf("\n**********Savings Calculator**********\n");
    do  {
        printf("\nIntial deposit: ");
        scanf("%lf",&startBalance);
        if(startBalance <=0)
            printf("\nIntial deposit must be > 0");
    }while(startBalance <= 0);
    
    do  {
        printf("\nAnnual Investment: ");
        scanf("%lf",&annualContribution);
        if(annualContribution <= 0)
            printf("\nAnnual Investment must be > 0");
    }while(annualContribution <= 0);
    
    do  {
        printf("\nRate of return: ");
        scanf("%lf",&rateOfReturn);
        if(rateOfReturn <=0)
            printf("\nRate of return must be > 0");
    }while(rateOfReturn <= 0);
    
    do  {
        printf("\nYears to grow: ");
        scanf("%d",&totalYears);
        if(totalYears <= 0)
            printf("\nYears to grow must be > 0");
    }while(totalYears <= 0);
    
    printf("\n%8s%18s%16s%16s\n","Year","Start Balance","Interest","End Balance");      //Tabular column heading..
    
    for(int i=0; i<58; i++)                                                             //To create '*' lines => 8+18+16+16..
        printf("*");
        
    printf("\n");                                                                       //Move cursor to the new line..
    
    endBalance = startBalance;
    //Computation for yearly basis return on investment..
    for(int year = 1; year <= totalYears; year++)
    {
        startBalance = endBalance;
        printf("%8d%18.2f",year,startBalance);
        double interest = startBalance * (rateOfReturn / 100);
        endBalance = startBalance + interest + annualContribution;
        printf("%16.2f%16.2f\n",interest,endBalance);
    }
    
    printf("\n");
    
    return(0);                                                                          //Indicate successful execution..
}