#include <iostream>
#include <string>
#include "student.h"
#include "przedmiot.h"
#include <ctime>
using namespace std;

void f_globalna(student&, przedmiot*);

int main()
{
	srand(time(NULL));

	student pierwszy("Grzegorz", "Klimek", 2, "1", 4);

	przedmiot lista_przedmiotow[6] =
	{
		{ "Informatyka", "Lukasz Sztangret" },
		{ "Matematyka", "JJ" },
		{ "MTI", "Gabriel Rojek" },
		{ "WF", "Malgorzata Klamka" },
		{ "Metale", "Pieniazek" },
		{ "J.angielski", "Bogna Rymarkiewicz" }
	};

	pierwszy.przypisz_przedmioty();
	f_globalna(pierwszy, lista_przedmiotow);

	system("pause");

}

void f_globalna(student& st, przedmiot* tablica)
{
	// Info o studencie

	cout << "Imie: " << st.imie << endl << "Nazwisko: " << st.nazwisko << endl << "ID: " << st.ID << endl << "Rok: " << st.rok << endl << "Semestr: " << st.semestr << endl;

	// Info o przedmiotach przydzielonych do niego

	cout << "Przedmioty dla danego studenta:" << endl;

		for (int i = 0; i < 6; i++)
		 for (int j = 0; j < st.max_ilosc_przedmiotow; j++)
			if (st.p[j] == tablica[i].ID)
			{
				cout << "Nazwa: " << tablica[i].nazwa << endl << "Prowadzacy: " << tablica[i].prowadzacy << endl << "Ilosc punktow ECTS: " << tablica[i].ilosc_ECTS << endl;
			}
	
}

