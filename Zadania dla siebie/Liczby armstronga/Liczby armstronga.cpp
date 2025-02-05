// Liczby armstronga.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int ile_cyfr(int i)
{
    int ile = 0;
    while (i > 0)
    {
        i /= 10;
        ile++;
    }
    return ile;
}

int czy_arm(int n)
{
    int i = n;
    int wynik = 0;
    while (n > 0)
    {
        wynik += pow((n % 10), ile_cyfr(i));
        n /= 10;
    }
    return wynik;
}

int main()
{
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    if (n == czy_arm(n))
    {
        cout << "Liczba " << n << " jest liczba armstronga" << endl;
    }
    else
    {
        cout << "Liczba " << n << " nie jest liczba armstronga" << endl;
    }
    cout << "Trzy-, Cztero- i Pieciocyfrowe liczby armstronga: ";
    for (n = 100; n < 100000; n++)
    {
        if (n == czy_arm(n))
        {
            cout << n << " ";
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
