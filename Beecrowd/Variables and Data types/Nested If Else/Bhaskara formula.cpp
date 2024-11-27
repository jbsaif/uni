#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, d, d1, d2;
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    if (a == 0 || d<0) {
    printf("Impossivel calcular\n");
    }
    else
    {
    d = sqrt(d);
    d1 = (-b + d) / (2 * a);
    d2 = (-b - d) / (2 * a);
    printf("R1 = %.5f\n", d1);
    printf("R2 = %.5f\n", d2);
    }

    return 0;
}
