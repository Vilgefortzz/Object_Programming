#include "nauczyciel.h"


nauczyciel::nauczyciel() : person()
{
	przypisany_przedmiot = "Nieznany";
	lata_pracy_w_zawodzie = 0;
}

nauczyciel::nauczyciel(string a, double b, string c, string d, string e, miesiac f, int g) : person(c, d, e, f, g)
{
	przypisany_przedmiot = a;
	lata_pracy_w_zawodzie = b;
}

nauczyciel::~nauczyciel()
{
}

void nauczyciel::wyswietl()
{
	cout << string(50, '*') << endl;
	cout << "Imie: " << imie << endl << "Nazwisko: " << nazwisko << endl << "Pesel: " << pesel << endl << "Wiek: " << wiek << endl << "Przedmiot: " << przypisany_przedmiot << endl << "Lata pracy w zawodzie: " << lata_pracy_w_zawodzie << endl;
}
