#include <iostream>

using namespace std;

int main()
{
	double x, y;

	cin >> x >> y;
	
	if (abs(x) == 1 && abs(y) == 1)
	{
		cout << "No";
		return 0;
	}
	if (x * x + y * y <= 1)
	 {
		if (1 - abs(x) <= abs(y))
		{
			cout << "Yes";
			return 0;
		}
	
	 }  
	
	cout << "No";

	return 0;
}