#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


void Qsort(int arr[], int left, int right, int &val)
{
	int i = left;
	int j = right;
	int mid = arr[(i + j) / 2];
	int tmp;

	do
	{
		while (arr[i] < mid) i++;

		while (arr[j] > mid) j--;

		if (i <= j)
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			val += 2;
			i++;
			j--;
		}



	} while (i < j);


	if (j > left) Qsort(arr, left, j, val);
	if (i < right) Qsort(arr, i, right, val);


}







int main()
{

	int val = 0;

	const int N = 10;

	int arr[N];

	srand(time(NULL));

	for (int i = 0; i < N; i++)
		arr[i] = rand() % 100;

	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";

	cout << endl;


	Qsort(arr, 0, N-1, val);


	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";

	cout << endl << val;

	return 0;
}