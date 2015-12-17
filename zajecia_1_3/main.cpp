#include <iostream>
#include <string>
using namespace std;

struct student
{
	string imie, nazwisko, kierunek, rok_studiow;
};

student* wypelnij(student*);
void wyswietl(student*);

int main()
{
	student* osoby = new student[5];
	wypelnij(osoby);
	wyswietl(osoby);

	system("pause");
}

student* wypelnij(student* t)
{
	int licznik = 1;

	for (int i = 0; i < 5; i++)
	{
		cout << licznik++ << " osoba:" << endl;
		cout << "Imie: ";
		cin >> t[i].imie;
		cout << "Nazwisko: ";
		cin >> t[i].nazwisko;
		cout << "Kierunek: ";
		cin >> t[i].kierunek;
		cout << "Rok studiow: ";
		cin >> t[i].rok_studiow;
	}
	return t;
}

void wyswietl(student* t)
{
	int licznik = 1;

	for (int i = 0; i < 5; i++)
	{
		cout << licznik++ << " osoba:" << endl;
		cout << "Imie: " << t[i].imie << endl;
		cout << "Nazwisko: " << t[i].nazwisko << endl;
		cout << "Kierunek: " << t[i].kierunek << endl;
		cout << "Rok studiow: " << t[i].rok_studiow << endl;
	}
}