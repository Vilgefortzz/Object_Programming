#include <iostream>
#include <string>
#include <ctime>
#include "przedmiot.h"

int przedmiot::id;

przedmiot::przedmiot(string a, string b) : nazwa(a), prowadzacy(b)
{
	ilosc_ECTS = rand()%31;
	id++;
	ID = id;
}

przedmiot::~przedmiot()
{
}
