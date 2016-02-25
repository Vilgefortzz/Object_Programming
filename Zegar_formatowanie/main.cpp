#include <iostream>
#include <ctime>
#include <string>
#include <omp.h>
#include <Windows.h>
#include "Zeegar.h"
#include "DISPLAY.h"
#include "FILES.h"
#include "matrix.h"
#include "person.h"
#include "student.h"
#include "nauczyciel.h"
using namespace std;

typedef student<2222304, double> tworzenie_studenta;

ostream& operator<< (ostream&, Zeegar&);
istream& operator>> (istream&, Zeegar&);
matrix operator+(matrix&, matrix&);
void menu();
void menu_dodatkowe();

int main()
{
	srand(time(NULL));
	menu();

	// ----------------------------------------------------- Ob³uga b³êdów ----------------------------------------------------------------------------
    /*
	cout << "\nWprowadz dane potrzebne do stworzenia obiektu:\n";
	try
	{ 
		Zeegar zegarek; 
		cout << "Obiekt stworzony: " << zegarek;
	}
	catch (Zeegar::Blad_wczytywanie)
	{
		cout << "Blad przy wczytywaniu zle typy danych wprowadzone!! Obiekt nie zostal stworzony\n";
	}
	catch (Zeegar::Blad_ujemne)
	{
		cout << "Blad podane dane nie moga byc ujemne, poniewaz nie ma czasu ujemnego!! Obiekt nie zostal stworzony\n";
	}
	*/
	system ("pause");
}

ostream& operator<< (ostream& ekran, Zeegar& czas)
{
	ekran << czas.godz << ":" << czas.min << ":" << czas.sec << endl;
	return ekran;
}

istream& operator>> (istream& klaw, Zeegar& czas)
{
	klaw >> czas.godz >> czas.min >> czas.sec;
	return klaw;
}

matrix operator+(matrix& A, matrix& B)
{
	int ilosc;
	cout << "Ilosc petli nadpisywania: ";
	cin >> ilosc;

	#define LICZBA_PETLI ilosc

	if (A.liczba_wierszy == B.liczba_wierszy && A.liczba_kolumn == B.liczba_kolumn)
	{
		time_t czas_start, czas_koniec;
		int i, j, k;
		matrix C(A.liczba_wierszy, A.liczba_kolumn);

		czas_start = time(NULL);
		for (k = 0; k < LICZBA_PETLI; k++)
		{
			//omp_set_num_threads(4);

#pragma omp parallel for private(i,j)
			for (i = 0; i < C.liczba_wierszy; i++)
				for (j = 0; j < C.liczba_kolumn; j++)
					C.macierz[i][j] = A.macierz[i][j] + B.macierz[i][j];
		}
		
		czas_koniec = time(NULL);
		cout << "Czas potrzebny na dodanie macierzy: " << difftime(czas_koniec, czas_start) << "\n";
		return C;
	}
	else
	{
		
		throw matrix::Blad_wymiaru_macierzy();
	}
}

