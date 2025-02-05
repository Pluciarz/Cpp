// Pola i obwody.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

float PKwadratu(float a)
{
    return a * a;
}
float OKwadratu(float a)
{
    return 4 * a;
}

float PProstokatu(float a, float b)
{
    return a * b;
}
float OProstokata(float a, float b)
{
    return (2 * a) + (2 * b);
}

float PRownolegloboku(float a, float h)
{
    return a * h;
}
float ORownolegloboku(float a, float b)
{
    return (2 * a) + (2 * b);
}

float PRombu(float a, float h)
{
    return a * h;
}
float ORombu(float a)
{
    return 4 * a;
}

float PTrapezu(float a, float b, float h)
{
    return ((a + b) * h) / 2;
}
float OTrapezu(float a, float b, float c, float d)
{
    return a + b + c + d;
}

float PTrojkata(float a, float h)
{
    return (a * h)/2;
}
float OTrojkata(float a, float b, float c)
{
    return a + b + c;
}

int main()
{
    int nr;
    float a, b, c, d, h;
    cout << "Wybierz figure ktorej chcesz otrzymac obwod i pole" << endl;
    cout << "1. Kwadrat" << endl;
    cout << "2. Prostokat" << endl;
    cout << "3. Rownoleglobok" << endl;
    cout << "4. Romb" << endl;
    cout << "5. Trapez" << endl;
    cout << "6. Trojkat" << endl;
    cin >> nr;
    system("CLS");
    if (nr < 1 && nr>6)
    {
        cout << "Nie ma takiego wyboru";
    }
    switch (nr)
    {
        case 1:
        {
            cout << "Podaj bok: ";
            cin >> a;
            system("CLS");
            if (a > 0)
            {
                cout << "Obwod: " << OKwadratu(a)<< endl;
                cout << "Pole: " << PKwadratu(a);
            }
            else
            {
                cout << "Podany bok nie stworzy kwadratu";
            }
            break;
        }
        case 2:
        {
            cout << "Podaj pierwszy bok: " << endl;
            cin >> a;
            cout << "Podaj drugi bok: ";
            cin >> b;
            system("CLS");
            if (a > 0 && b > 0)
            {
                cout << "Obwod: " << OProstokata(a, b)<< endl;
                cout << "Pole: " << PProstokatu(a, b);
            }
            else
            {
                cout << "Podane boki nie stworza prostokata";
            }
            break;
        }
        case 3:
        {
            cout << "Podaj pierwszy bok: " << endl;
            cin >> a;
            cout << "Podaj drugi bok: " << endl;
            cin >> b;
            cout << "Podaj wysokosc: ";
            cin >> h;
            system("CLS");
            if (a > 0 && b > 0 && h > 0)
            {
                cout << "Obwod: " << ORownolegloboku(a, b)<< endl;
                cout << "Pole: " << PRownolegloboku(a, h);
            }
            else
            {
                cout << "Podane boki i wysokosc nie stworza rownolegloboku";
            }
            break;
        }
        case 4:
        {
            cout << "Podaj bok: " << endl;
            cin >> a;
            cout << "Podaj wysokosc: ";
            cin >> h;
            system("CLS");
            if (a > 0 && h > 0)
            {
                cout << "Obwod: " << ORombu(a)<< endl;
                cout << "Pole: " << PRombu(a, h);
            }
            else
            {
                cout << "Podany bok i wysokosc nie stworzy rombu";
            }
            break;
        }
        case 5:
        {
            cout << "Podaj pierwszy bok: " << endl;
            cin >> a;
            cout << "Podaj drugi bok: " << endl;
            cin >> b;
            cout << "Podaj trzeci bok: " << endl;
            cin >> c;
            cout << "Podaj czwarty bok: " << endl;
            cin >> d;
            cout << "Podaj wysokosc: " << endl;
            cin >> h;
            system("CLS");
            if (a > 0 && b > 0 && c > 0 && d > 0 && h > 0)
            {
                cout << "Obwod: " << OTrapezu(a, b, c, d) << endl;
                cout << "Pole: " << PTrapezu(a, b, h);
            }
            else
            {
                cout << "Podane boki i wysokosc nie stworzy trapezu";
            }
            break;
        }
        case 6:
        {
            cout << "Podaj pierwszy bok: " << endl;
            cin >> a;
            cout << "Podaj drugi bok: " << endl;
            cin >> b;
            cout << "Podaj trzeci bok: " << endl;
            cin >> c;
            cout << "Podaj wysokosc: " << endl;
            cin >> h;
            system("CLS");
            if ((a > 0 && b > 0 && c > 0 && h > 0) && (a + b > c || a + c > b || b + c > a))
            {
                cout << "Obwod: " << OTrojkata(a, b, c) << endl;
                cout << "Pole: " << PTrojkata(a, h);
            }
            else
            {
                cout << "Podane boki i wysokosc nie stworza trojkata";
            }
        }
        default: cout << "Nie ma takiego wyboru";
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
