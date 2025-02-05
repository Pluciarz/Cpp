// 5.11.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

bool czy_pitagorejskie(int a, int b, int c)
{
    if (a * a + b * b == c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
        
}

int main()
{
    int a, b, c, n;
    cout << "Podaj koniec przedzialu [1,n]: ";
    cin >> n;
    for (a = 1; a <= n; a++)
    {
        for (b = 1; b <= n; b++)
        {
            for (c = 1; c <= n; c++)
            {
                if (czy_pitagorejskie(a,b,c) == true)
                {
                    cout << "Wartosci trojki pitagorejskiej: a = " << a << " b = " << b << " c = " << c << endl;
                }
            }
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
