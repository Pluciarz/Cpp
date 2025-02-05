#include <iostream>
#include <cmath>
using namespace std;

int ile_cyfr(int i)
{
    int ile = 0;
    while (i > 0)
    {
        i /= 10;
        ile++;
    }
    return ile;
}

int czy_arm(int n)
{
    int i = n;
    int wynik = 0;
    while (n > 0)
    {
        wynik += pow((n % 10), ile_cyfr(i));
        n /= 10;
    }
    return wynik;
}

int main()
{
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    if (n == czy_arm(n))
    {
        cout << "Liczba " << n << " jest liczba armstronga" << endl;
    }
    else
    {
        cout << "Liczba " << n << " nie jest liczba armstronga" << endl;
    }
    cout << "Trzy-, Cztero- i Pieciocyfrowe liczby armstronga: ";
    for (n = 100; n <= 99999; n++)
    {
        if (n == czy_arm(n))
        {
            cout << n << " ";
        }
    }
}