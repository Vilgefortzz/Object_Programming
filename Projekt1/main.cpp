#include <iostream>
#include <string>
using namespace std;
template<int wartosc, class typ>
class nowa_zmienna
{
	string nazwa;
	typ zmienna;
public:
	int wyswietl();
	nowa_zmienna();
	~nowa_zmienna();
};
template<int wartosc, class typ> //najpierw musisz przekopiowa� szablon
int nowa_zmienna < wartosc, typ >::wyswietl() //takie funkcje r�ni� si� tym, �e trzeba poda� 'zmienn�' u�ywaj�c klasy z templatem
{
	cout << zmienna << endl << nazwa << endl;
	return 0;
}
template<int wartosc, class typ>
nowa_zmienna<wartosc, typ>::nowa_zmienna()
{
	nazwa = "Ktos";
	zmienna = wartosc;
}
template<int wartosc, class typ>
nowa_zmienna<wartosc, typ>::~nowa_zmienna()
{
}
int main()
{
	nowa_zmienna <10, int > nowa;
	nowa.wyswietl();
	system("pause");
}