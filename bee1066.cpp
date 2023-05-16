#include <iostream>

using namespace std;

int main() {
    int v[5], pair_counter = 0, unpair_counter = 0, negative = 0, non_negative = 0;

    for (int i = 0; i < 5; i++)
        scanf("%d", &v[i]);

    for (int i = 0; i < 5; i++)
        if (v[i] % 2 == 0) {
            pair_counter++;
            if (v[i] > 0)
                non_negative++;
            else if (v[i] < 0)
                negative++;
        } else {
            unpair_counter++;
            if (v[i] > 0)
                non_negative++;
            else if (v[i] < 0)
                negative++;
        }

    printf("%d valor(es) par(es)\n", pair_counter);
    printf("%d valor(es) impar(es)\n", unpair_counter);
    printf("%d valor(es) positivo(s)\n", non_negative);
    printf("%d valor(es) negativo(s)\n", negative);
    return 0;
}
