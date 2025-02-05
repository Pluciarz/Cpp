// 4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
	int a, wybor;
	cout << "Podaj liczbe w metrach: ";
	cin >> a;
	if (a > 0)
	{
		cout << "Wybierz dzialanie:" << endl;
		cout << "1. Przelicz na milimetry" << endl;
		cout << "2. Przelicz na centymetry" << endl;
		cout << "3. Przelicz na decymetry" << endl;
		cin >> wybor;
		switch (wybor)
		{
		case 1:
			cout << a << " m to " << a * 1000 << " mm";
			break;
		case 2:
			cout << a << " m to " << a * 100 << " cm";
			break;
		case 3:
			cout << a << " m to " << a * 10 << " dm";
			break;
		default:
			cout << "Niepoprawny wybor";
			break;
		}
	}
	else
	{
		cout << "Niepoprawna liczba";
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
