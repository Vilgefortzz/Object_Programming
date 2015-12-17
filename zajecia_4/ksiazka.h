#include <iostream>
#include <string>
using namespace std;

#ifndef ksiazka_h
#define ksiazka_h

class ksiazka
{
private:
	string tytul, autor, rodzaj_ksiazki; // Rodzaj książki czyli np. kryminał, fantasy itp
	int rok;
	static int licznik_obiektow;
	static int id;
	int ID;

	int* wsk1;
	string* wsk2;
public:

	// Kostruktory

	ksiazka();
	ksiazka(string, string = "J.R.R Tolkien", string = "Fantasy", int = 1994);
	ksiazka(ksiazka&);

	void wyswietl();


	// Destruktor

	~ksiazka();

	string get_tytul();
	string get_autor();
	string get_rodzaj_ksiazki();
	int get_rok();

	void set_tytul(string);
	void set_autor(string);
	void set_rodzaj_ksiazki(string);
	void set_rok(int);

};
#endif