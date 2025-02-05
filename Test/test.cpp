#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int suma_cyfr(int i)
{
    int suma_cyfr=0;
    while(i > 0)
    {
        suma_cyfr += i % 10;
        i /= 10;
    }
    return suma_cyfr;
}

int suma_czynnikow(int x)
{
    int suma_czynnikow = 0, i = 2;
    while (x > 1)
    {
        if (x % i == 0)
        {
            suma_czynnikow += suma_cyfr(i);
            x /= i;
            i = 2;
        }
        else
        {
            i++;
        }
    }
    return suma_czynnikow;
}

bool czy_pierwsza(int x)
{
    for(int i = 2; i <= x / 2; i++)
    {
        if(x % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool czy_Smitha(int x)
{
    int i = x;
    if (suma_cyfr(i) == suma_czynnikow(x) && czy_pierwsza(x) == false)
    {
        return true;
    }
    return false;
}

int main()
{
    srand(time(NULL));
    int x = rand()% 999 + 0;
    if (czy_Smitha(x) == true)
    {
        cout << "Wylosowana liczba " << x << " jest liczba Smitha";
    }
    else
    {
        cout << "Wylosowana liczba " << x << " nie jest liczba Smitha";
    }
}