// 3.4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
float Oblicz_BMI(float waga, float wzrost)
{
    return waga / (pow(wzrost, 2));
}
int main()
{
    float waga, wzrost;
    cout << "Podaj wage: ";
    cin >> waga;
    cout << "Podaj wzrost: ";
    cin >> wzrost;
    cout << "Podales ze wazysz " << waga << " kg, a wzrost twoj wynosi " << wzrost << " m" << endl;
    float BMI = Oblicz_BMI(waga, wzrost);
    if (BMI < 18.5)
    {
        cout << "Masz niedowage";
    }
    else if (BMI >= 25)
    {
        cout << "Masz nadwage";
    }
    else
    {
        cout << "Twoja waga jest prawidlowa";
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
