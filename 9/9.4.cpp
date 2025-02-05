// 9.4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    struct wspolrzedne
    {
        int x;
        int y;
    };
    struct wektor
    {
        wspolrzedne poczatek;
        wspolrzedne koniec;
    };
    wektor wek[2];
    int i = 0, dlugosc1, dlugosc2;
    while (i < 2)
    {
        cout << "Podaj 1 wspolrzedna x wektora: ";
        cin >> wek[i].poczatek.x;
        cout << "Podaj 1 wspolrzedna y wektora: ";
        cin >> wek[i].poczatek.y;
        cout << "Podaj 2 wspolrzedna x wektora: ";
        cin >> wek[i].koniec.x;
        cout << "Podaj 2 wspolrzedna y wektora: ";
        cin >> wek[i].koniec.y;
        i++;
    }
    dlugosc1 = sqrt(pow(abs(wek[0].poczatek.x - wek[0].koniec.x), 2) + pow(abs(wek[0].poczatek.y - wek[0].koniec.y), 2));
    dlugosc2 = sqrt(pow(abs(wek[1].poczatek.x - wek[1].koniec.x), 2) + pow(abs(wek[1].poczatek.y - wek[1].koniec.y), 2));
    if (dlugosc1 > dlugosc2)
    {
        cout << "Wektor 1 = [" << wek[0].koniec.x - wek[0].poczatek.x << ", " << wek[0].koniec.y - wek[0].poczatek.y << "] jest dluzszy";
    }
    else if (dlugosc2 > dlugosc1)
    {
        cout << "Wektor 2 = [" << wek[1].koniec.x - wek[1].poczatek.x << ", " << wek[1].koniec.y - wek[1].poczatek.y << "] jest dluzszy";
    }
    else
    {
        cout << "Oba wektory maja takie same dlugosci";
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
