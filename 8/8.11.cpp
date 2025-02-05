// 8.11.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool czyAnagram(const string& slowo1, const string& slowo2)
{
    string posortowaneSlowo1 = slowo1;
    string posortowaneSlowo2 = slowo2;
    sort(posortowaneSlowo1.begin(), posortowaneSlowo1.end());
    sort(posortowaneSlowo2.begin(), posortowaneSlowo2.end());
    return posortowaneSlowo1 == posortowaneSlowo2;
}

int main()
{
    const int n = 5;
    bool sameLength, allAnagrams;
    string slowo[n];
    fstream anagram, anagramyA, anagramyB;
    anagram.open("anagram.txt", ios::in);
    anagramyA.open("anagramyA.txt", ios::out);
    anagramyB.open("anagramyB.txt", ios::out);
    if (anagram.good() && anagramyA.good() && anagramyB.good())
    {
        while (anagram >> slowo[0])
        {
            sameLength = true;
            allAnagrams = true;
            for (int i = 1; i < n; i++)
            {
                anagram >> slowo[i];
                if (slowo[i].length() != slowo[0].length())
                {
                    sameLength = false;
                    break;
                }
            }
            if (sameLength == true)
            {
                for (int i = 1; i < n; i++)
                {
                    if (!czyAnagram(slowo[0], slowo[i]))
                    {
                        allAnagrams = false;
                        break;
                    }
                }
            }
            else
            {
                allAnagrams = false;
            }
            if (sameLength == true && allAnagrams == true)
            {
                for (int i = 0; i < n; i++)
                {
                    anagramyA << slowo[i] << " ";
                    anagramyB << slowo[i] << " ";
                }
                anagramyA << endl;
                anagramyB << endl;
            }
            else if (sameLength == true)
            {
                for (int i = 0; i < n; i++)
                {
                    anagramyA << slowo[i] << " ";
                }
                anagramyA << endl;
            }
        }
    }
    else
    {
        cout << "Blad" << endl;
    }
    anagram.close();
    anagramyA.close();
    anagramyB.close();
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
