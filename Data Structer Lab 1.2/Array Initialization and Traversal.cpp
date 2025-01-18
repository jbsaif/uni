#include<stdio.h>
int main()
{
    int arr[10];
    int sum;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=9;i>=0;i--)
    {
        printf("%d ",arr[i]);
        sum+=arr[i];
    }
    printf("\nSum : %d\n", sum);

    float average;

    average = (float)sum/10;

    printf("Average: %.2f\n", average);



    return 0;
}
