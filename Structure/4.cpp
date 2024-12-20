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

        if(person2.age == person3.age && person2.salary == person3.salary)
            printf("Person 2 equal person 3");
        else
            printf("Person 2 not equal to person 3");

}

