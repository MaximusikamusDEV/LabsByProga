#include <iostream>

using namespace std;


struct str
{
	int age;
	int course;
	int dateofgraduate()
	{
		return 5 - course + age;
	}
};





int main()
{
	str strc[2];

	cin >> strc[0].age;
	cin >> strc[0].course;

	cout << strc[0].dateofgraduate();









	return 0;
}