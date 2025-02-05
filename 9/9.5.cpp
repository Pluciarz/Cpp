// 9.5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int n = 5;
    struct podroz
    {
        string miejsce_przyjazdu;
        int odleglosc;
    };
    podroz pod[n];
    int i = 0, max, pomMax = 0;
    while (i < 5)
    {
        cout << "Podaj miejsce przyjazdu: ";
        getline(cin, pod[i].miejsce_przyjazdu);
        cout << "Podaj odleglosc w km: ";
        cin >> pod[i].odleglosc;
        cin.ignore();
        system("cls");
        i++;
    }
    int pomMin = pod[0].odleglosc, min = 0;
    for (i = 0; i < n; i++)
    {
        if (pomMax < pod[i].odleglosc)
        {
            max = i;
            pomMax = pod[i].odleglosc;
        }
        if (pomMin > pod[i].odleglosc)
        {
            min = i;
            pomMin = pod[i].odleglosc;
        }
    }
    cout << "Najdluzsza podroz: Gdansk Glowny - " << pod[max].miejsce_przyjazdu << " (" << pod[max].odleglosc << " km)" << endl;
    cout << "Nakrotsza podroz: Gdansk Glowny - " << pod[min].miejsce_przyjazdu << " (" << pod[min].odleglosc << " km)";
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
