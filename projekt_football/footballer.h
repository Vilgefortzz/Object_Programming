#pragma once
#include <iostream>
#include <string>
using namespace std;

enum lepsza_noga { prawa, lewa, zadna };


class footballer
{
protected:
	string name;
	string nationality;
	lepsza_noga better;
	int skill; // od 1 do 99
public:
	footballer();
	footballer(string, string, lepsza_noga, int);
	virtual ~footballer();
	static int liczba_pil; // do stworzenia tablicy dynamicznej

	virtual void wypisz();

	string get_name();
	string get_nationality();
	int get_skill();
	lepsza_noga get_better();
};

