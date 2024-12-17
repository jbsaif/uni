#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];

    gets(str);

    printf("Before reversing String = %s\n", str);
    gets(str);
    strrev(str);

    printf("Reversed String = %s\n", str);


    getch();
}
