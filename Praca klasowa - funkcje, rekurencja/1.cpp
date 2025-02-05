// 1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

bool czy_pierwsza(int i)
{
    for (int j = 2; j <= i / 2; j++)
    {
        if (i % j == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int parzyste = 0, nieparzyste = 0;
    cout << "Kwadraty liczb pierwszych: " << endl;
    for (int i = 2; i <= 1000; i++)
    {
        if (czy_pierwsza(i) == true)
        {
            cout << i * i << " ";
            if ((i * i) % 2 == 0)
            {
                parzyste++;
            }
            else
            {
                nieparzyste++;
            }
        }
    }
    cout << endl << "Liczb parzystych jest " << parzyste << ", a liczb nieparzystych jest " << nieparzyste;
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
