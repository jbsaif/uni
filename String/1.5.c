#include<stdio.h>
int main()
{
    char str[] = "This is my country Bangladesh";

    int i,len;

    len=0;

    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }

    printf("Length = %d\n", len);

    getch();

}
