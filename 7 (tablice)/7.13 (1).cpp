// 7.11.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    char a;
    vector <string>tab;
    string pom;
    cout << "Podaj liczbe dziesietna: ";
    cin >> n;
    while (n > 0)
    {
        if (n % 16 < 10)
        {
            pom = to_string(n % 16);
            tab.push_back(pom);
        }
        switch (n % 16)
        {
        case 10: tab.push_back("A");
            break;
        case 11: tab.push_back("B");
            break;
        case 12: tab.push_back("C");
            break;
        case 13: tab.push_back("D");
            break;
        case 14: tab.push_back("E");
            break;
        case 15: tab.push_back("F");
            break;
        }
        n /= 16;
    }
    cout << "Liczba szesnastkowa: ";
    for (int i = tab.size() - 1; i >= 0; i--)
    {
        cout << tab[i];
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
