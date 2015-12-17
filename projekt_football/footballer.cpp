#include "footballer.h"


int footballer::liczba_pil;

footballer::footballer()
{
	name = "Nikt";
	nationality = "Poland";
	better = zadna;
	skill = 1;
	liczba_pil++;
}

footballer::footballer(string a, string b, lepsza_noga c, int d)
{
	name = a;
	nationality = b;
	better = c;
	skill = d;
	liczba_pil++;
}

footballer::~footballer()
{
	liczba_pil--;
}

void footballer::wypisz()
{
	cout << string(70, '*') << endl << "Imie: " << name << endl << "Narodowosc: " << nationality << endl << "Umiejetnosci: " << skill << endl << "Lepsza noga: ";
	if (better == prawa)
		cout << "prawa" << endl;
	else if (better == lewa)
		cout << "lewa" << endl;
	else
		cout << "zadna" << endl;
}

string footballer::get_name()
{
	return name;
}

string footballer::get_nationality()
{
	return nationality;
}

int footballer::get_skill()
{
	return skill;
}

lepsza_noga footballer::get_better()
{
	return better;
}
