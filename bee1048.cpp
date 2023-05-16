#include <cstdio>

int main()
{
    float salario, taxa;

    scanf("%f", &salario);

    if (salario >= 0 && salario <= 400)
        taxa = .15;
    else if (salario > 400 && salario <= 800)
        taxa = .12;
    else if (salario > 800 && salario <= 1200)
        taxa = .1;
    else if (salario > 1200 && salario <= 2000)
        taxa = .07;
    else if (salario > 2000)
        taxa = .04;

    printf("Novo salario: %.2f\n", salario * (1 + taxa));
    printf("Reajuste ganho: %.2f\n", salario * taxa);
    printf("Em percentual: %.f %%\n", taxa * 100);

    return 0;
}