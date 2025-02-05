// 4.1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int nr;
    cout << "Podaj nr miesiaca: ";
    cin >> nr;
	int rok;
	cout << "Podaj rok: ";
	cin >> rok;
	cout << "Podany miesiac ma ";
	if ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0)
	{
		switch (nr)
		{
		case 1: cout << "31 dni";
			break;
		case 2: cout << "29 dni";
			break;
		case 3: cout << "31 dni";
			break;
		case 4: cout << "30 dni";
			break;
		case 5: cout << "31 dni";
			break;
		case 6: cout << "30 dni";
			break;
		case 7: cout << "31 dni";
			break;
		case 8: cout << "31 dni";
			break;
		case 9: cout << "30 dni";
			break;
		case 10: cout << "31 dni";
			break;
		case 11: cout << "30 dni";
			break;
		case 12: cout << "31 dni";
			break;
		}
	}
	else
	{
		switch (nr)
		{
		case 1: cout << "31 dni";
			break;
		case 2: cout << "28 dni";
			break;
		case 3: cout << "31 dni";
			break;
		case 4: cout << "30 dni";
			break;
		case 5: cout << "31 dni";
			break;
		case 6: cout << "30 dni";
			break;
		case 7: cout << "31 dni";
			break;
		case 8: cout << "31 dni";
			break;
		case 9: cout << "30 dni";
			break;
		case 10: cout << "31 dni";
			break;
		case 11: cout << "30 dni";
			break;
		case 12: cout << "31 dni";
			break;
		}
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
