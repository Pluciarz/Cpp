// 8.1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    char znak, znak1;
    string linia;
    fstream plik;
    float suma = 0, suma1 = 0;
    cout << "Jaka litere chcesz znalezc: ";
    cin >> znak;
    plik.open("Testowy.txt", ios::in);
    if (plik.good())
    {
        while (!plik.eof())
        {
            getline(plik, linia);
            cout << linia << endl;
            suma += count(linia.begin(), linia.end(), znak);
        }
        plik.close();
        plik.open("Testowy.txt", ios::in);
        while (!plik.eof())
        {
            plik.get(znak1);
            if (isalpha(znak1))
            {
                suma1++;
            }
        }
    }
    else
    {
        cout << "Blad" << endl;
    }
    cout << "Ilosc wystapien szukanej litery: " << suma << endl;
    cout << "% wystapien szukanej litery: " << (suma / suma1) * 100 << "%";
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
