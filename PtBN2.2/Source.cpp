#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	double xn = 0.6;
	double x0 = -0.4;
    double dx = 0.1;
	double y, y1;
	double y2;
	double e = 1e-6;
	double proizv = 1;
    int n = 1;
	int sch = 1;
	double slag = 1;
	int dp = 0;

	cout << e;
		
	/*cout << setw(5) << "Value x: " << setw(20) << "Value y1: " << setw(20) << "Value y2: " << setw(40) << "Number of terms: ";
	cout << endl;

	while (x0 <= xn)
	{
		y = (1 / pow(x0, 2) - 1);
		cout << setw(5)<< x0 << setw(25);
		cout << setprecision(3) << y << setw(25);

		proizv = 1;
		n = -1;
		sch = 1;
		slag = 1;
		dp = 0;
		y2 = 0;

			while (abs(slag) > e)
			{
				n *= -1;
				sch++;
				dp = sch - 1;
				proizv = pow(x0, dp);
				slag = proizv * sch * n;
				y2 += slag;
			}

		cout << setprecision(3) << y2 << setw(25); // slag == y2
		cout << setprecision(3) << sch << endl;
	  
		x0 += dx;

	}
	*/
	return 0;
}