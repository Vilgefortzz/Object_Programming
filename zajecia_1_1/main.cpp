#include <iostream>
using namespace std;

int main()
{
	cout << "Podaj dwie liczby calkowite z przedzialu <10,90>" << endl;
	int a, b;

	do
	{
		cin >> a >> b;
	} while ((a < 10 || a > 90) || (b < 10 && b > 90));

	if (a > b)
	{
		double x = b;
		while (x != a)
		{
			x += 0.5;
			cout << x << endl;
		}
	}
	else if (a < b)
	{
		double x = a;
		while (x != b)
		{
			x += 0.5;
			cout << x << endl;
		}
	}
	else
		cout << "Nie wyswietle liczb z krokiem 0.5 poniewaz sa one rowne sobie\n";

	system("pause");
}