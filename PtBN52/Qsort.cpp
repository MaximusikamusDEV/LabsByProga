#include "Funcs.h"
void Qsort(int* arr, int left, int right, int& CounterSwapQs, int& CounterSravnQs)
{
	int i = left;
	int j = right;
	int mid = arr[(i + j) / 2];
	int tmp;

	do
	{
		while (arr[i] < mid)
		{
			i++;
			CounterSravnQs++;
		}

		while (arr[j] > mid)
		{
			CounterSravnQs++;
			j--;
		}

		if (i <= j)
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			CounterSwapQs += 2;
			i++;
			j--;
		}



	} while (i < j);


	if (j > left) Qsort(arr, left, j, CounterSwapQs, CounterSravnQs);
	if (i < right) Qsort(arr, i, right, CounterSwapQs, CounterSravnQs);

}