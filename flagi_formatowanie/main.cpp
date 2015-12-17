#include <windows.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
		HANDLE hOut;

		hOut = GetStdHandle(STD_OUTPUT_HANDLE);
		cout << "Standart" << endl << endl;

		SetConsoleTextAttribute(hOut, FOREGROUND_RED);
		cout << "This text is red." << endl << endl;

		SetConsoleTextAttribute(hOut, FOREGROUND_GREEN);
		cout << "This text is green." << endl << endl;

		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE);
		cout << "This text is blue." << endl << endl;
	system("pause");
}