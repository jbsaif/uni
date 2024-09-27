#include<stdio.h>
int main()
{
    int DD,MM,YY,C;

    scanf("%d%c%d%c%d",&DD,&C,&MM,&C,&YY);

    printf("%02d/%02d/%02d\n",MM,DD,YY);//MM/DD/YY format
    printf("%02d/%02d/%02d\n",YY,MM,DD);//YY/MM/DD
    printf("%02d-%02d-%02d\n",DD,MM,YY);//DD-MM-YY


    return 0;
}
