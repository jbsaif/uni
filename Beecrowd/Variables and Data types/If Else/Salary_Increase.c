#include<stdio.h>
int main()
{
    float s,ns,p;

    scanf("%f",&s);

    if(s>=0 && s<=400.00)
    {
        ns=s+(s*15/100);
        p=(s*15/100);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%",ns,p);
    }
    else if(s>=400.01 && s<=800.00)
    {
        ns=(s+(s*.12));
        p=(s*.12);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%",ns,p);
    }
    else if(s>=800.01 && s<=1200.00)
    {
        ns=s+(s*10/100);
        p=(s*10/100);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%",ns,p);
    }
    else if(s>=1200.01 && s<=2000.00)
    {
        ns=(s+(s*7/100));
        p=(s*7/100);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%",ns,p);
    }
    else if(s>2000)
    {
        ns=(s+(s*4/100));
        p=(s*4/100);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%",ns,p);
    }


    return 0;
}