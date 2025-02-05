// 7.17.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    const int w = 10, k = 10;
    int tab[w][k], n, a, b, c, d, pom;
    cout << "Wypelnij tablice: " << endl;
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> n;
            tab[i][j] = n;
        }
    }
    cout << endl << "Wpisz indeksy miejsc, ktore chcesz zamienic: " << endl;
    cin >> a;
    cin >> b;
    cout << "z:" << endl;
    cin >> c;
    cin >> d;
    pom = tab[a][b];
    tab[a][b] = tab[c][d];
    tab[c][d] = pom;
    cout << "Tablica po zamianie: " << endl;
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << tab[i][j] << " ";
        }
        cout << endl;
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
