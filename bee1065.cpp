#include <iostream>

using namespace std;

int main()
{
    int v[5], count = 0;

    for (int i = 0; i < 5; i++)
        scanf("%d", &v[i]);

    for (int i = 0; i < 5; i++)
        if (v[i] % 2 == 0)
            count++;

    printf("%d valores pares\n", count);

    return 0;
}