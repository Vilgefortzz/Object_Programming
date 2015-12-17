#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class clock
{
private:
	int godz;
	int min;
	int sec;
public:
	// Konstruktor

	clock(int, int, int);
	clock();

	// Destruktor

	~clock();

	friend ostream& operator<< (ostream& ekran, clock& czas);
	friend istream& operator>> (istream& klaw, clock& czas);

	clock& operator+=(clock&);
	clock& operator-=(clock&);
	clock& operator+=(int);
	clock& operator-=(int);
	clock& operator++(int);
	clock& operator!();
	bool operator==(clock&);
	int operator()();

	// Stoper

	void stoper();
};

