#include <iostream>
#include <string>
#include "zaliczone_misje.h"

using namespace std;

#ifndef player_h
#define player_h

class player
{
private:
	string login, haslo;
	static int ilosc_misji_do_zaliczenia;
	zaliczone_misje* completed;
	int ilosc_ukonczonych;
public:
	void wypisz_class();
	void wypisz_class_struct();

	player(string, string);
	~player() { delete[] completed; }

	int get_ilosc_ukonczonych();
	zaliczone_misje* get_ukonczone();

	void ukonczone_misje();
};
#endif