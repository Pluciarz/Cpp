﻿// 8.6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int NWD(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}

int main()
{
    int a, b;
    fstream plik, kopia;
    plik.open("8.6-dane.txt", ios::in);
    kopia.open("kopia.txt", ios::out | ios::app);
    if (plik.good())
    {
        while (!plik.eof())
        {
            plik >> a;
            plik >> b;
            if (kopia.good())
            {
                kopia << a << "\t" << b << "\t" << "NWD(" << a << ", " << b << ") = " << NWD(a, b) << endl;
            }
            else
            {
                cout << "Blad" << endl;
            }
        }
        kopia.close();
    }
    else
    {
        cout << "Blad" << endl;
    }
    plik.close();
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
