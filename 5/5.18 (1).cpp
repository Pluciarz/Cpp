// 5.18.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int silnia(int n)
{
    int wynik = 1;
    while (n > 0)
    {
        wynik *= n;
        n--;
    }
    return wynik;
}

int podwojna_silnia(int n)
{
    int wynik = 1;
    if (n % 2 == 0)
    {
        while (n > 1)
        {
            wynik *= n;
            n -= 2;
        }
    }
    else
    {
        while (n > 0)
        {
            wynik *= n;
            n -= 2;
        }
    }
    return wynik;
}

int k_silnia(int n, int k)
{
    int wynik = 1;
    if (k == 1)
    {
        wynik = silnia(n);
        return wynik;
    }
    if (n % 2 == 0)
    {
        while (n >= k)
        {
            wynik *= n;
            n -= k;
        }
    }
    else
    {
        while (n >= k - 1)
        {
            wynik *= n;
            n -= k;
        }
    }
    return wynik;
}


int main()
{
    int n, k;
    cout << "Podaj liczbe: ";
    cin >> n;
    cout << "Podaj krok: ";
    cin >> k;
    cout << "Silnia liczby " << n << " wynosi " << silnia(n) << endl;
    cout << "Podwojna silnia liczby " << n << " wynosi " << podwojna_silnia(n) << endl;
    cout << "Silnia o kroku " << k << " liczby " << n << " wynosi " << k_silnia(n, k);
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
