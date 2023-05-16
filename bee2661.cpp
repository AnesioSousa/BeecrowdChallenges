#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void gerar_primos(int limite)
{
    // Cria um vetor de booleanos para armazenar se cada número é primo
    bool *primo = (bool *)malloc(sizeof(bool) * limite);
    for (int i = 0; i < limite; i++)
    {
        primo[i] = true;
    }

    // Marca os números não primos
    for (int i = 2; i * i < limite; i++)
    {
        if (primo[i])
        {
            for (int j = i * i; j < limite; j += i)
            {
                primo[j] = false;
            }
        }
    }

    // Imprime os números primos
    printf("Números primos até %d:\n", limite);
    for (int i = 2; i < limite; i++)
    {
        if (primo[i])
        {
            printf("%d ", i);
        }
    }

    free(primo);
}

int main()
{
    gerar_primos(100);
    return 0;
}
