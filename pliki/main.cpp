#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	cout << "Podaj nazwe pliku do utworzenia" << endl;
	string nazwa_pliku;
	cin >> nazwa_pliku;

	ofstream plik;
	plik.open(nazwa_pliku.c_str());

	plik << "Fajnie to jest. Tylko Partia Korwin!! :)";
	plik.close();

	ifstream plik2;
	plik2.open(nazwa_pliku.c_str());

	string napis, tekst;
	while (!plik2.eof())
	{
		getline(plik2, napis);
		tekst += napis;
	}
	cout << tekst << endl;

	plik2.close();

	system("pause");
}