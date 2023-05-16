#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int codigo, quantidade;
    float total = 0;
    vector<float> cardapio;

    cardapio.push_back(0);
    cardapio.push_back(4.00);
    cardapio.push_back(4.50);
    cardapio.push_back(5.00);
    cardapio.push_back(2.00);
    cardapio.push_back(1.50);

    while (scanf("%d %d", &codigo, &quantidade) == 2)
    {
        printf("Total: R$ %.2f\n", quantidade * cardapio.at(codigo));
    }

    return 0;
}
