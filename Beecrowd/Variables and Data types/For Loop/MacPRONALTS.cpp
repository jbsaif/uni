#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int p,q;
    float sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&p,&q);
        if(p==1001)
        {
            sum+=(1.50*q);
        }
        else if(p==1002)
        {
            sum+=(2.50*q);
        }
        else if(p==1003)
        {
            sum+=(3.50*q);
        }
        else if(p==1004)
        {
            sum+=(4.50*q);
        }
        else if(p==1005)
        {
            sum+=(5.50*q);
        }

    }
    printf("%.2f\n",(float)sum);

    return 0;
}
