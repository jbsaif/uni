//Find capital and small and digits
#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];

    int i,capital,small,digit;
    capital=small=digit=0;

    gets(str);

    for(i=0;str[i]!='\0';i++){
        if(str[i]>=65 && str[i]<=90)
            {
                capital++;
            }
        else if(str[i]>=98 && str[i]<=122)
            small++;
        else if(str[i]>=48 && str[i]<=57)
            digit++;

    }
    printf("Capital Letter : %d\n", capital);
    printf("Small Letter : %d\n", small);
    printf("Digits : %d\n", digit);

    getch();
}
