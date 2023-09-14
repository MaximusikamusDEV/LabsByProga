#include <iostream>

using namespace std;

int a[2]{-1, -1};
int b[2]{1, -1};

int a2[2]{-2, -2};
int b2[2]{1, -1};

int main()
{

	int x, y;
	int ChPesX, ChPesY;
	int BePesX, BePesY;

	cout << "Pole: ";
	cin >> x >> y;
	
	cout << "Beli(x, y): ";
	cin >> BePesX >> BePesY;

	cout << "Cherni(x, y): ";
	cin >> ChPesX >> ChPesY;

	if (ChPesX > x || ChPesX <= 0 || ChPesY > y || ChPesY <= 0 || BePesX > x || BePesX <= 0 || BePesY > y || BePesY <= 0) //Borders
	 {
		cout << "Smth get wrong";
		return 0;
	 }

	if ((ChPesX == (BePesX - 1)) || (ChPesX == (BePesX + 1)) && (ChPesY == BePesY) && (ChPesY == (y - 3)))
	{
		cout << "Udar vozmozhen";                                                                             //Exception when they're nearby
		return 0;
	}

	int i;

	for (i = 0; i < 2; i++)
	{
		if ((ChPesX + b[i] == BePesX) && (ChPesY + a[i] == BePesY))        //If figure can kill enemy
		{
			cout << "Udar vozmozhen odnovremenno dlya oboih";
			return 0;
		}
	}

	for (i = 0; i < 2; i++)
	{
		if ((ChPesX + b2[i] == BePesX) && (ChPesY + a2[i] == BePesY))        //If figure can kill enemy at 2nd turn
		{
			cout << "Udar vozmozhen 2m hodom";
			return 0;
		}
	}

	cout << "Udar nevozmozhen";

    

	return 0;
}