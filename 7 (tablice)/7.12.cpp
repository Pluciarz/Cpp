// 7.11.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int n = 100;
    int kopia;
    vector <int>tab;
    int tablica[n];
    cout << "Liczby oktalne w przedziale[1;100]: " << endl;
    for (int i = 0; i < n; i++)
    {
        tablica[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        kopia = tablica[i];
        while (tablica[i] > 0)
        {
            tab.push_back(tablica[i] % 8);
            tablica[i] /= 8;
        }
        cout << kopia << " -> ";
        for (int j = tab.size() - 1; j >= 0; j--)
        {
            cout << tab[j];
        }
        cout << endl;
        tab.clear();
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
