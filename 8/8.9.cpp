// 8.9.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

string zdania()
{
    const int n = 10;
    int i = 0;
    string przymiotniki[n], podmioty[n], czasowniki[n], dopelnienia[n], zdanie;
    fstream przym, pod, czas, dope;
    przym.open("przymiotniki.txt", ios::in);
    pod.open("podmioty.txt", ios::in);
    czas.open("czasowniki.txt", ios::in);
    dope.open("dopelnienia.txt", ios::in);
    if (przym.good() && pod.good() && czas.good() && dope.good())
    {
        while (!przym.eof())
        {
            getline(przym, przymiotniki[i]);
            i++;
        }
        i = 0;
        while (!pod.eof())
        {
            getline(pod, podmioty[i]);
            i++;
        }
        i = 0;
        while (!czas.eof())
        {
            getline(czas, czasowniki[i]);
            i++;
        }
        i = 0;
        while (!dope.eof())
        {
            getline(dope, dopelnienia[i]);
            i++;
        }
    }
    else
    {
        cout << "Blad" << endl;
    }
    przym.close();
    pod.close();
    czas.close();
    dope.close();
    zdanie = przymiotniki[rand() % 9 + 0] + " " + podmioty[rand() % 9 + 0] + " " + czasowniki[rand() % 9 + 0] + " " + dopelnienia[rand() % 9 + 0];
    return zdanie;
}

int main()
{
    srand(time(NULL));
    int ile = 0;
    string wybor;
    do
    {
        cout << zdania() << endl;
        ile++;
        cout << "Czy dalej losowac? T/N" << endl;
        cin >> wybor;
    } while (wybor == "T");
    cout << "Wylosowano " << ile << " zdan";
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
