#include "../src/NaturalMergeSort.h"
#include <iostream>
#include <time.h>
#include <queue>
#include "I.cpp"

using namespace std;

int main(){
	int	i, n = 10;
	srand((unsigned int)time(NULL));

	NaturalMergeSort<I>* sort;
	sort = new NaturalMergeSort<I>();

	I* A = new I[n];
	cout << "The Array:\n";
	for (i = 0; i < n; i++){
		A[i] = rand() % 20;
		cout << A[i] << "\t";
	}

	sort->Sort(A, n);
	cout << "\noutput:\n";
	for (i = 0; i < n; i++){
		cout << A[i] << "\t";
	}
	cout<<endl;


	delete[] A;
	// delete sort;

	int d;
	cin>>d;
	return 0;
}
