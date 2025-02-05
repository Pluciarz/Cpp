#include <iostream>
using namespace std;

int main()
{
    int suma = 0;
    cout << "Liczby podzielne przez 25 w przedziale <0;100>: ";
    for (int i = 0; i <= 100; i++)
    {
        if (i % 25 == 0)
        {
            suma += i;
            cout << i;
            if (i < 100)
            {
                cout << ", ";
            }
            else
            {
                cout << " " << endl;
            }
        }
    }
    cout << "Suma tych liczb wynosi: " << suma;
}