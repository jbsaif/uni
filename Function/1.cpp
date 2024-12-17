#include<stdio.h>

int borgo(int a){

    return a*a;

}
int main()
{
    int n;
    printf("Enter any number: ",&n);
    scanf("%d",&n);

    int result;

    result = borgo(n);

    printf("The square of The number is: %d\n", result);


}
