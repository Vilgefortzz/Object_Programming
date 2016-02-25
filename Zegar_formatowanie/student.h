#pragma once
#include "person.h"

template <int wartosc, typename typ>
class student : public person
{
private:
	typ Srednia_ocen;
	int indeks;
public:
	student() : person()
	{
		Srednia_ocen = 0;
		indeks = wartosc;
	}

	student(typ a, string b, string c, string d, miesiac e, int f) : person(b, c, d, e, f) 
	{
		Srednia_ocen = a;
		indeks = wartosc;
	}

	void wyswietl()
	{
		cout << string(50, '*') << endl;
		cout << "Imie: " << imie << endl << "Nazwisko: " << nazwisko << endl << "Pesel: " << pesel << endl << "Wiek: " << wiek << endl << "Srednia ocen: " << Srednia_ocen << endl << "Indeks: " << indeks << endl;
	}
	~student() {};
};