// modulus example
#include <iostream>   // std::cout
#include <functional> // std::modulus, std::bind2nd
#include <algorithm>  // std::transform
#include <vector>
#include <cstring>

typedef struct
{
    char gene[101];
    int indice_desordenacao;
} Data;

using namespace std;

bool compare(const Data &num1, const Data &num2)
{
    return num1.indice_desordenacao < num2.indice_desordenacao;
}

int main()
{
    vector<Data> meusDados;
    Data d1;
    int dataset, counter = 0, lenght_of_DNA, number_of_strings, number_of_datasets;

    scanf("%d", &number_of_datasets);
    for (dataset = 0; dataset < number_of_datasets; dataset++)
    {
        if (dataset)
            cout << "\n";

        scanf("%d %d", &lenght_of_DNA, &number_of_strings);
        for (int i = 0; i < number_of_strings; i++)
        {
            scanf("%s", d1.gene);
            for (int k = 0; k < lenght_of_DNA; k++)
            {
                for (int u = k + 1; u < lenght_of_DNA; u++)
                {
                    if (d1.gene[u] < d1.gene[k])
                        counter++;
                }
            }
            d1.indice_desordenacao = counter;
            counter = 0;
            meusDados.push_back(d1);
        }

        stable_sort(meusDados.begin(), meusDados.end(), compare);

        for (vector<Data>::iterator i = meusDados.begin(); i != meusDados.end(); i++)
        {
            cout << i->gene << endl;
        }

        meusDados.clear();
    }

    return 0;
}