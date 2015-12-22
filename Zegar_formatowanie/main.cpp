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
	// ----------------------------------------------------- Tworzenie obiektów, modyfikacje itp. ---------------------------------------------------

	Zeegar zegar1(2,5,0);
	cout << zegar1 << endl;
	Zeegar zegar2(1, 25, 37);
	cout << zegar2 << endl;
	Zeegar zegar3 = zegar1+=5;
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
	cout << zegar4;

	// ----------------------------------------------------- Operacje z plikami ---------------------------------------------------------------------

	DISPLAY::wypisz(zegar1);
	cout << "\n\n";

	string nazwa = FILES::zapisz(zegar1);
	Zeegar zegar_nowy = FILES::odczytaj(nazwa);
	cout << zegar_nowy;


	// ----------------------------------------------------- Ob³uga b³êdów --------------------------------------------------------------------------

	cout << "\nWprowadz dane potrzebne do stworzenia obiektu:\n";
	try
	{ 
		Zeegar zegarek; 
		cout << "Obiekt stworzony: " << zegarek;
	}
	catch (Zeegar::Blad_wczytywanie)
	{
		cout << "Blad przy wczytywaniu zle typy danych wprowadzone!! Obiekt nie zostal stworzony\n";
	}
	catch (Zeegar::Blad_ujemne)
	{
		cout << "Blad podane dane nie moga byc ujemne, poniewaz nie ma czasu ujemnego!! Obiekt nie zostal stworzony\n";
	}

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