#pragma once
#include "person.h"

class nauczyciel : public person
{
private:
	string przypisany_przedmiot;
	double lata_pracy_w_zawodzie;
public:
	nauczyciel();
	nauczyciel(string, double, string, string, string, miesiac, int);
	~nauczyciel();
	void wyswietl();
};

