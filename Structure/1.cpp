#include<stdio.h>

struct Myself{

    int age;
    float income;
};
int main()
{
    struct Myself junaeed;

    junaeed.age = 21;
    junaeed.income = 0.00;

    printf("Age = %d\n", junaeed.age);
    printf("Name = %.2f\n", junaeed.income);
}
