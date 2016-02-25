#include "matrix.h"

matrix::matrix()
{
	cout << "Liczba wierszy macierzy: ";
	cin >> liczba_wierszy;
	cout << "Liczba kolumn macierzy: ";
	cin >> liczba_kolumn;

	macierz = new int*[liczba_wierszy];
	for (int i = 0; i < liczba_wierszy; i++)
		macierz[i] = new int[liczba_kolumn];

	for (int i = 0; i < liczba_wierszy; i++)
		for (int j = 0; j < liczba_kolumn; j++)
			macierz[i][j] = 0;
}

matrix::matrix(int a, int b)
{
	liczba_wierszy = a;
	liczba_kolumn = b;

	macierz = new int*[liczba_wierszy];
	for (int i = 0; i < liczba_wierszy; i++)
		macierz[i] = new int[liczba_kolumn];

	for (int i = 0; i < liczba_wierszy; i++)
		for (int j = 0; j < liczba_kolumn; j++)
			macierz[i][j] = 0;
}

matrix::matrix(const matrix & wzor)
{
	liczba_wierszy = wzor.liczba_wierszy;
	liczba_kolumn = wzor.liczba_kolumn;

	macierz = new int*[wzor.liczba_wierszy];
	for (int i = 0; i < wzor.liczba_wierszy; i++)
		macierz[i] = new int[wzor.liczba_kolumn];

	for (int i = 0; i < wzor.liczba_wierszy; i++)
		for (int j = 0; j < wzor.liczba_kolumn; j++)
			macierz[i][j] = wzor.macierz[i][j];
}

matrix::~matrix()
{
	for (int i = 0; i < liczba_wierszy; i++)
		delete macierz[i];
	delete macierz;
}

void matrix::wypelnij_macierz()
{
	for (int i = 0; i < liczba_wierszy; i++)
		for (int j = 0; j < liczba_kolumn; j++)
			macierz[i][j] = rand() % 7;
}

void matrix::wypisz_macierz()
{
	for (int i = 0; i < liczba_wierszy; i++)
	{
		for (int j = 0; j < liczba_kolumn; j++)
		{
			cout << macierz[i][j] << " ";
		}
		cout << "\n";
	}
}

matrix& matrix::operator=(const matrix & wzor)
{
	if (&wzor == this) return *this;

	for (int i = 0; i < liczba_wierszy; i++)
		delete macierz[i];
	delete macierz;

	liczba_wierszy = wzor.liczba_wierszy;
	liczba_kolumn = wzor.liczba_kolumn;

	macierz = new int*[liczba_wierszy];
	for (int i = 0; i < liczba_wierszy; i++)
		macierz[i] = new int[liczba_kolumn];

	for (int i = 0; i < liczba_wierszy; i++)
		for (int j = 0; j < liczba_kolumn; j++)
			macierz[i][j] = wzor.macierz[i][j];

	return *this;
}
