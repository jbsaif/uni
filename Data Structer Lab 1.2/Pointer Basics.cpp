#include<stdio.h>
void swapping(float *ptr1, float *ptr2)
{
    *ptr1=*ptr1+*ptr2;
    *ptr2=*ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;
}
int main()
{
    float x,y;

    printf("Input values: ");
    scanf("%f %f",&x,&y);

    printf("Before swapping Values: \n",x,y);
    printf("X: %.2f\nY: %.2f\n",x,y);

    swapping(&x,&y);

    printf("After swapping Values: \n",x,y);
    printf("X: %.2f\nY: %.2f\n",x,y);


}
