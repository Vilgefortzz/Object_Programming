#pragma once
#include <iostream>
#include <string>
#include "przedmiot.h"
using namespace std;

class przedmiot;

class student
{
private:

	static int id;
	int ID; // unikatowy

	string imie, nazwisko;
	int rok;
	string semestr;
	const int max_ilosc_przedmiotow;
	int* p; // id przemiotów studenta

public:
	student(string, string, int, string, const int);
	~student();
	void przypisz_przedmioty();


	friend void f_globalna(student&, przedmiot*);
};

