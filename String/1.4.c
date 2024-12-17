#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];

    printf("Enter Anything : ");

    gets(str);

    int len = strlen(str);

    printf("Length = %d\n", len);

    getch();

}
