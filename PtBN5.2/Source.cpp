#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int CounterSwapsVs;
int CounterSwapQs;
int CounterSravnVs;
int CounterSravnQs;

int choice()
{
	int ch;
	cout << "If you want to work with numbers from the smallest to the biggest then tap 1: " << endl;
	cout << "If you want to work with numbers from the biggest to the smallest then tap 2: " << endl;
	cout << "If you want to work with random numbers then tap 3: " << endl;
	cin >> ch;
	return ch;
}

int EnterUp(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		cin >> arr[i];

	return *arr;
}

int EnterDown(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		cin >> arr[i];

	return *arr;
}

int EnterRand(int* arr, int size)
{ 
	srand(time(NULL));

	for (int i = 0; i < size; i++)
		arr[i] = rand() % 100;;

	return *arr;

}

void Qsort(int arr[], int left, int right, int& CounterSwapQs, int& CounterSravnQs)
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


void VsSort(int* arr, int size, int &CounterSwapsVs, int &CounterSravnVs)
{
	int tmp;
	int j;

	for (int i = 1; i < size; i++)
	{

		j = i;

		while (arr[j-1] > arr[j] && j > 0)
		{
		    tmp = arr[j-1];
			arr[j - 1] = arr[j];
		    arr[j] = tmp;
			CounterSwapsVs += 2;
			CounterSravnVs++;
			
			j--;
		}

	}
}

void Outer(int *arr, int size, int CounterSravn, int CounterSwap)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	cout << endl;
	cout << "Count of swaps: " << CounterSravn << endl << "Count of comparisions: " << CounterSwap << endl << endl;
}

void FirstArrOut(int *arr, int *arr2, int size)
{

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
		arr2[i] = arr[i];
	}
	cout << endl << endl;
}

void Enter()
{
	const int size = 10;

	int array[size];
	int array2[size];
	

	int ch = choice();

	if (ch == 1)
		*array = EnterUp(array, size);
	else
		if (ch == 2)
			*array = EnterDown(array, size);
		else
			*array = EnterRand(array, size);

	
	FirstArrOut(array, array2, size);
	VsSort(array, size, CounterSwapsVs, CounterSravnVs);
	Qsort(array2, 0, size - 1, CounterSwapQs, CounterSravnQs);

	cout << "Your Insertion sort: " << endl;
	Outer(array, size, CounterSravnVs, CounterSwapsVs);
	cout << "Your Quick sort: " << endl;
	Outer(array2, size, CounterSravnQs, CounterSwapQs);
 	
}





int main()
{

	Enter();

	
	


	return 0;
}