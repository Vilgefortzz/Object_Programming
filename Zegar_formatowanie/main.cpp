#include <iostream>
#include "Zeegar.h"
#include "DISPLAY.h"
#include <string>
#include "FILES.h"
using namespace std;

ostream& operator<< (ostream& ekran, Zeegar& czas);
istream& operator>> (istream& klaw, Zeegar& czas);

int main()
{

	Zeegar zegar1(0,5,0);
	cout << zegar1 << endl;
	Zeegar zegar2(1, 25, 37);
	cout << zegar2 << endl;
	Zeegar zegar3;
	zegar3 = zegar1+=5;
	cout << zegar3 << endl;
	zegar3++;
	cout << zegar3 << endl;
	!zegar3;
	cout << zegar3 << endl;
	if (zegar1 == zegar2)
		cout << "Rowne sa" << endl;
	else
		cout << "Nie sa rowne" << endl;

	cout << "Czas w sekundach: " << zegar2() << endl << endl;

	Zeegar zegar4(11, 59, 59);
	zegar4++;
	cout << zegar4 << endl;

	// -----------------------------------------

	DISPLAY::wypisz(zegar1);

	string nazwa = FILES::zapisz(zegar2);
	FILES::odczytaj(zegar1, nazwa);

	system ("pause");
}

ostream& operator<< (ostream& ekran, Zeegar& czas)
{
	ekran << czas.godz << ":" << czas.min << ":" << czas.sec << endl;
	return ekran;
}

istream& operator>> (istream& klaw, Zeegar& czas)
{
	klaw >> czas.godz >> czas.min >> czas.sec;
	return klaw;
}