#include<stdio.h>

struct information{

    int age;
    int salary;
};

struct information Person1,Person2;
int main()
{
    printf("Enter infos for Person 1: \n");
    printf("Enter Age : ");
    scanf("%d", &Person1.age);
    printf("Enter Salary : ");
    scanf("%d", &Person1.salary);

    printf("\n");

    printf("Age : %d\n", Person1.age);
    printf("Salary : %d\n", Person1.salary);

    printf("\n\n");
    printf("Enter infos for Person 2: \n");
    printf("Enter Age : ");
    scanf("%d", &Person2.age);
    printf("Enter Salary : ");
    scanf("%d", &Person2.salary);

    printf("\n");

    printf("Age : %d\n", Person2.age);
    printf("Salary : %d\n", Person2.salary);



}
