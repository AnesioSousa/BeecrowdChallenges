#include <iostream>

using namespace std;

int horas_em_min(int, int);

int main()
{
    int diferenca, hora_inicial, minuto_inicial, hora_final, minuto_final, total_inicial, total_final;

    scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);

    total_inicial = horas_em_min(hora_inicial, minuto_inicial);
    total_final = horas_em_min(hora_final, minuto_final);

    diferenca = total_final - total_inicial;

    if (diferenca < 0)
        diferenca = 1440 + diferenca;
    else if (!diferenca)
        diferenca = 1440;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", diferenca / 60, diferenca % 60);

    return 0;
}

int horas_em_min(int horas, int minutos)
{
    int i = 0;
    horas *= 60;
    return horas + minutos;
}
