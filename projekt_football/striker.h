#pragma once
#include "footballer.h"

class striker : public footballer
{
	bool strzal_finezyjny;
public:
	striker();
	striker(string, string, lepsza_noga, int, bool);
	~striker();

	void wypisz();
};

