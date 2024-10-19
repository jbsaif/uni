#include<stdio.h>
int main()
{
    int A,B;

    scanf("%d %d",&A,&B);

    if(A%2==0 && B%2==0)
    {
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }
    
    return 0;
}