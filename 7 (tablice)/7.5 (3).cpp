// 7.5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

bool parzyste(int x)
{
    while (x > 0)
    {
        if ((x % 10) % 2 != 0)
        {
            return false;
        }
        x /= 10;
    }
    return true;
}

int main()
{
    int const n = 10;
    int tab[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 100 + 1;
        if (parzyste(tab[i]) == true)
        {
            cout << tab[i] << " ";
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
