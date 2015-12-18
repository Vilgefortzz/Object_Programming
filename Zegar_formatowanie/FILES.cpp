#include "FILES.h"

string FILES::zapisz(Zeegar& A)
{
	ofstream plik;

	string nazwa_pliku;
	cout << "Podaj nazwe pliku:" << endl;
	cin >> nazwa_pliku;
	plik.open(nazwa_pliku.c_str());

	plik << A.godz << "," << A.min << "," << A.sec;
	plik.close();

	return nazwa_pliku;

}

void FILES::odczytaj(Zeegar& A, string nazwa_file)
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

	cout << tekst << endl;

	//istringstream zczytywanie;
	//zczytywanie

}
