#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int N, M;


void Outer(int** arr, int N, int M)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cout << arr[i][j] << " ";

		cout << endl;
	}
}

void Tranpose(int** arr, int** tarr, int N, int M)
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			tarr[j][i] = arr[i][j];
}

void Filling(int** arr, int N, int M)
{
	srand(time(NULL));
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			arr[i][j] = rand() % 100;
}

void BSort(int** arr, int** tarr, int N, int M)
{
	for (int i = 0; i < M - 1; i++)
		for (int j = 0; j < M - i; j++)
		{
			if (arr[N - 1][j] < arr[N - 1][j + 1])
			{
				int dp = arr[N - 1][j];
				arr[N - 1][j] = arr[N - 1][j + 1];
				swap(tarr[j], tarr[j + 1]);
				arr[N - 1][j + 1] = dp;
			}
		}

}

void Enter()
{
    cout << "Enter size of your array: ";
	cin >> N >> M;
}

int** Create(int N, int M)
{
	cout << N << M << endl;
	int** arr = new int* [N];
	for (int i = 0; i < N; i++)
		arr[i] = new int[M];
	return arr;
}

void Entering()
{

	int** aray;
	int** Taray;

	Enter();

	aray = Create(N, M);
	Taray = Create(M, N);

	Filling(aray, N, M);
	Tranpose(aray, Taray, N, M);
	
	cout << "First matrix: " << endl;

	Outer(aray, N, M);
	cout << endl;

	cout << "Tranpose matrix: " << endl;

	Outer(Taray, M, N);


	cout << endl << endl;

	BSort(aray, Taray, N, M);

	Tranpose(Taray, aray, M, N);

	cout << "Your end matrix: " << endl;

	Outer(aray, N, M);
}



int main()
{
	

	Entering();





	return 0;
}