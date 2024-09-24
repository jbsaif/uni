#include<stdio.h>
int main()
{
    int A,B,X,total;

    scanf("%d %d %d",&A,&B,&X);

    if(A>X){
        total=A+B;
        printf("%d\n",total);
    }
    else{
        printf("%d\n",A);
    }


    return 0;
}
