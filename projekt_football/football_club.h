#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "footballer.h"
using namespace std;


class football_club
{
private:
	string nazwa;
	int liczba_osob_zatrudnionych;
	int liczba_pilkarzy;
	footballer**pilkarze;
public:
	football_club();
	football_club(string, int, int);
	~football_club();
	football_club(const football_club&);

	football_club& operator=(const football_club&);
	footballer*& operator[](unsigned int);

	void wypisz();
	void przypisz_pilkarzy();
};

