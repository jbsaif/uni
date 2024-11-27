#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    for(int i=1;i<=y;i++)
    {
        printf("%d", i);
        if(i%y!=0)
        {
            printf(" ");
        }
        if(i%x==0)
        {
            printf("\n");
        }
    }

    return 0;
}
