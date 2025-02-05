// 7.15.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    const int w = 10, k = 10;
    int tab1[w][k], tab2[w][k], tab3[w][k], tab4[w][k];
    srand(time(NULL));
    cout << "Suma tablic: " << endl;
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            tab1[i][j] = rand() % 1000 + 1;
            tab2[i][j] = rand() % 1000 + 1;
            tab3[i][j] = tab1[i][j] + tab2[i][j];
            tab4[i][j] = tab1[i][j] * tab2[i][j];
            cout << tab3[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Mnozenie tablic: " << endl;
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << tab4[i][j] << " ";
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
