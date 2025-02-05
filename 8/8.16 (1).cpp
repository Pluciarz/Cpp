// 8.16.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int silnia(int n)
{
    int wynik = 1;
    while (n > 0)
    {
        wynik *= n;
        n--;
    }
    return wynik;
}

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
    cout << "Liczby:" << endl;
    fstream plik;
    int liczba, potega = 0, p = 3, w = 1, suma = 0, kopia, sumas = 0, count = 0, dzielnik;
    vector<int> tab;
    vector<int> liczby;
    vector<int> finalneLiczby;
    vector<int> all;

    plik.open("liczby.txt", ios::in);
    if (plik.good())
    {
        while (plik >> liczba)
        {
            all.push_back(liczba);
            count++;

            while (potega <= liczba)
            {
                potega = pow(p, w);
                if (liczba == potega)
                {
                    suma++;
                    break;
                }
                w++;
            }
            w = 0;
            potega = 0;
            kopia = liczba;
            while (kopia > 0)
            {
                sumas += silnia(kopia % 10);
                kopia /= 10;
            }
            if (liczba == sumas)
            {
                tab.push_back(liczba);
            }
            sumas = 0;
        }
        cout << "4.1: " << suma << endl;
        cout << "4.2: ";
        for (int i = 0; i < tab.size(); i++)
        {
            cout << tab[i] << " ";
        }
        plik.close();

        if (!all.empty())
        {
            int n = all[0];
            for (int i = 0; i < all.size(); i++)
            {
                int nwd = NWD(n, all[i]);
                if (nwd != 1)
                {
                    if (liczby.empty())
                    {
                        liczby.push_back(n);
                    }
                    liczby.push_back(all[i]);
                    n = nwd;
                }
                else
                {
                    if (liczby.size() > finalneLiczby.size())
                    {
                        finalneLiczby = liczby;
                        dzielnik = n;
                    }
                    if (!liczby.empty())
                    {
                        if (NWD(liczby[liczby.size() - 1], all[i]) > 1)
                        {
                            int a = liczby[liczby.size() - 1];
                            liczby.clear();
                            liczby.push_back(a);
                            liczby.push_back(all[i]);
                        }
                        else
                        {
                            liczby.clear();
                        }
                    }
                    n = all[i];
                }
            }
            if (liczby.size() > finalneLiczby.size())
            {
                finalneLiczby = liczby;
                dzielnik = n;
            }
            cout << endl << "4.3:" << endl << "Pierwsza liczba: " << finalneLiczby[0] << endl << "Dlugosc ciagu: " << finalneLiczby.size() << endl << "Dzielnik: " << dzielnik << endl;
        }
    }
    else
    {
        cout << "Blad" << endl;
    }
    cout << "Identyfikator:" << endl;
    string linia, litery, cyfry, kopia1, kopia2;
    fstream identyfikator, wyniki4_2;
    identyfikator.open("identyfikator.txt", ios::in);
    wyniki4_2.open("wyniki4_2.txt", ios::out);
    cout << "4.2: " << endl;
    if (identyfikator.good() && wyniki4_2.good())
    {
        while (!identyfikator.eof())
        {
            getline(identyfikator, linia);
            if (linia.length() == 9)
            {
                litery = linia.substr(0, 3);
                cyfry = linia.substr(3, 6);
                kopia1 = litery;
                kopia2 = cyfry;
                reverse(litery.begin(), litery.end());
                reverse(cyfry.begin(), cyfry.end());
                if (litery == kopia1 || cyfry == kopia2)
                {
                    wyniki4_2 << linia << endl;
                    cout << linia << endl;
                }
            }
        }
    }
    else
    {
        cout << "Blad" << endl;
    }
    identyfikator.close();
    wyniki4_2.close();
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
