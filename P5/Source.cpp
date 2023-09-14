#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{

	int n = 1235, k, c;

	k = ~15 & 123 << 2;
	c = ~(15 & 123 << 2);
	cout << k << "    " << c << "   ";




	/*double x, y, dp;

	cin >> x;

	if (x < -8 || x > 10)
	{
		cout << "Smth wrong";
		return 0;
	}

	if (x >= -8 && x <= -5) cout << -3;
	else
		if (x > -5 && x < -3) 
		{ 
			dp = ((abs(x) - 3) / 2) * 3;
	        cout << -dp;
		}
		else
			if (x > -3 && x <= 3) cout << sqrt(9 - (abs(x) * abs(x)));
			else
				if (x >= 3 && x <= 8) 
				{
					dp = (((abs(x) - 3) / 5) * 3);
					cout << dp;
				}
				else
					if (x > 8 && x <= 10) cout << 3;
					else cout << 0;
					*/
	return 0;
}