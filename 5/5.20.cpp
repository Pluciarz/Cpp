#include <iostream>
using namespace std;

int ciag_Fibonacciego1(int n, int x, int y)
{
    for(int i = 2; i <= n; i++)
    {
        y += x;
        x = y - x;
    }
    return y;
}

int ciag_Fibonacciego2(int n, int x, int y)
{
    for(int i = 2; i <= n; i++)
    {
        int pom = y;
        y += x;
        x = pom;
    }
    return y;
}

int main() 
{
    int n, x = 0, y = 1, f = 2;
    cout << "Podaj liczbe: ";
    cin >> n;
    cout << "N-ty wyraz ciagu Fibonacciego: " << endl;
    cout << ciag_Fibonacciego1(n, x, y) << endl;
    cout << "Ciag Fibonacciego do n-tego wyrazu: " << endl;
    cout << "F0 = 0" << endl;
    cout << "F1 = 1" << endl;
    while(f <= n)
    {
        cout << "F" << f << " = " << ciag_Fibonacciego2(f, x, y) << endl; 
        f++;
    }
    
}