// 2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
    const int n = 10;
    int tab[n], max = 0, suma = 0, srednia, pom;
    srand(time(NULL));
    cout << "Tablica: ";
    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 1000 + 1;
        if (tab[i] > max)
        {
            max = tab[i];
        }
        suma += tab[i];
        cout << tab[i] << " ";
    }
    srednia = suma / 10;
    cout << endl << "Max: " << max << endl;
    cout << "Srednia: " << srednia << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (tab[i] < tab[j])
            {
                pom = tab[i];
                tab[i] = tab[j];
                tab[j] = pom;
            }
        }
    }
    cout << "Posortowana tablica: ";
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl << "Miejsce pamieci przedostatniego elementu w tablicy: " << &tab[8];
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
