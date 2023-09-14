#include <iostream>

using namespace std;

int main()
{
	int dlina = 0, n2, n, k, kol, i, key = 0, last, nmensh;

	cin >> n >> k;

	

	if (cin.fail())
	{
		cout << "Smth wrong";
		return 0;
	}
	
	n2 = n;

	while (true)
	{
		if (n2 == 0)
			break;

		n2 = n2 / 10;
		dlina++;
	}

	nmensh = n;

	for (i = 0; i < dlina; i++)
	{
		n2 = n;
		last = nmensh % 10;
		nmensh /= 10;
		kol = 0;

		while (true)
		{
			if (n2 == 0) 
                break;
			
			if (n2 % 10 == last)
				kol++;

			n2 /= 10;
		}

		n /= 10;

		if (kol > k)
		{
			cout << "More than k " << kol;
			return 0;
		}
		else
			if (kol == k)
				key = 1;

	}

	if (key)
		cout << "True";
	else
		cout << "False";


	return 0;
}