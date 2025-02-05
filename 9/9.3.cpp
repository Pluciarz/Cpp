// 9.3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    struct wspolrzedne
    {
        int x;
        int y;
    };
    wspolrzedne wsp[2];
    int i = 0;
    while (i < 2)
    {
        cout << "Podaj wspolrzedna x: ";
        cin >> wsp[i].x;
        cout << "Podaj wspolrzedna y: ";
        cin >> wsp[i].y;
        i++;
    }
    cout << "Odleglosc 1 punktu od poczatku ukladu wspolrzednych: " << sqrt(pow(wsp[0].x, 2) + pow(wsp[0].y, 2)) << endl;
    cout << "Odleglosc 2 punktu od poczatku ukladu wspolrzednych: " << sqrt(pow(wsp[1].x, 2) + pow(wsp[1].y, 2)) << endl;
    cout << "Odleglosc punktow od siebie: " << sqrt(pow(abs(wsp[0].x - wsp[1].x), 2) + pow(abs(wsp[0].y - wsp[1].y), 2));
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
