// 7.3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int silnia(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * silnia(n - 1);
}

int podwojna_silnia(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return n * podwojna_silnia(n - 2);
}

int potrojna_silnia(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    if (n == 3)
    {
        return 2;
    }
    return n * potrojna_silnia(n - 3);
}

int k_silnia(int n, int k)
{
    if (n == 0)
    {
        return 1;
    }
    if (n > 0 && n <= k)
    {
        return n;
    }
    return n * k_silnia(n - k, k);
}

int main()
{
    int n, k;
    cout << "Podaj liczbe: ";
    cin >> n;
    cout << "Podaj stopien silnii: ";
    cin >> k;
    cout << "Silnia " << n << " wynosi " << silnia(n) << endl;
    cout << "Podwojna silnia " << n << " wynosi " << podwojna_silnia(n) << endl;
    cout << "Potrojna silnia " << n << " wynosi " << potrojna_silnia(n) << endl;
    cout << "Silnia " << n << " o stopniu " << k << " wynosi " << k_silnia(n, k);
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
