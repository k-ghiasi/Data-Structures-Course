// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad, 2013 (1392 Hijri Shamsi)
//
// Author: Kamaledin Ghiasi-Shirazi

#pragma once
#include "ISort.h"

template <class T>
class BubbleSort: public ISort<T>
{
public:
	virtual void Sort (T* A, int n)
	{
	}
};






		// Uncomment these lines
		/*
		int newn;
		int i;
		T	temp;
		do
		{
			newn = 0;
			for (i=0; i< n-1; i++)
				if (A[i] > A[i+1])
				{
					temp = A[i];
					A[i] = A[i+1];
					A[i+1] = temp;
					newn = i+1;
				}
			n = newn;
		}
		while (newn > 0);
		*/
