#include<stdio.h>
double triangleArea(double a, double b);
int main()
{
    double base, height;

    printf("Enter Base: ");
    scanf("%lf", &base);

    printf("Enter Height: ");
    scanf("%lf", &height);

    double Area = triangleArea(base, height);

    printf("Triangle Area is : %.3lf", Area);

}

double triangleArea(double a, double b)
{
    return 0.5 * a * b;

}
