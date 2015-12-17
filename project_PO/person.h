#pragma once
#include <iostream>
#include <string>
using namespace std;

enum miesiac { styczen, luty, marzec, kwiecien, maj, czerwiec, lipiec, sierpien, wrzesien, pazdziernik, listopad, grudzien };

class person
{
protected:
	string imie;
	string nazwisko;
	string pesel;
	miesiac miesiac_urodzenia;
public:
	person();
	person(string, string, string, miesiac);
	virtual void wyswietl();
	virtual ~person();
};


