#include <cstdio>

int main()
{
    float n, soma = 0;
    int count = 0;

    for (size_t i = 0; i < 6; i++)
    {
        scanf("%f", &n);
        if (n > 0)
        {
            count++;
            soma += n;
        }
    }
    printf("%d valores positivos\n%.1f\n", count, soma / count);

    return 0;
}