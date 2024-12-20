#include<stdio.h>

struct information{

    int age;
    float salary;

};

struct information person1 = {25,24567.09};



int main()
{

    struct information person2,person3;

        person2.age = 15;
        person2.salary = 23456.87;
        person3 = person2;


    printf("Person 1 Age: %d\n", person1.age);
    printf("Person 1 Salary: %f\n", person1.salary);
    printf("\n\nPerson 2 Age: %d\n", person2.age);
    printf("Person 2 Salary: %f\n", person2.salary);
    printf("\n\nPerson 3 Age: %d\n", person3.age);
    printf("Person 3 Salary: %f\n", person3.salary);
}
