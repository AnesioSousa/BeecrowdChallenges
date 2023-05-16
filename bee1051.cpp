#include <cstdio>

int main()
{
    float salary, tax = 0;

    scanf("%f", &salary);
    if (salary >= 0 && salary <= 2000)
        printf("Isento\n");
    else if (salary > 2000 && salary <= 3000)
    {
        tax += ((salary - 2000) * .08);
        printf("R$ %.2f\n", tax);
    }
    else if (salary > 3000 && salary <= 4500)
    {
        tax += (1000 * .08);
        tax += ((salary - 3000) * .18);
        printf("R$ %.2f\n", tax);
    }
    else if (salary > 4500)
    {
        tax += 1000 * .08;
        tax += 1500 * .18;
        tax += ((salary - 4500) * .28);
        printf("R$ %.2f\n", tax);
    }

    return 0;
}