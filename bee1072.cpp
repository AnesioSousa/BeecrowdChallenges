#include <cstdio>

int main() {
    int t, n, ta = 0, n_ta = 0;

    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        if (10 <= n && n <= 20)
            ta++;
        else
            n_ta++;
    }

    printf("%d in\n%d out\n", ta, n_ta);

    return 0;
}