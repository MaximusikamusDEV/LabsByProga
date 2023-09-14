#include <iostream>

using namespace std;

int main()
{
	int n, m, k, l;

	cout << "Polozhenie ladyi: ";
	cin >> k >> l;

	if (k > 8 || l > 8 || k < 1 || l < 1)
	{
		cout << "Smth wrong";
		return 0;
	}

	cout << "Tochka: ";
	cin >> m >> n;

	if (l == n && k == m)
	{
		cout << "No";
		return 0;
	}

	if (k == m || l == n)
		cout << "Yes";
	else
		cout << "No";




	return 0;
}