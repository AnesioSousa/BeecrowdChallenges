#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> mapa;
    int ddd;

    mapa[61] = "Brasilia";
    mapa[71] = "Salvador";
    mapa[11] = "Sao Paulo";
    mapa[21] = "Rio de Janeiro";
    mapa[32] = "Juiz de Fora";
    mapa[19] = "Campinas";
    mapa[27] = "Vitoria";
    mapa[31] = "Belo Horizonte";

    scanf("%d", &ddd);
    map<int, string>::iterator it = mapa.find(ddd);
    if (it == mapa.end())
        printf("DDD nao cadastrado\n");
    else
        cout << (*it).second << endl;

    return 0;
}