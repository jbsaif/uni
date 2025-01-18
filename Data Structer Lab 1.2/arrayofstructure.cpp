#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct students{
    int id;
    char name[50];
    float gpa;
};
int main()
{
    struct students details[5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter student Id, name, gpa for %d Student: ", i+1);
        scanf("%d %s %f", &details[i].id, &details[i].name, &details[i].gpa);
        printf("\n");
    }
    int maxstudent = 0;
    for(i=0;i<5;i++)
    {
        if(details[i].gpa>details[maxstudent].gpa);
        maxstudent=details[i].gpa;
    }
    printf("Top Student: \n");
    printf("Id: %d\nName: %s\nGpa: %.02f\n",details[maxstudent].id, details[maxstudent].name, details[maxstudent].gpa);

    return 0;
}
