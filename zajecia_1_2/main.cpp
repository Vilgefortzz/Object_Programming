#include <iostream>
#include <ctime>
using namespace std;

int* wypelnij(int*, int);
int suma_elementow(int*, int);

int main()
{
	srand(time(NULL));

	int rozmiar;
	cin >> rozmiar;

	int* t = new int[rozmiar];
	for (int i = 0; i < rozmiar; i++)
		t[i] = 0;

	wypelnij(t, rozmiar);
	cout << suma_elementow(t, rozmiar) << endl;


	system("pause");
}

int* wypelnij(int* T, int n)
{
	for (int i = 0; i < n; i++)
	{
		T[i] = rand() % 11 + 5;
	}
	return T;
}

int suma_elementow(int* T, int n)
{
	int suma = 0;
	for (int i = 0; i < n; i++)
	{
		suma += T[i];
	}
	return suma;
}
