#include <iostream>
#include <ctime>
using namespace std;

double* wypelnij(double*, int);
static int wypisz(double*, int);
double* random1(double*, int);
double* random2(double*, int);

int main()
{
	srand(time(NULL));
	cout << "Podaj rozmiar tablicy: ";
	int rozmiar;
	cin >> rozmiar;
	
	double* tablica = new double[rozmiar];

	double* (*wsk)(double*, int) = &wypelnij;     // wskaźnik do funkcji
	(*wsk)(tablica, rozmiar);
	int x = wypisz(tablica, rozmiar);
	
	random1(tablica, rozmiar);
	wypisz(tablica, rozmiar);
												// uzupełnianie tablicy z przedziałów z określoną liczbą miejsc po przecinku
	random2(tablica, rozmiar);
	wypisz(tablica, rozmiar);


	double* (*tf[3])(double*, int) = {random1, random2, wypelnij};


	system("pause");
}

double* wypelnij(double* t, int n)
{
	for (int i=0;i<n;i++)
		t[i] = rand()%100;
	return t;
}

static int wypisz(double* t, int n)
{
	static int licznik = 0;   // zmienna statyczna
	licznik++;

	cout << licznik << endl;

	for (int i=0;i<n;i++)
		cout << t[i] << endl;
	return licznik;
}

double* random1(double* t, int n)
{
	for (int i=0;i<n;i++)
	{
		t[i] = rand()%101;
		t[i] = t[i]/10;
	}
	return t;
}

double* random2(double* t, int n)
{
	for (int i=0;i<n;i++)
	{
		t[i] = rand()%101;
		t[i] = t[i]/100;
	}
	return t;
}