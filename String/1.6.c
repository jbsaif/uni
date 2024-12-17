#include<stdio.h>
int main(){

    char str1[] = "I study in Daffodil International University";
    char str2[100];

    //printf("str1 = %s\n", str1);
    strcpy(str2,str1);

    printf("str2 = %s\n", str2);

    //printf("str1 = %s\n",str1);

    getch();
}
