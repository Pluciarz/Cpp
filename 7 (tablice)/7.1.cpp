// 7.1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int const n = 10;
    int tab1[n], tab2[n], tab3[n], tab4[n];
    int a = 3;
    int b = 2;
    int c = 10;
    for (int i = 0; i < n; i++)
    {
        tab1[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        tab2[i] = a;
        a += 3;
    }
    for (int i = 0; i < n; i++)
    {
        tab3[i] = b;
        b *= 2;
    }
    for (int i = 0; i < n; i++)
    {
        tab4[i] = c;
        c -= 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << tab1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << tab2[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << tab3[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << tab4[i] << " ";
    }
    cout << endl;
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
