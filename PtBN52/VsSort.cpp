#include "Funcs.h"
void VsSort(int* arr, int size, int& CounterSwapsVs, int& CounterSravnVs)
{
	int tmp;
	int j;

	for (int i = 1; i < size; i++)
	{

		j = i;

		while (arr[j - 1] > arr[j] && j > 0)
		{
			tmp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = tmp;
			CounterSwapsVs += 2;
			CounterSravnVs++;

			

			j--;
		}

	}
}