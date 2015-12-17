#include <iostream>
#include "clock.h"
using namespace std;

ostream& operator<< (ostream& ekran, clock& czas);
istream& operator>> (istream& klaw, clock& czas);

int main()
{
	clock zegar1(0,5,0);
	cout << zegar1 << endl;
	clock zegar2(1, 25, 37);
	cout << zegar2 << endl;
	clock zegar3;
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

	clock zegar4(11, 59, 59);
	zegar4++;
	cout << zegar4 << endl;

	// Stoper

	clock stoper;
	stoper.stoper();

	system ("pause");
}

ostream& operator<< (ostream& ekran, clock& czas)
{
	ekran << czas.godz << ":" << czas.min << ":" << czas.sec << endl;
	return ekran;
}

istream& operator>> (istream& klaw, clock& czas)
{
	klaw >> czas.godz >> czas.min >> czas.sec;
	return klaw;
}