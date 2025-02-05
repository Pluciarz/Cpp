// 7.16.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int n, suma = 0, min = 1000, max = 1;
    cout << "Podaj wymiar tablicy: ";
    cin >> n;
    int** tab = new int* [n];
    for (int i = 0; i < n; i++)
    {
        tab[i] = new int[n];
    }
    srand(time(NULL));
    cout << "Tablica:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tab[i][j] = rand() % 1000 + 1;
            cout << tab[i][j] << " ";
            suma += tab[i][j];
            if (min > tab[i][j])
            {
                min = tab[i][j];
            }
            if (max < tab[i][j])
            {
                max = tab[i][j];
            }
        }
        cout << endl;
    }
    cout << "Suma: " << suma << endl;
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    for (int i = 0; i < n; i++)
    {
        delete[] tab[i];
    }
    delete[] tab;
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
