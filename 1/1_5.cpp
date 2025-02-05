#include <iostream>
using namespace std;

int main()
{
    const float Kupno_GBP = 4.74;
    const float Sprzedaz_GBP = 4.84;
    const float Kupno_EUR = 4.27;
    const float Sprzedaz_EUR = 4.35;
    const float Kupno_USD = 3.69;
    const float Sprzedaz_USD = 3.77;
    float Kupno = 100;
    float Sprzedaz = 657;
    cout << "Waluta\tKupno\tSprzedaz" << endl;
    cout << "GBP\t" << Kupno_GBP << "\t" << Sprzedaz_GBP << endl;
    cout << "EUR\t" << Kupno_EUR << "\t" << Sprzedaz_EUR << endl;
    cout << "USD\t" << Kupno_USD << "\t" << Sprzedaz_USD << endl;
    cout << "Za " << Kupno << " zl mozesz kupic " << Kupno * Kupno_GBP << " funtow." << endl;
    cout << "Sprzedajac " << Sprzedaz << " euro otrzymasz " << Sprzedaz * Sprzedaz_EUR << " zl.";
}