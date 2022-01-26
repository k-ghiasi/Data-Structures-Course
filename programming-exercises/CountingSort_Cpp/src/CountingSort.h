#pragma once
#include <limits.h>
#include "IntegerKey.h"


class CountingSort{
public:
	void CountSort(IntegerKey* arr, int n){
		int max = Max(arr, n);
		int min = Min(arr, n);
		int *C;
		int k = max - min + 1;
		C = new int[max - min + 1];
		Count(arr, n, C, k, min, max);
		Sort(arr, n, C, k, min, max);
	}
protected:
	void Count(IntegerKey* arr, int n, int* C, int k, int min, int max){
		// Write your code here
	}
	void Sort(IntegerKey* arr, int n, int* C, int k, int min, int max){
		// Write your code here
	}
	int Min(IntegerKey* arr, int n){
		// Write your code here
	}
	int Max(IntegerKey* arr, int n){
		// Write your code here
	}
};
