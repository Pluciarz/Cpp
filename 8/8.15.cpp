// 8.15.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    char znak;
    int k, pomoc;
    string linia, szyfrogram;
    fstream dane_6_1, dane_6_2, dane_6_3, wyniki_6_1, wyniki_6_2, wyniki_6_3;
    dane_6_1.open("dane_6_1.txt", ios::in);
    dane_6_2.open("dane_6_2.txt", ios::in);
    dane_6_3.open("dane_6_3.txt", ios::in);
    wyniki_6_1.open("wyniki_6_1.txt", ios::out);
    wyniki_6_2.open("wyniki_6_2.txt", ios::out);
    wyniki_6_3.open("wyniki_6_3.txt", ios::out);
    if (dane_6_1.good())
    {
        k = 107;
        while (dane_6_1 >> linia)
        {
            for (char znak : linia)
            {
                wyniki_6_1 << char(65 + (znak - 65 + k) % 26);
            }
            wyniki_6_1 << endl;
        }
    }
    else
    {
        cout << "Blad" << endl;
    }
    if (dane_6_2.good())
    {
        while (dane_6_2 >> linia >> k)
        {
            for (char znak : linia)
            {
                wyniki_6_2 << char(65 + (26 + (znak - 65 - k) % 26) % 26);
            }
            wyniki_6_2 << endl;
        }
    }
    else
    {
        cout << "Blad" << endl;
    }
    if (dane_6_3.good())
    {
        while (dane_6_3 >> linia >> szyfrogram)
        {
            k = szyfrogram[0] - linia[0];
            if (k < 0)
            {
                k += 26;
            }
            pomoc = 0;
            for (int i = 0; i < linia.length(); i++)
            {
                if (szyfrogram[i] - linia[i] == k || szyfrogram[i] - linia[i] + 26 == k)
                {
                    pomoc++;
                }
            }
            if (pomoc < linia.length())
            {
                wyniki_6_3 << linia << endl;
            }
        }
    }
    else
    {
        cout << "Blad" << endl;
    }
    dane_6_1.close();
    dane_6_2.close();
    dane_6_3.close();
    wyniki_6_1.close();
    wyniki_6_2.close();
    wyniki_6_3.close();
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
