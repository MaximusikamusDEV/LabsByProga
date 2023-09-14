#include <iostream>

using namespace std;

int main()
{
	int n, num = 0, i = 0, symb = 0, amount = 0, k, numreverse = 0, j;

	cout << "Enter amount: ";
	cin >> n;

	cout << "Enter number of symbol: ";
		cin >> k;

	while (i != n)
	{	
		i++;
		num = i;
		j = 0;

		while (num != 0)
		{
			j++;

			num /= 10;
		}

		num = i;

		if (j + symb > k)
		{
			j += symb;
			j -= k;

			for (int sc = 0; sc < j; sc++)
			{
				num /= 10;
			}

			cout << num % 10;
			return 0;

		}

		num = i;

		if (j + symb == k)
		{
			cout << num % 10;
			return 0;
		}

		symb += j;
	}

	cout << "Smth wrong";

	return 0;
}