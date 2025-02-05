#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int main()
{
    for (int i = 20; i >= 1; i--)
    {
        cout << i;
        Sleep(1000);
        system("cls");
        if (i == 1)
        {
            cout << "START";
        }
    }
}