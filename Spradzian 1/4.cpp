﻿// 4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int potegowanie(int i, int n)
{
    int wynik = 1;
    while (n != 0)
    {
        wynik *= i;
        n--;
    }
    return wynik;
}

int suma_cyfr(int i, int n)
{
    int suma = 0;
    while (i != 0)
    {
        suma += potegowanie(i % 10, n);
        i /= 10;
    }
    return suma;
}

bool czy_armstronga(int i, int n)
{
    if (i == suma_cyfr(i, n))
    {
        return true;
    }
    return false;
}

int main()
{
    int i, n;
    cout << "Podaj liczbe: ";
    cin >> n;
    for (i = potegowanie(10, n - 1); i < potegowanie(10, n); i++)
    {
        if (czy_armstronga(i, n) == true)
        {
            cout << i << " ";
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
