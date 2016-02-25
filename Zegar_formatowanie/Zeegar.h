#pragma once
#include <iostream>
using namespace std;

class Zeegar
{
private:
	int godz;
	int min;
	int sec;
public:
	// Konstruktor

	Zeegar(int, int, int);
	Zeegar();
	class Blad_ujemne{};
	class Blad_wczytywanie{};

	// Destruktor

	~Zeegar();

	friend ostream& operator<< (ostream& ekran, Zeegar& czas);
	friend istream& operator>> (istream& klaw, Zeegar& czas);

	Zeegar& operator+=(Zeegar&);
	Zeegar& operator-=(Zeegar&);
	Zeegar& operator+=(int);
	Zeegar& operator-=(int);
	Zeegar& operator++(int);
	Zeegar& operator!();
	bool operator==(Zeegar&);
	int operator()();

	friend class DISPLAY;
	friend class FILES;
};

