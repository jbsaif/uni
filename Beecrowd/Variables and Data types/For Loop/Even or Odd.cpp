#include<stdio.h>
int main()
{
    long long int n,m;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&m);
        if(m<0 && m%2!=0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if(m==0)
        {
            printf("NULL\n");
        }
        else if(m%2!=0)
        {
            printf("ODD POSITIVE\n");
        }
        else if(m%2==0 && m<0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if(m%2==0 && m>0)
        {
            printf("EVEN POSITIVE\n");
        }

    }

    return 0;
}
