#include<stdio.h>

int factorial(int n)
{
    int x;
    if(n==1)
    {
        return 1;
    }
    else{

        return n * factorial(n-1);
    }

}
int main()
{
    int num=5;

    int fact = factorial(num);

    printf("Factorial of %d is: %d\n", num, fact);

}
