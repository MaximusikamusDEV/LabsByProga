#include "Funcs.h"
int EnterRand(int* arr, int size)
{
	srand(time(NULL));

	for (int i = 0; i < size; i++)
		arr[i] = rand() % 100;;

	return *arr;

}