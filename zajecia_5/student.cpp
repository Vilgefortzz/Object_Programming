#include <iostream>
#include <string>
#include <ctime>
#include "student.h"

int student::id;

student::student(string a, string b, int c, string d, const int ilosc) : imie(a), nazwisko(b), rok(c), semestr(d), max_ilosc_przedmiotow(ilosc)
{
	p = new int[max_ilosc_przedmiotow];
	id++;
	ID = id;
}

student::~student()
{
	delete [] p;
}

void student::przypisz_przedmioty()
{
	for (int i = 0; i < max_ilosc_przedmiotow; i++)
		p[i] = rand() % 6 + 1;
}
