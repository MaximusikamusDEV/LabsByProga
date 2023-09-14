#include <iostream>

using namespace std;

int main()
{
	//unsigned short a, b, c, z, dp;
	//short int a, b, c, z, dp;
	int a, b, c;
	

	cin >> a >> b >> c;

	cout << "~ " << (int)~a << endl;

	a = (~a) | b;

	cout << "| " << a << endl;

	cout << "& " << (a & c);
	


	return 0;
}