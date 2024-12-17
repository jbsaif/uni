//finding maximum value in array using function
#include<stdio.h>

int maximum(int a[])
{
    int i;
    int maxi=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>a[0])
        {
            maxi=a[i];
        }
    }
    return maxi;
}

int main()
{
    int arr[] = {10,20,30,40,50};

    int maximumValue = maximum(arr);

    printf("Maximum Value of Array is : %d\n", maximumValue);


}
