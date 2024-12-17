//string swapping
#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "Junaeed";
    char str2[] = "Daffodil";

    char temp[200];

    strcpy(temp,str);
    strcpy(str,str2);
    strcpy(str2,temp);

    printf("String 1 = %s\n",str);
    printf("String 2 = %s\n",str2);


    getch();

}
