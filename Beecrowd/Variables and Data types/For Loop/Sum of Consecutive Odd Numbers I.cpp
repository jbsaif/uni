#include<stdio.h>
int main ()
{
    long long int x,y,temp,sum=0;
    scanf("%lld %lld",&x,&y);
    if(x>y)
    {
        temp=x;
        x=y;
        y=temp;
    }
    for(int i=x+1;i<=y-1;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    printf("%lld\n",sum);

    return 0;
}
