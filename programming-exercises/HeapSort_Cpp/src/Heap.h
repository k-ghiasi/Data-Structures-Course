// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad, 2020 (1399 Hijri Shamsi)
//
// Authors: Kamaledin Ghiasi-Shirazi
//		  	Ali Moghaddaszadeh

#pragma once
#include "PriorityQueue.h"

template <class T>
class Heap : public PriorityQueue<T>
{
public:
	Heap(){};
	~Heap(){};

	int size(){
		return mSize;
	}

	void initialize(T* data, int n)
	{
		// Write your code here
	}

	virtual T findMax(){
		return mData[1];
	}

	virtual T deleteMax()
	{
		// Write your code here
	}

	virtual void insert(const T& data)
	{
		// Write your code here
	}

private:
	int mSize;
	T* mData;
};

