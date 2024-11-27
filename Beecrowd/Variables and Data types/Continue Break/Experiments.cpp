#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int totalanimal=0,quantity;int C=0;int R=0;int S=0;
    char animal;
    for(int i=1;i<=n;i++)
    {
        scanf("%d %c",&quantity,&animal);
    }
    for(int i=1;i<=n;i++)
    {
        totalanimal+=quantity;
        if(animal==C)
        {
            C+=quantity;
        }
        else if(animal==R)
        {
            R+=quantity;
        }
        else if(animal==S)
        {
            s+=quantity;
        }

    }

    printf("Total: %d cobaias\n",totalanimal);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);

    printf("Percentual de coelhos: %.2f %%\n", (C * 100.0) / totalAnimal);
    printf("Percentual de ratos: %.2f %%\n", (R * 100.0) / totalAnimal);
    printf("Percentual de sapos: %.2f %%\n", (S * 100.0) / totalAnimal);

    return 0;
}
