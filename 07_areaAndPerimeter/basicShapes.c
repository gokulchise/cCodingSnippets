#include <stdio.h>
#include <math.h>

#define PI  3.14159

enum 
{
  circle = 1,
  rectangle,
  square
};

void cirl(float r, float *c_area, float *c_peri);
void rect(int len, int width, int *r_area, int *r_peri);
void squre(int side, int *s_area, int *s_peri);

int main(void) 
{

    int key = 0;

    /*Variables for circle*/
    float radius = 0;
    float cArea = 0;
    float cPeri = 0;
    
    /*Variables for rectangle*/
    int l,w = 0;
    int rArea = 0;
    int rPeri = 0;
    
    /*Variables for square*/
    int s = 0;
    int sArea = 0;
    int sPeri = 0;
    
    
    printf("\nThis programme intented to develop for compute the area and perimeter of basic shapes..");       //Purpose of this programme.
    
    //Prompt user for input a shape:
    printf("\nInput a key: ");
    printf("\n\t1 for circle");
    printf("\n\t2 for rectangle");
    printf("\n\t3 for square\n");

    //Prompt user for input a valid key..
    printf("\nEnter key: ");            
    scanf("%d",&key);
    
    
    switch(key)
    {
        case circle:
        
            printf("\nInput radius of circle: ");   
            scanf("%f",&radius);
            
            cirl(radius, &cArea, &cPeri);                               //Pass the arguments to cirl() interms of call by reference except radius.
            
            printf("\nArea of circle            : %0.2f",cArea);        //Output the computed area of circle.
            printf("\nPerimeter of circle       : %0.2f",cPeri);        //Output the computed perimeter of circle..
           
        break;
        
        case rectangle:
        
            printf("\nInput length: ");
            scanf("%d",&l);
            printf("\nInput width : ");
            scanf("%d",&w);
            
            rect(l, w, &rArea, &rPeri);
            
            printf("\nArea of rectangle         : %d",rArea);
            printf("\nPerimeter of rectangle    : %d",rPeri);
            
        break;
        
        case square:
        
            printf("\nInput side length: ");
            scanf("%d",&s);
            
            squre(s,&sArea, &sPeri);
            
            printf("\nArea of square            : %d",sArea);
            printf("\nPerimeter of square       : %d",sPeri);
            
        break;
        
        default:
            printf("\nInvalid input! \nPls enter valid key..\n");
        break;
    }
        
        
    return(0);                                                              //Indicate successful execution..
}


void cirl(float r, float *c_area, float *c_peri)
{
    *c_area = PI * r * r;
    *c_peri = 2 * PI * r;
}

void rect(int len, int width, int *r_area, int *r_peri)
{
    *r_area = len * width;
    *r_peri = 2 * (len + width);
}

void squre(int side, int *s_area, int *s_peri)
{
    *s_area = side * side;
    *s_peri = 4 * side;
}









