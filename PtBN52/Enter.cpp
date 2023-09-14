#include "Funcs.h"
void Enter()
{

	int CounterSwapsVs = 0;
	int CounterSwapQs = 0;
	int CounterSravnVs = 0;
	int CounterSravnQs = 0;

	/*int size = 10;

	int* array = new int(size);
	int* array2 = new int(size);*/

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