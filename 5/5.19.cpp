// 5.19.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
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

int kombinacja_bez_powtorzen(int n, int k)
{
    return (silnia(n) / (silnia(k) * silnia(n - k)));
}

int kombinacja_z_powtorzeniami(int n, int k)
{
    return silnia(k + n - 1) / (silnia(k) * silnia(n - 1));
}

int wariacja_bez_powtorzen(int n, int k)
{
    return silnia(n) / silnia(n - k);
}

int wariacja_z_powtorzeniami(int n, int k)
{
    return pow(n, k);
}

int main()
{
    int n, k, wybor;
    cout << "Wybierz operacje:" << endl;
    cout << "1. Kombinacja bez powtorzen" << endl;
    cout << "2. Kombinacja z powtorzeniami" << endl;
    cout << "3. Wariacja bez powtorzen" << endl;
    cout << "4. Wariacja z powtorzeniami" << endl;
    cin >> wybor;
    system("CLS");
    cout << "Podaj n: ";
    cin >> n;
    cout << "Podaj k: ";
    cin >> k;
    switch (wybor)
    {
    case 1:
    {
        if (k <= silnia(n))
        {
            cout << "Wynik wynosi: " << kombinacja_bez_powtorzen(n, k);
        }
        else
        {
            cout << "UWAGA! Wartość k musi być mniejsza bądź równa wartości n!";
        }
        break;
    }
    case 2:
    {
        cout << "Wynik wynosi: " << kombinacja_z_powtorzeniami(n, k);
        break;
    }
    case 3:
    {
        if (k <= silnia(n))
        {
            cout << "Wynik wynosi: " << wariacja_bez_powtorzen(n, k);
        }
        else
        {
            cout << "UWAGA! Wartość k musi być mniejsza bądź równa wartości n!";
        }
        break;
    }
    case 4:
    {
        cout << "Wynik wynosi: " << wariacja_z_powtorzeniami(n, k);
        break;
    }
    default: cout << "Niepoprawny wybor";
        break;
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
