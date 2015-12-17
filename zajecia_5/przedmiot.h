#pragma once
#include <iostream>
#include <string>
#include "student.h"
using namespace std;

class student;

class przedmiot
{
private:

	static int id;
	int ID; // unikatowy

	string nazwa, prowadzacy;
	int ilosc_ECTS;

public:
	przedmiot(string, string);
	~przedmiot();

	friend void f_globalna(student&, przedmiot*);
};

