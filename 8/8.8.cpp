// 8.8.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream plik;
    const float c_na_k = 273.15;
    const float c_na_f = 1.8;
    plik.open("stopnie.txt", ios::out | ios::app);
    if (plik.good())
    {
        plik << "Stopnie Celsjusza\t" << "Kelwiny\t" << "Stopnie Fahrenheita" << endl;
        for (int i = 1; i <= 300; i++)
        {
            plik << i << "\t" << i + c_na_k << "\t" << i * c_na_f + 32 << endl;
        }
    }
    else
    {
        cout << "Blad" << endl;
    }
    plik.close();
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
