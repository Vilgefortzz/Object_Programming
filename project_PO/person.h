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
	int wiek;
public:
	person();
	person(string, string, string, miesiac, int);
	virtual void wyswietl();
	virtual ~person();
};


