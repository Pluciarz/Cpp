// 9.8.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    struct Dane_osobowe
    {
        string imie;
        string nazwisko;
        string plec;
    };
    struct Miasto
    {
        string nazwa;
        int liczbaLudnosci;
        int powierzchnia;
        int dataZalozenia;
        Dane_osobowe prezydent;
    };
    const int n = 5;
    Miasto city[n];
    int i = 0, najstarsze = 0, pomNajstarsze = 10000, najwieksze = 0, pomNajwieksze = 0, gestosc = 0;
    float pomGestosc = 0;
    vector <int> kobieta;
    while (i < 5)
    {
        cout << "Podaj nazwe: ";
        getline(cin, city[i].nazwa);
        cout << "Podaj liczbe ludnosci: ";
        cin >> city[i].liczbaLudnosci;
        cout << "Podaj powierzchnie w km^2: ";
        cin >> city[i].powierzchnia;
        cout << "Podaj rok zalozenia: ";
        cin >> city[i].dataZalozenia;
        cout << "Podaj imie prezydenta: ";
        cin >> city[i].prezydent.imie;
        cout << "Podaj nazwisko prezydenta: ";
        cin >> city[i].prezydent.nazwisko;
        cout << "Podaj plec prezydenta (mezczyzna, kobieta): ";
        cin >> city[i].prezydent.plec;
        cin.ignore();
        system("cls");
        if (pomGestosc < city[i].liczbaLudnosci / city[i].powierzchnia)
        {
            pomGestosc = city[i].liczbaLudnosci / city[i].powierzchnia;
            gestosc = i;
        }
        if (pomNajstarsze > city[i].dataZalozenia)
        {
            pomNajstarsze = city[i].dataZalozenia;
            najstarsze = i;
        }
        if (city[i].prezydent.plec == "kobieta")
        {
            kobieta.push_back(i);
        }
        if (pomNajwieksze < city[i].powierzchnia)
        {
            pomNajwieksze = city[i].powierzchnia;
            najwieksze = i;
        }
        i++;
    }
    cout << "Miasto o najwiekszej gestosci zaludnienia:" << endl;
    cout << city[gestosc].nazwa << " " << city[gestosc].liczbaLudnosci << " mieszkancow " << city[gestosc].powierzchnia << " km^2 Rok zalozenia miasta: " << city[gestosc].dataZalozenia << " Prezydent: " << city[gestosc].prezydent.imie << " " << city[gestosc].prezydent.nazwisko << " " << city[gestosc].prezydent.plec << endl;
    cout << "Najstarsze miasto:" << endl;
    cout << city[najstarsze].nazwa << " " << city[najstarsze].liczbaLudnosci << " mieszkancow " << city[najstarsze].powierzchnia << " km^2 Rok zalozenia miasta: " << city[najstarsze].dataZalozenia << " Prezydent: " << city[najstarsze].prezydent.imie << " " << city[najstarsze].prezydent.nazwisko << " " << city[najstarsze].prezydent.plec << endl;
    cout << "Miasta, w ktorych prezydentem jest kobieta:" << endl;
    for (i = 0; i < kobieta.size(); i++)
    {
        cout << city[kobieta[i]].nazwa << " " << city[kobieta[i]].liczbaLudnosci << " mieszkancow " << city[kobieta[i]].powierzchnia << " km^2 Rok zalozenia miasta: " << city[kobieta[i]].dataZalozenia << " Prezydent: " << city[kobieta[i]].prezydent.imie << " " << city[kobieta[i]].prezydent.nazwisko << " " << city[kobieta[i]].prezydent.plec << endl;
    }
    cout << "Najwieksze miasto:" << endl;
    cout << city[najwieksze].nazwa << " " << city[najwieksze].liczbaLudnosci << " mieszkancow " << city[najwieksze].powierzchnia << " km^2 Rok zalozenia miasta: " << city[najwieksze].dataZalozenia << " Prezydent: " << city[najwieksze].prezydent.imie << " " << city[najwieksze].prezydent.nazwisko << " " << city[najwieksze].prezydent.plec << endl;
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
