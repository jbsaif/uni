#include<stdio.h>
int main()
{
    int n,i,element,occured=0;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Search for the element: ");
    scanf("%d",&element);
    for(i=0;i<n;i++)
    {
        if(element == arr[i]){
            printf("Element found at position: %d\n",i);
            occured++;
        }
    }
    printf("Element Occurrence: %d",occured);

    return 0;
}
