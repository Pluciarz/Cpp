// 5.12.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int n, i, j, suma = 0, sumaD = 0;
    cout << "Podaj koniec przedzialu [1,n]: ";
    cin >> n;
    {
        for (i = 1; i <= n; i++)
        {
            cout << "Dzielniki liczby " << i<< ": ";
            for (j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    cout << j;
                    if (i != j)
                    {
                        cout << ", ";
                    }
                    suma += 1;
                    sumaD += j;
                }
                if (i == j)
                {
                    cout << endl;
                    sumaD -= j;
                }
            }
            cout << "Liczba dzielnikow dla " << i << " wynosi: " << suma << endl;
            if (suma == 2)
            {
                cout << "Liczba " << i << " jest pierwsza" << endl;
            }
            else
            {
                cout << "Liczba " << i << " nie jest pierwsza" << endl;
            }
            if (sumaD == i)
            {
                cout << "Liczba " << i << " jest doskonala" << endl;
            }
            else
            {
                cout << "Liczba " << i << " nie jest doskonala" << endl;
            }
            suma = 0;
            sumaD = 0;
        }
    }
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
