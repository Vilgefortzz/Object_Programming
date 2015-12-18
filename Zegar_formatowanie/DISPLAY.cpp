#include "DISPLAY.h"

void DISPLAY::wypisz(Zeegar& obiekt)
{
	cout << obiekt.godz << setfill(':') << setw(2) << obiekt.min << setfill(':') << setw(2) << obiekt.sec << setfill(':') << setw(2) << endl;
}
