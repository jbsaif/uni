#include<stdio.h>

struct information
{
    int age;
    float salary;
};

int main()
{
    struct information person[3];
    int i;
    for(i=0;i<3;i++){
        printf("Information for person %d\n", i+1);
        printf("Enter age : ");
        scanf("%d",&person[i].age);
        printf("Enter salary : ");
        scanf("%f",&person[i].salary);
    }
    for(i=0;i<3;i++)
    {
        printf("\n\nInformation for %d\n", i+1);
        printf("Age : %d\n",person[i].age);
        printf("Salary : %.2f\n",person[i].salary);
    }



}

