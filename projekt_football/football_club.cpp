#include "football_club.h"



football_club::football_club()
{
	nazwa = "Nie wiadomo";
	liczba_osob_zatrudnionych = 0;
	liczba_pilkarzy = 0;
	pilkarze = NULL;
}

football_club::football_club(string a, int b, int c)
{
	nazwa = a;
	liczba_osob_zatrudnionych = b;
	liczba_pilkarzy = c;

	pilkarze = new footballer*[liczba_pilkarzy];
}

football_club::~football_club()
{
	for (int i = 0; i < liczba_pilkarzy; i++)
	{
		delete [] pilkarze[i];
	}
	delete [] pilkarze;
}

football_club::football_club(const football_club& wzor)
{
	nazwa = wzor.nazwa;
	liczba_osob_zatrudnionych = wzor.liczba_osob_zatrudnionych;
	liczba_pilkarzy = wzor.liczba_pilkarzy;

	pilkarze = new footballer*[liczba_pilkarzy];
	for (int i = 0; i < liczba_pilkarzy; i++)
		pilkarze[i] = new footballer(wzor.pilkarze[i]->get_name(), wzor.pilkarze[i]->get_nationality(), wzor.pilkarze[i]->get_better(), wzor.pilkarze[i]->get_skill());

}

football_club& football_club::operator=(const football_club& wzor)
{
	if (&wzor == this) return *this;

	for (int i = 0; i < liczba_pilkarzy; i++)
	{
		delete pilkarze[i];
	}
	delete[] pilkarze;

	pilkarze = new footballer*[liczba_pilkarzy];
	for (int i = 0; i < liczba_pilkarzy; i++)
		pilkarze[i] = new footballer(wzor.pilkarze[i]->get_name(), wzor.pilkarze[i]->get_nationality(), wzor.pilkarze[i]->get_better(), wzor.pilkarze[i]->get_skill());

	return *this;
}

footballer*& football_club::operator[](unsigned int ktory)
{
	return pilkarze[ktory];
}

void football_club::wypisz()
{
	cout << string(70, '*') << endl << "Nazwa klubu: " << nazwa << endl << "Liczba osob zatrudnionych: " << liczba_osob_zatrudnionych << endl << "Liczba pilkarzy: " << liczba_pilkarzy << endl;
	if (liczba_pilkarzy != 0)
	{
		cout << "Pilkarze wystepujacy w klubie:" << endl;
		for (int i = 0; i < liczba_pilkarzy; i++)
			pilkarze[i]->wypisz();
	}
	else
		cout << "Pilkarze wystepujacy w klubie : Nikt" << endl;
}

void football_club::przypisz_pilkarzy()
{
	for (int i = 0; i < liczba_pilkarzy; i++)
	{
		/*string nazwa, nationality;
		string lepsza;
		int skille;
		cin >> nazwa >> nationality >> lepsza >> skille;
		if (lepsza == "prawa")
		{
			lepsza_noga lepsza = prawa;
			pilkarze[i] = new footballer(nazwa, nationality, lepsza, skille);
		}
		else if (lepsza == "lewa")
		{
			lepsza_noga lepsza = lewa;
			pilkarze[i] = new footballer(nazwa, nationality, lepsza, skille);
		}
		else
		{
			lepsza_noga lepsza = zadna;
			pilkarze[i] = new footballer(nazwa, nationality, lepsza, skille);
		}
		*/
		pilkarze[i] = new footballer();
	}
}
