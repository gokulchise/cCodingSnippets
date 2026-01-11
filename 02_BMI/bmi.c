#include <stdio.h>

#define BMI_CALC(_w,_h)     (_w / (_h*_h))

#define BMI_LOW         18.5
#define BMI_NORMAL      25
#define BMI_HIGH        30

typedef enum {
    LOW = 1,
    NORMAL,
    HIGH,
    OBESE
}BMI_VALUE;

BMI_VALUE gbmi; 

int findBmi(float );            //Function prototype..

int main(void)  {
    float weight, height;       //Declare weight and height variable -> announcing the properties of the variable to the compiler
    float bmiVal;               //Declare bmiVal to store the Body Mass Index Value..

    //Prompt user for input:
    printf("\nInput your weight in kg: ");
    scanf("%f",&weight);

    printf("\nInput your height in meters: ");
    scanf("%f",&height);

    //Compute BMI value.
    bmiVal = BMI_CALC(weight,height);

    gbmi = findBmi(bmiVal);

    //BMI criteria
    switch(gbmi)  {
        case LOW:
            printf("\nYour BMI is %0.2f | You have under weight",bmiVal);
            printf("\nPls, Take care of yourself!");
        break;

        case NORMAL:
            printf("\nYour BMI is %0.2f | You have Normal weight",bmiVal);
            printf("\nYou are healthy now!");
        break;

        case HIGH:
            printf("\nYour BMI is %0.2f | You have High weight",bmiVal);
            printf("\nYou advice to focus into diet!");
        break;

        case OBESE:
            printf("\nYour BMI is %0.2f | You have Obese",bmiVal);
            printf("\nYou strictly focus into diet!");
        break;

        default:

        break;
    }

    return(0);              //Indicate successful exeuctin..
}

int findBmi(float value)  {     //Find BMI function definition..
    short bVal = 0;
    if(value < BMI_LOW)
        bVal = 1;
    else if(value < BMI_NORMAL)
        bVal = 2;
    else if(value < BMI_HIGH)
        bVal = 3;
    else
        bVal = 4;

    return bVal;            //Return to the calling function with segreated BMI code..
}
