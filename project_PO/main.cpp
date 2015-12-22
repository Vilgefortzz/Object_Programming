#include <iostream>
#include "person.h"
#include "student.h"
using namespace std;

typedef student<2857304, int> tworzenie_studenta;
typedef student<2967690, double> stwarzam;

int main()
{
	student<2967690, int>studencik(10.5, "Michal", "Fajny", "48694563574", marzec, 18);
	person* wsk1 = &studencik;

	student<2967690, int>studenciach(9, "Michal", "Fajny", "48694563574", marzec, 18);

	stwarzam student2(10.5, "Malgorzata", "Tratwa", "58395674275", lipiec, 18);
	person* wsk2 = &student2;

	tworzenie_studenta student3;
	person* wsk3 = &student3;

	int ilosc = 3;
	person** WSK = new person*[ilosc];
	WSK[0] = wsk1;
	WSK[1] = wsk2;
	WSK[2] = wsk3;

	for (int i = 0; i < ilosc; i++)
		WSK[i]->wyswietl();

	system("pause");
}