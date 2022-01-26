// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad, 2020 (1399 Hijri Shamsi)
//
// Authors: 	Kamaledin Ghiasi-Shirazi
//				Behzad Shomali

#pragma once
#include "ISort.h"
#include <queue>

using std::queue;

template <class T>
class NaturalMergeSort: public ISort<T>{

public:
	virtual void Sort (T* arr, int n){
		temp = new T[n];
		queue<int> points = queue<int>();
		FindBorders(arr, n, points);

		//Write your code here

		delete[] temp;
	}

protected:
	void FindBorders(T* arr, int n, queue<int> &points){
		//Write your code here
	}

	void Merge(T* arr, int p, int q, int r) {
		//Write your code here
	}
	
	T* temp;
};
