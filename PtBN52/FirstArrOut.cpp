#include "Funcs.h"
void FirstArrOut(int* arr, int* arr2, int size)
{

	cout << "Your First array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
		arr2[i] = arr[i];
	}
	cout << endl << endl;
}