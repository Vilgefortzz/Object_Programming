#pragma once
#include "footballer.h"

class goalkeeper : public footballer
{
	bool dalekie_wykopy;
public:
	goalkeeper();
	goalkeeper(string, string, lepsza_noga, int, bool);
	~goalkeeper();

	void wypisz();
};

