#include <cstdio>

int main() {
    int x, count = 0;

    scanf("%d", &x);
    for (int i = x; count != 6; i++) {
        if (!(i % 2 == 0)) {
            printf("%d\n", i);
            count++;
        }
    }

    return 0;
}