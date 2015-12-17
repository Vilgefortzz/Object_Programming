#include "striker.h"



striker::striker() : footballer()
{
	strzal_finezyjny = false;
}

striker::striker(string a, string b, lepsza_noga c, int d, bool e) : footballer(a, b, c, d)
{
	strzal_finezyjny = e;
}


striker::~striker()
{
}

void striker::wypisz()
{
	cout << string(70, '*') << endl << "Imie: " << name << endl << "Narodowosc: " << nationality << endl << "Umiejetnosci: " << skill << endl << "Lepsza noga: ";
	if (better == prawa)
		cout << "prawa" << endl;
	else if (better == lewa)
		cout << "lewa" << endl;
	else
		cout << "zadna";

	cout << "Strzal finezyjny: ";
	if (strzal_finezyjny == true)
		cout << "TAK" << endl;
	else
		cout << "NIE" << endl;
	cout << string(70, '*') << endl;
}
