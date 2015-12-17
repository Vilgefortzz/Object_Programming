#include "zespolona.h"


zespolona::zespolona(int a, int b): re(a), im(b)
{
}

zespolona::zespolona()
{
	re = 4;
	im = 2;
}

zespolona::zespolona(int a)
{
	re = a;
	im = a;
}

zespolona::~zespolona()
{
}

zespolona::zespolona(const zespolona& wzor)
{
	re = wzor.re;
	im = wzor.im;
}

// Operatory

zespolona& zespolona::operator=(const zespolona& wzor)
{
	if (&wzor == this) return *this;

	re = wzor.re;
	im = wzor.im;
	return*this;
}

zespolona zespolona::operator+(zespolona& b)
{
	zespolona c;
	c.re = re + b.re;
	c.im = im + b.im;
	return c;
}

zespolona zespolona::operator-(zespolona& b)
{
	zespolona c;
	c.re = re - b.re;
	c.im = im - b.im;
	return c;
}

int zespolona::modul()
{
	return sqrt(re*re + im*im);
}
