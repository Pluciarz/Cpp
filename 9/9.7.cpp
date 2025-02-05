// 9.6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct Batonik
    {
        string nazwa_batona;
        float waga;
        int liczba_kalorii;
        float cena;
    };
    Batonik *snack = new Batonik [3];
    int i = 0, min = 0, max = 0, pomMax = 0, pomMin;
    float suma = 0, srednia;
    while (i < 3)
    {
        cout << "Podaj nazwe batona: ";
        getline(cin, snack[i].nazwa_batona);
        cout << "Podaj wage: ";
        cin >> snack[i].waga;
        cout << "Podaj liczbe kalorii: ";
        cin >> snack[i].liczba_kalorii;
        cout << "Podaj cene: ";
        cin >> snack[i].cena;
        cin.ignore();
        system("cls");
        if (i == 0)
        {
            pomMin = snack[i].cena;
        }
        if (pomMax < snack[i].liczba_kalorii)
        {
            max = i;
            pomMax = snack[i].liczba_kalorii;
        }
        if (pomMin > snack[i].cena)
        {
            min = i;
            pomMin = snack[i].cena;
        }
        suma += snack[i].waga;
        i++;
    }
    for (i = 0; i < 3; i++)
    {
        cout << snack[i].nazwa_batona << " " << snack[i].waga << " " << snack[i].liczba_kalorii << " " << snack[i].cena << endl;
    }
    srednia = suma / 3;
    cout << "Najbardziej kaloryczny batonik: " << snack[max].nazwa_batona << endl;
    cout << "Najtanszy batonik: " << snack[min].nazwa_batona << endl;
    cout << "Srednia waga wszystkich batonikow: " << srednia;
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
