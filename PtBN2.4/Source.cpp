#include <iostream>

using namespace std;

int main()
{

	int n, i, j, k = 0, maxi = 0;
	int ch1;
	int ch2;
	int ch3;
	int ch4;
	int chx;
	int fl;

	cin >> n;

	if (cin.fail()) 
		cout << "Smth wrong";
	
	if (n < 3)
	{
		cout << "Smth wrong";
		return 0;
	}

	cin >> ch1 >> ch2 >> ch3;

	if (n == 3 && (ch3 == ch1 + ch2))
	{
		cout << "Length = 3";
		return 0;
	} 
	else 
		if (n == 3)
		{
			cout << "Smth wrong";
			return 0;
		}

	if (ch3 == ch1 + ch2)
	{
		k = 3;
		maxi = 3;
	} 
	else
	{
		k = 0; 
		maxi = 0;
	}

	fl = 0;

	for (i = 4; i <= n; i++)
	{
		cin >> chx;
		if (ch2 + ch3 == chx && fl == 0)
		{
			if (k == 3) 
				k++;
			 else
				k = 3;
			fl = 1;
		}
		else
			if (ch2 + ch3 == chx)
				k++; 
			else
			{
				fl = 0;
				maxi = max(maxi, k);
				k = 0;
			}
		
		ch2 = ch3;
		ch3 = chx;
	}

	cout << "Length = " << max(maxi, k);

	// 15   1 1 2 3 5 0 5 5 10 15 25 40 1 1 2
	// 4    1 1 2 3
	// 4    5 1 2 3


	return 0;
}