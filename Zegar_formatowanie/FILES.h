#pragma once
#include "Zeegar.h"
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>

class FILES
{
public:
	static string zapisz(Zeegar&);
	static void odczytaj(Zeegar&, string);
};

