// 1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> tab;
    int n;
    cout << "Podaj liczbe dziesietna: ";
    cin >> n;
    while (n > 0)
    {
        tab.push_back(n % 16);
        n /= 16;
    }
    cout << "Liczba szesnastkowa: ";
    for (int i = tab.size() - 1; i >= 0; i--)
    {
        switch (tab[i])
        {
        case 10: cout << "A";
            break;
        case 11: cout << "B";
            break;
        case 12: cout << "C";
            break;
        case 13: cout << "D";
            break;
        case 14: cout << "E";
            break;
        case 15: cout << "F";
            break;
        default: cout << tab[i];
            break;
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
