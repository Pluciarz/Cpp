// 8.10.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string linia, kopia;
    fstream dane, palindromy;
    int suma = 0;
    dane.open("dane.txt", ios::in);
    palindromy.open("palindromy.txt", ios::out);
    if (dane.good() && palindromy.good())
    {
        while (!dane.eof())
        {
            getline(dane, linia);
            kopia = linia;
            reverse(linia.begin(), linia.end());
            if (linia == kopia)
            {
                palindromy << kopia << endl;
                if (kopia.length() == 5)
                {
                    suma++;
                }
            }
        }
    }
    else
    {
        cout << "Blad" << endl;
    }
    dane.close();
    palindromy << "Liczba palindromow o dlugosci 5: " << suma;
    palindromy.close();
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
