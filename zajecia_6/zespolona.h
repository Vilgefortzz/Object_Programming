#pragma once
#include <iostream>
#include <cmath>
using namespace std;


class zespolona
{
private:
	int re, im;
public:

	// Operatory zewnetrzne

	friend void show(zespolona&);
	friend zespolona operator*(zespolona&, zespolona&);
	friend zespolona operator/(zespolona&, zespolona&);

	// Konstruktory

	zespolona(int, int);
	zespolona();
	zespolona(const zespolona&);
	zespolona(int);

	~zespolona();

	// Operatory wewnetrzne

	zespolona& operator=(const zespolona&);
	zespolona operator+(zespolona&);
	zespolona operator-(zespolona&);
	int modul();
};



