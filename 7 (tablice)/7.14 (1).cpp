// 7.14.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    const int w = 10, k = 10;
    int tab[w][k], sumaK = 0, sumaPgl = 0, sumaPdl = 0, sumaP = 0, sumaNp = 0;
    srand(time(NULL));
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            tab[i][j] = rand() % 1000 + 1;
            cout << tab[i][j] << " ";
            if (i == 0 || i == w - 1 || j == 0 || j == k - 1)
            {
                sumaK += tab[i][j];
            }
            if (i == j)
            {
                sumaPgl += tab[i][j];
            }
            if (i + j == 9)
            {
                sumaPdl += tab[i][j];
            }
            if (i % 2 == 0 && j % 2 == 0)
            {
                sumaP += tab[i][j];
            }
            else
            {
                sumaNp += tab[i][j];
            }
        }
        cout << endl;
    }
    cout << "Suma krawedzi: " << sumaK << endl;
    cout << "Suma elementow przekatnej z gornego lewego rogu do dolnego prawego rogu: " << sumaPgl << endl;
    cout << "Suma elementow przekatnej z dolnego lewego rogu do gornego prawego rogu: " << sumaPdl << endl;
    cout << "Suma elementow o parzystych indeksach: " << sumaP << endl;
    cout << "Suma elementow o nieparzystych indeksach: " << sumaNp << endl;
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
