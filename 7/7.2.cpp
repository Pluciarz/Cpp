#include <iostream>
using namespace std;

int ciag_Fibonacciego(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return ciag_Fibonacciego(n - 1) + ciag_Fibonacciego(n - 2);
}

int ciag_Tribonacciego(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    return ciag_Tribonacciego(n - 1) + ciag_Tribonacciego(n - 2) + ciag_Tribonacciego(n - 3);
}

int ciag_Tetranacciego(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 0;
    }
    if (n == 3)
    {
        return 1;
    }
    return ciag_Tetranacciego(n - 1) + ciag_Tetranacciego(n - 2) + ciag_Tetranacciego(n - 3) + ciag_Tetranacciego(n - 4);
}

int ciag_Lucasa(int n)
{
    if (n == 0)
    {
        return 2;
    }
    if (n == 1)
    {
        return 1;
    }
    return ciag_Lucasa(n - 1) + ciag_Lucasa(n - 2);
}

int main()
{
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    int i = 0;
    cout << "Ciag Fibonacciego do n-tego wyrazu: " << endl;
    while (i <= n)
    {
        cout << "F" << i << " = " << ciag_Fibonacciego(i) << endl;
        i++;
    }
    i = 0;
    cout << "Ciag Tribonacciego do n-tego wyrazu: " << endl;
    while (i <= n)
    {
        cout << "TR" << i << " = " << ciag_Tribonacciego(i) << endl;
        i++;
    }
    i = 0;
    cout << "Ciag Tetranacciego do n-tego wyrazu: " << endl;
    while (i <= n)
    {
        cout << "TE" << i << " = " << ciag_Tetranacciego(i) << endl;
        i++;
    }
    i = 0;
    cout << "Ciag Lucasa do n-tego wyrazu: " << endl;
    while (i <= n)
    {
        cout << "L" << i << " = " << ciag_Lucasa(i) << endl;
        i++;
    }
}
