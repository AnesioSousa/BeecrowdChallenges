#include <iostream>

using namespace std;

int fact(int n);

int main()
{
    int i = 1, sum = 0, n;

    while (scanf("%d", &n) == 1 && n != 0)
    {
        while (n > 0)
        {
            int digit = n % 10;
            sum += digit * fact(i);
            n /= 10;
            i++;
        }
        printf("%d\n", sum);
        sum = n = 0;
        i = 1;
    }

    return 0;
}

int fact(int n)
{
    if (n == 1)
        return 1;
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}