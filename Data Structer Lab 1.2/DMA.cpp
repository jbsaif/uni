#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter number of elemenrs: \n");
    scanf("%d",&n);

    int *arr = (int *)malloc(n*sizeof(int));

    if(arr == NULL){
        printf("MEMORY NOT ALLOCATED\n");
    }
    printf("Enter %d Numbers: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("You Entered: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("Doubled Value Before freeing the Memory: \n");

    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",2*(arr[i]));
    }


    free(arr);

    return 0;
}