#include <iostream>

using namespace std;

int main()
{
	double x, y, z;

	cin >> x >> y >> z;


	if ((x + y + z) < 1)
	{
		if ((x < y) && (x < z))
			x = (y + z) / 2;
		else
			if ((y < x) && (y < z))
				y = (x + z) / 2;
			else
				z = (x + y) / 2;
		cout << "Esli x+y+z<1, to:  " << x << " " << y << " " << z;
		return 0;
	}
	else
		if (x < y)
			x = (y + z) / 2;
		else
			y = (x + z) / 2;


	cout << "Esli x+y+z>=1, to:   " << x << " " << y << " " << z;
	

	return 0;
}