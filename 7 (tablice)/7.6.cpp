// 7.6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    const int n = 9, k = 10;
    int NIP[k];
    int wag[n] = { 6, 5, 7, 2, 3, 4, 5, 6, 7 };
    cout << "Podaj numer NIP: " << endl;
    for (int i = 0; i < k; i++)
    {
        cout << i + 1 << " cyfra NIP: " << endl;
        cin >> NIP[i];
    }
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += int(NIP[i]) * wag[i];
    }
    if (suma % 11 == int(NIP[9]) || (suma % 11 == 10 && int(NIP[9]) == 0))
    {
        cout << "Numer NIP jest poprawny";
    }
    else
    {
        cout << "Numer NIP jest niepoprawny";
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
