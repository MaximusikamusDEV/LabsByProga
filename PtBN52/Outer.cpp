#include "Funcs.h"
void Outer(int* arr, int size, int CounterSravn, int CounterSwap)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	cout << endl;
	cout << "Count of swaps: " << CounterSravn << endl << "Count of comparisions: " << CounterSwap << endl << endl;
}