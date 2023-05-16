#include <cstdio>

int main() {
    int n, counter = 0;

    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0)
            printf("%d^2 = %d\n", i, i * i);
    }

    return 0;
}