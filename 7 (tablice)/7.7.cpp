// 7.7.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    const int n = 10, k = 11;
    int PESEL[k];
    int wag[n] = { 1, 3, 7, 9, 1, 3, 7, 9, 1, 3 };
    cout << "Podaj numer PESEL:" << endl;
    for (int i = 0; i < k; i++)
    {
        cout << i + 1 << " cyfra PESEL:" << endl;
        cin >> PESEL[i];
    }
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += PESEL[i] * wag[i];
    }
    if (10 - (suma % 10) == PESEL[10] || (10 - (suma % 10) == 10 && PESEL[10] == 0))
    {
        cout << "Poprawny numer pesel";
    }
    else
    {
        cout << "Niepoprawny numer pesel";
    }
    cout << endl << "Plec: ";
    if (PESEL[9] % 2 == 0)
    {
        cout << "kobieta" << endl;
    }
    else
    {
        cout << "mezczyzna" << endl;
    }
    cout << "Data urodzenia: " << PESEL[4] << PESEL[5] << ".";
    int miesiac = 10 * PESEL[2] + PESEL[3];
    if (miesiac > 20 && miesiac < 33)
    {
        cout << miesiac - 20 << ".20" << PESEL[0] << PESEL[1];
    }
    if (miesiac > 40 && miesiac < 53)
    {
        cout << miesiac - 40 << ".21" << PESEL[0] << PESEL[1];
    }
    if (miesiac > 60 && miesiac < 73)
    {
        cout << miesiac - 60 << ".22" << PESEL[0] << PESEL[1];
    }
    if (miesiac > 80 && miesiac < 93)
    {
        cout << miesiac - 80 << ".18" << PESEL[0] << PESEL[1];
    }
    if (miesiac > 0 && miesiac < 13)
    {
        cout << miesiac << ".19" << PESEL[0] << PESEL[1];
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
