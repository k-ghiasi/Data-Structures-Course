// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad, 2013 (1392 Hijri Shamsi)
//
// Author: Kamaledin Ghiasi-Shirazi

#include "ISort.h"

template <class T>
class MergeSort : public ISort<T>
{
public:
	virtual void sort(T* data, int n)
	{
		T* temp = new T[n];
		internalSort(data, temp, 0, n - 1);
		delete[] temp;
	}
protected:

	virtual void internalSort(T* A, T* temp, int p, int r)
	{
		int q;

		if (r > p)
		{
			q = (p + r) / 2;
			internalSort(A, temp, p, q);
			internalSort(A, temp, q + 1, r);
			merge(A, temp, p, q, r);
		}
	}

	/*
		merge arr[p..q] and arr[q+1..r] using temporary array temp.
	*/
	virtual void merge(T* arr, T* temp, int p, int q, int r)
	{
		// Write your code here.
	}
};
