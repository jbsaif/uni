#include<stdio.h>
int main()
{
    int Y;

    scanf("%d",&Y);

    if(Y%4==0 && Y%100!=0){
        printf("Happy Year\n");
    }
    else if(Y%400==0){
        printf("Happy Year\n");
    }
    else{
        printf("Ordinary Year\n");
    }


    return 0;
}