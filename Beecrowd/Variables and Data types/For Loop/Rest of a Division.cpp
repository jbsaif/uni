#include<stdio.h>
int main()
{
    int x,y,temp;
    scanf("%d %d",&x,&y);

    if(x>y)
        {
            temp=x;
            x=y;
            y=temp;
        }
    for(int i=x+1;i<y-1;i++)
    {
        if(x>0 && y>0)
        {
           if(i%5==2 || i%5==3)
           {
               printf("%d\n",i);
           }
        }
    }

    return 0;
}
