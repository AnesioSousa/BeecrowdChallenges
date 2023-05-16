#include <cstdio>
#include <cstdlib>

int main() {
    int i, j, v[2], sum = 0;

    scanf("%d %d", &i, &j);
    if (i > j) {
        v[0] = j;
        v[1] = i;
    } else if (i < j) {
        v[0] = i;
        v[1] = j;
    } else {
        printf("0\n");
        exit(EXIT_SUCCESS);
    }

    for (int i = v[0] + 1; i < v[1]; i++)
        if (!(i % 2 == 0))
            sum += i;

    printf("%d\n", sum);

    return 0;
}