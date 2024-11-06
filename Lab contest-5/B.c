#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<42){
        printf("AGC%03d",n);
    }
    else if(n>=42){
        printf("AGC%03d",n+1);
    }
    return 0;
}