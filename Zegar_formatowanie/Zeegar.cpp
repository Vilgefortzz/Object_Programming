#include "Zeegar.h"


Zeegar::Zeegar(int a, int b, int c)
{
	godz = a;
	min = b;
	sec = c;
}

Zeegar::Zeegar()
{
	godz = 0;
	min = 0;
	sec = 0;
}

Zeegar::~Zeegar()
{
}

Zeegar& Zeegar::operator+=(Zeegar& zegar2)
{
	godz += zegar2.godz;
	min += zegar2.min;
	sec += zegar2.sec;
	return *this;
}

Zeegar& Zeegar::operator-=(Zeegar& zegar2)
{
	godz -= zegar2.godz;
	min -= zegar2.min;
	sec -= zegar2.sec;
	return *this;
}

Zeegar& Zeegar::operator+=(int H)
{
	godz+=H;
	if (godz >=12)
		godz = ((godz+12) + H) %12;
	return *this;
}

Zeegar& Zeegar::operator-=(int H)
{
	godz-=H;
	return *this;
}

Zeegar& Zeegar::operator++(int)
{
	Zeegar kopia(*this);
	sec++;
	if (sec == 60)
	{
		sec = 0;
		min++;
		if (min == 60)
		{
			godz++;
			min = 0;
			if (godz == 12)
				godz = 0;
		}
	}
	return kopia;
}

Zeegar& Zeegar::operator!()
{
	godz = 0;
	min = 0;
	sec = 0;
	return *this;
}

bool Zeegar::operator==(Zeegar& zegar)
{
	if (godz == zegar.godz && min == zegar.min && sec == zegar.sec)
		return true;
	else
		return false;
}

int Zeegar::operator()()
{
	int sek = 0;
	sek = (godz*3600 + min*60 + sec);
	return sek;
}
