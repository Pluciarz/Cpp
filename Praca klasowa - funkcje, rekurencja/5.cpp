// 5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int isilnia(int n)
{
    int wynik = 1;
    while (n >= 1)
    {
        wynik *= n;
        n -= 2;
    }
    return wynik;
}

int rsilnia(int n)
{
    if (n % 2 == 0)
    {
        if (n <= 2)
        {
            return n;
        }
        return n * rsilnia(n - 2);
    }
    else
    {
        if (n <= 1)
        {
            return n;
        }
        return n * rsilnia(n - 2);
    }
}

int main()
{
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    cout << "Silnia iteracyjnie: ";
    cout << isilnia(n) << endl;
    cout << "Silnia rekurencyjnie: ";
    cout << rsilnia(n);
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
