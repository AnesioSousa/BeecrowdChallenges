#include <iostream>

using namespace std;

int main()
{
    float a, b, c, perimetro, area;

    scanf("%f %f %f", &a, &b, &c);
    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        perimetro = a + b + c;
        printf("Perimetro = %.1f\n", perimetro);
    }
    else
    {
        area = ((a + b) * c) / 2;
        printf("Area = %.2f\n", area);
    }
    a = b = c = perimetro = area = 0;

    return 0;
}