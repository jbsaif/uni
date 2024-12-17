#include<stdio.h>

void display(char x[])
{
    for(int i=0; x[i]!='\0'; i++)
    {
        printf("%c\n", x[i]);
    }
}
int main()
{
    char str[] = "Junaeed";

    display(str);

}
