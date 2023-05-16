#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2, nota3, nota4, media, nota_exame;

    while (scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4) == 4)
    {
        media = (2 * nota1 + 3 * nota2 + 4 * nota3 + 1 * nota4) / 10;
        printf("Media: %.1f\n", media);

        if (media >= 7)
        {
            printf("Aluno aprovado.\n");
        }
        else if (media < 5)
        {
            printf("Aluno reprovado.\n");
        }
        else if (media >= 5 || media <= 6.9)
        {
            scanf("%f", &nota_exame);
            printf("Aluno em exame.\n");
            printf("Nota do exame: %.1f\n", nota_exame);
            media = (media + nota_exame) / 2;
            if (media >= 5)
            {
                printf("Aluno aprovado.\n");
            }
            else if (media < 5)
            {
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1f\n", media);
        }
    }

    return 0;
}
