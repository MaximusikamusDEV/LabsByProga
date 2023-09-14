#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	long int n;
	long double sumgorn = 0, sumnorm = 0, amplnorm = 0, amplgorn = 0, amprnorm = 0, amprgorn = 0;
	long double allsumnorm = 0, allsumgorn = 0;


	long double x0 = 1, xm = 5, dx = 0.5;

	cin >> n;
	
	int n2;
	n2 = n;

	while (x0 != (xm + dx))
	{
		n = n2;

		sumnorm = 0;

		while (n != 0)
		{
			sumnorm += (pow(-1, n) * n * pow(x0, (2 * n - 1)));
			amplnorm++;
			amprnorm += 2 * n - 1;
			n--;
		}

		allsumnorm += sumnorm + 5;
		amplnorm++;

		sumgorn = 0;

		n = n2;
			
		sumgorn = (pow(-1, n) * n) * pow(x0, 2);
		amplgorn++;
		amprgorn++;
		n--;

		while (n != 0)
		{
			sumgorn += (pow(-1, n) * n);
			sumgorn *= pow(x0, 2);	
			n--;
			amplgorn++;
			amprgorn += 2;
		}

		allsumgorn += (sumgorn / x0) + 5;
		amplgorn++;

		x0 += dx;
	
	}
	
	cout << "Koll summ: " << amplnorm << " Proizv: " << amprnorm << " Summ: " << allsumnorm << endl;
	cout << "Koll summ: " << amplgorn << " Proizv: " << amprgorn << " Summ: " << allsumgorn << endl;



	return 0;
}

