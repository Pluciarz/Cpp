// 7.19.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    const int w = 20, k = 30;
    int tab[w][k], kopia, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, s8 = 0, s9 = 0;
    srand(time(NULL));
    cout << "Tablica:" << endl;
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            tab[i][j] = rand() % 1000 + 1;
            cout << tab[i][j] << " ";
            kopia = tab[i][j];
            while (kopia > 0)
            {
                if (kopia % 10 == 0)
                {
                    s0++;
                }
                if (kopia % 10 == 1)
                {
                    s1++;
                }
                if (kopia % 10 == 2)
                {
                    s2++;
                }
                if (kopia % 10 == 3)
                {
                    s3++;
                }
                if (kopia % 10 == 4)
                {
                    s4++;
                }
                if (kopia % 10 == 5)
                {
                    s5++;
                }
                if (kopia % 10 == 6)
                {
                    s6++;
                }
                if (kopia % 10 == 7)
                {
                    s7++;
                }
                if (kopia % 10 == 8)
                {
                    s8++;
                }
                if (kopia % 10 == 9)
                {
                    s9++;
                }
                kopia /= 10;
            }
        }
        cout << endl;
    }
    cout << "Ilosc wystapien 0: " << s0 << endl;
    cout << "Ilosc wystapien 1: " << s1 << endl;
    cout << "Ilosc wystapien 2: " << s2 << endl;
    cout << "Ilosc wystapien 3: " << s3 << endl;
    cout << "Ilosc wystapien 4: " << s4 << endl;
    cout << "Ilosc wystapien 5: " << s5 << endl;
    cout << "Ilosc wystapien 6: " << s6 << endl;
    cout << "Ilosc wystapien 7: " << s7 << endl;
    cout << "Ilosc wystapien 8: " << s8 << endl;
    cout << "Ilosc wystapien 9: " << s9 << endl;
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
