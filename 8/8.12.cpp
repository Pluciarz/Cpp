// 8.12.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	const int n = 94;
	int tab[n], max = 0, maxi;
	string linia;    
	fstream plik;    
	plik.open("znak.txt",ios::in);    
	if (plik.good())    
	{        
		while (!plik.eof()) 
		{   
			getline(plik, linia);
			for (int i = 32; i < 126; i++)
			{
				tab[i - 32] = count(linia.begin(), linia.end(), char(i));
			}
		} 
	}
	else
	{
		cout << "Blad" << endl;   
	} 
	for (int i = 0; i < n; i++)
	{
		if (tab[i] > max)
		{
			max = tab[i];
			maxi = i;
		}
	}
	cout << "Najczesciej wystepujacym znakiem jest " << char(maxi + 32) << ", ktory wystapil " << tab[maxi] << " razy";
	plik.close();
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
