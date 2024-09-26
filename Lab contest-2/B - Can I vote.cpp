#include<stdio.h>
int main()
{

    int age;

    scanf("%d",&age);

    if(age<21){
        printf("Sorry, you are too young to vote.\n");
    }
    else if(21<=age && age<23){
        printf("Wait a little more to vote.\n");
    }
    else{
        printf("Yes, you can vote.\n");
    }

    return 0;
}
