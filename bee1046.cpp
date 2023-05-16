#include <iostream>

using namespace std;

int main()
{
    int hora_inicial, hora_final, duracao, j;

    scanf("%d %d", &hora_inicial, &hora_final);

    if (hora_final <= hora_inicial)
        hora_final += 24;

    for (j = hora_inicial; j < hora_final; j++)
    {
        duracao++;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}