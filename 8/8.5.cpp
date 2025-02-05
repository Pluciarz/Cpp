// 8.5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool czy_pierwsza(int n)
{
    int i = 2;
    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}

int main()
{
    int n, suma = 0, sumap = 0, sumanp = 0, sumapierwsze = 0;
    fstream plik, plikparzyste, pliknieparzyste, plikpierwsze;
    plik.open("8.5-dane.txt", ios::in);
    if (plik.good())
    {
        while (!plik.eof())
        {
            plik >> n;
            if (n % 2 == 0)
            {
               plikparzyste.open("parzyste.txt", ios::out | ios::app);
               if (plikparzyste.good())
               {
                   plikparzyste << n << endl;
               }
               else
               {
                   cout << "Blad" << endl;
               }
               plikparzyste.close();
               sumap++;
            }
            else
            {
                pliknieparzyste.open("nieparzyste.txt", ios::out | ios::app);
                if (pliknieparzyste.good())
                {
                    pliknieparzyste << n << endl;
                }
                else
                {
                    cout << "Blad" << endl;
                }
                pliknieparzyste.close();
                sumanp++;
            }
            if (czy_pierwsza(n) == true)
            {
                plikpierwsze.open("pierwsze.txt", ios::out | ios::app);
                if (plikpierwsze.good())
                {
                    plikpierwsze << n << endl;
                }
                else
                {
                    cout << "Blad" << endl;
                }
                plikpierwsze.close();
                sumapierwsze++;
            }
        }
    }
    else
    {
        cout << "Blad" << endl;
    }
    plik.close();
    cout << "Ilosc liczb parzystych: " << sumap << endl;
    cout << "Ilosc liczb nieparzystych: " << sumanp << endl;
    cout << "Ilosc liczb pierwszych: " << sumapierwsze << endl;
    cout << "Ilosc liczb zapisanych do pliku: " << sumap + sumanp;
    plik.open("8.5-dane.txt", ios::out | ios::app);
    if (plik.good())
    {
        plik << "Ilosc liczb zapisanych w pliku: " << sumap + sumanp;
    }
    else
    {
        cout << "Blad" << endl;
    }
    plik.close();
    plikparzyste.open("parzyste.txt", ios::out | ios::app);
    if (plikparzyste.good())
    {
        plikparzyste << "Ilosc liczb zapisanych w pliku: " << sumap;
    }
    else
    {
        cout << "Blad" << endl;
    }
    plikparzyste.close();
    pliknieparzyste.open("nieparzyste.txt", ios::out | ios::app);
    if (pliknieparzyste.good())
    {
        pliknieparzyste << "Ilosc liczb zapisanych w pliku: " << sumanp;
    }
    else
    {
        cout << "Blad" << endl;
    }
    pliknieparzyste.close();
    plikpierwsze.open("pierwsze.txt", ios::out | ios::app);
    if (plikpierwsze.good())
    {
        plikpierwsze << "Ilosc liczb zapisanych w pliku: " << sumapierwsze;
    }
    else
    {
        cout << "Blad" << endl;
    }
    plikpierwsze.close();
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
