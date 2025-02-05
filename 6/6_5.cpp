﻿// 6.5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

bool czy_pierwsza(int x)
{
    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int suma_cyfr(int i)
{
    int suma = 0;
    while (i > 0)
    {
        suma += i % 10;
        i /= 10;
    }
    return suma;
}

int suma_czynnikow(int x)
{
    int suma = 0;
    int i = 2;
    while (x > 1)
    {
        if (x % i == 0)
        {
            suma += suma_cyfr(i);
            x /= i;
            i = 2;
        }
        else
        {
            i++;
        }
    }
    return suma;
}

bool czy_smitha(int x)
{
    int i = x;
    if (suma_cyfr(i) == suma_czynnikow(x))
        {
            return true;
        }
    return false;
    }

int main()
{
    srand(time(NULL));
    int x = rand() % 999 + 1;
    cout << "Wylosowana liczba to " << x << endl;
    if (czy_smitha(x) == true && czy_pierwsza(x) == false)
    {
        cout << "To jest liczba Smitha";
    }
    else
    {
        cout << "To nie jest liczba Smitha";
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
