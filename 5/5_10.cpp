#include <iostream>
using namespace std;

int kwadrat(int kw)
{
    for(int i = 1; i <= kw; i++)
    {
        for(int j = 1; j <= kw; j++)
        {
            cout << "*";
            if(j == kw)
            {
                cout <<endl;
            }
        }
    }
}

int prostokat(int k, int w)
{
    for(int i = 1; i <= k; i++)
    {
        for(int j = 1; j <= w; j++)
        {
            cout << "*";
            if(j == w)
            {
                cout <<endl;
            }
        }
    }
}

int trojkat_prostokatny(int wysokosc)
{
    for (int i = 1; i <= wysokosc; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            cout << "*";
            if(j == i)
            {
                cout <<endl;
            }
        }
    }
}

int trojkat_rownoboczny(int wysokosc)
{
    for (int i = 0; i < wysokosc; i++) 
    {
        for (int j = 0; j < wysokosc - i - 1; j++) 
        {
            cout << " ";
        }
    for (int j = 0; j < 2 * i + 1; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Wybierz figure, ktora chcesz narysowac:" << endl;
    cout << "1. Kwadrat" << endl;
    cout << "2. Prostokat" << endl;
    cout << "3. Trojkat prostokatny" << endl;
    cout << "4. Trojkat rownoboczny" << endl;
    cin >> n;
    system("CLS");
    switch (n)
    {
        case 1: 
        {
            int kw;
            cout << "Podaj bok kwadratu: ";
            cin >> kw;
            system("CLS");
            if(kw > 0)
            {
                kwadrat(kw);
            }
            else
            {
                cout << "Nie mozna stworzyc kwadratu";
            }
            break;
        }
        case 2: 
        {
            int k, w;
            cout << "Podaj 1 bok prostokata: ";
            cin >> k;
            cout << "Podaj 2 bok protokata: ";
            cin >> w;
            system("CLS");
            if(k && w > 0)
            {
                prostokat(k,w);
            }
            else
            {
                cout << "Nie mozna stworzyc prostokata";
            }
            break;
        }
        case 3: 
        {
            int wysokosc;
            cout << "Podaj wysokosc trojkata: ";
            cin >> wysokosc;
            system("CLS");
            if(wysokosc > 0)
            {
                trojkat_prostokatny(wysokosc);
            }
            else
            {
                cout << "Nie mozna stworzyc trojkata prostokatnego";
            }
            break;
        }
        case 4: 
        {
            int wysokosc;
            cout << "Podaj wysokosc trojkata: ";
            cin >> wysokosc;
            system("CLS");
            if(wysokosc > 0)
            {
                trojkat_rownoboczny(wysokosc);
            }
            else
            {
                cout << "Nie mozna stworzyc trojkata rownobocznego";
            }
            break;
        }
        default: cout << "Niepoprawna liczba";
        break;
    }
}
