#include <iostream>
#include <string>
#include "football_club.h"
#include "footballer.h"
#include "goalkeeper.h"
#include "striker.h"
using namespace std;

int main()
{
	striker Messi("Lionel", "Argentina", lewa, 99, true);
	goalkeeper Bravo("Claudio", "Chile", prawa, 75, false);

	footballer* wsk1 = &Messi;
	footballer* wsk2 = &Bravo;

	footballer** WSK = new footballer*[footballer::liczba_pil]; // tablica wskaŸników
	WSK[0] = wsk1;
	WSK[1] = wsk2;

	for (int i = 0; i < footballer::liczba_pil; i++)
		WSK[i]->wypisz();

	//-----------------------------------------------------------------------------------------------------------------------------------------------

	football_club Barcelona("Fc Barcelona", 1000, 3);
	Barcelona.przypisz_pilkarzy();
	Barcelona.wypisz();

	system("pause");
}