// 7.22.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    const int n = 10;
    int tab[n];
    srand(time(NULL));
    cout << "Tablica:" << endl;
    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 100 + 1;
        cout << tab[i] << " ";
    }
    int pom = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                pom = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = pom;
            }
        }
    }
    cout << endl << "Tablica posortowana rosnaco:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (tab[j] < tab[j + 1])
            {
                pom = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = pom;
            }
        }
    }
    cout << endl << "Tablica posortowana malejaco:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
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
