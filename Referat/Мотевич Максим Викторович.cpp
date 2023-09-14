#include <math.h>
#include <iostream>

using namespace std;

void main()
{
	int lower_border,clone_i=0, flip =0;
	cout << "lower_border=";
	cin >> lower_border;


	bool* a = new bool(lower_border);

	cout << endl << endl << endl;

	for (int i = 0; i < lower_border; i++)
		a[i] = false;

	for (int i = 0; i < lower_border; i++)
		cout << a[i] << " ";


	cout << endl << endl << endl;

for (int i = 0; i < lower_border; i++)
		a[i] = true;

for (int i = 0; i < lower_border; i++)
	cout << a[i] << " ";


	/* const int UPPER_BORDER = 1000;
	bool a[UPPER_BORDER] = { 0 };

	

	unsigned int n = sqrt(double(UPPER_BORDER));

	for (int i = 2; i <= n; i++)
		if (a[i])
			for (int j = i * 2; j < UPPER_BORDER; j += i)
				a[j] = false;
	for (int i = 2; i <= n; i++)
		if ((a[i] and (i < lower_border)))              
			a[i] = false;
	for (int i = lower_border; i < UPPER_BORDER -1; i++)
	{
		clone_i = i;

		while (clone_i % 10 != 0)
		{
			if (clone_i == i)
				flip = 0;
			flip = (flip * 10 + (clone_i % 10));
			clone_i = (clone_i - clone_i % 10) / 10;
			if (clone_i % 10 == 0)
			{
				clone_i = i;  
					break;
			}
		}
		if (flip != i)
			a[i] = false;
	}
	for (int i = lower_border; i < UPPER_BORDER; i++)
		if (a[i])
			cout << i << "  ";

	cout << endl;*/
}
