
#include <iostream>
#include "functions.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	menu();
	int t = 0;
	while (t != 8)
	{
		cin >> t;
		switch (t)
		{
		case 1: mass(); cout << endl; system("pause"); system("cls"); menu(); break;
		case 3: digit(); cout << endl; system("pause"); system("cls"); menu(); break;
		case 8: return 0;
		}
	}
    cout << endl;
    return 0;
}
