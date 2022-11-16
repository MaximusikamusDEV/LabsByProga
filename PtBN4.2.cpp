#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>

using namespace std;

int main()
{

	const int N = 100;

	stringstream cont;

	char st[N];

	int size;
	int temp;

	cin >> st;

	int sixt = 16;
	int level = 0;
	int result = 0;
	char *err = nullptr;

	size = strlen(st);

	//FIRST METHOD

	/*temp = strtol(st, &err, 16);
	cout << temp;
	*/

	// SECOND METHOD

	for (int i = size - 1; i >= 0; i--)
	{
		if (st[i] >= '1' && st[i] <= '9')
		{
			cont.clear();
			cont << st[i];
			cont >> temp;

			result += temp * pow(16, level);
		}
		else
		 result += (st[i] - 'A'+1*10) * pow(16, level);

		level++;
	}

	cout << result;


	return 0;
}