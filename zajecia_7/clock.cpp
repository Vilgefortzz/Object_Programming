#include "clock.h"


clock::clock(int a, int b, int c)
{
	godz = a;
	min = b;
	sec = c;
}

clock::clock()
{
	godz = 0;
	min = 0;
	sec = 0;
}

clock::~clock()
{
}

clock& clock::operator+=(clock& zegar2)
{
	godz += zegar2.godz;
	min += zegar2.min;
	sec += zegar2.sec;
	return *this;
}

clock& clock::operator-=(clock& zegar2)
{
	godz -= zegar2.godz;
	min -= zegar2.min;
	sec -= zegar2.sec;
	return *this;
}

clock& clock::operator+=(int H)
{
	godz+=H;
	return *this;
}

clock& clock::operator-=(int H)
{
	godz-=H;
	return *this;
}

clock& clock::operator++(int)
{
	clock kopia(*this);
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

clock& clock::operator!()
{
	godz = 0;
	min = 0;
	sec = 0;
	return *this;
}

bool clock::operator==(clock& zegar)
{
	if (godz == zegar.godz && min == zegar.min && sec == zegar.sec)
		return true;
	else
		return false;
}

int clock::operator()()
{
	int sek = 0;
	sek = (godz*3600 + min*60 + sec);
	return sek;
}

void clock::stoper()
{
	cout << "STOPER:" << endl << "Podaj czas: " << endl;
	cin >> *this;

	int seconds = 3600 * godz + 60 * min + sec;
	for (int i = seconds; i > 0; i--)
	{
		cout << i << endl;
		Sleep(1000);
	}
}