#include <iostream>
using namespace std;

int main()
{
    const int przelicznik = 1852;
    int odleglosc;
    cout << "Podaj odleglosc w milach morskich: ";
    cin >> odleglosc;
    cout << "Odleglosc w metrach wynosi: "<< odleglosc * przelicznik;
}
