#include <iostream>
#include "zespolona.h"
using namespace std;

zespolona operator*(zespolona&, zespolona&);
zespolona operator/(zespolona&, zespolona&);
void show(zespolona&);

int main()
{

	zespolona A(9, 2);
	zespolona B(6, 1);

	cout << "Modul: ";
	cout << A.modul() << endl;

	zespolona G;
	G = A + (zespolona)5;
	show(G);


	system("pause");
}

void show(zespolona& wynik)
{
	cout << "Liczba zespolona o postaci:" << endl;
	cout << "z = " << wynik.re << " + " << wynik.im << "i" << endl;

}

zespolona operator*(zespolona& A, zespolona& B)
{
	zespolona C;
	C.re = (A.re*B.re - A.im*B.im);
	C.im = (A.re* B.im + B.re*A.im);
	return C;
}

zespolona operator/(zespolona& A, zespolona& B)
{
	zespolona C;
	C.re = (A.re*B.re + A.im*B.im)/(B.re*B.re + B.im*B.im);
	C.im = (A.im*B.re + B.im*A.re)/(B.re*B.re + B.im*B.im);
	return C;
}
