#include <iostream>

using namespace std;

int main()
{
	char zp;
	int k, ch2, revers = 0, n, ch, i;

	cin >> ch >> zp >> ch2;

	if (zp != '.')
	{
		cout << "Your amount is not fractional";
		return 0;
	}
	
	cin >> k;

	cin >> n;

	if (n > k)
	{
		cout << "Smth wrong";
		return 0;
	}

	revers = ch2 % 10;
	ch2 /= 10;
    
	while (true)
	{
		if (ch2 == 0)
			break;
		revers *= 10;                            //reverse of fractional part
		revers += ch2 % 10;
		ch2 /= 10;
	}

	int sch = 0, sum = 0, prov = 0;

	for (i = 0; i < k; i++)
	{
		if (sch < n)
		{
			sum += revers % 10;            //find an amount before n
			sch++;
	    }

		prov = revers % 10;                 //find a 'k' element
		revers /= 10;
	}

	if (prov == sum)
		cout << "True";
	else
		cout << "False";


	return 0;
}