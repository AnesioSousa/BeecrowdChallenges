#include <cstdio>

int main()
{
    int a, b, c, aux;

    scanf("%d\n%d\n%d", &a, &b, &c);

    if (a <= b && b <= c)
    {
        printf("%d\n%d\n%d\n\n", a, b, c);
    }
    else if (a <= c && c <= b)
    {
        printf("%d\n%d\n%d\n\n", a, c, b);
    }
    else if (b <= a && a <= c)
    {
        printf("%d\n%d\n%d\n\n", b, a, c);
    }
    else if (b <= c && c <= a)
    {
        printf("%d\n%d\n%d\n\n", b, c, a);
    }
    else if (c <= a && a <= b)
    {
        printf("%d\n%d\n%d\n\n", c, a, b);
    }
    else /* c <= b && b <= a */
    {
        printf("%d\n%d\n%d\n\n", c, b, a);
    }
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}