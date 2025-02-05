#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int liczba_uzytkownika, liczba_strzelana = rand() % 10 + 0;
    cout << "Strzel w liczbe w przedziale 0-10: ";
    cin >> liczba_uzytkownika;
    if (liczba_uzytkownika >= 0 && liczba_uzytkownika <= 10)
    {
        if (liczba_uzytkownika == liczba_strzelana)
        {
            cout << "Gratulacje! Poprawnie strzeliles";
        }
        else if (liczba_uzytkownika < liczba_strzelana)
        {
            cout << "Niestety nie strzeliles poprawnie, twoja liczba byla mniejsza od liczby wylosowanej przez komputer";
        }
        else
        {
            cout << "Niestety nie strzeliles poprawnie, twoja liczba byla wieksza od liczby wylosowanej przez komputer";
        }
    }
    else
    {
        cout << "Niepoprawna liczba";
    }
}
