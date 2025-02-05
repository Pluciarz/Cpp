// 7.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


int main()
{
    int const n = 100;
    int tab[n];
    int min = 1000, max = 0, i;
    float srednia = 0, sredniaHarmoniczna = 0;
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        tab[i] = rand() % 1000 + 1;
        cout << tab[i] << " ";
        if (tab[i] < min)
        {
            min = tab[i];
        }
        if (tab[i] > max)
        {
            max = tab[i];
        }
        srednia += tab[i];
        sredniaHarmoniczna += (1.0 / tab[i]);
    }
    cout << endl << "Wartosc minimalna: " << min << endl;
    cout << "Wartosc maksymalna: " << max << endl;
    cout << "Srednia arytmetyczna: " << srednia / n << endl;
    cout << "Srednia harmoniczna: " << n / sredniaHarmoniczna;
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
