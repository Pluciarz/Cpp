#include <iostream>
#include <iomanip>
using namespace std;

float pole_kola(float r)
{
    return 3.14 * r * r;
}

float obwod_kola(float r)
{
    return 6.28 * r;
}

int main()
{
    float r;
    cout << "Podaj promien kola: ";
    cin >> r;
    cout << "Pole kola wynosi: " << fixed << setprecision(3) << pole_kola(r) << endl;
    cout << "Obwod kola wynosi: " << obwod_kola(r) << endl;
}