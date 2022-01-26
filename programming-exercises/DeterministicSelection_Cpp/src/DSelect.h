#pragma once
#include "ISelect.h"
#include <iostream>

using namespace std;

template <class T> 
class DSelect :public ISelect<T>{
private:
	const int mBlockSize;

public:
	DSelect(void):mBlockSize(5){};
	virtual ~DSelect(void){};

	virtual T select(T* A, int p, int r, int i){
		‫‪//Write‬‬ ‫‪your‬‬ ‫‪code‬‬ ‫‪here‬‬
	}
//protected:
	
	virtual void threeWayPartition(T* A, T pivot, int p, int r, int& q1, int& q2){
		‫‪//Write‬‬ ‫‪your‬‬ ‫‪code‬‬ ‫‪here‬‬
	}
	
	virtual void sortBlock(T* A, int p, int r) {
		‫‪//Write‬‬ ‫‪your‬‬ ‫‪code‬‬ ‫‪here‬‬
	}
	
	virtual T choosePivot(T* A, int p, int r){
		T pivot;
		int size = ?;
		int e = r-mBlockSize;
		int i;
		for (i = p; i ? e+1; i += mBlockSize) {
			sortBlock(A, i, i+mBlockSize-1);
		}
		
		T* C = new T[size];
		int j = 0;
		for (i = ?; ? ; i+=mBlockSize)
			C[j++] = A[i];
		
		pivot = select(C, 0, size-1; ?);
		delete[] C;
		return pivot;
	}
		
};
