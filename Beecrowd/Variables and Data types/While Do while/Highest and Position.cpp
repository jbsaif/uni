#include<stdio.h>
int main()
{
    int n,maxpos=-1,maxval=-1;
    for(int i=1;i<=100;i++)
    {
        scanf("%d",&n);
        if(n>maxpos){
            maxval=n;
            maxpos=i;
        }
    }
    printf("%d\n",maxval);
    printf("%d\n",maxpos);

    return 0;
}
