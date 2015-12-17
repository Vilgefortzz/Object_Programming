#pragma once
#include "person.h"

template <int wartosc, typename typ>
class student : public person
{
private:
	typ liczba_ECTS;
	int indeks;
public:
	student() : person()
	{
		liczba_ECTS = 0;
		indeks = wartosc;
	}

	student(typ a, string b, string c, string d, miesiac e) : person(b, c, d, e) 
	{
		liczba_ECTS = a;
		indeks = wartosc;
	}

	void wyswietl()
	{
		cout << string(50, '*') << endl;
		cout << "Imie: " << imie << endl << "Nazwisko: " << nazwisko << endl << "Pesel: " << pesel << endl << "Liczba ECTS: " << liczba_ECTS << endl << "Indeks: " << indeks << endl;
	}
	~student() {};
};