#include "goalkeeper.h"



goalkeeper::goalkeeper() : footballer()
{
	dalekie_wykopy = false;
}

goalkeeper::goalkeeper(string a, string b, lepsza_noga c, int d, bool e) : footballer(a, b, c, d)
{
	dalekie_wykopy = e;
}


goalkeeper::~goalkeeper()
{
}

void goalkeeper::wypisz()
{
	cout << string(70, '*') << endl << "Imie: " << name << endl << "Narodowosc: " << nationality << endl << "Umiejetnosci: " << skill << endl << "Lepsza noga: ";
	if (better == prawa)
		cout << "prawa" << endl;
	else if (better == lewa)
		cout << "lewa" << endl;
	else
		cout << "zadna" << endl;
	cout << "Dalekie wykopy: ";
	if (dalekie_wykopy == true)
		cout << "TAK" << endl;
	else
		cout << "NIE" << endl;
	cout << string(70, '*') << endl;
}
