// Liczby Smitha v2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int suma_cyfr(int n)
{
    int suma = 0;
    while (n > 0)
    {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

int suma_czynnikow(int n)
{
    int suma = 0;
    int i = 2;
    while (n > 0)
    {
        if (n % i == 0)
        {
            suma += suma_cyfr(i);
            n /= i;
            i = 2;
        }
        else
        {
            i++;
        }
    }
    return suma;
}

bool czy_pierwsza(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool czy_smitha(int n)
{
    if (suma_cyfr(n) == suma_czynnikow(n) && czy_pierwsza(n) == false)
    {
        return true;
    }
    return false;
}

int main()
{
    srand(time(NULL));
    int n = rand() % 999 + 1;
    if (czy_smitha(n) == true)
    {
        cout << "Wylosowana liczba " << n << " jest liczba Smitha";
    }
    else
    {
        cout << "Wylosowana liczba " << n << " nie jest liczba Smitha";
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
