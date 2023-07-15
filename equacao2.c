#include <stdio.h>
#include <math.h>

double delta(double a, double b, double c)
{
    double res_delta;

    res_delta = pow(b, 2) - (4 * a * c);
    return res_delta;
}

double raizes(double a, double b, double res_delta)
{
    double x1, x2, realPart, imaginaryPart;

    if (res_delta > 0)
    {
        x1 = (-b + sqrt(res_delta)) / (2 * a);
        x2 = (-b - sqrt(res_delta)) / (2 * a);
        printf("O resultado das raizes: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
    }

    else if (res_delta == 0)
    {
        double x = -b / (2 * a);
        printf("O resultado da raiz: x = %.2lf\n", x);
    }

    else
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-res_delta) / (2 * a);
        printf("As raizes complexas: x1 = %.2lf + %.2lfi e x2 = %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

int main(void)
{
    double a, b, c, res_delta;
    printf("Digite o valor de A: ");
    scanf("%lf", &a);
    printf("Digite o valor de B: ");
    scanf("%lf", &b);
    printf("Digite o valor de C: ");
    scanf("%lf", &c);

    res_delta = delta(a, b, c);

    printf("Resultado de Delta = %.2lf\n", res_delta);

    raizes(a, b, res_delta);

    return 0;
}