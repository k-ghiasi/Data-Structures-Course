// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad, 2020 (1399 Hijri Shamsi)
//
// Authors: Kamaledin Ghiasi-Shirazi
// 			Ali Moghaddas-zadeh
//			Fateme Chaji

#pragma once

template <class T> void exchange ( T& a, T& b )
{
  T c(a); a=b; b=c;
}

template <class T>
class FiveWayPartition {

public:
	/* Partition data such that 
		data < pivot1 are in range [p,q1)
		data == pivot1 are in range [q1,q2)
		data < pivot2 and > pivot1 are in range [q2,q3)
		data == pivot2 are in range [q3,q4)
		data > pivot2 are in range [q4+1,r]
	*/
	virtual void Partition(T* arr, const T& pivot1, const T& pivot2, 
					int p, int r, int& q1, int& q2, int& q3, int& q4) {

		//Write your code here

	}
};
