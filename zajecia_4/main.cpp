#include <iostream>
#include <string>
#include "ksiazka.h"
using namespace std;

void uzupelnij (ksiazka*, int);
void wyswietl(ksiazka*, int);

int main()
{
	
	ksiazka pierwsza("Wladca Pierscieni");
	//ksiazka druga = ksiazka();
	//ksiazka trzecia = pierwsza;

	pierwsza.wyswietl();
	//druga.wyswietl();
	//trzecia.wyswietl();

	pierwsza.~ksiazka();
	//druga.~ksiazka();
	//trzecia.~ksiazka();


	int n;
	cout << "Podaj rozmiar tablicy : " << endl;
	cin >> n;
	cin.get();

	ksiazka* tablica = new ksiazka[n];
	uzupelnij(tablica, n);
	wyswietl(tablica, n);

	delete [] tablica;

	system("pause");
}

void uzupelnij (ksiazka* tab, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Podaj tytul: ";
		string a, b, c;
		int d;
		getline(cin, a);
		tab[i].set_tytul(a);
		cout << "Autor: ";
		getline(cin, b);
		tab[i].set_autor(b);
		cout << "Rodzaj ksiazki: ";
		getline(cin, c);
		tab[i].set_rodzaj_ksiazki(c);
		cout << "Rok: ";
		cin >> d;
		cin.ignore();
		tab[i].set_rok(d);
	}
}

void wyswietl(ksiazka* tab, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Tytul: " << tab[i].get_tytul() << endl;
		cout << "Autor: " << tab[i].get_autor() << endl;
		cout << "Rodzaj ksiazki: " << tab[i].get_rodzaj_ksiazki() << endl;
		cout << "Rok: " << tab[i].get_rok() << endl;
	}
}