#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int maxi=arr[0];
    for(int i=0;i<n;i++)
    {
        if(maxi<arr[i]){
        maxi=arr[i];
        }
    }
    printf("Maximum = %d\n", maxi);
    int mini=maxi;
    for(int i=0;i<n;i++)
    {
        if(mini>arr[i]){
        mini=arr[i];
        }
    }
    printf("Minimum = %d\n", mini);

    int diff;

    diff = (maxi-mini);

    printf("Difference: %d\n",diff);

    return 0;
}
