#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter array size: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int *ptr;
    ptr = arr;
    int sum = 0;
    int product = 1;

    for(i=0;i<n;i++)
    {
        sum+=*(ptr+i);
    }
    printf("Sum is: %d\n",sum);

    for(i=0;i<n;i++)
    {
        product*= *(ptr+i);
    }
    printf("Product is: %d\n",product);

    return 0;
}
