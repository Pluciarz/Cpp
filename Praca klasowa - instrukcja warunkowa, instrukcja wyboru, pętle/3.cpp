// 3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int n, suma=0;
    cout << "Podaj liczbe: ";
    cin >> n;
    int kopia = n;
    while (n > 0)
    {
        suma += n % 10;
        n /= 10;
    }
    if (kopia % suma == 0)
    {
        cout << "To jest liczba Nivena" << endl;
    }
    else
    {
        cout << "To nie jest liczba Nivena" << endl;
    }
    cout << "Dwucyfrowe liczby Nivena: ";
    for (int i = 10; i <= 99; i++)
    {
        suma = 0;
        n = i;
        kopia = n;
        while (n > 0)
        {
            suma += n % 10;
            n /= 10;
        }
        if (kopia % suma == 0)
        {
            cout << i << ", ";
        }
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
