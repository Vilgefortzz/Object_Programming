#include <iostream>
#include <ctime>
#include "player.h"
using namespace std;

int player::ilosc_misji_do_zaliczenia = 10; // Sta³a liczba misji do wykonania dla wszystkich obiektów

player::player(string a, string b) : login(a), haslo(b)
{

}

void player::wypisz_class()
{
	cout << "Wypisanie informacji tylko o klasie:" << endl << "----------------------------" << endl;
	cout << "Login: " << login << endl << "Haslo: " << haslo << endl << "Ilosc misji dostepnych: " << ilosc_misji_do_zaliczenia << endl
		<< "Ilosc ukonczonych misji: " << ilosc_ukonczonych << endl << "----------------------------" << endl << endl;
}

void player::wypisz_class_struct()
{
	cout << "Informacje o misjach:" << endl << "----------------------------" << endl;
	for (int i = 0; i < ilosc_ukonczonych; i++)
	{
		cout << "Nazwa misji: " << completed[i].nazwa_misji << endl << "Data zaliczenia: " << completed[i].data_zaliczenia << endl
			<< "Typ misji: " << completed[i].typ_misji << endl << "Liczba godzin: " << completed[i].liczba_godzin << endl;
	}
}

int player::get_ilosc_ukonczonych()
{
	return ilosc_ukonczonych;
}

zaliczone_misje* player::get_ukonczone()
{
	return completed;
}

void player::ukonczone_misje()
{
	ilosc_ukonczonych = rand() % 3 + 1;
	completed = new zaliczone_misje[ilosc_ukonczonych];
}



