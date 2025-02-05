﻿// 6.4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

bool czy_doskonala(int x)
{
    int suma = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            suma += i;
        }
    }
    if (x == suma)
    {
        return true;
    }
    return false;
}

int main()
{
    srand(time(NULL));
    int x = rand() % 99 + 1;
    cout << "Wylosowano liczba to " << x << endl;
    if (czy_doskonala(x) == true)
    {
        cout << "Jest to liczba doskonala";
    }
    else
    {
        cout << "Nie jest to liczba doskonala";
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
