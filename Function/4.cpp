#include<stdio.h>

void display(int a[]){
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int arr[] = {12,20,30,40,50};

    display(arr);


}
