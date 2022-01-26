// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad, 2020 (1399 Hijri Shamsi)
//
// Authors: Kamaledin Ghiasi-Shirazi
//		  	Ali Moghaddaszadeh

#pragma once
#include "Map.h"

using namespace std;

template <class K, class V>
class HashTable :
	public Map<K, V>
{
public:
	HashTable(int (*hashFunc) (K), float maxLoadingFactor=0.7, int initCapacity=7) {
		// Write your code here
	}
	virtual ~HashTable()
	{
		delete[] mTable;
		delete[] mStateTable;
	}

	virtual  void assign(K key, V value)
	{
		// Write your code here
	}

	virtual  void remove(K key)
	{
		// Write your code here
	}

	virtual int capacity() {
		return mCapacity;
	}

	//V& get(K key);
	virtual  V& operator[] (K key)
	{
		// Write your code here
	}

	void print()
	{
		for (int i = 0; i < mCapacity; i++)
			cout << i << "\t";
		cout << endl;

		for (int i = 0; i < mCapacity; i++)
		{
			if (mStateTable[i])
				cout << mTable[i].second << "\t";
			else
				cout << "*" << "\t";
		}
		cout << endl;
	}

protected:
	int mCapacity;
	int mSize;
	std::pair<K, V>* mTable;
	bool	  *	mStateTable; // 0 => empty ,  1 => full
	int	 (*hashFunc)(K key);
	float mMaxLoadingFactor;
};

