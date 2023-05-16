#include <cstdio>
#include <vector>
#include <algorithm>

bool myfunction(int i, int j)
{
    return (i > j);
}

int main()
{
    double n;
    std::vector<double> myvector;

    for (size_t i = 0; i < 3; i++)
    {
        scanf("%lf", &n);
        myvector.push_back(n);
    }

    std::sort(myvector.begin(), myvector.end(), myfunction);

    bool ok = true;
    if (myvector.at(0) >= (myvector.at(1) + myvector.at(2)))
    {
        ok = false;
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (myvector.at(0) * myvector.at(0) == myvector.at(1) * myvector.at(1) + myvector.at(2) * myvector.at(2))
        printf("TRIANGULO RETANGULO\n");
    else if (myvector.at(0) * myvector.at(0) > (myvector.at(1) * myvector.at(1) + myvector.at(2) * myvector.at(2)))
        printf("TRIANGULO OBTUSANGULO\n");
    else if (myvector.at(0) * myvector.at(0) < (myvector.at(1) * myvector.at(1) + myvector.at(2) * myvector.at(2)))
        printf("TRIANGULO ACUTANGULO\n");

    if (ok)
    {
        if (myvector.at(0) == myvector.at(1) && myvector.at(0) == myvector.at(2) && myvector.at(1) == myvector.at(2))
            printf("TRIANGULO EQUILATERO\n");
        else if ((myvector.at(0) == myvector.at(1)) || (myvector.at(0) == myvector.at(2)) || (myvector.at(1) == myvector.at(2)))
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}