#include<stdio.h>
int main()
{
    int n,num,output;
    while(1)
    {
        scanf("%d %d",&n,&num);
        if(n==0 || num==0)
        {
            break;
        }
        output=(n*num);
        printf("%d\n",output);
    }


    return 0;
}
