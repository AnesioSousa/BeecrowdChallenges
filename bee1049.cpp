#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char vertebra[30], reino[30], alimento[30];

    scanf("%s %s %s", vertebra, reino, alimento);

    if (strcmp(vertebra, "vertebrado") == 0)
    {
        if (strcmp(reino, "ave") == 0)
        {
            if (strcmp(alimento, "carnivoro") == 0)
                printf("aguia\n");
            else if (strcmp(alimento, "onivoro") == 0)
                printf("pomba\n");
        }
        else if (strcmp(reino, "mamifero") == 0)
        {
            if (strcmp(alimento, "onivoro") == 0)
                printf("homem\n");
            else if (strcmp(alimento, "herbivoro") == 0)
                printf("vaca\n");
        }
    }
    else if (strcmp(vertebra, "invertebrado") == 0)
    {
        if (strcmp(reino, "inseto") == 0)
        {
            if (strcmp(alimento, "hematofago") == 0)
                printf("pulga\n");
            else if (strcmp(alimento, "herbivoro") == 0)
                printf("lagarta\n");
        }
        else if (strcmp(reino, "anelideo") == 0)
        {
            if (strcmp(alimento, "hematofago") == 0)
                printf("sanguessuga\n");
            else if (strcmp(alimento, "onivoro") == 0)
                printf("minhoca\n");
        }
    }

    return 0;
}