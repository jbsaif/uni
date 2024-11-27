#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }
    int mini=arr[0];
    int pos;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<mini)
        {
            mini=arr[i];
            pos=i;
        }
    }
    printf("Menor valor: %d\n",mini);
    printf("Posicao: %d\n",pos);

    return 0;

}
