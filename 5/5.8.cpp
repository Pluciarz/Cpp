// 5.8.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int l, suma_cyfr = 0, ilosc_cyfr = 0, kopia;
    cout << "Podaj liczbe: " << endl;
    cin >> l;
    kopia = l;
    while (l > 0)
    {
        suma_cyfr += l % 10;
        ilosc_cyfr++;
        l /= 10;
    }
    cout << "Suma cyfr wynosi: " << suma_cyfr << endl;
    cout << "Ilosc cyfr wynosi: " << ilosc_cyfr << endl;
    if (kopia % suma_cyfr == 0)
    {
        cout << "To jest liczba Nivena";
    }
    else
    {
        cout << "To nie jest liczba nivena";
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
