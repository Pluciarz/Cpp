// 2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Podaj liczbe: ";
    cin >> a;
    cout << "Podaj liczbe: ";
    cin >> b;
    cout << "Podaj liczbe: ";
    cin >> c;
    if (c >= b && b >= a)
    {
        cout << "Liczby podano niemalejaco" << endl;
    }
    else
    {
        cout << "Liczby podano malejaco" << endl;
    }
    if (a % 2 != 0 || b % 2 != 0 || c % 2 != 0)
    {
        cout << "Co najmniej jedna liczba jest nieparzysta";
    }
    else
    {
        cout << "Nie ma liczb nieparzystych";
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
