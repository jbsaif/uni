#include<stdio.h>
int main(){

    char str1[200];
    printf("Enter Elements for String 1: ");
    gets(str1);

    char str2[200];
    printf("Enter Elements for String 2: ");
    gets(str2);

    int d = strcmp(str1,str2); //jodi duita string mile then d==0

    if(d==0)
    {
        printf("Milse\n");
    }
    else{
        printf("Mile nai\n");
    }

    getch();
}
