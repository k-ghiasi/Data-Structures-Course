// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad, 2020 (1399 Hijri Shamsi)
//
// Author: Kamaledin Ghiasi-Shirazi

#include "ISort.h"

inline int min(int i, int j)
{
	return i < j ? i : j;
}

template <class T>
class MergeSort : public ISort<T>
{
public:
	virtual void sort(T* data, int n)
	{
		#include "inside_sort_method.h"
	}

protected:
	virtual void merge(T* arr, T* temp, int p, int q, int r)
	{
		#include "inside_merge_method.h"
	}
};
