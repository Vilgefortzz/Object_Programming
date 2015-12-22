#include "FILES.h"

string FILES::zapisz(Zeegar& A)
{
	ofstream plik;

	string nazwa_pliku;
	cout << "Podaj nazwe pliku do utworzenia: ";
	cin >> nazwa_pliku;

	plik.open(nazwa_pliku.c_str());
	plik << A.godz << "," << A.min << "," << A.sec;
	plik.close();

	return nazwa_pliku;

}

Zeegar FILES::odczytaj(string nazwa_file)
{
	ifstream plik;
	
	plik.open(nazwa_file.c_str());
	string wiersz;
	string tekst;

	while(!plik.eof())
	{
		getline(plik, wiersz);
		tekst+=wiersz;
	}

	int liczba_przecinkow = 0;

	for (int i = 0; i < tekst.length(); i++)
	{
		if (tekst[i] == ',')
		{
			liczba_przecinkow++;
		}
	}

	string* tablica_wartosci = new string[liczba_przecinkow+1]; // 2 - iloœæ przecinków ale tablica ma wartoœæ po przecinku równie¿
	string tmp;
	int j = 0; // indeks tablicy_wartoœci

	for (int i = 0; i < tekst[i]; i++)
	{
		if (tekst[i] == ',')
		{
			tablica_wartosci[j++] = tmp;
			tmp = "";
		}
		else
		{
			tmp += tekst[i];
		}
	}

	tablica_wartosci[j] = tmp;

	Zeegar nowy(atoi(tablica_wartosci[0].c_str()), atoi(tablica_wartosci[1].c_str()), atoi(tablica_wartosci[2].c_str()));
	delete[] tablica_wartosci;

	return nowy;

}
