#include <iostream>

using namespace std;

int main()
{
	const int n = 5;
	const int m = 6;
	int ch;
	int a[n] = { 0 };
	int b[m] = { 0 };
	int c[n] = { 0 };
	int i, j, k, i2 = 0, j2 = 0;

	cout << "Enter your number: \n"
		"1. Inizialization inside programm \n"
		"2. Random values \n"
		"3. Keyboard inizialization \n";

	cin >> ch;

	//int size = sizeof(a) / sizeof(a[0]);
	//int sizeb = sizeof(b) / sizeof(b[0]);

    if (ch == 1)
	{
		int a[n] = { 1, 2, 3, 4, 5 };
		int b[m] = { 4, 4, 5, 6, 7, 8 };
		int c[n] = { 0 };

		for (i = 0; i < n; i++)
		{
			k = 0;
			for (j = j2; j < m; j++)
			{
				if (a[i] < b[j])
					break;

				if (a[i] == b[j])
				{
					k = 1;
					j2 = j;
					break;
				}	
			}
			if (k == 0)
			{
				c[i2] = a[i];
				i2++;
			}
		}

		for (i = 0; i < i2; i++)
			cout << c[i] << " ";
	
	} 
	
	if (ch == 2)
	{
		for (i = 0; i < n; i++)
		{
			a[i] = rand() % 100;
			cout << a[i] << " ";
		}

		cout << endl;

		for (j = 0; j < m; j++)
		{
			b[j] = rand() % 100;
			cout << b[j] << " ";
		}
		cout << endl;

	}

	if (ch == 3)
	{
		for (i = 0; i < n; i++)
			cin >> a[i];

		for (j = 0; j < m; j++)
			cin >> b[j];
	}
	
	if (ch != 1)
	{
		for (i = 0; i < n; i++)
		{
			k = 0;
			for (j = 0; j < m; j++)
				if (a[i] == b[j])
				{
					k = 1;
					break;
				}
			if (k == 0)
			{
				c[i2] = a[i];
				i2++;
			}
		}

	 for (i = 0; i < i2; i++)
		cout << c[i] << " ";

	}
		
	/*switch (ch)
	{
	  case 1:
		  const int n = 5;
		  int a[n] = { 1, 2, 3, 4, 5 };
		  int b[m] = { 3, 4, 5, 6, 7, 8 };
		  int c[n] = { 0 };  
		  break;

	  case 2:
		  break;
	 
	  case 3:
		  break;

	  default:
		  cout << "You entered wrong number. Try again";

	}

	for (i = 0; i < n; i++)
		cout << a[i];
		*/

	return 0;
}