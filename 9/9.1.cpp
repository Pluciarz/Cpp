// 9.1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct dane_personalne
    {
        string imie;
        string nazwisko;
        int wiek;
    };
    const int n = 3;
    dane_personalne dane[n];
    int i = 0;
    while (i < 3)
    {
        cout << "Podaj imie: ";
        cin >> dane[i].imie;
        cout << "Podaj nazwisko: ";
        cin >> dane[i].nazwisko;
        cout << "Podaj wiek: ";
        cin >> dane[i].wiek;
        i++;
        system("cls");
    }
    i = 0;
    int max = 0, pom = 0;
    while (i < 3)
    {
        if (pom < dane[i].wiek)
        {
            max = i;
            pom = dane[i].wiek;
        }
        i++;
    }
    cout << "Dane osoby najstarszej:\t" << dane[max].imie << "\t" << dane[max].nazwisko << "\t" << dane[max].wiek;
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
