#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class matrix
{
private:
	int liczba_wierszy;
	int liczba_kolumn;
	int** macierz;
public:
	matrix();
	matrix(int, int);

	matrix(const matrix&);
	~matrix();

	void wypelnij_macierz();
	void wypisz_macierz();

	matrix& operator=(const matrix&);
	class Blad_wymiaru_macierzy {};

	friend matrix operator+ (matrix&, matrix&);
};

