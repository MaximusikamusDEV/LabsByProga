#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int choice();
int EnterUp(int* arr, int size);
int EnterDown(int* arr, int size);
int EnterRand(int* arr, int size);
void Qsort(int arr[], int left, int right, int& CounterSwapQs, int& CounterSravnQs);
void VsSort(int* arr, int size, int& CounterSwapsVs, int& CounterSravnVs);
void Outer(int* arr, int size, int CounterSravn, int CounterSwap);
void FirstArrOut(int* arr, int* arr2, int size);
void Enter();