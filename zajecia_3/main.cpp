#include <iostream>
#include <ctime>
#include "player.h"
using namespace std;

void uzupelnij(player&);

int main()
{
	srand(time(NULL));

	player gracz("greg", "hwdp");

	gracz.ukonczone_misje();
	gracz.wypisz_class();

	uzupelnij(gracz);
	gracz.wypisz_class_struct();

	system ("pause");
}

void uzupelnij(player& gracz)
{
	int licznik = 1;
	for (int i = 0; i<gracz.get_ilosc_ukonczonych(); i++)
		{
			cout << licznik++ << " misja:" << endl << "----------------------------" << endl;
			cout << "Data zaliczenia: ";
			getline(cin, gracz.get_ukonczone()[i].data_zaliczenia);
			cout << "Nazwa misji: ";
			getline(cin, gracz.get_ukonczone()[i].nazwa_misji);
			cout << "Typ misji: ";
			getline(cin, gracz.get_ukonczone()[i].typ_misji);
			cout << "Liczba godzin: ";
			cin >> gracz.get_ukonczone()[i].liczba_godzin;
			cin.get();
			cout << endl;
		}
}