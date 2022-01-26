#pragma once

template <class T>
class ISelect{

public:
	// A[p..r] inclusive.
	// Select the i'th order statistic.
	virtual T select (T* A, int p, int r, int i) = 0;

protected:
	virtual void threeWayPartition (T* A, T pivot, int p, int r, int& q1, int& q2)=0;
};
