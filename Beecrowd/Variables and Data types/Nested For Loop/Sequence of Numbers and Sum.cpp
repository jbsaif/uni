#include<stdio.h>
int main()
{
    int a,b,i,temp,sum;
    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a<=0 || b<=0)
        {
            break;
        }
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        sum=0;
        for(i=a;i<=b;i++)
        {
            sum+=i;
            printf("%d ",i);
        }

        printf("Sum=%d\n",sum);

    }

    return 0;

}
