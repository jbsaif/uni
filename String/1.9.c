//string reverse without strrev
#include<stdio.h>
#include<string.h>
int main(){

    char str[] = "Bangladesh";

    char str2[200];

    int len = strlen(str);

    int i,j;

    for(i = len-1,j=0; i>=0; i--,j++)
    {
        str2[j] = str[i];
    }
    str2[j] = '\0';

    printf("Reversed String = %s\n", str2);

    getch();
}
