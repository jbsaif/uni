#include<stdio.h>
int main()
{
    long long int n,ans;

    scanf("%lld",&n);

    if(n%2==0)
    {
        ans=n/2;
        printf("%lld\n",ans);
    }
    else{
        ans=-1*(n/2+1);
        printf("%lld\n",ans);
    }



    return 0;
}
