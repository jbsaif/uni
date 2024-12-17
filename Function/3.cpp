#include<stdio.h>

void calculatePower(double base, double exp)
{
    double i,result=1;
    for(i=1;i<=exp;i++){
       result= result * base;
    }
    printf("%.3lf",result);
}
int main()
{
    double base, exp;

    printf("Enter Base: ");
    scanf("%lf",&base);

    printf("Enter Exp: ");
    scanf("%lf",&exp);

    calculatePower(base, exp);


}
