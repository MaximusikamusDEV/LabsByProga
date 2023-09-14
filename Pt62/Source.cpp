#include <iostream>
#include <ostream>

using namespace std;

int main()
{

	double x, y, z, c = 0;

	cin >> x >> y >> z;

	((x + y + z) < 1) ?
		((x < y) && (x < z)) ?
		x = (y + z) / 2 :
		((y < x) && (y < z)) ?
		y = (x + z) / 2 :
		((z < y) && (z < x)) ?
		(z = (x + y) / 2) : c = 1 : c = 0;

	 if (c == 1)
	 {
		 cout << "Esli x+y+z < 1, x " << x << " y " << y << " z " << z;
		 return 0;
	 }


		((x + y + z) >= 1) ?
		(x < y) ?
		(x = (y + z) / 2) : (y = (x + z) / 2) : c = 0;

		cout << "Esli x+y+z > 1, x " << x << " y " << y << " z " << z;

	/*if ((x + y + z) < 1)
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
		if (x < y) x = (y + z) / 2;
		else
			y = (x + z) / 2;


	cout << "Esli x+y+z>=1, to:   " << x << " " << y << " " << z;*/




	return 0;
}