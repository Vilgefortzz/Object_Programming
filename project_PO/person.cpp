#include "person.h"



person::person()
{
	imie = "Nieznane";
	nazwisko = "Nieznane";
	pesel = "Nieznany";
	miesiac_urodzenia = styczen;
	wiek = 0;
}

person::person(string a, string b, string c, miesiac month, int d)
{
	imie = a;
	nazwisko = b;
	pesel = c;
	miesiac_urodzenia = month;
	wiek = d;
}

person::~person()
{
}

void person::wyswietl()
{
	cout << string(50, '*') << endl;
	cout << "Imie: " << imie << endl << "Nazwisko: " << nazwisko << endl << "Pesel: " << pesel << endl << "Wiek: " << wiek << endl;
}
