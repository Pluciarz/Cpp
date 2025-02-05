// Liczby Armstronga v2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
using namespace std;

int ile_cyfr(int kopia)
{
    int ilosc = 0;
    while (kopia > 0)
    {
        ilosc++;
        kopia /= 10;
    }
    return ilosc;
}

bool czy_armstrong(int n)
{
    int suma = 0;
    int kopia = n;
    while (n > 0)
    {
        suma += pow(n % 10, ile_cyfr(kopia));
        n /= 10;
    }
    if (kopia == suma)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cout << "Trzy-, cztero- i pieciocyfrowe liczby Armstronga: ";
    for (n = 100; n <= 99999; n++)
    {
        if (czy_armstrong(n) == true)
        {
            cout << n << " ";
        }
    }
    cout << endl << "Podaj liczbe: ";
    cin >> n;
    if (czy_armstrong(n) == true)
    {
        cout << "Liczba " << n << " jest liczba armstronga";
    }
    else
    {
        cout << "Liczba " << n << " nie jest liczba armstronga";
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
