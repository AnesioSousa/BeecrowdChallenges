#include <cstdio>

int main()
{
    for (size_t i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
            printf("%d\n", i);
    }

    return 0;
}