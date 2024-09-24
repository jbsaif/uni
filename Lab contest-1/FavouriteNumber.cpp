#include<stdio.h>
int main()
{
    long long int N;

    scanf("%lld",&N);

    if(N%3==0 && N%6!=0 && N<=99999)
    {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }


    return 0;
}
