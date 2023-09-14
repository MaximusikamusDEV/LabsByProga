#include "Funcs.h"
int choice()
{
	int ch;
	cout << "If you want to work with numbers from the smallest to the biggest then tap 1: " << endl;
	cout << "If you want to work with numbers from the biggest to the smallest then tap 2: " << endl;
	cout << "If you want to work with random numbers then tap 3: " << endl;
	cin >> ch;
	return ch;
}