void menu()
{
	string nazwa_pliku;

tutaj:

	cout << "Co chcesz zrobic?\n" << "1. Tworzenie obiektow klasy zegar + obsluga bledow\n" << "2. Stworzenie obiektu i wypisanie go za pomoca klasy do tego przeznaczonej\n";
	cout << "3. Stworzenie obiektu, nastepnie zapis do pliku o nazwie podanej przez uzytkownika za pomoca klasy do tego przeznaczonej\n";
	cout << "4. Odczyt z pliku, zapis do obiektu tych danych + wyswietlenie\n" << "5. Dziedziczenie, funkcje wirtualne + klasa szablonowa + typedefy(przyklady stworzonych obiektow za pomoca konstruktorow)\n";
	cout << "6. Wielowatkowosc na przykladzie dodawania macierzy (OpenMP)\n" << "7. EXIT\n";

	int wybor;
	cout << "Wybor: ";
	cin >> wybor;
	
	if (wybor != 1 && wybor != 2 && wybor != 3 && wybor != 4 && wybor != 5 && wybor != 6 && wybor !=7)
	{
		cout << "Bledny wybor. Wybieraj sposrod opcji pojawiajacych sie na ekranie!";
		goto tutaj;
	}

	switch (wybor)
	{
	case 1:
	{
		menu_dodatkowe();
		break; 
	}
	case 2:
	{
		cout << "Stworz obiekt: ";
		Zeegar zegar1;
		DISPLAY::wypisz(zegar1);
		goto tutaj;
		break;
	}
	case 3:
	{
		cout << "Stworz obiekt: ";
		Zeegar zegar1;
		nazwa_pliku = FILES::zapisz(zegar1);
		goto tutaj;
		break;
	}
	case 4:
	{
		Zeegar zegar_nowy = FILES::odczytaj(nazwa_pliku);
		cout << zegar_nowy;
		goto tutaj;
		break;
	}
	case 5:
	{
		student<2967690, int> student1(3.6, "Michal", "Fajny", "48694563574", marzec, 18);
		person* wsk1 = &student1;

		tworzenie_studenta student2(4.2, "Malgorzata", "Tratwa", "58395674275", lipiec, 19);
		person* wsk2 = &student2;

		nauczyciel nauczyciel1("Matematyka", 2, "Anna", "Wilga", "73859354691", kwiecien, 31);
		person* wsk3 = &nauczyciel1;

		int ilosc = 3;
		person** WSK = new person*[ilosc];
		WSK[0] = wsk1;
		WSK[1] = wsk2;
		WSK[2] = wsk3;

		for (int i = 0; i < ilosc; i++)
			WSK[i]->wyswietl();
		goto tutaj;
		break;
	}
	case 6:
	{
		matrix macierz1;
		macierz1.wypelnij_macierz();
		//macierz1.wypisz_macierz();

		matrix macierz2;
		macierz2.wypelnij_macierz();
		//macierz2.wypisz_macierz();

		bool flaga_sprawdzenia = true;

		matrix macierz_wynikowa(1, 1);

		try
		{
			macierz_wynikowa = macierz1 + macierz2;
		}
		catch (matrix::Blad_wymiaru_macierzy)
		{
			cout << "Nie mozna dodac macierzy poniewaz istnieje niedokladnosc wymiarow!\n";
			flaga_sprawdzenia = false;
		}

		if (flaga_sprawdzenia == true)
		{

			//macierz_wynikowa.wypisz_macierz();
		}
		goto tutaj;
		break;
	}
	case 7:
	{
		exit(0);
	}
	default:
		goto tutaj;
		break;
	}
}

void menu_dodatkowe()
{
	Zeegar zegar2_true(0, 0, 0);
	
	cout << "Stworz pierwszy obiekt: ";
	Zeegar zegar1_true;

tutaj:

	cout << "Jezeli chcesz stworzyc obiekt, dodac kolejny lub dzialac na nich to wybierz odpowiednia opcje\n";
	cout << "1. Dodaj obiekt(dwa obiekty tylko w sumie)\n" << "2. Dodaj godzine do zegara\n" << "3. Odejmij godzine od zegara\n" << "4. Wyzeruj zegar\n" << "5. Wyswietl czas\n" << "6. Porownaj czas obu zegarkow\n";
	cout << "7. Wyswietl czas w sekundach\n" << "8. WSTECZ\n";

	int wybieraj;
	cout << "Wybor: ";
	cin >> wybieraj;

	if (wybieraj != 1 && wybieraj != 2 && wybieraj != 3 && wybieraj != 4 && wybieraj != 5 && wybieraj != 6 && wybieraj != 7 && wybieraj != 8)
	{
		cout << "Bledny wybor. Wybieraj sposrod opcji pojawiajacych sie na ekranie!";
		menu();
	}

	if (wybieraj == 1)
	{
		cout << "Stwarzasz drugi obiekt: ";
		Zeegar zegar2;
		zegar2_true = zegar2;
		goto tutaj;
	}
	else if (wybieraj == 2)
	{
		cout << "Ile chcesz dodac? ";
		int dodanie;
		cin >> dodanie;
		zegar1_true += dodanie;
		goto tutaj;
	}
	else if (wybieraj == 3)
	{
		cout << "Ile chcesz odjac? ";
		int odjecie;
		cin >> odjecie;
		zegar1_true -= odjecie;
		goto tutaj;
	}
	else if (wybieraj == 4)
	{
		!zegar1_true;
		goto tutaj;
	}
	else if (wybieraj == 5)
	{
		cout << zegar1_true;
		goto tutaj;
	}
	else if (wybieraj == 6)
	{
		if (zegar1_true == zegar2_true)
			cout << "Rowne sa" << endl;
		else
			cout << "Nie sa rowne" << endl;
		goto tutaj;
	}
	else if (wybieraj == 7)
	{
		cout << "Czas w sekundach: " << zegar1_true() << endl;
		goto tutaj;
	}
	else
		menu();
}