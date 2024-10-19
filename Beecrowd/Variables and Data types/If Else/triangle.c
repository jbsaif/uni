#include<stdio.h>
int main()
{
    float A,B,C,P,Area;

    scanf("%f %f %f",&A,&B,&C);

    if((A+B)>C && (B+C)>A && (C+A)>B)
    {
        P=A+B+C;
        printf("Perimetro = %.1f\n",P);
    }
    else{
        Area=.5*(A+B)*C;
        printf("Area = %.1f\n",Area);
    }

    return 0;    
}