// 8.4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream> 
#include <fstream> 
#include <string>  
using namespace std;  

int main()
{
	char znak;
	fstream plik, kopia;
	plik.open("testowy.txt", ios::in);
	kopia.open("kopia.txt", ios::out);
	if (plik.good() && kopia.good())
	{
		while (!plik.eof())
		{
			znak = plik.get();
			if (znak >= 97 && znak <= 122)
			{
				kopia << (char)(znak - 32);
				cout << (char)(znak - 32);
			}
			else
			{
				kopia << znak;
				cout << znak;
			}
		}
	}
	else
	{
		cout << "Blad" << endl;
	}
	plik.close();
	kopia.close();
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
