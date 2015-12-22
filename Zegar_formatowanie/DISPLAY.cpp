#include "DISPLAY.h"

void DISPLAY::wypisz(Zeegar& obiekt)
{
	cout << obiekt.godz << setw(2) << setfill(':') << obiekt.min << setw(2) << setfill(':') << obiekt.sec << endl;
}
