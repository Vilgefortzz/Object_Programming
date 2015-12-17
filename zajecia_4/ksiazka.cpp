#include <iostream>
#include <string>
#include "ksiazka.h"
using namespace std;

int ksiazka::licznik_obiektow;
int ksiazka::id;

ksiazka::ksiazka()
{
	id++;
	licznik_obiektow++;
	ID = id;
}

ksiazka::ksiazka(string a, string b, string c, int d) : tytul(a), autor(b), rodzaj_ksiazki(c), rok(d)
{
	id++;
	licznik_obiektow++;
	ID = id;
}

ksiazka::ksiazka(ksiazka& wzor)
{
	autor = wzor.autor;
	rodzaj_ksiazki = wzor.rodzaj_ksiazki;
	rok = wzor.rok;

	id++;
	licznik_obiektow++;
	ID = id;
}

ksiazka::~ksiazka()
{
	cout << "Ilosc obiektow przed: " << licznik_obiektow << endl;
	licznik_obiektow--;
	cout << "Ilosc obiektow po kasacji: " << licznik_obiektow << endl;
	
}

void ksiazka::wyswietl()
{
	cout << "Informacje o danym obiekcie: " << endl << "----------------------------" << endl;
	cout << "Tytul ksiazki: " << tytul << endl << "Autor ksiazki: " << autor << endl << "Rodzaj ksiazki: " << rodzaj_ksiazki << endl << "Rok : " << rok << endl;
	cout << "ID: " << ID << endl << "----------------------------" << endl;
}

string ksiazka::get_tytul()
{
	return tytul;
}

string ksiazka::get_autor()
{
	return autor;
}

string ksiazka::get_rodzaj_ksiazki()
{
	return rodzaj_ksiazki;
}

int ksiazka::get_rok()
{
	return rok;
}

void ksiazka::set_tytul(string a)
{
	tytul = a;
}

void ksiazka::set_autor(string a)
{
	autor = a;
}

void ksiazka::set_rodzaj_ksiazki(string a)
{
	rodzaj_ksiazki = a;
}

void ksiazka::set_rok(int a)
{
	rok = a;
}