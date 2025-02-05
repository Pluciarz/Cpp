// 3.6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
using namespace std;

float a, b, c;

float delta(float a, float b, float c)
{
   float delta;
   return delta = (b * b) - (4 * a * c);
}

int main()
{
    
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;
    if (a == 0)
    {
        cout << "Nie mozna obliczyc delty";
    }
    else
    {
        if (delta(a,b,c) < 0)
        {
            cout << "Brak miejsc zerowych";
        }
        else if (delta(a,b,c) == 0)
        {
            cout << "1 miejsce zerowe" << endl;
            float p = -b / (2 * a);
            cout << "Miejsce zerowe wynosi " << p;
        }
        else
        {
            cout << "2 miejsce zerowe" << endl;
            float x1 = (-b - sqrt(delta(a,b,c))) / (2 * a);
            float x2 = (-b + sqrt(delta(a,b,c))) / (2 * a);
            cout << "Miejsca zerowe wynosza " << x1 << " i " << x2;
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
