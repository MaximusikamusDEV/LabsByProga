#include "Funcs.h"
int EnterDown(int* arr, int size)
{
	cout << "Enter your array: " << endl;

	for (int i = 0; i < size; i++)
		cin >> arr[i];

	return *arr;
}